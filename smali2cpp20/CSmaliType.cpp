
#include "CSmaliType.h"
#include <string>
#include <memory>
#include "stringhelper.h"
#include <regex>
#include "CSmaliMethod.h"
#include "CSmaliClass.h"
#include "CRegexString.h"
#include "TestAnnotationSignature.h"

CSmaliType::CSmaliType(std::string str, CSmaliClass* pClass) {
	this->pClass = pClass;
	strSmaliType = str;
	CBaseAssert(isReDefineType());
#if 0
	if (strSmaliType.size() > 0) {

		// �����Ż����ܵ�
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
					CBaseAssert(0);
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
					CBaseAssert(0);
				}
			}
			else {
				CBaseAssert(0);
			}
		}
		strBaseType = std::string(pBaseBuf);
	}
#endif
}

bool CSmaliType::isReDefineType() {
	if (isJavaType()) {
		return true;
	}
	std::smatch m;
	if (std::regex_search(strSmaliType, m, std::regex("[ONWTA]"))) {
		return true;
	}

	return false;
}

bool CSmaliType::isJavaClassName(std::string str) {
	if ((str[0] == 'L') && (str[str.size() - 1]) == ';') return true;
	return false;
}

// ��� java ������
std::shared_ptr<CSmaliType> CSmaliType::getBaseType() {

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
				CBaseAssert(0);
			}
		}
	}
	return std::make_shared<CSmaliType>(strBaseType, this->pClass);
}

std::string CSmaliType::getFullTypeSmaliString() {
	return strSmaliType;
}

std::string CSmaliType::getBaseTypeSmaliString() {
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
			CBaseAssert(0);
		}
	}
	return strBaseType;
}

std::string CSmaliType::getCppShortType() {
	std::string strClassName = getCppType();
	if (((int)strClassName.find_last_of("::")) > 0) {
		int nnn = (int)strClassName.find_last_of("::");
		strClassName = strClassName.substr((size_t)nnn + 1, strClassName.size() - nnn - 1);
	}
	return strClassName;
}

// ��� cpp ���͵��ļ���
std::string CSmaliType::getCppFileName() {
	std::string strClassName = getCppType();
	stringhelper::replace(strClassName, "::", ".");
	return strClassName;
}

std::string CSmaliType::getCppFileMacroDefine() {
	std::string strClassName = getCppType();
	stringhelper::replace(strClassName, "::", "_");
	return strClassName;
}

// ��ö��������
std::string CSmaliType::getCppDefineType() {
	if (isPrimitiveType()) {
		std::string strClassName = getCppType();
		return strClassName;
	}
	else {
		std::string strClassName = getCppType();
		if (strClassName == "auto") {
			return strClassName;
		}
		std::string strRet = "std::shared_ptr<";
		strRet.append(strClassName);
		strRet.append(">");
		return strRet;
	}
}

// ����C++����
// ��������������ɵ�λ��
std::string CSmaliType::getCppType(bool noTemplateTranslate) {
	std::map<std::string, std::string> listDummap;
	bool bCheckOK = true;
	std::string strCppType = TestAnnotationSignature::TypeRedefine(this->strSmaliType, listDummap, &bCheckOK, true, pClass);

#if 1
	stringhelper::replace(strCppType, "-", "_");
	stringhelper::replace(strCppType, "+", "_p_");
	stringhelper::replace(strCppType, "$", "_S_");
#endif

	// ����ģ�巭��
	if (!noTemplateTranslate) {
		if (pClass) {
			strCppType = pClass->TemplateTranslate(strCppType);
		}
	}

	return strCppType;
}

// ��Ҫ����
bool CSmaliType::isPrimitiveType() {
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

// �ж��ǲ��� java ��
bool CSmaliType::isJavaType() {
	if (strSmaliType.size() > 0) {
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
				if (pClass) {
					//pClass->listImportSaver->checkJavaClass(m[1]);
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
				if (pClass) {
					//pClass->listImportSaver->checkJavaClass(strOnlyType);
				}
			}
			else {
				CBaseAssert(0);
			}
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

