
#ifndef __TestAnnotationSignature_H__
#define __TestAnnotationSignature_H__

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include "regexString.h"
#include "SmaliClass.h"
#include <mutex>


typedef struct {
	std::string strReturnType;
	std::vector<std::string> listParamType;
}AnnotationMethodSignature;

typedef struct {
	std::vector<std::string> listClassType;
}AnnotationClassSignature;

class TestAnnotationSignature {
private:

	static inline std::mutex mtxInputList;
	static inline std::vector<std::string> listAnnotationFieldSignature;
	static inline std::vector<std::string> listAnnotationSignature;
	static inline std::vector<std::string> listAnnotationClass;
	static inline std::vector<std::string> listErrorFile;

public:

	static void clearData() {
		listAnnotationFieldSignature.clear();
		listAnnotationSignature.clear();
		listAnnotationClass.clear();
		listErrorFile.clear();
	}

	static void insertErrorFileName(std::string strErrorFile) {
		listErrorFile.push_back(strErrorFile);
	}

	static void insertClassRecordList(std::vector<std::string>& listRecord) {
		mtxInputList.lock();
		listAnnotationClass.insert(listAnnotationClass.end(), listRecord.begin(), listRecord.end());
		mtxInputList.unlock();
	}

	static void insertFieldRecord(std::string& strClass, std::string& strField, std::string& strSignature) {
		mtxInputList.lock();
		std::string str("_class:");
		str.append(strClass);
		listAnnotationFieldSignature.push_back(str);
		str = "_field:";
		str.append(strField);
		listAnnotationFieldSignature.push_back(str);
		str = "Signat:";
		str.append(strSignature);
		listAnnotationFieldSignature.push_back(str);
		mtxInputList.unlock();
	}

	static void insertMethodRecord(std::string & strClass, std::string& strMethod, std::string& strSignature) {

		mtxInputList.lock();

		std::string str("_class:");
		str.append(strClass);
		listAnnotationSignature.push_back(str);
		str = "method:";
		str.append(strMethod);
		listAnnotationSignature.push_back(str);
		str = "Signat:";
		str.append(strSignature);
		listAnnotationSignature.push_back(str);

		mtxInputList.unlock();
	}

	static void saveToErrorFileList(std::string strPath) {
		std::filesystem::path fsPath(strPath);
		std::filesystem::path toSavePath = fsPath.parent_path();
		//toSavePath.append("smalilist_error.txt");
		toSavePath.append("smalilist_debug.txt");

		std::cout << "error files: " << listErrorFile.size() << std::endl;

		std::ofstream ifile(toSavePath.string(), std::ofstream::out);
		if (ifile.is_open()) {
			for (auto a = listErrorFile.begin(); a != listErrorFile.end(); a++) {
				ifile << (*a) << "\n";
			}
			ifile.close();
		}
	}

	static void saveToMethodFile(std::string strPath) {
		std::filesystem::path fsPath(strPath);
		std::filesystem::path toSavePath = fsPath.parent_path();
		toSavePath.append("AnnotationSignature.txt");
		std::ofstream ifile(toSavePath.string(), std::ofstream::out);
		if (ifile.is_open()) {
			for (auto a = listAnnotationSignature.begin(); a != listAnnotationSignature.end(); a++) {
				ifile << (*a) << "\n";
			}
			ifile.close();
		}
	}

	static void saveToFieldFile(std::string strPath) {
		std::filesystem::path fsPath(strPath);
		std::filesystem::path toSavePath = fsPath.parent_path();
		toSavePath.append("AnnotationFieldSignature.txt");
		std::ofstream ifile(toSavePath.string(), std::ofstream::out);
		if (ifile.is_open()) {
			for (auto a = listAnnotationFieldSignature.begin(); a != listAnnotationFieldSignature.end(); a++) {
				ifile << (*a) << "\n";
			}
			ifile.close();
		}
	}

