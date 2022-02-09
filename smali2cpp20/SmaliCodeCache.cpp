#include "SmaliCodeCache.h"

#include "SmaliMethod.h"
//#include "SyntaxBlock.h"
#include "stringhelper.h"
#include "CVar.h"
#include "CodeDumper.h"
#include "stringhelper.h"
#include "config.hpp"
#include "SmaliType.h"
#include "SmaliClass.h"
#include <regex>
#include "TestAnnotationSignature.h"

bool CSmaliCodeCache::insertCode(int nIndex, std::string& code) {
	std::shared_ptr<CSmaliCodeline> cline = std::make_shared<CSmaliCodeline>(pMethod, this, nIndex, code);
	mapCode.insert(std::make_pair(nIndex, cline));
	return true;
}

CSmaliCodeCache::CSmaliCodeCache(CSmaliMethod* pMethod) {
	this->pMethod = pMethod;
	clearAllData();
}

CSmaliCodeCache::~CSmaliCodeCache() {
}

void CSmaliCodeCache::clearAllData() {
	mapCode.clear();
	mapListAssignReg.clear();
	mapListUseReg.clear();
}


// 填充表达式
void CSmaliCodeCache::fillOneCodeExp(std::vector<std::shared_ptr<CSyntaxNode>> thread, int nThreadIndex, std::shared_ptr<CSmaliCodeline> code, std::vector<std::string>& listMode, std::string& outStr) {
	for (auto a = listMode.begin(); a != listMode.end(); a++) {
		std::string strString = stringhelper::trim((*a).substr(1, (*a).size() - 2));

		if (strString.find("Reg[") == 0) {
			std::string strRegIndex = stringhelper::trim(strString.substr(4, strString.find_first_of(']') - 4));

			bool bOutReg = false;		// 输入还是输出寄存器
			if (((int)strString.find(".out")) > 0) {
				bOutReg = true;
			}
			if (((int)strString.find(".in")) > 0) {
				BaseAssert(bOutReg == false);
			}
			else {
				BaseAssert(bOutReg == true);
			}

			// 索引
			int nRegIndex = atoi(strRegIndex.c_str());

			// 找一个寄存器的名字
			auto itReg = code->listAllRegName.find(nRegIndex);
			if (itReg == code->listAllRegName.end()) {
				BaseAssert(0);
			}

			// 找到寄存器列表
			std::vector<std::shared_ptr<CSmaliRegister>> listReg;
			if (bOutReg) {
				listReg = code->getOutputRegs();
			}
			else {
				listReg = code->getInputRegs();
			}

			// 判断一下要获取的属性
			std::string strAttr;
			if (((int)strString.find(".name")) > 0) {
				strAttr = "name";
			}
			if (((int)strString.find(".type")) > 0) {
				strAttr = "type";
			}
			if (((int)strString.find(".dtype")) > 0) {
				strAttr = "dtype";
			}

			// 填充替换寄存器
			for (auto b = listReg.begin(); b != listReg.end(); b++) {
				if ((*b)->regName() == itReg->second) {
					if (strAttr == "name") {
						bool bReplaced = false;
#if 1
						// 向上查找,迭代替换
						if (bOutReg == false) {
							if ((*b)->getVar()->getUsedCount() == 1) {
								std::string str = (*b)->getVar()->assign->getHostLine()->strDefExp;
								if (!str.empty()) {
									stringhelper::replace(outStr, *a, str);
									bReplaced = true;
								}
							}
						}
#endif

						if (bReplaced == false) {
							stringhelper::replace(outStr, *a, (*b)->getVar()->getVarName());
						}
					}
					else if (strAttr == "type") {
						std::string strClass = SmaliType((*b)->getVar()->getVarType()).getCppType(this->pMethod->pClass);
						stringhelper::replace(outStr, *a, strClass);
					}
					else if (strAttr == "dtype") {
						auto a1 = (*b)->getVar();
						auto b1 = a1->getVarType();

						if (b1 == "v13") {
							b1 = a1->getVarType();
						}

						std::string strClass = SmaliType(b1).getCppDefineType(this->pMethod->pClass);
						stringhelper::replace(outStr, *a, strClass);
					}
					break;
				}
			}

		}
		else if (strString.find("const[") == 0) {
			std::string strStringIndex = stringhelper::trim(strString.substr(strlen("const["), strString.find_first_of(']') - strlen("const[")));

			if (strStringIndex == "class") {
				// const[class].FS-F
				char cType = strString[strlen("const[class].FS-")];

				struct CSmaliCodeline::invokeParam param = code->getInvokeParamList(code->strCode);
				if (cType == 'S') {
					std::string strClass = SmaliType(param.returnType).getCppType(this->pMethod->pClass);
					stringhelper::replace(outStr, *a, strClass);
				}
				else if (cType == 'F') {
					stringhelper::replace(outStr, *a, param.methodName);
				}
				else if (cType == 'C') {
					std::string strClass = SmaliType(param.objectType).getCppType(this->pMethod->pClass);
					stringhelper::replace(outStr, *a, strClass);
				}
				else if ((cType == 'T') || (cType == 'P')) {
					// 空一个 list 指针
					int nTParamStart = 0;
					if ((cType == 'T')) {
						nTParamStart = 1;
					}

					std::vector<std::shared_ptr<CSmaliRegister>> listReg = code->getInputRegs();

					for (auto pp = listReg.begin(); pp != listReg.end(); pp++) {
						std::vector<std::string> listModeDummy;
						std::string modeStringDummy;
						for (int i = nTParamStart; i < (int)listReg.size(); i++) {
							std::string strOneReg = stringhelper::formatString(std::string("{Reg[%d].in.name}"), i);
							listModeDummy.push_back(strOneReg);
							modeStringDummy.append(strOneReg);
							if (((int)(i + 1)) != ((int)listReg.size())) {
								modeStringDummy.append(std::string(", "));
							}
						}
						fillOneCodeExp(thread, nThreadIndex, code, listModeDummy, modeStringDummy);
						stringhelper::replace(outStr, *a, modeStringDummy);
					}
				}
				else {
					BaseAssert(0);
				}
			}
			else if (strStringIndex == "invoke") {
				char cType = strString[strlen("const[invoke].FS-")];
				std::regex invokePoly(
					"^\\s*"				// 开始符号
					"(invoke-polymorphic|invoke-polymorphic/range)\\s*"		// 指令
					"\\{\\s*([^\\{]*)\\}\\s*"	// 寄存器清单
					",\\s*"
					"(L[\\w/$.-]+;)"			// 调用类型
					"->"
					"([^(]+)"				// 函数名
					"(\\([^\\)]*\\))"		// 输入参数1
					"([\\[]*L[\\w/$.-]+;|[\\[]*B|[\\[]*C|[\\[]*D|[\\[]*F|[\\[]*I|[\\[]*J|[\\[]*S|[\\[]*Z|V)\\s*"	// 返回参数
					",\\s*"				// 分割符号
					"\\(([^\\)]*)\\)\\s*"	// 输入参数2
					"([\\[]*L[\\w/$.-]+;|[\\[]*B|[\\[]*C|[\\[]*D|[\\[]*F|[\\[]*I|[\\[]*J|[\\[]*S|[\\[]*Z|V)\\s*"	// 返回参数
					"$");			// 结束符号
				std::smatch m;
				bool found = std::regex_search(code->strCode, m, invokePoly);
				if (found && (m.size() == 9)) {
					/*
*
*	[00]:	invoke-polymorphic/range { v0 ... p1 }, Ljava/lang/invoke/MethodHandle;->invoke([Ljava/lang/Object;)Ljava/lang/Object;, (Ljava/lang/invoke/MethodHandle;[Ljava/lang/Object;)Ljava/lang/Object;
	[01]:invoke-polymorphic/range
	[02]: v0 ... p1
	[03]:Ljava/lang/invoke/MethodHandle;
	[04]:invoke
	[05]:([Ljava/lang/Object;)
	[06]:Ljava/lang/Object;
	[07]:Ljava/lang/invoke/MethodHandle;[Ljava/lang/Object;
	[08]:Ljava/lang/Object;

*/
					if (cType == 'S') {
						std::string strClass = SmaliType(m[8]).getCppType(this->pMethod->pClass);
						stringhelper::replace(outStr, *a, strClass);
					}
					else if (cType == 'F') {
						stringhelper::replace(outStr, *a, m[4]);
					}
					else if (cType == 'C') {
						std::string strClass = SmaliType(m[3]).getCppType(this->pMethod->pClass);
						stringhelper::replace(outStr, *a, strClass);
					}
					else if ((cType == 'T') || (cType == 'P')) {

						// 空一个 list 指针
						int nTParamStart = 0;
						if ((cType == 'T')) {
							nTParamStart = 1;
						}

						std::vector<std::shared_ptr<CSmaliRegister>> listReg = code->getInputRegs();

						for (auto pp = listReg.begin(); pp != listReg.end(); pp++) {
							std::vector<std::string> listModeDummy;
							std::string modeStringDummy;
							for (int i = nTParamStart; i < (int)listReg.size(); i++) {
								std::string strOneReg = stringhelper::formatString(std::string("{Reg[%d].in.name}"), i);
								listModeDummy.push_back(strOneReg);
								modeStringDummy.append(strOneReg);
								if (((int)(i + 1)) != ((int)listReg.size())) {
									modeStringDummy.append(std::string(", "));
								}
							}
							fillOneCodeExp(thread, nThreadIndex, code, listModeDummy, modeStringDummy);
							stringhelper::replace(outStr, *a, modeStringDummy);
						}
					}
					else {
						BaseAssert(0);
					}
				}
				else {
					BaseAssert(0);
				}
			}
			else {
				int nStringIndex = atoi(strStringIndex.c_str());

				if (((int)strString.find(".VT-")) > 0) {
					char cType = strString[strlen("const[0].VT-")];

					std::string strObjectType = code->symbols[nStringIndex];
					std::string strName;
					std::string strType;

					// Landroid/icu/impl/BMPSet;->list:[I
					// Landroid/icu/impl/BMPSet;->-assertionsDisabled:Z
					// Lcom/google/gson/stream/JsonToken;->END_DOCUMENT
					// sget-object v1, Ljava/lang/Float;->TYPE:Ljava/lang/Class;
					//用正则表达式做这个文本切割
					// strObjectType = "Ljava/nio/-$Lambda$YHAb-xfMZQrd9vc-v8eN1BBHwE8;->-$f0:Ljava/lang/Object;"
					std::regex cvt("^(L[\\w/$.-]+;)->([^:]+):(.+)$");
					std::smatch m;
					bool found = std::regex_search(strObjectType, m, cvt);
					if (found && (m.size() == 4)) {
						strName = m.str(2);
						strType = m.str(3);
						strObjectType = m.str(1);
					}
					else {
						BaseAssert(0);
					}


					BaseAssert(SmaliType(strObjectType).isJavaType());
					std::string strData;
					if (cType == 'C') {
						strData = SmaliType(strObjectType).getCppType(this->pMethod->pClass);
					}
					else if (cType == 'V') {
						strData = strName;
#if 1
						stringhelper::replace(strData, "-", "_");
						stringhelper::replace(strData, "+", "_p_");
						stringhelper::replace(strData, "$", "_S_");
#endif
					}
					else if (cType == 'T') {
						strData = strType;
					}
					else {
						BaseAssert(0);
					}
					stringhelper::replace(outStr, *a, strData);

				}
				else if (((int)strString.find(".Class")) > 0) {
					std::string strNumber = code->symbols[nStringIndex];
					std::string strData = SmaliType(strNumber).getCppType(this->pMethod->pClass);
					stringhelper::replace(outStr, *a, strData);
				}
				else if (((int)strString.find(".lable")) > 0) {
					std::string strNumber = code->symbols[nStringIndex];
					std::string strLabel = "label";
					strLabel.append(strNumber);
					stringhelper::replace(strLabel, ":", "_");
					stringhelper::replace(outStr, *a, strLabel);
				}
				else if (((int)strString.find(".String")) > 0) {
					std::string strNumber = code->symbols[nStringIndex];
					std::string strData = "std::make_shared<java::lang::String>(";

					strData.append("std::make_shared<char[]>(");

					this->pMethod->pClass->listImportSaver->checkJavaClass("Ljava/lang/String;");
					strData.append(strNumber).append(")").append(")");
					stringhelper::replace(outStr, *a, strData);
				}
				else {
					std::string strNumber = code->symbols[nStringIndex];
					stringhelper::replace(outStr, *a, strNumber);
				}
			}
		}
		else {
			BaseAssert(0);
		}
	}
}

