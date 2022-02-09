
#include "SmaliType.h"
#include <string>
#include <memory>
#include "stringhelper.h"
#include "SmaliImportSaver.h"
#include <regex>
#include "SmaliMethod.h"
#include "SmaliClass.h"
#include "regexString.h"
#include "TestAnnotationSignature.h"

SmaliType::SmaliType(std::string str) {
	strSmaliType = str;
	BaseAssert(isReDefineType());
#if 0
	if (strSmaliType.size() > 0) {

		// 用于优化性能的
		int nBufferSize = strSmaliType.size();
		const char* pBuf = strSmaliType.c_str();
		const char* pBaseBuf = pBuf;
		int nState = 0;
		for (int i = 0; i < nBufferSize; i++) {
			if (nState == 0) {
				if ((pBuf[i] == '+') || (pBuf[i] == '-')) {
					nState = 1;
				}
				else if (pBuf[i] == '[') {
					nState = 2;
				}
				else if ((pBuf[i] >= 'A' && pBuf[i] <= 'Z') || pBuf[i] == '*') {
					nState = 3;
					pBaseBuf = &pBuf[i];
					break;
				}
				else {
					BaseAssert(0);
				}
			}
			else if ((nState == 1) || (nState == 2)) {
				if (pBuf[i] == '[') {
					nState = 2;
				}
				else if ((pBuf[i] >= 'A' && pBuf[i] <= 'Z') || pBuf[i] == '*') {
					nState = 3;
					pBaseBuf = &pBuf[i];
					break;
				}
				else {
					BaseAssert(0);
				}
				}
			else {
				BaseAssert(0);
			}
		}
		strBaseType = std::string(pBaseBuf);
	}
#endif
}

bool SmaliType::isReDefineType() {
	if (isJavaType()) {
		return true;
	}
	std::smatch m;
	if (std::regex_search(strSmaliType, m, std::regex("[ONWTA]"))) {
		return true;
	}

	return false;
}

bool SmaliType::isJavaClassName(std::string str) {
	if ((str[0] == 'L') && (str[str.size() - 1]) == ';') return true;
	return false;
}

// 获得 java 基础类
std::shared_ptr<SmaliType> SmaliType::getBaseType() {

	if (strBaseType.size() == 0) {
		std::smatch m;
		bool found = std::regex_search(strSmaliType, m, CRegexString::getJavaClassBaseType);
		if (found && (m.size() == 2)) {
			std::string strType = m[1];
			strBaseType = strType;
		}
		else {
			std::smatch m;
			if (std::regex_search(strSmaliType, m, std::regex("[ONWTA]"))) {
				strBaseType = strSmaliType;
			}
			else {
				BaseAssert(0);
			}
		}
	}
	return std::make_shared<SmaliType>(strBaseType);
}

std::string SmaliType::getBaseTypeSmaliString() {
	std::smatch m;
	bool found = std::regex_search(strSmaliType, m, CRegexString::getJavaClassBaseType);
	if (found && (m.size() == 2)) {
		std::string strType = m[1];
		strBaseType = strType;
	}
	else {
		std::smatch m;
		if (std::regex_search(strSmaliType, m, std::regex("[ONWTA]"))) {
			strBaseType = strSmaliType;
		}
		else {
			BaseAssert(0);
		}
	}
	return strBaseType;
}

std::string SmaliType::getCppShortType(CSmaliClass* pClass) {
	std::string strClassName = getCppType(pClass);
	if (((int)strClassName.find_last_of("::")) > 0) {
		int nnn = (int)strClassName.find_last_of("::");
		strClassName = strClassName.substr((size_t)nnn + 1, strClassName.size() - nnn - 1);
	}
	return strClassName;
}

// 获得 cpp 类型的文件名
std::string SmaliType::getCppFileName() {
	std::string strClassName = getCppType(nullptr);
	stringhelper::replace(strClassName, "::", ".");
	return strClassName;
}

