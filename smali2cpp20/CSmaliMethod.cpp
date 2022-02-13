#include "CSmaliMethod.h"
#include "CSmaliType.h"
#include "CVar.h"
#include "CSmaliClass.h"
#include "CBaseAssert.h"
#include "CRegexString.h"
#include "TestAnnotationSignature.h"

CSmaliMethod::CSmaliMethod() {
	this->pClass = nullptr;
	this->isNeedHide = false;
	this->isAbstract = false;
}

CSmaliMethod::CSmaliMethod(std::shared_ptr<CSmaliType> ptrClassName, CSmaliClass* pHost) {
	this->classType = ptrClassName;
	this->pClass = pHost;
	this->GroupSameVar = std::make_shared<CVarGroup>();
	this->isNeedHide = false;
	this->isAbstract = false;
	this->setPublicType();
}

void CSmaliMethod::setHide() {
	this->isNeedHide = true;
}

bool CSmaliMethod::getHide() {
	return this->isNeedHide;
}

CSmaliMethod::~CSmaliMethod() {
}

void CSmaliMethod::dumpAllMethod(int outType, CodeDumper* d) {
	if (!this->getHide()) {
		CodeDumper d2 = dumpCode(outType);
		d->add(d2);
	}
}

void CSmaliMethod::dumpAllMethodForTemplate(CodeDumper* d) {
	CodeDumper d2 = dumpCodeForTemplate();
	d->add(d2);
}

bool CSmaliMethod::insertTemplateParam(std::string strType, std::string strClass) {
	auto a = listTemplateParam.find(strType);
	if (a != listTemplateParam.end()) {
		CBaseAssert(a->second == strClass);
		return false;
	}
	this->listTemplateParam.insert(std::make_pair(strType, strClass));
	return true;
}


std::shared_ptr<CSmaliType> CSmaliMethod::getClassType() {
	return this->classType;
}

std::string CSmaliMethod::getMethodType() {
	return strMethodType;
}

std::string CSmaliMethod::getMethodName() {
	return strFunctionName;
}

void CSmaliMethod::setMethodSignature(std::string strSign) {
	strSignature = strSign;
}

std::string CSmaliMethod::getMethodSignature() {
	return strSignature;
}

// strDefine = ".method static constructor <clinit>()V"
// strDefine = ".method synthetic constructor <init>(Landroid/icu/impl/CacheValue$NullValue;)V"
// strDefine = ".method public bridge synthetic run()Ljava/lang/Object;"
// strDefine = ".method public static strictfp toDegrees(D)D"
// strDefine = ".method public static synchronized native declared-synchronized emptyJniStaticSynchronizedMethod0()V"
void CSmaliMethod::getMethodName(std::string strDefine) {
	constexpr auto pMf = RegexStart
		"[.]method" "\\s+"
		"((?:" PatternMethodFlags "\\s+" ")*)"		// ���е�����
		"([-\\w$]*|<init>|<clinit>)"								// ������
		"[(]("
		"(?:" SmaliTypePrefix RegexOnlySmaliBaseType ")*"				// �������
		")[)]"
		"(" SmaliTypePrefix RegexOnlySmaliBaseType ")"				// ���ز���
		RegexEnd;
	std::smatch m;
	if (std::regex_search(strDefine, m, std::regex(pMf)) && (m.size() == 5)) {
		// �����ڲ�������ȡ������
		std::string strFlags = m[1];		// ���ű�־
		std::string strName = m[2];			// ��������
		strParamList = m[3];	// �����б��ַ���
		std::string strReturn = m[4];		// ���ص�����

		// ��ȡ�����в����嵥
		listParam = regexGetStringList(strParamList, "^(" SmaliTypePrefix RegexOnlySmaliBaseType ")", 2, 1);

		// ��������Ƿ���ȡ��ȷ
		if (strParamList.size() == 0) {
			CBaseAssert(listParam.size() == 0);
		}

		// �������
		for (auto a = listParam.begin(); a != listParam.end(); a++) {
			useType(CSmaliType(*a, nullptr).getBaseType()->getFullTypeSmaliString(), "<init>()V", true);
		}

		this->setFlags(strFlags);

		strMethodType = strReturn;
		strFunctionName = strName;

		strSignature = strName + "(" + strParamList + ")" + strReturn;

		if ((flag & CSmaliClass::kAccBridge) && (flag & CSmaliClass::kAccSynthetic)) {
			this->setHide();
		}

		if (flag & CSmaliClass::kAccAbstract) {
			this->setAbstract();
		}

		// ����ǩ��
		if (!this->getHide()) {
			this->pClass->insertMethodSignatureType(strSignature);
		}

	}
	else {
		CBaseAssert(0);
	}
}