	static bool verifyType(std::string strType1, std::string strType2) {

		std::smatch m_typeCheck;
		if (std::regex_search(strType2, m_typeCheck, std::regex(
			RegexStart
			"("
			SmaliTypePrefix
			"[BCDFIJSZV]"
			")([\\S]*)"
			RegexEnd
		)) && (m_typeCheck.size() == 3)) {
			BaseAssert(strType1 == m_typeCheck[1]);
		}
		else if (std::regex_search(strType2, m_typeCheck, std::regex(
			RegexStart
			"("
			SmaliTypePrefix
			"[T]" AnnoNameNoColon ";"
			")([\\S]*)"
			RegexEnd
		)) && (m_typeCheck.size() == 3)) {
			// OK
		}
		else if (std::regex_search(strType2, m_typeCheck, std::regex(
			RegexStart
			"("
			SmaliTypePrefix
			PatternClassDefineStart PatternClassDefineNoSemicolon
			")([\\S]*)"
			RegexEnd
		)) && (m_typeCheck.size() == 3)) {
			std::string sss;
			const char* pString = strType2.c_str();
			int nLevel = 0;
			int nStart = 0;
			for (int jj = 0; jj < strType2.size(); jj++) {
				if (pString[jj] == '<') {
					if (nLevel == 0) {
						std::string ss = strType2.substr(nStart, jj - nStart);
						sss.append(ss);
					}
					nLevel++;
				}
				else if (pString[jj] == '>') {
					nLevel--;
					BaseAssert(nLevel >= 0);
					if (nLevel == 0) {
						nStart = jj + 1;
					}
				}
				else if ((nLevel == 0) && (pString[jj] == ';')) {
					std::string ss = strType2.substr(nStart, jj - nStart + 1);
					sss.append(ss);
					BaseAssert(strType2.size() == (jj + 1));
					nStart = jj + 1;
				}
			}
			BaseAssert(strType2.size() == nStart);
			stringhelper::replace(sss, ".", "$");
			BaseAssert(strType1 == sss);
		}
		else {
			BaseAssert(0);
			return false;
		}

		return true;
	}