// 模仿所有过程,对汇编进行翻译
// 生成 C++ 代碼， 有模板模式和非模板模式，模板模式是在 h 文件中 生成 C 代碼
void CSmaliCodeCache::runToCppCode(bool inTemplate) {
	// 再一次遍历所有线程,生成所有代码
	for (auto a = listRunThreads.begin(); a != listRunThreads.end(); a++) {

		std::vector<int> listRunInst;

		bool bCatchAll = false;

		for (int b = 0; b < (*a).size(); b++) {			// b 当前的 node
			listRunInst.push_back(-1);
			// 进行指令循环
			bool bNewClass = false;
			for (int c = 0; c < ((*a)[b])->listInstIndex.size(); c++) {		// c 是当前指令行
				auto it = mapCode.find(((*a)[b])->listInstIndex[c]);
				if ((it != mapCode.end()) && (it->second->strCCodeLine.size() == 0)) {

					listRunInst.push_back(it->first);

					if (it->second->info) {
						// 每一行的代码数据
						std::string strDefType = it->second->info->strType;
						std::string strDefVar = it->second->info->strVar;
						std::string strDefOp = it->second->info->strOp;
						std::string strDefExp = it->second->info->strExp;

						if (((int)it->second->strCode.find("move-exception")) > 0) {
							if (bCatchAll) {
								strDefVar = "catchall";
								it->second->getOutputRegs()[0]->setRegVarName(strDefVar);
							}
							bCatchAll = false;
							it->second->strCCodeLine.push_back("// move-exception");

						}

						if (((int)it->second->strCode.find("throw")) > 0) {
							it->second->strCCodeLine.push_back("// throw");
						}

						// switch
						if (((int)it->second->strCode.find("-switch")) > 0) {
							//strDefExp = "";
							it->second->strCCodeLine.push_back("// switch");
						}

						// 获得所有的参数模板
						std::vector<std::string> listDefTypeTemplate = getExpModeStringList(strDefType);
						std::vector<std::string> listDefVarTemplate = getExpModeStringList(strDefVar);
						std::vector<std::string> listDefExpTemplate = getExpModeStringList(strDefExp);

						fillOneCodeExp(*a, 0, ((it->second)), listDefTypeTemplate, strDefType);
						fillOneCodeExp(*a, 0, ((it->second)), listDefVarTemplate, strDefVar);
						fillOneCodeExp(*a, 0, ((it->second)), listDefExpTemplate, strDefExp);

						it->second->strDefType = strDefType;
						it->second->strDefVar = strDefVar;
						it->second->strDefExp = strDefExp;
						it->second->strDefOp = strDefOp;


						std::string strCodeLine = "";

						// 需要定义左边的变量
						if ((it->second->assign && (it->second->assign->getUsedCount() > 1) && (strDefOp.length() > 0))) {
							// 变量表达式有被引用, 不要在这里定义变量了

							if (strDefType == "auto") {
								//strCodeLine.append(strDefType).append(" ");
								if (((int)it->second->strCode.find("move-exception")) > 0) {
									strDefType = "std::any";
								}
							}
							{
								// 放入预定义
								std::string strPreDef = strDefType;
								strPreDef.append(" ").append(strDefVar);
								auto findStrIt = std::find(listVarPreDefine.begin(), listVarPreDefine.end(), strPreDef);
								if (findStrIt == listVarPreDefine.end()) {
									listVarPreDefine.push_back(strPreDef);
								}
							}

							strCodeLine.append(strDefVar).append(" ");
							strCodeLine.append(strDefOp).append(" ");


							if (((int)strDefExp.find("new ")) == 0) {
								std::string newDefExp = "std::make_shared<";
								newDefExp.append(strDefExp.substr(4, strDefExp.size() - 4)).append(">");
								it->second->strDefExp = newDefExp;
								strCodeLine = " ";	// 不表达
							}
							else if (((int)strDefExp.find("getCatchExcetionFromList")) == 0) {
								strCodeLine.append("tryCatchExcetionList").append(".back()").append(";");
							}
							else {
								strCodeLine.append(strDefExp).append(";");
							}
						}
						// 只被一次用到,那么就不需要了
						else if (it->second->assign && (it->second->assign->getUsedCount() == 1) && (strDefOp.length() > 0)) {
							strCodeLine = " ";
						}
						else {

							if ((((int)strDefExp.find("if")) >= 0) && (((int)strDefExp.find(" goto ")) > 0)) {
								std::smatch m;
								if (std::regex_search(strDefExp, m, CRegexString::reformatFfGoto) && (m.size() == 3)) {
									it->second->strCCodeLine.push_back(std::string(m[1]));
									std::string nextLine = "\t";
									nextLine.append(m[2]).append(";");
									it->second->strCCodeLine.push_back(nextLine);
								}
								else {
									BaseAssert(0);
								}
								strDefExp = "";
							}

							// 没有输出寄存器的情况
							if (((int)strDefExp.find("<init>")) > 0) {
								std::string strCall;
								if ((int)strDefExp.find("this->") == 0) {	// 这里是构造函数
									int nFind = (int)strDefExp.find("<init>");
									strCall = strDefExp.substr(nFind + strlen("<init>"), strDefExp.length() - nFind + strlen("<init>"));
									if (strCall == "()") {
										strCall = "";
									}
									else {
										// 带参数调用父类构造
										auto regList = it->second->getInputRegs();
										BaseAssert(regList.size() > 0);
										std::string strCehckTypeName = SmaliType(regList[0]->getCheckedType()).getCppType(this->pMethod->pClass);
										strCehckTypeName.append("::").append(strCall);
										strCall = strCehckTypeName;
									}
									it->second->strDefExp = strCall;
									strDefExp = strCall;
								}
								else {
									// 增加 new 语句
									auto regList = it->second->getInputRegs();
									BaseAssert(regList.size() > 0);
									auto regExp = regList[0]->getVar()->assign->getHostLine();
									std::string strObjectNew = regExp->strDefVar;
									strObjectNew.append(" = ").append(regExp->strDefExp);


									int nFind = (int)strDefExp.find("<init>");
									strCall = strDefExp.substr(nFind + strlen("<init>"), strDefExp.length() - nFind + strlen("<init>"));
									strObjectNew.append(strCall).append(";");
									it->second->strCCodeLine.push_back(strObjectNew);

									strDefExp = "";
								}
							}

							// switch
							if (((int)strDefExp.find("switch")) == 0) {
								it->second->strCCodeLine.push_back("{");
								std::string strVar = strDefExp;
								strCodeLine = "";

								stringhelper::replace(strVar, "switch", "");

								strCodeLine = "auto item = ";
								strCodeLine.append(strVar).append(";");
								it->second->strCCodeLine.push_back(strCodeLine);

								BaseAssert(((*a)[b])->nextType == CSyntaxNode::eNextType::NEXT_BRANCH_SWITCH);
								for (auto caseItem = ((*a)[b])->nextSwitchCase.listCase.begin(); caseItem != ((*a)[b])->nextSwitchCase.listCase.end(); caseItem++) {
									strCodeLine = "if (item == ";
									strCodeLine.append(caseItem->strCase).append(") goto label");
									strCodeLine.append(caseItem->strTag).append(";");
									stringhelper::replace(strCodeLine, ":", "_");
									it->second->strCCodeLine.push_back(strCodeLine);
								}
								it->second->strCCodeLine.push_back("}");
								strDefExp = "";

							}

							// 两种情况都需要收拾
							if (strDefExp == "throw catchall") {
								strDefExp = "throw";
							}
							else if (strDefExp == "throw getCatchExcetionFromList") {
								strDefExp = "throw";
							}

							if (((int)strDefExp.find("getCatchExcetionFromList")) == 0) {
								strCodeLine.append("tryCatchExcetionList").append(".back()").append(";");
							}
							else {
								if (!strDefExp.empty()) {
									strCodeLine.append(strDefExp).append(";");
								}
								else {
									strCodeLine = "";
								}
							}
						}

						if (strCodeLine.size() > 0) {
							it->second->strCCodeLine.push_back(strCodeLine);
							if ((((int)strDefExp.find("getCatchExcetionFromList")) == 0) && (strDefVar != "catchall")) {
								std::string strCatchCodeLine = "";
								strCatchCodeLine.append("tryCatchExcetionList").append(".pop_back()").append(";");
								it->second->strCCodeLine.push_back(strCatchCodeLine);
							}
						}
					}
					else if (((int)it->second->strCode.find(".method")) >= 0) {
						std::string strSmaliDef = "// ";
						strSmaliDef.append(it->second->strCode);
						it->second->strCCodeLine.push_back(strSmaliDef);		// 調試用的

						// 放入模板
						if (inTemplate) {
							std::string strTemplateParam = this->pMethod->pClass->getTemplateDefineString(this->pMethod);
							it->second->strCCodeLine.push_back(strTemplateParam);
						}
						else {
							if (this->pMethod->listTemplateParam.size() > 0) {
								std::string strTemplateParam = this->pMethod->pClass->getTemplateDefineString(this->pMethod);
								it->second->strCCodeLine.push_back(strTemplateParam);
							}
						}

						it->second->strCCodeLine.push_back(it->second->getMethodString(inTemplate));
						it->second->strCCodeLine.push_back(std::string("{"));
						it->second->incDeep();
					}
					else if (((int)it->second->strCode.find(".end method")) >= 0) {
						it->second->strCCodeLine.push_back(std::string("}"));
						it->second->decDeep();
					}
					else if (((int)it->second->strCode.find(".line")) >= 0) {
						it->second->strCCodeLine.push_back(std::string(" "));
					}
					else if (((int)it->second->strCode.find(".registers")) >= 0) {
						it->second->strCCodeLine.push_back(std::string(" "));
					}
					else if (((int)it->second->strCode.find(".prologue")) >= 0) {
						it->second->strCCodeLine.push_back(std::string(" "));
					}
					else if ((it->second->symbols.size() > 0) && (it->second->symbols[0][0] == ':')) {
						std::string strLabel = "";
						if (((int)it->second->symbols[0].find(":try_start")) >= 0) {
							strLabel.append("//");
							it->second->strCCodeLine.push_back(std::string("try {"));
						}

						if (((int)it->second->symbols[0].find(":try_end")) >= 0) {
							strLabel.append("//");
						}
						if (((int)it->second->symbols[0].find(":catchall")) >= 0) {
							bCatchAll = true;
						}

						strLabel.append("label");
						strLabel.append(it->second->symbols[0]);
						stringhelper::replace(strLabel, ":", "_");
						it->second->strCCodeLine.push_back(strLabel.append(":"));

						if (((int)it->second->symbols[0].find(":try_end")) >= 0) {
							it->second->strCCodeLine.push_back("}");
							// 开始分析 try goto;
							for (auto a = this->listTryCatchRecord.begin(); a != this->listTryCatchRecord.end(); a++) {
								if (a->strEndTag == it->second->symbols[0]) {

									if (a->strCatch == ".catch") {
										std::string strCatch = "catch (";
										strCatch.append(SmaliType(a->strCatchType).getCppType(this->pMethod->pClass));
										strCatch.append(" e)").append("{");

										it->second->strCCodeLine.push_back(strCatch);

										it->second->strCCodeLine.push_back("\ttryCatchExcetionList.push_back(e);");

										std::string strCatchGoto = "\tgoto label";
										strCatchGoto.append(a->strGotoTag);
										stringhelper::replace(strCatchGoto, ":", "_");
										it->second->strCCodeLine.push_back(strCatchGoto.append(";"));

										it->second->strCCodeLine.push_back("}");


										// 放入预定义
										std::string strPreDef = "std::vector<std::any> tryCatchExcetionList";
										auto findStrIt = std::find(listVarPreDefine.begin(), listVarPreDefine.end(), strPreDef);
										if (findStrIt == listVarPreDefine.end()) {
											listVarPreDefine.push_back(strPreDef);
										}
									}
									else if (a->strCatch == ".catchall") {
										std::string strCatch = "catch (";
										strCatch.append("...");
										strCatch.append(")").append("{");

										it->second->strCCodeLine.push_back(strCatch);

										// 这里等代码结束的时候，需要使用 throw，不带任何参数将所有的异常再抛出

										std::string strCatchGoto = "\tgoto label";
										strCatchGoto.append(a->strGotoTag);
										stringhelper::replace(strCatchGoto, ":", "_");
										it->second->strCCodeLine.push_back(strCatchGoto.append(";"));

										it->second->strCCodeLine.push_back("}");
									}
									else {
										BaseAssert(0);
									}

								}
							}
						}
					}
					else {
						if (it->second->strCCodeLine.size() == 0) {
							std::string strTemp = "//";
							strTemp.append(it->second->strCode);
							it->second->strCCodeLine.push_back(strTemp);
						}
					}
				}
				else {
					if (it == mapCode.end()) {
						BaseAssert(0);
					}
				}
			}
		}
	}


	if (mapCode.size() > 0) {
		auto a = mapCode.rbegin();
		if (a != mapCode.rend()) {
			if (((int)a->second->strCode.find(".end method")) >= 0) {
				if (a->second->strCCodeLine.size() == 0) {
					a->second->strCCodeLine.push_back(std::string("}"));
					a->second->decDeep();
				}
			}
		}
		else {
			BaseAssert(0);
		}
	}
}