void CSmaliMethod::makeSymbolList(void) {



	// ����������������
	syntaxDiagram();
}

void CSmaliMethod::insertStringLine(std::string& str, int nLine) {
	// ���뵽�µĽṹ
	insertCode(nLine, str);
}


bool CSmaliMethod::insertCode(int nIndex, std::string& code) {
	std::shared_ptr<CSmaliCodeline> cline = std::make_shared<CSmaliCodeline>(this, nIndex, code);

	if (cline->isMethod) {
		this->codeParam = cline;
	}

	mapCode.insert(std::make_pair(nIndex, cline));
	return true;
}
void CSmaliMethod::clearAllData() {
	mapCode.clear();
	mapListAssignReg.clear();
	mapListUseReg.clear();
}


// �����ʽ
void CSmaliMethod::fillOneCodeExp(std::vector<std::shared_ptr<CSyntaxNode>> thread, int nThreadIndex, std::shared_ptr<CSmaliCodeline> code, std::vector<std::string>& listMode, std::string& outStr) {
	for (auto a = listMode.begin(); a != listMode.end(); a++) {
		std::string strString = stringhelper::trim((*a).substr(1, (*a).size() - 2));

		if (strString.find("Reg[") == 0) {
			std::string strRegIndex = stringhelper::trim(strString.substr(4, strString.find_first_of(']') - 4));

			bool bOutReg = false;		// ���뻹������Ĵ���
			if (((int)strString.find(".out")) > 0) {
				bOutReg = true;
			}
			if (((int)strString.find(".in")) > 0) {
				CBaseAssert(bOutReg == false);
			}
			else {
				CBaseAssert(bOutReg == true);
			}

			// ����
			int nRegIndex = atoi(strRegIndex.c_str());

			// ��һ���Ĵ���������
			auto itReg = code->listAllRegName.find(nRegIndex);
			if (itReg == code->listAllRegName.end()) {
				CBaseAssert(0);
			}

			// �ҵ��Ĵ����б�
			std::vector<std::shared_ptr<CSmaliRegister>> listReg;
			if (bOutReg) {
				listReg = code->getOutputRegs();
			}
			else {
				listReg = code->getInputRegs();
			}

			// �ж�һ��Ҫ��ȡ������
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

			// ����滻�Ĵ���
			for (auto b = listReg.begin(); b != listReg.end(); b++) {
				if ((*b)->regName() == itReg->second) {
					if (strAttr == "name") {
						bool bReplaced = false;
#if 1
						// ���ϲ���,�����滻
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
						std::string strClass = (*b)->getVar()->getVarType()->getCppType();
						stringhelper::replace(outStr, *a, strClass);
					}
					else if (strAttr == "dtype") {
						auto a1 = (*b)->getVar();
						auto b1 = a1->getVarType();
						std::string strClass = b1->getCppDefineType();
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
					std::string strClass = CSmaliType(param.returnType, this->pClass).getCppType();
					stringhelper::replace(outStr, *a, strClass);
				}
				else if (cType == 'F') {
					stringhelper::replace(outStr, *a, param.methodName);
				}
				else if (cType == 'C') {
					std::string strClass = CSmaliType(param.objectType, this->pClass).getCppType();
					stringhelper::replace(outStr, *a, strClass);
				}
				else if ((cType == 'T') || (cType == 'P')) {
					// ��һ�� list ָ��
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
					CBaseAssert(0);
				}
			}
			else if (strStringIndex == "invoke") {
				char cType = strString[strlen("const[invoke].FS-")];
				std::regex invokePoly(
					"^\\s*"				// ��ʼ����
					"(invoke-polymorphic|invoke-polymorphic/range)\\s*"		// ָ��
					"\\{\\s*([^\\{]*)\\}\\s*"	// �Ĵ����嵥
					",\\s*"
					"(L[\\w/$.-]+;)"			// ��������
					"->"
					"([^(]+)"				// ������
					"(\\([^\\)]*\\))"		// �������1
					"([\\[]*L[\\w/$.-]+;|[\\[]*B|[\\[]*C|[\\[]*D|[\\[]*F|[\\[]*I|[\\[]*J|[\\[]*S|[\\[]*Z|V)\\s*"	// ���ز���
					",\\s*"				// �ָ����
					"\\(([^\\)]*)\\)\\s*"	// �������2
					"([\\[]*L[\\w/$.-]+;|[\\[]*B|[\\[]*C|[\\[]*D|[\\[]*F|[\\[]*I|[\\[]*J|[\\[]*S|[\\[]*Z|V)\\s*"	// ���ز���
					"$");			// ��������
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
						std::string strClass = CSmaliType(m[8], this->pClass).getCppType();
						stringhelper::replace(outStr, *a, strClass);
					}
					else if (cType == 'F') {
						stringhelper::replace(outStr, *a, m[4]);
					}
					else if (cType == 'C') {
						std::string strClass = CSmaliType(m[3], this->pClass).getCppType();
						stringhelper::replace(outStr, *a, strClass);
					}
					else if ((cType == 'T') || (cType == 'P')) {

						// ��һ�� list ָ��
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
						CBaseAssert(0);
					}
				}
				else {
					CBaseAssert(0);
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
					//��������ʽ������ı��и�
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
						CBaseAssert(0);
					}


					CBaseAssert(CSmaliType(strObjectType, nullptr).isJavaType());
					std::string strData;
					if (cType == 'C') {
						strData = CSmaliType(strObjectType, this->pClass).getCppType();
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
						CBaseAssert(0);
					}
					stringhelper::replace(outStr, *a, strData);

				}
				else if (((int)strString.find(".Class")) > 0) {
					std::string strNumber = code->symbols[nStringIndex];
					std::string strData = CSmaliType(strNumber, this->pClass).getCppType();
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

					//this->pMethod->pClass->listImportSaver->checkJavaClass("Ljava/lang/String;");
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
			CBaseAssert(0);
		}
	}
}