	// 重新填写代码,这个部分可能出现递归
	static std::string TypeRedefine(std::string & strOrgi, std::map<std::string, std::string>& listLocalTypeDef, bool * pCanCheck, bool toCppType, CSmaliClass* pClass = nullptr) {
		std::string strBackForChech = strOrgi;
		std::string strOrgiString = strOrgi;
		std::string strOutputString;
		std::string strOutputCppString;
		bool bCanCheck = true;
		bool bFirst = true;

		if (strBackForChech == "Ljava/util/Comparator<Ljava/util/Map$Entry<TK;TV;>;>;") {
			printf("=====");
		}

#if 0
		// 特殊处理
		if (strOrgi == "Ljava/lang/Class<*>;") {
			strOutputString = "Ljava/lang/Class<*>;";
			strOutputCppString = "java2cBase";
			strOrgiString = "";
		}
#endif


		std::smatch m;
		while (strOrgiString.size() > 0) {

			if (bFirst) {
				bFirst = false;
			}
			else if (toCppType) {
				strOutputCppString.append(",");
			}

			if (std::regex_search(strOrgiString, m, std::regex(
				RegexStart
				"(" SmaliTypePrefix ")"		// 前缀
				"([TL]|[BCDFIJSZV]|[\x2A])"	// 前导符号
				"(.*)\\s*$"
			)) && (m.size() == 4)) {
				if (m[2] == "T") {
					// 模板定义
					if (std::regex_search(strOrgiString, m, std::regex(
						RegexStart
						// #define SmaliTypePrefix "(?:[-+]?[\\[]*)?"
						"(" "(?:[-+]?)?" ")"		// 前缀
						"(" "(?:[\\[]*)?" ")"		// 前缀
						"[T](" AnnoNameNoColon ");"
						"(.*)\\s*$"
					)) && (m.size() == 5)) {
						int nArrayCount = (int)m[2].str().size();
						strOutputString.append(m[1]); // 前缀放进去
						strOutputString.append(m[2]); // 前缀放进去
						if (toCppType) {
							for (int i = 0; i < nArrayCount; i++) {
								strOutputCppString.append("std::vector<");
							}
						}
						std::string strNeedType = m[3];
						strOrgiString = m[4];		// 剩下的
						std::string strTestLocal = strNeedType;
						strTestLocal.append("::");

						// 查找本地变量
						auto b = listLocalTypeDef.find(strTestLocal);
						if (b != listLocalTypeDef.end()) {
							strOutputString.append(b->second);
							if (toCppType) {
								BaseAssert(0); // 正常不會進這裏
								std::string strTypeTmp = TypeRedefine(b->second, listLocalTypeDef, &bCanCheck, toCppType, pClass);
								strOutputCppString.append(strTypeTmp);
							}
							bCanCheck = false;
							if (pCanCheck) {
								(*pCanCheck) = false;
							}
						}
						else {
							strOutputString.append("T").append(strNeedType).append(";");
							if (toCppType) {
								strOutputCppString.append(strNeedType);
							}
						}
						if (toCppType) {
							for (int i = 0; i < nArrayCount; i++) {
								strOutputCppString.append(">");
							}
						}
					}
					else {
						BaseAssert(0);
					}

				}
				else if (m[2] == "L") {
					// 类声明
					if (std::regex_search(strOrgiString, m, std::regex(
						RegexStart
						"(" "(?:[-+]?)?" ")"		// 前缀
						"(" "(?:[\\[]*)?" ")"		// 前缀
						"(" PatternClassDefineStart PatternClassDefineNoSemicolon ")"
						"([;<])"
						"(.*)\\s*$"
					)) && (m.size() == 6)) {
						int nArrayCount = (int)m[2].str().size();
						strOutputString.append(m[1]); // 前缀放进去
						strOutputString.append(m[2]); // 前缀放进去
						if (toCppType) {
							for (int i = 0; i < nArrayCount; i++) {
								strOutputCppString.append("std::vector<");
							}
						}
						if (m[4] == ";") {
							strOutputString.append(m[3]).append(";");
							if (toCppType) {
								std::string strBaseClass = m[3];
								strBaseClass.append(";");
								if (pClass) {
									pClass->listImportSaver->checkJavaClass(strBaseClass);
								}
								std::string strTmp = m[3];
								strTmp[0] = ' ';
								stringhelper::replace(strTmp, " ", "");
								stringhelper::replace(strTmp, "/", "::");
								strOutputCppString.append(strTmp);
							}
							strOrgiString = m[5];		// 剩下的
						}
						else { // "<"
							std::string strLast = m[5];
							strOutputString.append(m[3]);
							if (toCppType) {
								std::string strBaseClass = m[3];
								strBaseClass.append(";");
								if (pClass) {
									pClass->listImportSaver->checkJavaClass(strBaseClass);
								}
								std::string strTmp = m[3];
								strTmp[0] = ' ';
								stringhelper::replace(strTmp, " ", "");
								stringhelper::replace(strTmp, "/", "::");
								strOutputCppString.append(strTmp);
							}
							const char* pStrLast = strLast.c_str();
							int nLevel = 0;
							bool bOk = false;
							for (int i = 0; i < strLast.size(); i++) {
								if (pStrLast[i] == '<') {
									nLevel++;
								}
								else if (pStrLast[i] == '>') {
									if (nLevel == 0) {
										// 找到位置, 从这里再继续找到 ; 号
										int nLevel2 = 0;
										for (int j = i + 1; j < strLast.size(); j++) {
											if (pStrLast[j] == '<') {
												nLevel2++;
											}
											else if (pStrLast[j] == '>') {
												nLevel2--;
												BaseAssert(nLevel2 >= 0);
											}
											else if ((pStrLast[j] == ';') && (nLevel2 == 0) ) {
												// 尖括号内的字符串
												std::string strInAngleBrackets = strLast.substr(0, i);

												// 增加输出
												std::string strInAngleBracketsRedefine = TypeRedefine(strInAngleBrackets, listLocalTypeDef, &bCanCheck, false);
												strOutputString.append("<").append(strInAngleBracketsRedefine).append(">");
												if (toCppType) {
													std::string strInAngleBracketsRedefine = TypeRedefine(strInAngleBrackets, listLocalTypeDef, &bCanCheck, toCppType, pClass);
													strOutputCppString.append("<").append(strInAngleBracketsRedefine).append(">");
												}
												// 剩下的字符串
												strOrgiString = strLast.substr(j + 1);

												// 尖括号后一直到 ; 号,包含分号的字符串
												std::string strAfterIt = strLast.substr(i + 1, j - i);

												label_again:
												while(strAfterIt.size() > 1){
													const char* pStrLast3 = strAfterIt.c_str();
													int nLevel3 = 0;
													
													for (int k = 0; k < strAfterIt.size(); k++) {
														if (pStrLast3[k] == '<') {
															nLevel3++;
															for (int m = k + 1; m < strAfterIt.size(); m++) {
																if (pStrLast3[m] == '<') {
																	nLevel3++;
																}
																else if (pStrLast3[m] == '>') {
																	nLevel3--;
																	BaseAssert(nLevel3 >= 0);
																	if (nLevel3 == 0) {
																		std::string strBefore = strAfterIt.substr(0, k);
																		std::string strInAngleBrackets3 = strAfterIt.substr(k + 1, m - k - 1);
																		strOutputString.append(strBefore);
																		if (toCppType) {
																			strOutputCppString.append(strBefore);
																		}
																		std::string strInAngleBracketsRedefine3 = TypeRedefine(strInAngleBrackets3, listLocalTypeDef, &bCanCheck, false);
																		strOutputString.append("<").append(strInAngleBracketsRedefine3).append(">");
																		if (toCppType) {
																			std::string strInAngleBracketsRedefine3 = TypeRedefine(strInAngleBrackets3, listLocalTypeDef, &bCanCheck, toCppType, pClass);
																			strOutputCppString.append("<").append(strInAngleBracketsRedefine).append(">");
																		}
																		strAfterIt = strAfterIt.substr(m + 1);

																		goto label_again;
																	}
																}
															}
														}
														else if ((pStrLast3[k] == ';') && (nLevel3 == 0)) {
															// 完整结束
															if (k == 0) {
																BaseAssert(0);
															}
															else {
																std::string strBefore = strAfterIt.substr(0, k);
																strOutputString.append(strBefore);
																if (toCppType) {
																	strOutputCppString.append(strBefore);
																}
																strAfterIt = strAfterIt.substr(k);
																goto label_again;
															}
														}
													}
												}
												BaseAssert(strAfterIt==";");
												strOutputString.append(strAfterIt);
												if (toCppType) {
													// 
												}
												//label_finished:
												bOk = true;

												// 这里已经切割一部分出去了
												// 退出当前的 for 循环;
												break;
											}
										}
										BaseAssert(bOk);

									}
									else {
										nLevel--;
										BaseAssert(nLevel >= 0);
									}
								}
							}
							BaseAssert(bOk);
						}

						if (toCppType) {
							for (int i = 0; i < nArrayCount; i++) {
								strOutputCppString.append(">");
							}
						}
					}
					else {

					}
				}
				else {
					// 基本类型
					strOutputString.append(m[1]);
					strOutputString.append(m[2]);
					std::string strSymbol = m[2];
					// #define SmaliTypePrefix "(?:[-+]?[\\[]*)?"
					std::string strTmp = m[1];
					int nArrayCount = 0;
					std::smatch m2;
					if (std::regex_search(strTmp, m2, std::regex(
						RegexStart
						"(" "(?:[-+]?)?" ")"		// 前缀
						"(" "(?:[\\[]*)?" ")"	// 前缀
						RegexEnd
					)) && (m2.size() == 3)) {
						nArrayCount = (int)m2[2].str().size();
					}
					else {
						BaseAssert(0);
					}
					if (toCppType) {

						std::string strTypeName;
						if (strSymbol == "B") {
							strTypeName = "unsigned char";
						}
						else if (strSymbol == "C") {
							strTypeName = "char";
						}
						else if (strSymbol == "D") {
							strTypeName = "double";
						}
						else if (strSymbol == "F") {
							strTypeName = "float";
						}
						else if (strSymbol == "I") {
							strTypeName = "int";
						}
						else if (strSymbol == "J") {
							strTypeName = "long long";
						}
						else if (strSymbol == "S") {
							strTypeName = "short";
						}
						else if (strSymbol == "Z") {
							strTypeName = "bool";
						}
						else if (strSymbol == "V") {
							strTypeName = "void";
						}
						else if (strSymbol == "*") {
#if 1
							strTypeName = "java::lang::Object";
							if (pClass) {
								std::string strBaseClass = "Ljava/lang/Object;";
								pClass->listImportSaver->checkJavaClass(strBaseClass);
							}
#else
							strTypeName = "*";
#endif
						}
						else {
							BaseAssert(0);
						}

						strOutputCppString.append(strTypeName);

						
						for (int i = 0; i < nArrayCount; i++) {
							strOutputCppString.append("[]");
						}
					}

					strOrgiString = m[3];
				}
			}
			else {

				if (toCppType) {
					if (strOrgiString == "N") return "int";
					if (strOrgiString == "O") return "auto";
					if (strOrgiString == "W") return "auto";
				}

				BaseAssert(0);
			}
		}

		if (bCanCheck) {
			BaseAssert(strBackForChech == strOutputString);
		}

		// 类型向上传递
		if (!bCanCheck) {
			if (pCanCheck) {
				(*pCanCheck) = false;
			}
		}

		if (toCppType) {
			return strOutputCppString;
		}

		return strOutputString;
	}