std::string SmaliType::getCppFileMacroDefine() {
	std::string strClassName = getCppType(nullptr);
	stringhelper::replace(strClassName, "::", "_");
	return strClassName;
}

// 获得定义的类型
std::string SmaliType::getCppDefineType(CSmaliClass* pClass) {
	if (isPrimitiveType()) {
		std::string strClassName = getCppType(pClass);
		return strClassName;
	}
	else {
		std::string strClassName = getCppType(pClass);
		if (strClassName == "auto") {
			return strClassName;
		}
		std::string strRet = "std::shared_ptr<";
		strRet.append(strClassName);
		strRet.append(">");
		return strRet;
	}
}

// 返回C++类型
// 最基本的类型生成的位置
#if 1
std::string SmaliType::getCppType(CSmaliClass* pClass, bool noTemplateTranslate) {
	std::map<std::string, std::string> listDummap;
	bool bCheckOK = true;
	std::string strCppType = TestAnnotationSignature::TypeRedefine(this->strSmaliType, listDummap, &bCheckOK, true, pClass);
#if 1
	stringhelper::replace(strCppType, "-", "_");
	stringhelper::replace(strCppType, "+", "_p_");
	stringhelper::replace(strCppType, "$", "_S_");
#endif

	// 进行模板翻译
	if (!noTemplateTranslate) {
		if (pClass) {
			strCppType = pClass->TemplateTranslate(strCppType);
		}
	}

	return strCppType;
}
#else
std::string SmaliType::getCppType(CSmaliClass * pClass) {
	if (isJavaType()) {
		std::smatch m;
		bool found = std::regex_search(strSmaliType, m, CRegexString::getJavaClassTypeInfo);
		if (found && (m.size() == 3)) {
			std::string strType = m[2];
			std::string strArrayCount = m[1];
			std::string strTypeName;
			bool bPrimitiveType = false;
			//stringhelper::replace(strArrayCount, "[", "*");
			//stringhelper::replace(strArrayCount, "*", "[]");

			if (strType == "*") {
				strTypeName = strType;
			}
			else if (std::regex_search(strType, m, std::regex(
				RegexStart
				"T" "(" AnnoNameNoColon ")" PatternClassDefineEnd
				RegexEnd
			))) {
				strTypeName = m[1];
				//bPrimitiveType = true;
			}
			else if (std::regex_search(strType, m, std::regex("^[-+]*(B|C|D|F|I|J|S|Z|V)$"))) {
				std::string strSymbol = m[1];
				if (strSymbol == "B") strTypeName = "unsigned char";
				if (strSymbol == "C") strTypeName = "char";
				if (strSymbol == "D") strTypeName = "double";
				if (strSymbol == "F") strTypeName = "float";
				if (strSymbol == "I") strTypeName = "int";
				if (strSymbol == "J") strTypeName = "long long";
				if (strSymbol == "S") strTypeName = "short";
				if (strSymbol == "Z") strTypeName = "bool";
				if (strSymbol == "V") strTypeName = "void";

				bPrimitiveType = true;
			}
			else if (std::regex_search(strType, m, std::regex("^[-+]*L([\\w/$.-]+);$"))) {
				strTypeName = m[1];
				stringhelper::replace(strTypeName, std::string("/"), std::string("::"));

				if (pClass) {
					std::string str = "L";
					str.append(m[1]);
					str.append(";");
					pClass->listImportSaver->checkJavaClass(str);
				}
			}
			// 有成员的类描述
			// strType = "Ljava/util/EnumMap<TK;TV;>.EnumMapIterator<Ljava/util/Map$Entry<TK;TV;>;>;"
			// strType = "Ljava/util/Map$Entry<TK;TV;>;"
			// strType = "Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;"
			else if (std::regex_search(strType, m, std::regex(
				RegexStart			// 开始
				SmaliTypePrefix		// 类型前缀
				PatternClassDefineStart // 类定义开始
				"(" PatternClassDefineNoSemicolon ")"   // Class定义		// 提取主类
				"<(" "(?:" RegexSmaliFullType ")*" ")>"	// 尖括号的内容		// 提取主类的模板参数

				// 成员类型描述
				"((?:" PatternMemberNoSemicolon	// 提取只成员
				"(?:<"
				"(?:" RegexSmaliFullType ")*"	// 标准类型数组
				">)?"
				")?)"

				PatternClassDefineEnd	// 类定义结束
				RegexEnd			// 结束
			))) {

				// 主类定义
				strTypeName = m[1];
				stringhelper::replace(strTypeName, std::string("/"), std::string("::"));

				if (pClass) {
					std::string str = "L";
					str.append(m[1]);
					str.append(";");
					pClass->listImportSaver->checkJavaClass(str);
				}

				// 模板参数
				std::string strParam = m[2];
				constexpr auto regexMatch = RegexStart "(" RegexSmaliFullType ")" "\\s*";
				std::vector<std::string> strRegTypeList = regexGetStringList(strParam, regexMatch, 2, 1);
				strTypeName.append("<");
				for (int t = 0; t < strRegTypeList.size(); t++) {
					strTypeName.append(SmaliType(strRegTypeList[t]).getCppType(pClass));
					if ((t + 1) < strRegTypeList.size()) {
						strTypeName.append(",");
					}
				}
				strTypeName.append(">");

				// 成员
				std::string strMember = m[3];
				if (strMember.size() > 0) {
					if (std::regex_search(strMember, m, std::regex(
						RegexStart			// 开始
						"(" PatternMemberNoSemicolon ")"	// 提取成员名
						"((?:<"								// 提取带方括号的数组
						"(?:" RegexSmaliFullType ")*"		// 标准类型数组
						">)?)"
						RegexEnd			// 结束
					))) {
						// 成员的名字
						std::string strMemberName = m[1];
						strTypeName.append(strMemberName);

						// 成员的参数
						std::string strMemberParam = m[2];
						if (strMemberParam.size() > 0) {
							if (std::regex_search(strMember, m, std::regex(
								RegexStart			// 开始
								"<("								// 提取带方括号的数组
								"(?:" RegexSmaliFullType ")*"		// 标准类型数组
								")>"
								RegexEnd			// 结束
							))) {
								strMemberParam = m[1];

								// 提取每个参数
								constexpr auto regexMatch = RegexStart "(" RegexSmaliFullType ")" "\\s*";
								std::vector<std::string> strRegTypeList = regexGetStringList(strMemberParam, regexMatch, 2, 1);
								strTypeName.append("<");
								for (int t = 0; t < strRegTypeList.size(); t++) {
									strTypeName.append(SmaliType(strRegTypeList[t]).getCppType(pClass));
									if ((t + 1) < strRegTypeList.size()) {
										strTypeName.append(",");
									}
								}
								strTypeName.append(">");
							}
						}

					}
					else {
						BaseAssert(0);
					}
				}
			}
			else {
				BaseAssert(0);
			}

			//stringhelper::replace(strTypeName, "$", "_Anonymous");

#if 1
			stringhelper::replace(strTypeName, "-", "_");
			stringhelper::replace(strTypeName, "+", "_p_");
			//stringhelper::replace(strTypeName, "$", "_S_");
#endif

			if (strArrayCount.size() > 0) {
				if (!bPrimitiveType) {
					std::string strRet = "std::shared_ptr<";
					strRet.append(strTypeName);
					strRet.append(">");
					strTypeName = strRet;
				}
			}

			for (size_t i = 0; i < strArrayCount.size(); i++) {
				strTypeName = "std::vector<" + strTypeName + ">";
			}

			return strTypeName;
		}
		else {
			BaseAssert(0);
		}
	}

	// C++ 特別的
	if (strSmaliType == "auto") {
		return strSmaliType;
	}

	if (strSmaliType == "N") return "int";
	if (strSmaliType == "O") return "auto";
	if (strSmaliType == "W") return "auto";

	BaseAssert(0);
	return std::string("undefined!").append(strSmaliType);
}
#endif