// rename Var
// 对变量进行命名
bool CSmaliCodeCache::renameVar(std::vector<std::shared_ptr<CSyntaxNode>> listNode) {

	// 修复函数的声明模板
	// 函数内的注解
	if (!this->strAnnotationSignature.empty()) {
		auto mStart = mapCode.begin();
		BaseAssert(mStart->second->symbols[0] == ".method");

		// 记录签名内容
		{
			std::string strFileName = this->pMethod->pClass->getFilePath();
			std::string strMethodRc = mStart->second->strCode;
			stringhelper::trim(strMethodRc);
			TestAnnotationSignature::insertMethodRecord(strFileName, strMethodRc, strAnnotationSignature);
		}

		// 重新处理签名
		{
			AnnotationMethodSignature ann = TestAnnotationSignature::methodResolver(mStart->second->strCode, this->strAnnotationSignature, this->pMethod);
			mStart->second->strMethodType = ann.strReturnType;

			//  mStart->second->regsOut.size()
			int nParamStart = (int)(mStart->second->regsOut.size() - ann.listParamType.size());
			for (int i = nParamStart,r = nParamStart, m = 0; i < mStart->second->regsOut.size(); i++, m++, r++) {
				mStart->second->regsOut[i]->setCheckedType(ann.listParamType[m]);

#if 0
				// 验证代码
				// 应为 D J 的存在,下面的验证不成立
				if (mStart->second->isStatic) {
					std::string regName = stringhelper::formatString("p%d", i);
					BaseAssert(mStart->second->regsOut[i]->regName() == regName);
				}
				else {
					std::string regName = stringhelper::formatString("p%d", i);
					BaseAssert(mStart->second->regsOut[i]->regName() == regName);
				}
#endif
			}

			//mStart->second->isStatic
		}
	}

	// 设置好寄存器名字,第一次设置, 不能重复
	// 只要是赋值的就创建一次
	int k0 = 0;
	for (auto i = mapListAssignReg.begin(); i != mapListAssignReg.end(); i++) {
		if (i->second->setRegVarName(stringhelper::formatString("var%d", k0))) {
			k0++;
		}
	}

	// 遍历所有的线程, 搞清楚代码的引用关系
	//CVar::clearSameVarRecorder();
	((CSmaliMethod*)this->pMethod)->GroupSameVar->clearSameVarRecorder();

	for (auto aThread = listRunThreads.begin(); aThread != listRunThreads.end(); aThread++) {
		std::vector<int> listRunInst;
		std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<CSmaliRegister>>>> mapRegList;
		std::map<std::string, std::string> mapLocalVarName;
		for (int b = 0; b < (*aThread).size(); b++) {			// b 当前的 node

			listRunInst.push_back(-1);

			// 进行指令循环
			for (int c = 0; c < ((*aThread)[b])->listInstIndex.size(); c++) {		// c 是当前指令行
				// ((*a)[b])->listInstIndex.begin()
				auto it = mapCode.find(((*aThread)[b])->listInstIndex[c]);
				if (it != mapCode.end()) {

					listRunInst.push_back(it->first);

					// 强制设置参数
					// .param p1, "currencyPattern"    # Ljava/lang/String;
					// it->second->strCode = "    .param p1, \"-this0\"    # Landroid/icu/impl/CacheValue$NullValue;"
					if (it->second->symbols[0] == ".param") {
						std::smatch m;
						if (std::regex_search(it->second->strCode, m, std::regex("^\\s*[.]param\\s+(p[0-9]*)\\s*,\\s*\"([\\w$-]*)\"\\s*.+$")) && (m.size() == 3)) {
							std::string strRegName = m[1];
							std::string strVarName = m[2];
#if 1
							stringhelper::replace(strVarName, "-", "_");
							stringhelper::replace(strVarName, "+", "_p_");
							stringhelper::replace(strVarName, "$", "_S_");
#endif

							bool bFindOutReg = false;
							auto itmap = mapRegList.find(strRegName);
							if (itmap != mapRegList.end()) {
								auto findit = itmap->second->rbegin();
								if ((*findit)->regName() == strRegName) { // 寄存器名字相同
									// 目标变量增加使用量
									(*findit)->getVar()->setCVarForceVarName(strVarName);
									bFindOutReg = true;
								}
								else {
									BaseAssert(0);
								}
							}
							BaseAssert(bFindOutReg);
						}
						else {
							BaseAssert(0);
						}
					}
					//    .local v0, "c":I
					else if (it->second->symbols[0] == ".local") {
						std::smatch m;
						if (std::regex_search(it->second->strCode, m, std::regex("^\\s*[.]local\\s+([pv][0-9]*)\\s*,\\s*\"([\\w$-]*)\"\\s*:.+$")) && (m.size() == 3)) {
							std::string strRegName = m[1];
							std::string strVarName = m[2];
#if 1
							stringhelper::replace(strVarName, "-", "_");
							stringhelper::replace(strVarName, "+", "_p_");
							stringhelper::replace(strVarName, "$", "_S_");
#endif
							auto it_var = mapLocalVarName.find(strRegName);
							if (it_var != mapLocalVarName.end()) {
								//BaseAssert(0);
								it_var->second = strVarName;
							}
							else {
								mapLocalVarName.insert(std::make_pair(strRegName, strVarName));
							}

							bool bFindOutReg = false;
							auto itmap = mapRegList.find(strRegName);
							if (itmap != mapRegList.end()) {
								auto findit = itmap->second->rbegin();
								if ((*findit)->regName() == strRegName) { // 寄存器名字相同
									// 目标变量增加使用量
									(*findit)->getVar()->setCVarForceVarName(strVarName);
									bFindOutReg = true;
								}
								else {
									BaseAssert(0);
								}
							}
							else {
								// 罕见的寄存器没有被使用
							}
							//BaseAssert(bFindOutReg);
						}
						else {
							BaseAssert(0);
						}
					}
					//     .end local v0    # "c":I
					else if ((it->second->symbols.size() > 2) && (it->second->symbols[0] == ".end") && (it->second->symbols[1] == ".local")) {
						std::smatch m;
						if (std::regex_search(it->second->strCode, m, std::regex("^\\s*[.]end\\s+local\\s+([pv][0-9]*)\\s*.+$")) && (m.size() == 2)) {
							std::string strRegName = m[1];
							auto it_var = mapLocalVarName.find(strRegName);
							if (it_var == mapLocalVarName.end()) {
								BaseAssert(0);
							}
							else {
								mapLocalVarName.erase(it_var);
							}
						}
						else {
							BaseAssert(0);
						}
					}
					// .restart local v0    # "limit":I
					else if (it->second->symbols[0] == ".restart") {
						std::smatch m;
						if (std::regex_search(it->second->strCode, m, std::regex("^\\s*[.]restart\\s+local\\s+([pv][0-9]*)\\s*#\\s*\"([\\w$-]*)\"\\s*:.+$")) && (m.size() == 3)) {
							std::string strRegName = m[1];
							std::string strVarName = m[2];
#if 1
							stringhelper::replace(strVarName, "-", "_");
							stringhelper::replace(strVarName, "+", "_p_");
							stringhelper::replace(strVarName, "$", "_S_");
#endif
							auto it_var = mapLocalVarName.find(strRegName);
							if (it_var == mapLocalVarName.end()) {
								//BaseAssert(0);
								mapLocalVarName.insert(std::make_pair(strRegName, strVarName));
							}
							else {
								it_var->second = strVarName;
							}

							bool bFindOutReg = false;
							auto itmap = mapRegList.find(strRegName);
							if (itmap != mapRegList.end()) {
								auto findit = itmap->second->rbegin();
								if ((*findit)->regName() == strRegName) { // 寄存器名字相同
									// 目标变量增加使用量
									(*findit)->getVar()->setCVarForceVarName(strVarName);
									bFindOutReg = true;
								}
								else {
									BaseAssert(0);
								}
							}
							else {
								// 罕见的寄存器没有被使用
							}
							//BaseAssert(bFindOutReg);
						}
						else {
							BaseAssert(0);
						}
					}

					// 遍历所有的输入寄存器
					std::vector<std::shared_ptr<CSmaliRegister>> listInReg = it->second->getInputRegs();
					for (auto d = listInReg.begin(); d != listInReg.end(); d++) {

					tryAgain:
						bool bFindOutReg = false;

						auto itmap = mapRegList.find((*d)->regName());
						if (itmap != mapRegList.end()) {
							auto findit = itmap->second->rbegin();
							if ((*findit)->regName() == (*d)->regName()) { // 寄存器名字相同
								// 目标变量增加使用量
								if ((*findit)->getVar()->addUse(*d)) {
									// 本地使用目标变量
									(*d)->setVar((*findit)->getVar());	// 插入引用
								}
								bFindOutReg = true;

								// 使用 mapLocalVarName 进行重新命名
#if 1
								// 去判断当前寄存器的名字
								auto localVarIt = mapLocalVarName.find((*d)->regName());
								if (localVarIt != mapLocalVarName.end()) {
									(*findit)->getVar()->setCVarForceVarName(localVarIt->second);
								}
#endif
							}
							else {
								BaseAssert(0);
							}
						}

						// 没有找到,可能是 smali 寄存器的编号问题
						if (!bFindOutReg) {
							std::string strRegName = (*d)->regName();

							if (strRegName == "v16") {
								(*d)->changeRegName(std::string("p0"));
								goto tryAgain;
							}
							if (strRegName == "v17") {
								(*d)->changeRegName(std::string("p1"));
								goto tryAgain;
							}
							if (strRegName == "v18") {
								(*d)->changeRegName(std::string("p2"));
								goto tryAgain;
							}
							if (strRegName == "v19") {
								(*d)->changeRegName(std::string("p3"));
								goto tryAgain;
							}
							if (strRegName == "v20") {
								(*d)->changeRegName(std::string("p4"));
								goto tryAgain;
							}
							printf(((*d)->getSignature()).c_str());
						}
						BaseAssert(bFindOutReg == true);
					}

					std::vector<std::shared_ptr<CSmaliRegister>> listOutReg = it->second->getOutputRegs();
					for (auto ss = listOutReg.begin(); ss != listOutReg.end(); ss++) {



						auto itmap = mapRegList.find((*ss)->regName());
						if (itmap == mapRegList.end()) {
							mapRegList.insert(std::make_pair((*ss)->regName(), std::make_shared<std::vector<std::shared_ptr<CSmaliRegister>>>()));
							itmap = mapRegList.find((*ss)->regName());
						}
						BaseAssert(itmap != mapRegList.end());
						itmap->second->push_back(*ss);	// 添加到后面
					}
				}
				else {
					BaseAssert(0);
				}
			}
		}
	}


	// 设置好寄存器名字,第二次设置, 不能重复
	int k1 = 0;
	for (auto i = mapListAssignReg.begin(); i != mapListAssignReg.end(); i++) {
		if (i->second->getVar()->getUsedCount() > 1) {	// 被使用的数量大于1
			if (i->second->setRegVarName(stringhelper::formatString("cVar%d", k1))) {
				k1++;
				// 检查一下类型
				i->second->getVar()->resolveType();
			}
			
		}
	}

	return true;
}