	static std::map<std::string, std::string> getTypeDefInAngleBrackets(std::string strTypeDef, CSmaliClass* pClass) {
		return getTypeDefInAngleBrackets1(strTypeDef, pClass, nullptr);
	}
	static std::map<std::string, std::string> getTypeDefInAngleBrackets(std::string strTypeDef, CSmaliMethod* pMethod) {
		return getTypeDefInAngleBrackets1(strTypeDef, nullptr, pMethod);
	}

	// 提取尖括號中的内容
	static std::map<std::string, std::string> getTypeDefInAngleBrackets1(std::string strTypeDef, CSmaliClass* pClass, CSmaliMethod*pMethod) {
		std::map<std::string, std::string> listLocalTypeDef;
		std::smatch m;
		if (strTypeDef.size() > 0) {
			// 类型定义去掉方括号
			if (std::regex_search(strTypeDef, m, std::regex(
				RegexStart
				"<("
				"(?:" AnnoName "(?:" RegexSmaliFullType ")" ")+"
				")>"
				RegexEnd
			)) && (m.size() == 2)) {
				std::string strTypeDefForCut = m[1];

				while (strTypeDefForCut.size() > 0) {
					if (std::regex_search(strTypeDefForCut, m, std::regex(
						RegexStart
						"(" AnnoName ")(" "(?:" RegexSmaliFullType ")"
						")([\\S]*)"
						RegexEnd
					)) && (m.size() == 4)) {

						std::string strTypeDefName = m[1];
						std::string strTypeDefObjectType = m[2];
						strTypeDefForCut = m[3];
						bool bCanCheck = true;
						strTypeDefObjectType = TypeRedefine(strTypeDefObjectType, listLocalTypeDef, &bCanCheck, false);

						// Ljava/util/stream/Node$OfPrimitive; 这个 class 的类声明会出错,出现嵌套递归了
						//BaseAssert(bCanCheck);

						if (std::regex_search(strTypeDefName, m, std::regex(
							RegexStart
							"(" AnnoNameNoColon ")" "([:]{1,2})"
							RegexEnd
						)) && (m.size() == 3)) {
							if (m[2] == ":") {
								// 要放入全局
								if (pClass) {
									pClass->insertTemplateParam(strTypeDefName, strTypeDefObjectType);
								}
								if (pMethod) {
									pMethod->insertTemplateParam(strTypeDefName, strTypeDefObjectType);
								}
							}
							else {
								//if (pClass) {
								//	pClass->insertTemplateParam(strTypeDefName, strTypeDefObjectType);
								//}
								listLocalTypeDef.insert(std::make_pair(strTypeDefName, strTypeDefObjectType));
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
		}
		return listLocalTypeDef;
	}

	/*
	*  <T:Ljava/lang/Object;R:Ljava/lang/Object;>(Ljava/lang/Class;Ljava/lang/reflect/Constructor;Lcom/saurik/substrate/MS$MethodAlteration<TT;TR;>;)V
	*  |<--		全局模板参数			     -->||<--  函数参数, 里面可以使用 T<?>; 来表示具体变量, 这里需要和函数参数对应,也有不对应的情况      -->||<-- 返回参数
	*  |<-- 全局可能还没有定义过它,需要补充  -->||<--  全局类型直接用模板参数 <?> 来代替类型,作为模板参数                                        -->|
	*  
	*  <T::Ljava/lang/Appendable;>(TT;B[B)V
	*  |<--局部模板使用T::定义-->||<-- 局部模板需要将 TT; 直接替换成 T:: 之后的类型, 当场完成实例化
	*  ()Ljava/util/Set<TV;>;
	*  (Ljava/util/Map<Ljava/lang/String;[Landroid/icu/text/DecimalFormat$Unit;>;Ljava/lang/String;I)Landroid/icu/text/DecimalFormat$Unit;
	*  没有<模板申明>, 只有全局使用
	*/
	static AnnotationMethodSignature methodResolver(std::string strMethod, std::string strSignature, CSmaliMethod* pMethod) {
		AnnotationMethodSignature ret;
		constexpr auto pMf = RegexStart
			"[.]method" "\\s+"
			"((?:" PatternMethodFlags "\\s+" ")*)"		// 所有的属性
			"([-\\w$]*|<init>|<cinit>)"								// 函数名
			"[(]("
			"(?:" SmaliTypePrefix RegexOnlySmaliBaseType ")*"				// 输入参数
			")[)]"
			"(" SmaliTypePrefix RegexOnlySmaliBaseType ")"				// 返回参数
			RegexEnd;
		std::smatch m;
		if (std::regex_search(strMethod, m, std::regex(pMf)) && (m.size() == 5)) {
			// 函数内部参数获取完整了
			std::string strFlags = m[1];
			std::string strName = m[2];
			std::string strParamList = m[3];
			std::string strReturn = m[4];
			std::vector<std::string> listPatam = regexGetStringList(strParamList, "^(" SmaliTypePrefix RegexOnlySmaliBaseType ")", 2, 1);

			if (strParamList.size() == 0) {
				BaseAssert(listPatam.size() == 0);
			}
			constexpr auto pSf = RegexStart
				// 类型重新定义,可有可无
				"((?:<" 
				"(?:" AnnoName "(?:" RegexSmaliFullType ")" ")+"
				">)?)"

				// 调用参数,肯定有
				"[(]("
				"[^)]*"
				")[)]"

				// 返回参数, 肯定有
				"(" RegexSmaliFullType ")"

				// 可能是抛出的异常
				"(?:[^]" RegexSmaliFullType ")?"
				RegexEnd;

			if (std::regex_search(strSignature, m, std::regex(pSf)) && (m.size() == 4)) {

				std::string strTypeDef = m[1];			// <P_IN:Ljava/lang/Object;S::Ljava/util/stream/Sink<TE_OUT;>;> 类型定义
				std::string strInputParam = m[2];		// TS;Ljava/util/Spliterator<TP_IN;>;
				std::string strOutputParam = m[3];		// TS;

				// 提取所有变量定义到 listLocalTypeDef 中
				std::map<std::string, std::string> listLocalTypeDef = getTypeDefInAngleBrackets(strTypeDef, pMethod);

				// 将所有输入参数提取到 listInputParam 中
				std::vector<std::string> listInputParam;
				if (strInputParam.size() > 0) {
					std::string strInputParamForCut = strInputParam;
					while (strInputParamForCut.size() > 0) {
						if (std::regex_search(strInputParamForCut, m, std::regex(
							RegexStart
							"(" RegexSmaliFullType ")"
							"([\\S]*)"
							RegexEnd
						)) && (m.size() == 3)) {
							std::string strParamDefName = m[1];
							listInputParam.push_back(strParamDefName);
							strInputParamForCut = m[2];
						}
						else {
							BaseAssert(0);
						}
					}
					BaseAssert(listInputParam.size() > 0);
				}

				// 重写填写 函数变量
				std::vector<std::string> listInputRedefineParam;
				for (auto a = listInputParam.begin(); a != listInputParam.end(); a++) {
					std::string strRedefine = TypeRedefine(*a, listLocalTypeDef, nullptr, false);
					listInputRedefineParam.push_back(strRedefine);
				}

				// 重新填写返回变量
				std::string strOutputRedefineParam = TypeRedefine(strOutputParam, listLocalTypeDef, nullptr,false);

				// 进行类型验证
				BaseAssert(listInputRedefineParam.size() <= listPatam.size());
				for (int m = (int)(listPatam.size() - listInputRedefineParam.size()), s = 0; m < (int)listPatam.size(); m++, s++) {
					std::string strType1 = listPatam[m];
					std::string strType2 = listInputRedefineParam[s];
					verifyType(strType1, strType2);
				}

				ret.listParamType = listInputRedefineParam;
				ret.strReturnType = strOutputRedefineParam;
			}
			else {
				BaseAssert(0);
			}
		}
		else {
			BaseAssert(0);
		}

		return ret;
	}
	static AnnotationClassSignature classResolver(std::string strClassSignature, CSmaliClass* pClass) {
		AnnotationClassSignature ret;
		constexpr auto pSf = RegexStart
			// 类型重新定义,可有可无
			"((?:<"
			"(?:" AnnoName "(?:" RegexSmaliFullType ")" ")+"
			">)?)"

			// 调用参数,肯定有
			"("
			"\\S*"
			")"
			RegexEnd;
		std::smatch m;
		if (std::regex_search(strClassSignature, m, std::regex(pSf)) && (m.size() == 3)) {
			std::string strTypeDef = m[1];
			std::string strInputParam = m[2];
			// 提取所有变量定义到 listLocalTypeDef 中
			std::map<std::string, std::string> listLocalTypeDef = getTypeDefInAngleBrackets(strTypeDef, pClass);

			// 将所有输入参数提取到 listInputParam 中
			std::vector<std::string> listInputParam;
			if (strInputParam.size() > 0) {
				std::string strInputParamForCut = strInputParam;
				while (strInputParamForCut.size() > 0) {
					if (std::regex_search(strInputParamForCut, m, std::regex(
						RegexStart
						"(" RegexSmaliFullType ")"
						"([\\S]*)"
						RegexEnd
					)) && (m.size() == 3)) {
						std::string strParamDefName = m[1];
						listInputParam.push_back(strParamDefName);
						strInputParamForCut = m[2];
					}
					else {
						BaseAssert(0);
					}
				}
				BaseAssert(listInputParam.size() > 0);
			}

			// 重写填写 函数变量
			std::vector<std::string> listInputRedefineParam;
			for (auto a = listInputParam.begin(); a != listInputParam.end(); a++) {
				std::string strRedefine = TypeRedefine(*a, listLocalTypeDef, nullptr, false);
				listInputRedefineParam.push_back(strRedefine);
			}

			ret.listClassType = listInputRedefineParam;

		}
		else {
			BaseAssert(0);
		}

		return ret;
	}

	static std::string fieldResolver(std::string strMethod, std::string strSignature, CSmaliClass* pClass) {
		std::string strTypeOut;
		constexpr auto pFf = RegexStart
			"[.]field" "\\s+"
			"((?:" PatternFieldFlags "\\s+" ")*)"		// 所有的属性
			"([-\\w$]*)"								// 变量名
			"[:]"
			"(" SmaliTypePrefix "(?:" RegexSmaliBaseType ")" ")"					// 变量类型
			"((?:"										// 变量赋值
			"\\s*"
			"="
			"\\s*"
			PatternFieldValue
			")?)"
			RegexEnd;
		std::smatch m;
		if (std::regex_search(strMethod, m, std::regex(pFf)) && (m.size() == 5)) {
			// 函数内部参数获取完整了
			std::string strFlags = m[1];
			std::string strName = m[2];
			std::string strType = m[3];
			std::string strValue = m[4];

			constexpr auto pSf = RegexStart
				// 类型重新定义,可有可无
				"((?:<"
				"(?:" AnnoName "(?:" RegexSmaliFullType ")" ")+"
				">)?)"

				// 调用参数,肯定有
				"("
				"\\S*"
				")"
				RegexEnd;

			if (std::regex_search(strSignature, m, std::regex(pSf)) && (m.size() == 3)) {

				std::string strTypeDef = m[1];
				std::string strInputParam = m[2];
				// 提取所有变量定义到 listLocalTypeDef 中
				std::map<std::string, std::string> listLocalTypeDef = getTypeDefInAngleBrackets(strTypeDef, pClass);

				// 将所有输入参数提取到 listInputParam 中
				std::vector<std::string> listInputParam;
				if (strInputParam.size() > 0) {
					std::string strInputParamForCut = strInputParam;
					while (strInputParamForCut.size() > 0) {
						if (std::regex_search(strInputParamForCut, m, std::regex(
							RegexStart
							"(" RegexSmaliFullType ")"
							"([\\S]*)"
							RegexEnd
						)) && (m.size() == 3)) {
							std::string strParamDefName = m[1];
							listInputParam.push_back(strParamDefName);
							strInputParamForCut = m[2];
						}
						else {
							BaseAssert(0);
						}
					}
					BaseAssert(listInputParam.size() > 0);
				}

				// 重写填写 函数变量
				std::vector<std::string> listInputRedefineParam;
				for (auto a = listInputParam.begin(); a != listInputParam.end(); a++) {
					std::string strRedefine = TypeRedefine(*a, listLocalTypeDef, nullptr, false);
					listInputRedefineParam.push_back(strRedefine);
				}
				
				BaseAssert(listInputRedefineParam.size() == 1);

				strTypeOut = listInputRedefineParam[0];

				//ret.listParamType = listInputRedefineParam;
				//ret.strReturnType = strOutputRedefineParam;
			}
			else {
				BaseAssert(0);
			}
		}
		else {
			BaseAssert(0);
		}

		return strTypeOut;
	}

	static void load$FieldTest(std::string strPath) {
		std::filesystem::path fsPath(strPath);
		std::filesystem::path toSavePath = fsPath.parent_path();
		toSavePath.append("AnnotationFieldSignature.txt");
		listAnnotationFieldSignature.clear();
		if (std::filesystem::exists(toSavePath)) {
			std::ifstream ifile(toSavePath.string(), std::ofstream::in);
			if (ifile.is_open()) {
				std::string strLine;
				while (std::getline(ifile, strLine)) {
					if (stringhelper::trim(strLine).size() > 0) {
						listAnnotationFieldSignature.push_back(strLine);
					}
				}
				ifile.close();
			}
		}
		//BaseAssert((listAnnotationSignature.size() % 3) == 0);

		for (int i = 0; i < listAnnotationFieldSignature.size(); i += 3) {
			if ((i + 2) < listAnnotationFieldSignature.size()) {
				std::string strClass = listAnnotationFieldSignature[i + 0];
				std::string strField = listAnnotationFieldSignature[i + 1];
				std::string strSignature = listAnnotationFieldSignature[i + 2];

				BaseAssert(strClass.find("_class:") == 0);
				BaseAssert(strField.find("_field:") == 0);
				BaseAssert(strSignature.find("Signat:") == 0);

				strClass = strClass.substr(7);
				strField = strField.substr(7);
				strSignature = strSignature.substr(7);

				std::cout << "field:[ " << i << "/" << listAnnotationFieldSignature.size() << " ] " << strClass << std::endl;
				fieldResolver(strField, strSignature, nullptr);
			}
		}
	}

	static void load$MethodTest(std::string strPath) {
		std::filesystem::path fsPath(strPath);
		std::filesystem::path toSavePath = fsPath.parent_path();
		toSavePath.append("AnnotationSignature.txt");
		listAnnotationSignature.clear();
		if (std::filesystem::exists(toSavePath)) {
			std::ifstream ifile(toSavePath.string(), std::ofstream::in);
			if (ifile.is_open()) {
				std::string strLine;
				while (std::getline(ifile, strLine)) {
					if (stringhelper::trim(strLine).size() > 0) {
						listAnnotationSignature.push_back(strLine);
					}
				}
				ifile.close();
			}
		}
		//BaseAssert((listAnnotationSignature.size() % 3) == 0);

		for (int i = 0; i < listAnnotationSignature.size(); i+=3) {
			if ((i + 2) < listAnnotationSignature.size()) {
				std::string strClass = listAnnotationSignature[i + 0];
				std::string strMethod = listAnnotationSignature[i + 1];
				std::string strSignature = listAnnotationSignature[i + 2];

				BaseAssert(strClass.find("_class:") == 0);
				BaseAssert(strMethod.find("method:") == 0);
				BaseAssert(strSignature.find("Signat:") == 0);

				strClass = strClass.substr(7);
				strMethod = strMethod.substr(7);
				strSignature = strSignature.substr(7);

				std::cout << "method:[ " << i << "/" << listAnnotationSignature.size() << " ] " << strClass << std::endl;
				methodResolver(strMethod, strSignature, nullptr);
			}
		}
	}

	static void saveToClassFile(std::string strPath) {
		std::filesystem::path fsPath(strPath);
		std::filesystem::path toSavePath = fsPath.parent_path();
		toSavePath.append("AnnotationClass.txt");
		std::ofstream ifile(toSavePath.string(), std::ofstream::out);
		if (ifile.is_open()) {
			for (auto a = listAnnotationClass.begin(); a != listAnnotationClass.end(); a++) {
				ifile << (*a) << "\n";
			}
			ifile.close();
		}
	}

	static void load$ClassTest(std::string strPath) {
		std::filesystem::path fsPath(strPath);
		std::filesystem::path toSavePath = fsPath.parent_path();
		toSavePath.append("AnnotationClass.txt");
		listAnnotationClass.clear();
		if (std::filesystem::exists(toSavePath)) {
			std::ifstream ifile(toSavePath.string(), std::ofstream::in);
			if (ifile.is_open()) {
				std::string strLine;
				while (std::getline(ifile, strLine)) {
					listAnnotationClass.push_back(strLine);
				}
				ifile.close();
			}
		}

		{
			std::string strClassName;
			std::string strSuperName;
			std::vector<std::string> listImple;
			for (int i = 0; i < listAnnotationClass.size(); i++) {
				std::smatch m;
				if (std::regex_search(listAnnotationClass[i], m, std::regex(
					RegexStart
					"(" "[^:]*" ")"		// 標簽名稱
					":="
					"(.*)\\s*$"			// 内容
				)) && (m.size() == 3)) {
					if (m[1] == "Templ") {

						std::cout << "[ " << i << "/" << listAnnotationClass.size() << " ] " << strClassName << std::endl;

						AnnotationClassSignature classSign = classResolver(m[2], nullptr);

						// 這裏進行檢驗
						std::vector<std::string> listType1;
						if (strSuperName.size() > 0) {
							listType1.push_back(strSuperName);
						}
						listType1.insert(listType1.end(), listImple.begin(), listImple.end());

						// 数量验证是一致的
						BaseAssert(classSign.listClassType.size() == listType1.size());
						for (int j = 0; j < listType1.size(); j++) {
							verifyType(listType1[j], classSign.listClassType[j]);
						}
					}
					else if (m[1] == "class") {
						strClassName = m[2];
						strSuperName = "";
						listImple.clear();
					}
					else if (m[1] == "super") {
						strSuperName = m[2];
					}
					else if (m[1] == "imple") {
						listImple.push_back(m[2]);
					}
				}
			}
		}
	}

};
#endif