// ģ�����й���,�Ի����з���
// ���� C++ ���a�� ��ģ��ģʽ�ͷ�ģ��ģʽ��ģ��ģʽ���� h �ļ��� ���� C ���a
void CSmaliMethod::runToCppCode(bool inTemplate) {
	// ��һ�α��������߳�,�������д���
	for (auto a = listRunThreads.begin(); a != listRunThreads.end(); a++) {

		std::vector<int> listRunInst;

		bool bCatchAll = false;

		for (int b = 0; b < (*a).size(); b++) {			// b ��ǰ�� node
			listRunInst.push_back(-1);
			// ����ָ��ѭ��
			bool bNewClass = false;
			for (int c = 0; c < ((*a)[b])->listInstIndex.size(); c++) {		// c �ǵ�ǰָ����
				auto it = mapCode.find(((*a)[b])->listInstIndex[c]);
				if ((it != mapCode.end()) && (it->second->strCCodeLine.size() == 0)) {

					listRunInst.push_back(it->first);

					if (it->second->info) {
						// ÿһ�еĴ�������
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

						// ������еĲ���ģ��
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

						// ��Ҫ������ߵı���
						if ((it->second->assign && (it->second->assign->getUsedCount() > 1) && (strDefOp.length() > 0))) {
							// �������ʽ�б�����, ��Ҫ�����ﶨ�������

							if (strDefType == "auto") {
								//strCodeLine.append(strDefType).append(" ");
								if (((int)it->second->strCode.find("move-exception")) > 0) {
									strDefType = "std::any";
								}
							}
							{
								// ����Ԥ����
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
								strCodeLine = " ";	// �����
							}
							else if (((int)strDefExp.find("getCatchExcetionFromList")) == 0) {
								strCodeLine.append("tryCatchExcetionList").append(".back()").append(";");
							}
							else {
								strCodeLine.append(strDefExp).append(";");
							}
						}
						// ֻ��һ���õ�,��ô�Ͳ���Ҫ��
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
									CBaseAssert(0);
								}
								strDefExp = "";
							}

							// û������Ĵ��������
							if (((int)strDefExp.find("<init>")) > 0) {
								std::string strCall;
								if ((int)strDefExp.find("this->") == 0) {	// �����ǹ��캯��
									int nFind = (int)strDefExp.find("<init>");
									strCall = strDefExp.substr(nFind + strlen("<init>"), strDefExp.length() - nFind + strlen("<init>"));
									if (strCall == "()") {
										strCall = "";
									}
									else {
										// ���������ø��๹��
										auto regList = it->second->getInputRegs();
										CBaseAssert(regList.size() > 0);
										std::string strCehckTypeName = regList[0]->getCheckedType()->getCppType();
										strCehckTypeName.append("::").append(strCall);
										strCall = strCehckTypeName;
									}
									it->second->strDefExp = strCall;
									strDefExp = strCall;
								}
								else {
									// ���� new ���
									auto regList = it->second->getInputRegs();
									CBaseAssert(regList.size() > 0);
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

								CBaseAssert(((*a)[b])->nextType == CSyntaxNode::eNextType::NEXT_BRANCH_SWITCH);
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

							// �����������Ҫ��ʰ
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
						it->second->strCCodeLine.push_back(strSmaliDef);		// �{ԇ�õ�

						// ����ģ��
						if (inTemplate) {
							std::string strTemplateParam = this->pClass->getTemplateDefineString(this);
							it->second->strCCodeLine.push_back(strTemplateParam);
						}
						else {
							if (this->listTemplateParam.size() > 0) {
								std::string strTemplateParam = this->pClass->getTemplateDefineString(this);
								it->second->strCCodeLine.push_back(strTemplateParam);
							}
						}

						it->second->strCCodeLine.push_back(this->getMethodString(OUT_CPP, inTemplate));
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
							// ��ʼ���� try goto;
							for (auto a = this->listTryCatchRecord.begin(); a != this->listTryCatchRecord.end(); a++) {
								if (a->strEndTag == it->second->symbols[0]) {

									if (a->strCatch == ".catch") {
										std::string strCatch = "catch (";
										strCatch.append(CSmaliType(a->strCatchType, this->pClass).getCppType());
										strCatch.append(" e)").append("{");

										it->second->strCCodeLine.push_back(strCatch);

										it->second->strCCodeLine.push_back("\ttryCatchExcetionList.push_back(e);");

										std::string strCatchGoto = "\tgoto label";
										strCatchGoto.append(a->strGotoTag);
										stringhelper::replace(strCatchGoto, ":", "_");
										it->second->strCCodeLine.push_back(strCatchGoto.append(";"));

										it->second->strCCodeLine.push_back("}");


										// ����Ԥ����
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

										// ����ȴ��������ʱ����Ҫʹ�� throw�������κβ��������е��쳣���׳�

										std::string strCatchGoto = "\tgoto label";
										strCatchGoto.append(a->strGotoTag);
										stringhelper::replace(strCatchGoto, ":", "_");
										it->second->strCCodeLine.push_back(strCatchGoto.append(";"));

										it->second->strCCodeLine.push_back("}");
									}
									else {
										CBaseAssert(0);
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
						CBaseAssert(0);
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
			CBaseAssert(0);
		}
	}
}

std::string CSmaliMethod::getMethodString(int outType, bool inTemplate) {
	std::string strMethod = "";

	std::string strType = CSmaliType(strMethodType, nullptr).getBaseType()->getCppDefineType();

	std::string strMethodNameTmp = strFunctionName;

	// ����Ҫ��һ������, C++ �� h �ļ�����Ҫ�޸�

	std::string strTmp = pClass->strMethodRenameTranslation(this->strSignature);
	if (strTmp.size() > 0) {
		strMethodNameTmp = strTmp;
	}


	if (strMethodNameTmp == "delete") {
		strMethodNameTmp = "_delete_";
	}

#if 1
	stringhelper::replace(strMethodNameTmp, "-", "_");
	stringhelper::replace(strMethodNameTmp, "+", "_p_");
	stringhelper::replace(strMethodNameTmp, "$", "_S_");
#endif

	if (strMethodNameTmp == "<init>") {
		if (outType == CSmaliAbstract::OUT_CPP) {
			strMethod.append(this->getClassType()->getBaseType()->getCppType())
				.append("::")
				.append(this->getClassType()->getBaseType()->getCppShortType())
				.append("(");
		}
		else {
			// �����ģ��
			if (inTemplate) {
				strMethod.append(this->getClassType()->getBaseType()->getCppType());
#if 0
				std::string strTemplateParam = this->pMethod->pClass->getTemplateUseString();
				strMethod.append(strTemplateParam);
#endif
				strMethod.append("::");
			}
			strMethod.append(this->getClassType()->getBaseType()->getCppShortType()).append("(");

			// ������������
			std::string strDes = "virtual ~";
			strDes.append(this->getClassType()->getBaseType()->getCppShortType()).append("()");
			this->pClass->setDestructor(strDes);
		}
	}
	else if (strMethodNameTmp == "<clinit>") {

		// ��̬��ʼ������
		if (isStatic && (outType == CSmaliAbstract::OUT_H)) {
			strMethod.append("static ");
		}
		if (outType == CSmaliAbstract::OUT_CPP) {
			strMethod.append(strType).append(" ")
				.append(this->getClassType()->getBaseType()->getCppType())
				.append("::")
				.append("static_cinit").append("(");
		}
		else {
			strMethod.append(strType).append(" ").append("static_cinit").append("(");
			std::string strStaticInitCall = this->getClassType()->getBaseType()->getCppType().append("::");
			strStaticInitCall.append("static_cinit()");
			this->pClass->addStaticInited(strStaticInitCall);
		}
	}
	else {

		// ��������
		if (outType == CSmaliAbstract::OUT_CPP) {
			strMethod.append(strType).append(" ")
				.append(this->getClassType()->getBaseType()->getCppType())
				.append("::")
				.append(strMethodNameTmp).append("(");
		}
		else {

			if (isStatic && (outType == CSmaliAbstract::OUT_H)) {
				if (!inTemplate) {
					strMethod.append("static ");
				}
			}

			strMethod.append(strType).append(" ");
			if (isStatic && (outType == CSmaliAbstract::OUT_H)) {
			}
			else {
				if (this->pClass->listTemplateParam.size() == 0) {
					if (!this->getAbstract()) {
						strMethod.append("virtual ");
					}
				}
			}

			// �����ģ��
			if (inTemplate) {
				strMethod.append(this->getClassType()->getBaseType()->getCppType());
#if 0
				std::string strTemplateParam = this->pMethod->pClass->getTemplateUseString();
				strMethod.append(strTemplateParam);
#endif
				strMethod.append("::");
			}

			strMethod.append(strMethodNameTmp).append("(");
		}
	}

	// ��������
	for (int i = 0; i < codeParam->regsIn.size(); i++) {
		if ((i == 0) && isStatic == 0) {
			// this
		}
		else {
			std::string strType2 = codeParam->regsIn[i]->getVar()->getVarType()->getCppDefineType();
			std::string strName2 = codeParam->regsIn[i]->getVar()->getVarName();

			strMethod.append(strType2).append(" ").append(strName2);
			if (((size_t)i + 1) < codeParam->regsIn.size()) {
				strMethod.append(",");
			}
		}
	}
	for (int i = 0; i < codeParam->regsOut.size(); i++) {
		if ((i == 0) && isStatic == 0) {
			// this
		}
		else {
			std::string strType2 = codeParam->regsOut[i]->getVar()->getVarType()->getCppDefineType();
			std::string strName2 = codeParam->regsOut[i]->getVar()->getVarName();

			strMethod.append(strType2).append(" ").append(strName2);
			if (((size_t)i + 1) < codeParam->regsOut.size()) {
				strMethod.append(",");
			}
		}
	}

	// ������β
	strMethod.append(")");

	return strMethod;
}

// rename Var
// �Ա�����������
bool CSmaliMethod::renameVar(std::vector<std::shared_ptr<CSyntaxNode>> listNode) {

	// �޸�����������ģ��
	// �����ڵ�ע��
	if (!this->strAnnotationSignature.empty()) {
		auto mStart = mapCode.begin();
		CBaseAssert(mStart->second->symbols[0] == ".method");

		// ��¼ǩ������
		{
			std::string strFileName = this->pClass->getFilePath();
			std::string strMethodRc = mStart->second->strCode;
			stringhelper::trim(strMethodRc);
			TestAnnotationSignature::insertMethodRecord(strFileName, strMethodRc, strAnnotationSignature);
		}

		// ���´���ǩ��
		{
			AnnotationMethodSignature ann = TestAnnotationSignature::methodResolver(mStart->second->strCode, this->strAnnotationSignature, this);
			mStart->second->pMethod->strMethodType = ann.strReturnType;
			int nParamStart = (int)(mStart->second->regsOut.size() - ann.listParamType.size());
			for (int i = nParamStart, r = nParamStart, m = 0; i < mStart->second->regsOut.size(); i++, m++, r++) {
				mStart->second->regsOut[i]->setCheckedType(ann.listParamType[m]);
			}
		}
	}

	// ���úüĴ�������,��һ������, �����ظ�
	// ֻҪ�Ǹ�ֵ�ľʹ���һ��
	int k0 = 0;
	for (auto i = mapListAssignReg.begin(); i != mapListAssignReg.end(); i++) {
		if (i->second->setRegVarName(stringhelper::formatString("var%d", k0))) {
			k0++;
		}
	}

	// �������е��߳�, �������������ù�ϵ
	this->GroupSameVar->clearSameVarRecorder();

	for (auto aThread = listRunThreads.begin(); aThread != listRunThreads.end(); aThread++) {
		std::vector<int> listRunInst;
		std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<CSmaliRegister>>>> mapRegList;
		std::map<std::string, std::string> mapLocalVarName;
		for (int b = 0; b < (*aThread).size(); b++) {			// b ��ǰ�� node

			listRunInst.push_back(-1);

			// ����ָ��ѭ��
			for (int c = 0; c < ((*aThread)[b])->listInstIndex.size(); c++) {		// c �ǵ�ǰָ����
				// ((*a)[b])->listInstIndex.begin()
				auto it = mapCode.find(((*aThread)[b])->listInstIndex[c]);
				if (it != mapCode.end()) {

					listRunInst.push_back(it->first);

					// ǿ�����ò���
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
								if ((*findit)->regName() == strRegName) { // �Ĵ���������ͬ
									// Ŀ���������ʹ����
									(*findit)->getVar()->setCVarForceVarName(strVarName);
									bFindOutReg = true;
								}
								else {
									CBaseAssert(0);
								}
							}
							CBaseAssert(bFindOutReg);
						}
						else {
							CBaseAssert(0);
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
								//CBaseAssert(0);
								it_var->second = strVarName;
							}
							else {
								mapLocalVarName.insert(std::make_pair(strRegName, strVarName));
							}

							bool bFindOutReg = false;
							auto itmap = mapRegList.find(strRegName);
							if (itmap != mapRegList.end()) {
								auto findit = itmap->second->rbegin();
								if ((*findit)->regName() == strRegName) { // �Ĵ���������ͬ
									// Ŀ���������ʹ����
									(*findit)->getVar()->setCVarForceVarName(strVarName);
									bFindOutReg = true;
								}
								else {
									CBaseAssert(0);
								}
							}
							else {
								// �����ļĴ���û�б�ʹ��
							}
							//CBaseAssert(bFindOutReg);
						}
						else {
							CBaseAssert(0);
						}
					}
					//     .end local v0    # "c":I
					else if ((it->second->symbols.size() > 2) && (it->second->symbols[0] == ".end") && (it->second->symbols[1] == ".local")) {
						std::smatch m;
						if (std::regex_search(it->second->strCode, m, std::regex("^\\s*[.]end\\s+local\\s+([pv][0-9]*)\\s*.+$")) && (m.size() == 2)) {
							std::string strRegName = m[1];
							auto it_var = mapLocalVarName.find(strRegName);
							if (it_var == mapLocalVarName.end()) {
								CBaseAssert(0);
							}
							else {
								mapLocalVarName.erase(it_var);
							}
						}
						else {
							CBaseAssert(0);
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
								//CBaseAssert(0);
								mapLocalVarName.insert(std::make_pair(strRegName, strVarName));
							}
							else {
								it_var->second = strVarName;
							}

							bool bFindOutReg = false;
							auto itmap = mapRegList.find(strRegName);
							if (itmap != mapRegList.end()) {
								auto findit = itmap->second->rbegin();
								if ((*findit)->regName() == strRegName) { // �Ĵ���������ͬ
									// Ŀ���������ʹ����
									(*findit)->getVar()->setCVarForceVarName(strVarName);
									bFindOutReg = true;
								}
								else {
									CBaseAssert(0);
								}
							}
							else {
								// �����ļĴ���û�б�ʹ��
							}
							//CBaseAssert(bFindOutReg);
						}
						else {
							CBaseAssert(0);
						}
					}

					// �������е�����Ĵ���
					std::vector<std::shared_ptr<CSmaliRegister>> listInReg = it->second->getInputRegs();
					for (auto d = listInReg.begin(); d != listInReg.end(); d++) {

					tryAgain:
						bool bFindOutReg = false;

						auto itmap = mapRegList.find((*d)->regName());
						if (itmap != mapRegList.end()) {
							auto findit = itmap->second->rbegin();
							if ((*findit)->regName() == (*d)->regName()) { // �Ĵ���������ͬ
								// Ŀ���������ʹ����
								if ((*findit)->getVar()->addUse(*d)) {
									// ����ʹ��Ŀ�����
									(*d)->setVar((*findit)->getVar());	// ��������
								}
								bFindOutReg = true;

								// ʹ�� mapLocalVarName ������������
#if 1
								// ȥ�жϵ�ǰ�Ĵ���������
								auto localVarIt = mapLocalVarName.find((*d)->regName());
								if (localVarIt != mapLocalVarName.end()) {
									(*findit)->getVar()->setCVarForceVarName(localVarIt->second);
								}
#endif
							}
							else {
								CBaseAssert(0);
							}
						}

						// û���ҵ�,������ smali �Ĵ����ı������
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
						CBaseAssert(bFindOutReg == true);
					}

					std::vector<std::shared_ptr<CSmaliRegister>> listOutReg = it->second->getOutputRegs();
					for (auto ss = listOutReg.begin(); ss != listOutReg.end(); ss++) {



						auto itmap = mapRegList.find((*ss)->regName());
						if (itmap == mapRegList.end()) {
							mapRegList.insert(std::make_pair((*ss)->regName(), std::make_shared<std::vector<std::shared_ptr<CSmaliRegister>>>()));
							itmap = mapRegList.find((*ss)->regName());
						}
						CBaseAssert(itmap != mapRegList.end());
						itmap->second->push_back(*ss);	// ��ӵ�����
					}
				}
				else {
					CBaseAssert(0);
				}
			}
		}
	}


	// ���úüĴ�������,�ڶ�������, �����ظ�
	int k1 = 0;
	for (auto i = mapListAssignReg.begin(); i != mapListAssignReg.end(); i++) {
		if (i->second->getVar()->getUsedCount() > 1) {	// ��ʹ�õ���������1
			if (i->second->setRegVarName(stringhelper::formatString("cVar%d", k1))) {
				k1++;
				// ���һ������
				i->second->getVar()->resolveType();
			}

		}
	}

	return true;
}

// ����ַ�����ģ��
std::vector<std::string> CSmaliMethod::getExpModeStringList(std::string& str) {
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

// �ǼǼĴ���
bool CSmaliMethod::regCheckIn(std::shared_ptr<CSmaliRegister> reg) {
	if (reg->isInput()) {
		std::string strRegSign = reg->getSignature();
		auto a = this->mapListUseReg.find(strRegSign);
		if (a != this->mapListUseReg.end()) {
			CBaseAssert(0);
		}
		this->mapListUseReg.insert(std::make_pair(reg->getSignature(), reg));
	}
	else {
		std::string strRegSign = reg->getSignature();
		auto a = this->mapListAssignReg.find(strRegSign);
		if (a != this->mapListAssignReg.end()) {
			CBaseAssert(0);
		}
		this->mapListAssignReg.insert(std::make_pair(reg->getSignature(), reg));
	}

	return true;
}

void CSmaliMethod::syntaxDiagram() {

	std::shared_ptr<CSyntaxNode> nodeTools = std::make_shared<CSyntaxNode>(&this->mapCode);

	//if (((CSmaliMethod*)this->pHostedMethod)->getMethodName() == "containsSlow") {
	//	printf("test");
	//}

	// ��������ͼ
	this->syntaxRoot = nodeTools->createSyntaxNodeRoot(this->mapCode);

	this->listTryCatchRecord = nodeTools->listTryCatchRecord;

	// ģ�岿��
	this->strAnnotationSignature = nodeTools->strAnnotationSignature;

	// ���������߳�
	this->listRunThreads = nodeTools->runAllThread(this->mapCode, this->syntaxRoot);

	// �����������е� �Ĵ���
	renameVar(this->syntaxRoot);
}

CodeDumper CSmaliMethod::dumpCodeForTemplate() {
	CodeDumper d;

	if (this->mapCode.size() > 2) {	// == 2 ���Ǵ��麯��
		int nInstIndex = 0;
		// ���� CPP �������ɣ��ϳ���ȷ�Ĵ���
		// ��Ϊ�ڲ�����ʹ�� goto 
		// Ϊ�˱��� error C2362 �Ĵ���
		// ��Ҫ�����е����Զ���ı���ȫ��������ǰ��
		listVarPreDefine.clear();
		runToCppCode(true);

		for (auto a = mapCode.begin(); a != mapCode.end(); a++, nInstIndex++) {
			if (a->second->nDeep < 0) {
				d.subIndent();
				d.newline();
			}
			if (a->second->strCCodeLine.size() > 0) {
				if ((a->second->strCCodeLine.size() == 1) && (a->second->strCCodeLine[0] == " ")) {
					// ������������
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
				d.addIndent();
				d.newline();
			}

			// ���ӱ�������
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

CodeDumper CSmaliMethod::dumpCode(int outType) {
	CodeDumper d;

	if (outType == OUT_CPP) {

		if (this->mapCode.size() > 2) {	// == 2 ���Ǵ��麯��
			int nInstIndex = 0;
			// ���� CPP �������ɣ��ϳ���ȷ�Ĵ���
			// ��Ϊ�ڲ�����ʹ�� goto 
			// Ϊ�˱��� error C2362 �Ĵ���
			// ��Ҫ�����е����Զ���ı���ȫ��������ǰ��
			listVarPreDefine.clear();
			runToCppCode();

			for (auto a = mapCode.begin(); a != mapCode.end(); a++, nInstIndex++) {
				if (a->second->nDeep < 0) {
					d.subIndent();
					d.newline();
				}
				if (a->second->strCCodeLine.size() > 0) {
					if ((a->second->strCCodeLine.size() == 1) && (a->second->strCCodeLine[0] == " ")) {
						// ������������
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
					d.addIndent();
					d.newline();
				}

				// ���ӱ�������
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
	else if (outType == OUT_H) {
		for (auto a = mapCode.begin(); a != mapCode.end(); a++) {
			if (((int)a->second->strCode.find(".method")) >= 0) {
				d.add(this->getMethodString(OUT_H, false));
				// ���麯��
				if (this->mapCode.size() == 2) {
					d.add(" = 0");
				}
				else if (this->mapCode.size() < 2) {
					CBaseAssert(0);
				}
				d.endl().newline();
				break;
			}
		}
	}
	else {
		CBaseAssert(0);
	}

	return d;
}

void CSmaliMethod::collectAllCode(std::map<std::string, std::shared_ptr<CTypeDefine>>& usedTypeMap) {
	this->collect(usedTypeMap);

	for (auto a = this->mapCode.begin(); a != this->mapCode.end(); a++) {
		a->second->collect(usedTypeMap);
	}
}