// 获得字符串的模板
std::vector<std::string> CSmaliCodeCache::getExpModeStringList(std::string& str) {
	std::vector<std::string> listString;
	int nStart = (int)str.find_first_of("{");
	while (nStart >= 0) {
		int nNext = (int)str.find_first_of("}", nStart);
		if (nNext > nStart) {
			std::string strFind = str.substr(nStart, nNext - nStart + 1);
			listString.push_back(strFind);
		}
		nStart = (int)str.find_first_of("{", nNext);
	}
	return listString;
}

// 登记寄存器
bool CSmaliCodeCache::regCheckIn(std::shared_ptr<CSmaliRegister> reg) {
	if (reg->isInput()) {
		std::string strRegSign = reg->getSignature();
		auto a = this->mapListUseReg.find(strRegSign);
		if (a != this->mapListUseReg.end()) {
			BaseAssert(0);
		}
		this->mapListUseReg.insert(std::make_pair(reg->getSignature(), reg));
	}
	else {
		std::string strRegSign = reg->getSignature();
		auto a = this->mapListAssignReg.find(strRegSign);
		if (a != this->mapListAssignReg.end()) {
			BaseAssert(0);
		}
		this->mapListAssignReg.insert(std::make_pair(reg->getSignature(), reg));
	}

	return true;
}