// 主要类型
bool SmaliType::isPrimitiveType() {
	if (strSmaliType == "B") return true;
	if (strSmaliType == "C") return true;
	if (strSmaliType == "D") return true;
	if (strSmaliType == "F") return true;
	if (strSmaliType == "I") return true;
	if (strSmaliType == "J") return true;
	if (strSmaliType == "S") return true;
	if (strSmaliType == "Z") return true;
	if (strSmaliType == "V") return true;

	if (strSmaliType == "N") return true;
	if (strSmaliType == "O") return true;

	return false;
}

// 判断是不是 java 类
bool SmaliType::isJavaType(CSmaliMethod* pHost) {
	if (strSmaliType.size() > 0) {
		//if (isJavaTypeForSmaliBase(pHost)) {
		//	return true;
		//}
		std::smatch m;
		bool found = std::regex_search(strSmaliType, m, CRegexString::getJavaClassBaseType);
		if (found && (m.size() == 2)) {
			std::string strType = m[1];

			strBaseType = strType;

			if (strType == "*") {
				return true;
			}
			else if (std::regex_search(strType, m, CRegexString::checkAnoType)) {
				return true;
			}
			else if (std::regex_search(strType, m, CRegexString::checkPrimType)) {
				return true;
			}
			else if (std::regex_search(strType, m, CRegexString::checkJavaBaseClassType)) {

				if (pHost) {
					pHost->pClass->listImportSaver->checkJavaClass(m[1]);
				}
				//SmaliImportSaver::checkJavaClass(m[1]);
			}
			else if (std::regex_search(strType, m, CRegexString::checkJavaFullClassType) && (m.size() == 4)) {
				std::string strOnlyType = m[1];
				std::string strMember = m[3];
				if (strMember.size() > 0) {
					if (strMember[0] == '.') strMember[0] = '$';
					strOnlyType.append(strMember);
				}
				strOnlyType.append(";");
				//SmaliImportSaver::checkJavaClass(strOnlyType);
				if (pHost) {
					pHost->pClass->listImportSaver->checkJavaClass(strOnlyType);
				}
			}
			else {
				BaseAssert(0);
			}
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

// 判断是不是 java 类
bool SmaliType::isJavaTypeForSmaliBase(CSmaliMethod* pHost) {
	if (strSmaliType.size() > 0) {
		std::smatch m;
		bool found = std::regex_search(strSmaliType, m, CRegexString::getJavaClassBaseTypeForSmali);
		if (found && (m.size() == 2)) {
			std::string strType = m[1];

			strBaseType = strType;

			if (strType == "*") {
				return true;
			}
			else if (std::regex_search(strType, m, CRegexString::checkAnoType)) {
				return true;
			}
			else if (std::regex_search(strType, m, CRegexString::checkPrimType)) {
				return true;
			}
			else if (std::regex_search(strType, m, CRegexString::checkJavaBaseClassType)) {
				//SmaliImportSaver::checkJavaClass(m[1]);
				if (pHost) {
					pHost->pClass->listImportSaver->checkJavaClass(m[1]);
				}
			}
			else if (std::regex_search(strType, m, CRegexString::checkJavaFullClassType) && (m.size() == 4)) {
				std::string strOnlyType = m[1];
				std::string strMember = m[3];
				if (strMember.size() > 0) {
					if (strMember[0] == '.') strMember[0] = '$';
					strOnlyType.append(strMember);
				}
				strOnlyType.append(";");
				//SmaliImportSaver::checkJavaClass(strOnlyType);
				if (pHost) {
					pHost->pClass->listImportSaver->checkJavaClass(strOnlyType);
				}
			}
			else {
				BaseAssert(0);
			}
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}