void CSmaliCodeCache::syntaxDiagram() {

	std::shared_ptr<CSyntaxNode> nodeTools = std::make_shared<CSyntaxNode>(&this->mapCode);

	//if (((CSmaliMethod*)this->pHostedMethod)->getMethodName() == "containsSlow") {
	//	printf("test");
	//}

	// 创建语义图
	this->syntaxRoot = nodeTools->createSyntaxNodeRoot(this->mapCode);

	this->listTryCatchRecord = nodeTools->listTryCatchRecord;

	// 模板部分
	this->strAnnotationSignature = nodeTools->strAnnotationSignature;

	// 生成运行线程
	this->listRunThreads = nodeTools->runAllThread(this->mapCode, this->syntaxRoot);

	// 重新命名所有的 寄存器
	renameVar(this->syntaxRoot);
}

CodeDumper CSmaliCodeCache::dumpCodeForTemplate() {
	CodeDumper d;

	if (this->mapCode.size() > 2) {	// == 2 的是纯虚函数
		int nInstIndex = 0;
		// 运行 CPP 代码生成，合成正确的代码
		// 因为内部大量使用 goto 
		// 为了避免 error C2362 的错误
		// 需要将所有的显性定义的变量全部定义在前面
		listVarPreDefine.clear();
		runToCppCode(true);

		for (auto a = mapCode.begin(); a != mapCode.end(); a++, nInstIndex++) {
			if (a->second->nDeep < 0) {
				d.subNestDepth();
				d.newline();
			}
			if (a->second->strCCodeLine.size() > 0) {
				if ((a->second->strCCodeLine.size() == 1) && (a->second->strCCodeLine[0] == " ")) {
					// 这种情况不输出
				}
				else {
					d.add(a->second->strCCodeLine).newline();
				}
			}
			else {
				std::string strLine = stringhelper::formatString("// %03d", a->first) + a->second->strCode;
				d.add(strLine).newline();
			}

			if (a->second->nDeep > 0) {
				d.addNestDepth();
				d.newline();
			}

			// 增加变量定义
			if (nInstIndex == 0) {
				if (listVarPreDefine.size() > 0) {
					for (auto b = listVarPreDefine.begin(); b != listVarPreDefine.end(); b++) {
						d.add(*b).endl().newline();
					}
					d.newline();
				}
			}
		}
	}
	return d;
}

CodeDumper CSmaliCodeCache::dumpCode() {
	CodeDumper d;

	if (this->pMethod->pClass->eOutType == config::OUT_CPP) {

		if (this->mapCode.size() > 2) {	// == 2 的是纯虚函数
			int nInstIndex = 0;
			// 运行 CPP 代码生成，合成正确的代码
			// 因为内部大量使用 goto 
			// 为了避免 error C2362 的错误
			// 需要将所有的显性定义的变量全部定义在前面
			listVarPreDefine.clear();
			runToCppCode();

			for (auto a = mapCode.begin(); a != mapCode.end(); a++, nInstIndex++) {
				if (a->second->nDeep < 0) {
					d.subNestDepth();
					d.newline();
				}
				if (a->second->strCCodeLine.size() > 0) {
					if ((a->second->strCCodeLine.size() == 1) && (a->second->strCCodeLine[0] == " ")) {
						// 这种情况不输出
					}
					else {
						d.add(a->second->strCCodeLine).newline();
					}
				}
				else {
					std::string strLine = stringhelper::formatString("// %03d", a->first) + a->second->strCode;
					d.add(strLine).newline();
				}

				if (a->second->nDeep > 0) {
					d.addNestDepth();
					d.newline();
				}

				// 增加变量定义
				if (nInstIndex == 0) {
					if (listVarPreDefine.size() > 0) {
						for (auto b = listVarPreDefine.begin(); b != listVarPreDefine.end(); b++) {
							d.add(*b).endl().newline();
						}
						d.newline();
					}
				}
			}
		}
	}
	else if (this->pMethod->pClass->eOutType == config::OUT_H) {
		for (auto a = mapCode.begin(); a != mapCode.end(); a++) {
			if (((int)a->second->strCode.find(".method")) >= 0) {
				//d.add(a->second->getMethodPermissionString()).newline();
				d.add(a->second->getMethodString());
				// 纯虚函数
				if (this->mapCode.size() == 2) {
					d.add(" = 0");
				}
				else if (this->mapCode.size() < 2) {
					BaseAssert(0);
				}
				d.endl().newline();
				break;
			}
		}
	}
	else {
		BaseAssert(0);
	}

	return d;
}