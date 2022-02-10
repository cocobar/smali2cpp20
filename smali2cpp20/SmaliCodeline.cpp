
#include "SmaliCodeline.h"
#include "SmaliMethod.h"
#include "SmaliClass.h"
#include "SmaliCodeCache.h"
#include "CVar.h"
#include "config.hpp"
#include "SmaliType.h"
#include <regex>
#include "BaseAssert.h"

CSmaliCodeline::CSmaliCodeline() {
	nCodeLine = 0;
}

CSmaliCodeline::~CSmaliCodeline() {
}

std::vector<std::shared_ptr<CSmaliRegister>>& CSmaliCodeline::getInputRegs() {
	return this->regsIn;
}

std::vector<std::shared_ptr<CSmaliRegister>>& CSmaliCodeline::getOutputRegs() {
	return this->regsOut;
}

unsigned long CSmaliCodeline::isJavaMathodTypeFlags(std::string str) {
	if (str == "public") return CSmaliClass::kAccPublic;
	if (str == "private") return CSmaliClass::kAccPrivate;
	if (str == "protected") return CSmaliClass::kAccProtected;
	if (str == "static") return CSmaliClass::kAccStatic;
	if (str == "final") return CSmaliClass::kAccFinal;
	if (str == "synchronized") return CSmaliClass::kAccSynchronized;
	if (str == "bridge") return CSmaliClass::kAccBridge;
	if (str == "varargs") return CSmaliClass::kAccVarargs;
	if (str == "abstract") return CSmaliClass::kAccAbstract;
	if (str == "strict") return CSmaliClass::kAccStrict;
	if (str == "synthetic") return CSmaliClass::kAccSynthetic;
	return 0;
}

CSmaliCodeline::CSmaliCodeline(CSmaliMethod* pMethod, CSmaliCodeCache* pHostCache, int nLine, std::string& strCodeLine) {
	this->assign.reset();
	this->pMethod = pMethod;
	this->pCache = pHostCache;
	nCodeLine = nLine;
	strCode = strCodeLine;
	listCatchTag.clear();
	strCCodeLine.clear();
	isMethod = false;
	reNamed = false;
	nDeep = 0;

	symbols = stringhelper::splitToSymbol(strCodeLine);
	info = nullptr;
	nUsedInConstructor = 0;
	nForceDontShow = 0;
	bitState = 1 << ASM_CODE_INIT;

	// ��ʼ���Ĵ�����Ϣ
	listCodeLineReg();
}

// ���һ��û�ж��ŵ��ַ���
std::string CSmaliCodeline::getStringNoComma(std::string str) {
	std::string strSymbol = str;
	if (strSymbol.size() > 0) {
		if (strSymbol[strSymbol.size() - 1] == ',') {
			return strSymbol.substr(0, strSymbol.size() - 1);
		}
	}
	return strSymbol;
}

bool CSmaliCodeline::regCheckIn(std::shared_ptr<CSmaliRegister> reg) {

	// ��ָ�����ϵǼ�һ������
	if (reg->isOutput()) {
		// ������Ĵ���,��ô�ͷ���һ������
		if (reg->getVar() == nullptr) {
			this->assign = std::make_shared<CVar>(reg, ((CSmaliMethod*)(this->pMethod))->GroupSameVar, this->pMethod);
			reg->setVar(this->assign);
		}
	}
	return pCache->regCheckIn(reg);
}

std::string CSmaliCodeline::dumpAllRegs() {
	std::string strRet = "regs:";
	for (auto a = this->regsIn.begin(); a != this->regsIn.end(); a++) {
		strRet.append((*a)->getSignature()).append(";");
	}
	for (auto a = this->regsOut.begin(); a != this->regsOut.end(); a++) {
		strRet.append((*a)->getSignature()).append(";");
	}
	return strRet;
}


std::string CSmaliCodeline::getMethodPermissionString() {
	return getCppMethodPermissionString(this->methodFlag).append(" : ");
}


std::string CSmaliCodeline::getMethodString(bool inTemplate) {
	std::string strMethod = "";

	std::string strType = SmaliType(strMethodType).getBaseType()->getCppDefineType(this->pMethod->pClass);

	std::string strMethodNameTmp = strMethodName;

	// ����Ҫ��һ������, C++ �� h �ļ�����Ҫ�޸�

	std::string strTmp = pMethod->pClass->strMethodRenameTranslation(this->strMethodSignature);
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
		if (this->pMethod->pClass->eOutType == config::OUT_CPP) {
			strMethod.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppType(this->pMethod->pClass))
				.append("::")
				.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppShortType())
				.append("(");
		}
		else {
			// �����ģ��
			if (inTemplate) {
				strMethod.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppType(this->pMethod->pClass));
#if 0
				std::string strTemplateParam = this->pMethod->pClass->getTemplateUseString();
				strMethod.append(strTemplateParam);
#endif
				strMethod.append("::");
			}
			strMethod.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppShortType()).append("(");

			// ������������
			std::string strDes = "virtual ~";
			strDes.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppShortType()).append("()");
			//SmaliImportSaver::setDestructor(strDes);
			pMethod->pClass->listImportSaver->setDestructor(strDes);
		}
	}
	else if (strMethodNameTmp == "<clinit>") {

		// ��̬��ʼ������
		if (isStatic && (this->pMethod->pClass->eOutType == config::OUT_H)) {
			strMethod.append("static ");
		}
		if (this->pMethod->pClass->eOutType == config::OUT_CPP) {
			strMethod.append(strType).append(" ")
				.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppType(this->pMethod->pClass))
				.append("::")
				.append("static_cinit").append("(");
		}
		else {
			strMethod.append(strType).append(" ").append("static_cinit").append("(");
			std::string strStaticInitCall = SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppType(this->pMethod->pClass).append("::");
			strStaticInitCall.append("static_cinit()");
			//SmaliImportSaver::addStaticInited(strStaticInitCall);
			pMethod->pClass->listImportSaver->addStaticInited(strStaticInitCall);
		}
	}
	else {

		// ��������
		if (this->pMethod->pClass->eOutType == config::OUT_CPP) {
			strMethod.append(strType).append(" ")
				.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppType(this->pMethod->pClass))
				.append("::")
				.append(strMethodNameTmp).append("(");
		}
		else {

			if (isStatic && (this->pMethod->pClass->eOutType == config::OUT_H)) {
				if (!inTemplate) {
					strMethod.append("static ");
				}
			}

			strMethod.append(strType).append(" ");
			if (isStatic && (this->pMethod->pClass->eOutType == config::OUT_H)) {
			}
			else {
				if (this->pMethod->pClass->listTemplateParam.size() == 0) {
					if (!this->pMethod->getAbstract()) {
						strMethod.append("virtual ");
					}
				}
			}

			// �����ģ��
			if (inTemplate) {
				strMethod.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppType(this->pMethod->pClass));
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
	for (int i = 0; i < regsIn.size(); i++) {
		if ((i == 0) && isStatic == 0) {
			// this
		}
		else {
			std::string strType2 = SmaliType(regsIn[i]->getVar()->getVarType()).getCppDefineType(this->pMethod->pClass);
			std::string strName2 = regsIn[i]->getVar()->getVarName();

			strMethod.append(strType2).append(" ").append(strName2);
			if (((size_t)i + 1) < regsIn.size()) {
				strMethod.append(",");
			}
		}
	}
	for (int i = 0; i < regsOut.size(); i++) {
		if ((i == 0) && isStatic == 0) {
			// this
		}
		else {
			std::string strType2 = SmaliType(regsOut[i]->getVar()->getVarType()).getCppDefineType(this->pMethod->pClass);
			std::string strName2 = regsOut[i]->getVar()->getVarName();

			strMethod.append(strType2).append(" ").append(strName2);
			if (((size_t)i + 1) < regsOut.size()) {
				strMethod.append(",");
			}
		}
	}

	// ������β
	strMethod.append(")");

	return strMethod;
}

void CSmaliCodeline::insertRegToList(std::shared_ptr<CSmaliRegister> reg) {
	if (reg->isInput()) {
		regsIn.push_back(reg);
	}
	else {
		regsOut.push_back(reg);
	}
}

bool CSmaliCodeline::isMethodDefine() {
	if (this->symbols.size() > 0) {
		if (this->symbols[0] == ".method") {
			return true;
		}
	}
	return false;
}

std::vector<std::string> CSmaliCodeline::getJavaTypeList(std::string str) {
	std::vector<std::string> listType;
	std::string strSymbol = stringhelper::trim(str);
	strSymbol.append(" ");
	size_t sLen = strSymbol.size();
	int nSymbolStart = -1;
	int nType = 0;
	for (size_t i = 0; i < sLen; i++) {
		if (nSymbolStart >= 0) {
			if (nType > 0) {
				if (nType == 1) {
					if (strSymbol[i] == ';') {
						listType.push_back(strSymbol.substr(nSymbolStart, i - nSymbolStart + 1));
						nSymbolStart = -1;
					}
				}
				else if (nType == 2) {
					if (strSymbol[i] != '[') {
						if (strSymbol[i] == 'L') {
							nType = 1;
						}
						else if ((strSymbol[i] == 'B') || (strSymbol[i] == 'C') || (strSymbol[i] == 'D') || (strSymbol[i] == 'F') ||
							(strSymbol[i] == 'I') || (strSymbol[i] == 'J') || (strSymbol[i] == 'S') || (strSymbol[i] == 'Z') || (strSymbol[i] == 'V')) {
							listType.push_back(strSymbol.substr(nSymbolStart, i - nSymbolStart + 1));
							nSymbolStart = -1;
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
			else {
				BaseAssert(0);
			}
		}
		else {
			if (strSymbol[i] == 'L') {
				nSymbolStart = (int)i;
				nType = 1;
			}
			else if (strSymbol[i] == '[') {
				nSymbolStart = (int)i;
				nType = 2;
			}
			else if ((strSymbol[i] == 'B') || (strSymbol[i] == 'C') || (strSymbol[i] == 'D') || (strSymbol[i] == 'F') ||
				(strSymbol[i] == 'I') || (strSymbol[i] == 'J') || (strSymbol[i] == 'S') || (strSymbol[i] == 'Z') || (strSymbol[i] == 'V')) {
				listType.push_back(strSymbol.substr(i, 1));
			}
			else if (strSymbol[i] == ' ') {
				if (i != (sLen - 1)) {
					BaseAssert(0);
				}
			}
			else {
				BaseAssert(0);
			}
		}
	}
	return listType;
}

bool CSmaliCodeline::isJavaClassName(std::string str) {
	if ((str[0] == 'L') && (str[str.size() - 1]) == ';') return true;
	return false;
}

bool CSmaliCodeline::isJavaType(std::string str, CSmaliMethod* pMethod) {

	if (str.size() > 0) {
		std::string strSymbol = stringhelper::trim(str);
		size_t nStart = strSymbol.find_first_not_of("[");
		strSymbol = strSymbol.substr(nStart, strSymbol.size() - nStart);

		if (strSymbol == "B") return true;
		if (strSymbol == "C") return true;
		if (strSymbol == "D") return true;
		if (strSymbol == "F") return true;
		if (strSymbol == "I") return true;
		if (strSymbol == "J") return true;
		if (strSymbol == "S") return true;
		if (strSymbol == "Z") return true;
		if (strSymbol == "V") return true;

		// ����һ��
		//SmaliImportSaver::checkJavaClass(strSymbol);

		if (pMethod) {
			pMethod->pClass->listImportSaver->checkJavaClass(strSymbol);
		}

		return isJavaClassName(strSymbol);

	}
	return false;
}

bool CSmaliCodeline::isJavaFunction(std::string str, CSmaliMethod* pMethod) {
	std::string strSymbol = stringhelper::trim(str);
	size_t nStart = strSymbol.find_first_of("(");
	size_t nEnd = strSymbol.find_last_of(")");
	if ((nStart > 0) && (nEnd > 0) && (nEnd > nStart)) {
		std::string strParam = strSymbol.substr(nStart + 1, nEnd - nStart - 1);
		std::string strType = strSymbol.substr(nEnd + 1, strSymbol.size() - nEnd - 1);
		std::vector<std::string> listParam = getJavaTypeList(strParam);

		for (auto a = listParam.begin(); a != listParam.end(); a++) {
			if (!isJavaType(*a, pMethod)) {
				return false;
			}
		}
		return isJavaType(strType, pMethod);
	}
	return false;
}

std::string CSmaliCodeline::getMethodSignature() {
	for (auto k = this->symbols.begin() + 1; k != this->symbols.end(); k++) {

		if (isJavaMathodTypeFlags(*k) > 0) {		// ��÷���Ȩ��
		}
		else if (isJavaMathodConstructorFlags(*k) > 0) {
		}
		else if (isJavaFunction(*k, this->pMethod)) {
			std::string strSymbol = stringhelper::trim(*k);
			size_t nStart = strSymbol.find_first_of("(");
			size_t nEnd = strSymbol.find_last_of(")");
			if ((nStart > 0) && (nEnd > 0) && (nEnd > nStart)) {
				std::string strParam = strSymbol.substr(nStart + 1, nEnd - nStart - 1);
				std::string strType = strSymbol.substr(nEnd + 1, strSymbol.size() - nEnd - 1);
				std::string strName = strSymbol.substr(0, nStart);
				std::vector<std::string> listParam = getJavaTypeList(strParam);
			}
			return *k;
		}
		else if ((*k) == "declared-synchronized") {

		}
		else {
			BaseAssert(0);
		}
	}
	return std::string("");
}

struct CSmaliCodeline::invokeParam CSmaliCodeline::getInvokeParamList(std::string str) {

	struct invokeParam param;
	std::string strSymbol = stringhelper::trim(str);

	size_t nS = strSymbol.find_first_of("{");
	size_t nE = strSymbol.find_last_of("},");

	std::string strInvokeName = stringhelper::trim(strSymbol.substr(0, nS));
	std::string strParamList = stringhelper::trim(strSymbol.substr(nS + 1, nE - nS - 2));

	std::string strNext = stringhelper::trim(strSymbol.substr(nE + 2, strSymbol.size() - nE - 2));

	size_t nStartMathodName = strNext.find("->");
	std::string strObjectType = strNext.substr(0, nStartMathodName);

	// BaseAssert(SmaliType(strObjectType).isJavaType());

	// ������ò�������
	// <init>(Lcom/google/gson/internal/Excluder;Lcom/google/gson/FieldNamingStrategy;Ljava/util/Map;ZZZZZZLcom/google/gson/LongSerializationPolicy;Ljava/util/List;)V
	std::string strNext2 = stringhelper::trim(strNext.substr(nStartMathodName + 2, strNext.size() - nStartMathodName - 2));

	size_t nStart = strNext2.find_first_of("(");
	size_t nEnd = strNext2.find_last_of(")");
	if ((nStart > 0) && (nEnd > 0) && (nEnd > nStart)) {
		std::string strParam = strNext2.substr(nStart + 1, nEnd - nStart - 1);
		std::string strType = strNext2.substr(nEnd + 1, strSymbol.size() - nEnd - 1);
		std::string strName = strNext2.substr(0, nStart);
		std::vector<std::string> listParam = getJavaTypeList(strParam);
		param.methodName = strName;
		param.returnType = strType;
		param.paramTypeList = listParam;
	}

	// strParamList  ����Ĵ����б�
	if ((int)strParamList.find("..") > 0) {
		// ����Ƿ�Χ
		size_t nDotStart = strParamList.find("..");

		std::string strRegStart = stringhelper::trim(strParamList.substr(0, nDotStart));
		std::string strRegEnd = stringhelper::trim(strParamList.substr(nDotStart + 2, strParamList.size() - nDotStart - 2));
		char cType = strRegStart[0];
		int regStart = atoi(strRegStart.substr(1, strRegStart.size() - 1).c_str());
		int regEnd = atoi(strRegEnd.substr(1, strRegEnd.size() - 1).c_str());
		for (int i = regStart; i <= regEnd; i++) {
			std::string strRegNew = stringhelper::stringhelper::formatString("%c%d", cType, i);
			param.paramList.push_back(strRegNew);
		}
	}
	else {
		// �������б�
		std::vector<std::string> result = stringhelper::split(strParamList, std::string(","));
		for (auto a = result.begin(); a != result.end(); a++) {
			param.paramList.push_back(stringhelper::trim(*a));
		}
	}

	param.invokeName = strInvokeName;
	param.objectType = strObjectType;
	return param;
}

unsigned long CSmaliCodeline::isJavaMathodConstructorFlags(std::string str) {
	if (str == "constructor") return CSmaliClass::kAccConstructor;
	return 0;
}

std::string CSmaliCodeline::getCppMethodPermissionString(unsigned long val) {
	if (val & CSmaliClass::kAccPublic) {
		return "public";
	}
	if (val & CSmaliClass::kAccPrivate) {
		return "private";
	}
	if (val & CSmaliClass::kAccProtected) {
		return "protected";
	}
	return "public";
}

// �г����еļĴ���
void CSmaliCodeline::listCodeLineReg() {

	// �Ѿ��й��˾Ͳ�������
	if (this->bitState & (1 << ASM_CODE_LIST_REG)) {
		return;
	}

	if (this->symbols[0][0] == ':') {		// �кű�ǩ

	}
	if (this->symbols[0] == ".method") {
		std::string strMethodS;
		isMethod = true;
		for (auto k = this->symbols.begin() + 1; k != this->symbols.end(); k++) {
			if ((*k) == "static") {
				isStatic = 1;
			}
			if (isJavaMathodTypeFlags(*k) > 0) {		// ��÷���Ȩ��
				methodFlag |= isJavaMathodTypeFlags(*k);
			}
			else if (isJavaMathodConstructorFlags(*k) > 0) {
				methodFlag |= isJavaMathodConstructorFlags(*k);
			}
			else if (isJavaFunction(*k, this->pMethod)) {

				if (methodFlag & CSmaliClass::kAccConstructor) {
					isConstructor = 1;
				}

				std::string strSymbol = stringhelper::trim(*k);

				strMethodS = strSymbol;
				strMethodSignature = strSymbol;

				size_t nStart = strSymbol.find_first_of("(");
				size_t nEnd = strSymbol.find_last_of(")");
				if ((nStart > 0) && (nEnd > 0) && (nEnd > nStart)) {
					std::string strParam = strSymbol.substr(nStart + 1, nEnd - nStart - 1);
					std::string strType = strSymbol.substr(nEnd + 1, strSymbol.size() - nEnd - 1);
					std::string strName = strSymbol.substr(0, nStart);
					std::vector<std::string> listParam = getJavaTypeList(strParam);

					pMethod->setMethodType(strType);
					pMethod->setMethodName(strName);

					strMethodType = strType;
					strMethodName = strName;
					if (strType == "V") {
						isVold = 1;
					}

					int nParamIndex = 0;
					int nRegIndex = 0;
					if (isStatic == 0) {
						nParamIndex = 1;
						nRegIndex = 1;

						std::string strClassName = ((CSmaliMethod*)pMethod)->getClassName();
						std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(0, CSmaliRegister::REG_OUTPUT, std::string("p0"), strClassName, this, __LINE__);
						this->regCheckIn(reg);
						reg->setCheckedType(strClassName);
						reg->setRegVarName("this");
						this->insertRegToList(reg);
					}

					std::string ssstrType;
					std::string ssstrName;
					for (auto a = listParam.begin(); a != listParam.end(); a++) {
						ssstrType = (*a);
						ssstrName = stringhelper::formatString("p%d", nParamIndex);
						if ((ssstrType == "D") || (ssstrType == "J") || (ssstrType == "W")) {
							nParamIndex++;
						}

						// ��������
						std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(nRegIndex, CSmaliRegister::REG_OUTPUT, ssstrName, ssstrType, this, __LINE__);
						this->regCheckIn(reg);
						reg->setCheckedType(ssstrType);
						this->insertRegToList(reg);

						nParamIndex++;
						nRegIndex++;
					}
				}
			}
			else if ((*k) == "declared-synchronized") {

			}
			else if ((*k) == "native") {

			}
			else if ((*k) == "strictfp") {

			}
			else {
				BaseAssert(0);
			}
		}

		// �����ͱ�����ȥ
		if (methodFlag & CSmaliClass::kAccPublic) {
			this->pMethod->setPublicType();
		}
		else if (methodFlag & CSmaliClass::kAccPrivate) {
			this->pMethod->setPrivateType();
		}
		else if (methodFlag & CSmaliClass::kAccProtected) {
			this->pMethod->setProtctedType();
		}

		if ((methodFlag & CSmaliClass::kAccBridge) && (methodFlag & CSmaliClass::kAccSynthetic)) {
			this->pMethod->setHide();
		}

		if (methodFlag & CSmaliClass::kAccAbstract) {
			this->pMethod->setAbstract();
		}

		// ����ǩ��
		if (!this->pMethod->getHide()) {
			this->pMethod->pClass->insertMethodSignatureType(strMethodS);
		}
	}
	else {
		this->info = instructionhelper::getInstructInfo(this->symbols[0]);

		if (this->info != nullptr) {
			const char* strRegTypeList = this->info->pParamFormat.c_str();

			if (strlen(strRegTypeList) > 0) {
				int strLen = (int)strlen(strRegTypeList);
				BaseAssert((strLen % 2) == 0);

				for (int i = 0; i < strLen; i += 2) {

					char _cType = strRegTypeList[i + 1];
					char strTypeBuf[4] = { 0 };
					strTypeBuf[0] = _cType;
					std::string strRegType = strTypeBuf;

					// ���żӿ�
					if ((_cType == 'W') || (_cType == 'D') || (_cType == 'J')) {
						//param.regName.append("-");
					}
					else if (_cType == '?') {
						continue;		// ����ȷ�����´�����
					}

					if (strRegTypeList[i] == '*') {
						std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>((int)(i / 2), CSmaliRegister::REG_OUTPUT,
							getStringNoComma(this->symbols[((int)(i >> 1) + 1)]), strRegType, this, __LINE__);
						this->regCheckIn(reg);
						std::shared_ptr<CSmaliRegister> reg2 = std::make_shared<CSmaliRegister>((int)(i / 2), CSmaliRegister::REG_INPUT,
							getStringNoComma(this->symbols[((int)(i >> 1) + 1)]), strRegType, this, __LINE__);
						this->regCheckIn(reg2);
						this->insertRegToList(reg);
						this->insertRegToList(reg2);
					}
					else if (strRegTypeList[i] == '+') {
						std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>((i / 2), CSmaliRegister::REG_OUTPUT,
							getStringNoComma(this->symbols[((int)(i >> 1) + 1)]), strRegType, this, __LINE__);

						this->regCheckIn(reg);
						this->insertRegToList(reg);
					}
					else if (strRegTypeList[i] == '-') {
						std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>((i / 2), CSmaliRegister::REG_INPUT,
							getStringNoComma(this->symbols[((int)(i >> 1) + 1)]), strRegType, this, __LINE__);
						this->regCheckIn(reg);
						this->insertRegToList(reg);
					}
					else {
						BaseAssert(0);
					}
				}
			}



			switch (this->info->instFormat) {
			case k10x://,  // op 
			{
				// nop
				// return-void
				// return-void-no-barrier
				// unused-xx
			}
			break;
			case k12x://,  // op vA, vB
			{
				//��move vA, vB������vB�Ĵ�����ֵ����vA�Ĵ�����Դ�Ĵ�����Ŀ�ļĴ�����Ϊ4λ��
				//��move-wide vA, vB����Ϊ4λ�ļĴ����Ը�ֵ��Դ�Ĵ�����Ŀ�ļĴ�����Ϊ4λ��64λ���
				//��move-object vA, vB����Ϊ����ֵ��Դ�Ĵ�����Ŀ�ļĴ�����Ϊ4λ��
				//��array-length vA, vB������ȡ����vB�Ĵ���������ĳ��Ȳ���ֵ����vA�Ĵ��������鳤��ָ�����������Ŀ������

				// �� float-to-int  ��v2�Ĵ����е�float����ֵת��Ϊint���ͣ�����ֵ��v1�Ĵ���
				//��neg-int�������������󲹡�
				//��not-int�������������󷴡�
				//��neg-long�����Գ��������󲹡�				// ����-(v0,v1) �����������(v2,v3)
				//��not-long�����Գ��������󷴡�
				//��neg-float�����Ե����ȸ��������󲹡�
				//��neg-double������˫���ȸ��������󲹡�		// ����-(v0,v1) �����������(v2,v3)��
				//��int-to-long������������ת��Ϊ�����͡�
				//��int-to-float������������ת��Ϊ�����ȸ���������
				//��int-to-dobule������������ת��Ϊ˫���ȸ�������
				//��long-to-int��������������ת��Ϊ���͡�
				//��long-to-float��������������ת��Ϊ�����ȸ����͡�
				//��long-to-double��������������ת��Ϊ˫���ȸ����͡�
				//��float-to-int�����������ȸ�����ת��Ϊ���͡�
				//��float-to-long�����������ȸ�����ת��Ϊ����������
				//��float-to-double�����������ȸ�����ת��Ϊ˫���ȸ���������	//ת��vy�Ĵ����е�float��ֵΪdouble��ֵ����vx,vx+1
				//��double-to-int������˫���ȸ�����ת��Ϊ���͡�
				//��double-to-long������˫���ȸ�����ת��Ϊ�����͡�
				//��double-to-float������˫���ȸ�����ת��Ϊ�����ȸ����͡�	//ת��v4,v5�Ĵ����е�double��ֵΪfloat��ֵ����v0��
				//��int-to-byte����������ת��Ϊ�ֽ��͡�
				//��int-to-char����������ת��Ϊ�ַ��͡�
				//��int-to-short����������ת��Ϊ�����͡�

				// ��������, �����Ĵ����������룬��һ���Ĵ��������
				// add-int/2addr v1, v2 ��v1��v2�Ĵ����е�ֵ��ӣ�����ֵ��v1�Ĵ���
				// add-int/2addr
				// ...
				// rem-double/2addr		// ����vx,vx+1 % vy,vy+1�����������vx,vx+1��
			}
			break;
			case k11n://,  // op vA, #+B
			case k21s://,  // op vAA, #+BBBB
			case k21h://,  // op vAA, #+BBBB00000[00000000]
			case k31i://,  // op vAA, #+BBBBBBBB
			case k51l://,  // op vAA, #+BBBBBBBBBBBBBBBB
			{
				// const/4 v1,			0x0 ���ֻ������4λ��ֵ(4��������λ) 1 111 7
				// const/16				���Է�16λ
				// const-wide/16		16λ����չ��64λ
				// const/high16			#����һ������ ���ֻ�����Ÿ�16λ��ֵ ����0xFFFF0000ĩ��λ��0 �������λ0XFFFF		const/high16 v3, -0x7fff0000
				// const-wide/high16	����16λ���������16λ��vx,vx+1�Ĵ��������ڳ�ʼ��double ֵ��
				// const				����int �ͳ�����vx��
				// const-wide/32		����32λ������vx,vx+1�Ĵ�������չint�ͳ�����long������
				// const-wide			����64λ������vx,vx+1�Ĵ�����
			}
			break;

			case k22x://,  // op vAA, vBBBB
			case k32x://,  // op vAAAA, vBBBB
			{
				//move/from16			�ƶ�vy�����ݵ�vx��vy������64K�Ĵ�����Χ���ڣ���vx�����������256�Ĵ�����Χ���ڡ�
				//move-wide/from16		�ƶ�һ��long/doubleֵ����vy��vx��vy������64K�Ĵ�����Χ���ڣ���vx�����������256�Ĵ�����Χ���ڡ�
				//move-object/from16	�ƶ��������ã���vy��vx��vy���Դ���64K�Ĵ�����ַ��vx���Դ���256�Ĵ�����ַ��
				// move/16				��16λ��v2�Ĵ����е�ֵ���뵽16λ��v1�Ĵ�����
				// move-wide/16			��16λ��v2�Ĵ����ԣ�һ�飩�е�ֵ���뵽16λ��v1�Ĵ�����
				// move-object/16		��16λ��v2�Ĵ����еĶ���ָ�����뵽v1��16λ���Ĵ�����
			}
			break;
			case k11x://,  // op vAA
			{
				// move-result ����һ���������õĽ��ֵ�Ƶ�vx��									�������ú����
				// move-result-wide	���ϸ��������õĽ�� ( ����Ϊ double �� long ) �Ƶ�vx��		�������ú����
				// �ƶ���һ�η������õ�long/double�ͷ���ֵ��v2,v3��
				// move-result-object	����һ���������ú�õ��Ķ�������ø�ֵ�� vx				�������ú����
				// 
				// 
				// move-exception	����������ִ�й������׳����쳣��ֵ�� vx						���
				// �����������׳��쳣ʱ�ƶ��쳣�������õ�v25��
				// return	����v0�Ĵ����е�ֵ									����
				// return-wide	����v0,v1�Ĵ����е�double/longֵ��				����
				// return-object	����v0�Ĵ����еĶ������á�					����
				// monitor-enter	���v3�Ĵ����еĶ������õļ�������			����
				// monitor-exit		�ͷ�v3�Ĵ����еĶ������õļ�������			����
				// throw v0			�׳��쳣�����쳣�����������v0�Ĵ�����	����

				if (((int)this->symbols[0].find("move-result") >= 0)) {

					std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>((-1), CSmaliRegister::REG_INPUT, std::string("rr"), "", this, __LINE__);
					this->regCheckIn(reg);
					this->insertRegToList(reg);

				}
				else if (((int)this->symbols[0].find("return") >= 0)) {
					std::string newObjectOutReg = getStringNoComma(this->symbols[1]);

					if (this->getInputRegs().size() == 1) {
						auto inputRegs = this->getInputRegs();
						if ((inputRegs[0]->regName() == newObjectOutReg) && inputRegs[0]->hasRegType()) {
							//BaseAssert(SmaliType(((CSmaliMethod*)pHostMethod)->getMethodType()).isJavaType());
							inputRegs[0]->setCheckedType(((CSmaliMethod*)pMethod)->getMethodType());
						}
					}
					else {
						BaseAssert(0);
					}
				}
			}
			break;
			case k10t://,  // op +AA
			case k20t://,  // op +AAAA
			case k30t://,  // op +AAAAAAAA
			{
				// goto	// kBranch | kUnconditional
				// goto/16 // kBranch | kUnconditional
				// goto/32	kBranch | kUnconditional
			}
			break;

			case k21t://,  // op vAA, +BBBB
			{
				// if-eqz	// kContinue | kBranch
				// if-nez	// 
				// if-ltz
				// if-gez
				// if-gtz
				// if-lez
			}
			break;
			case k22t://,  // op vA, vB, +CCCC
			{
				// if-eq // kContinue | kBranch
				// if-ne
				// if-lt
				// if-ge
				// if-gt
				// if-le
			}
			break;

			case k21c://,  // op vAA, thing@BBBB
			case k31c://,  // op vAA, thing@BBBBBBBB
			{
				// const-string			// ͨ���ַ�����������һ���ַ��������Ҹ�ֵ���Ĵ���vAA						���
				// const-class			// ͨ������������� ���͵�����		const-class v1, Ljava/lang/Integer;		���
				// // const-string/jumbo		ͬ const-string														���
				// check-cast			// ʧ�ܻ��׳� ClassCastException	check-cast p0, Ljava/lang/Number;		����
				// new-instance			new-instance v1, Ljava/math/BigDecimal;										���
				// sget					// �����ֶ�ID��ȡ��̬int���ֶε�vx��										����
				// sget-wide			// �����ֶ�ID��ȡ��̬double/long���ֶε�vx,vx+1��
				// sget-object			sget-object v1, Ljava/lang/Float;->TYPE:Ljava/lang/Class;
				// sget-boolean
				// sget-byte
				// sget-char
				// sget-short
				// sput					// �����ֶ�ID��vx�Ĵ����е�ֵ��ֵ��int�;�̬�ֶ�							���
				// sput-wide
				// sput-object
				// sput-boolean
				// sput-byte
				// sput-char
				// sput-short
				// 
				// ����������
				// const-method-handle
				// const-method-type

				if (("const-string" == this->symbols[0]) || ("const-string/jumbo" == this->symbols[0])) {
					// const-string v1, "Failed parsing JSON source: "
					std::string newObjectOutReg = getStringNoComma(this->symbols[1]);

					if (this->getOutputRegs().size() == 1) {
						auto sRegs = this->getOutputRegs();
						if ((sRegs[0]->regName() == newObjectOutReg) && sRegs[0]->hasRegType()) {
							BaseAssert(sRegs[0]->regType() == "O");
							sRegs[0]->setCheckedType(std::string("Ljava/lang/String;"));
						}
					}
					else {
						BaseAssert(0);
					}
				}
				else if (("const-class" == this->symbols[0])) {
					// const-class v1, Ljava/lang/Integer;
					std::string newObjectOutReg = getStringNoComma(this->symbols[1]);

					if (this->getOutputRegs().size() == 1) {
						auto sRegs = this->getOutputRegs();
						if ((sRegs[0]->regName() == newObjectOutReg) && sRegs[0]->hasRegType()) {
							BaseAssert(sRegs[0]->regType() == "O");
							BaseAssert(SmaliType(this->symbols[2]).isJavaType());
							sRegs[0]->setCheckedType(this->symbols[2]);
						}
					}
					else {
						BaseAssert(0);
					}
				}
				else if ("check-cast" == this->symbols[0]) {
					// check-cast p0, Ljava/lang/Number;

					std::string newObjectOutReg = getStringNoComma(this->symbols[1]);

					if (this->getInputRegs().size() == 1) {
						auto sRegs = this->getInputRegs();
						if ((sRegs[0]->regName() == newObjectOutReg) && sRegs[0]->hasRegType()) {
							BaseAssert(sRegs[0]->regType() == "O");
							BaseAssert(SmaliType(this->symbols[2]).isJavaType());
							sRegs[0]->setCheckedType(this->symbols[2]);
						}
					}
					else {
						BaseAssert(0);
					}

				}
				else if ("new-instance" == this->symbols[0]) {
					std::string newObjectOutReg = getStringNoComma(this->symbols[1]);

					if (this->getOutputRegs().size() == 1) {
						auto sRegs = this->getOutputRegs();
						if ((sRegs[0]->regName() == newObjectOutReg) && sRegs[0]->hasRegType()) {
							BaseAssert(sRegs[0]->regType() == "O");
							BaseAssert(SmaliType(this->symbols[2]).isJavaType());
							sRegs[0]->setCheckedType(this->symbols[2]);
						}
					}
					else {
						BaseAssert(0);
					}
				}
				else if (((int)this->symbols[0].find("sget") >= 0) || ((int)this->symbols[0].find("sput") >= 0)) {
					std::string strObjectType;
					// sget-object v1, Ljava/lang/Float;->TYPE:Ljava/lang/Class;
					size_t nFindDot = this->symbols[2].find_first_of(":");
					if (nFindDot > 0) {
						std::string strName = this->symbols[2].substr(0, nFindDot);	// Lcom/google/gson/stream/JsonToken;->END_DOCUMENT
						std::string strType = stringhelper::trim(this->symbols[2].substr(nFindDot + 1, this->symbols[2].length() - 1));	// Lcom/google/gson/stream/JsonToken;  ��һ����������
						BaseAssert(SmaliType(strType).isJavaType());
						strObjectType = stringhelper::trim(strName.substr(0, strName.find("->")));  // �ڶ�����������
						BaseAssert(SmaliType(strObjectType).isJavaType());


						if (((int)this->symbols[0].find("sget") >= 0)) {

							std::string newObjectOutReg = getStringNoComma(this->symbols[1]);

							if (this->getOutputRegs().size() == 1) {
								auto sRegs = this->getOutputRegs();
								if ((sRegs[0]->regName() == newObjectOutReg) && sRegs[0]->hasRegType()) {
									//BaseAssert(sRegs[0]->regType() == "O");
									BaseAssert(SmaliType(strType).isJavaType());
									sRegs[0]->setCheckedType(strType);
								}
							}
							else {
								BaseAssert(0);
							}
						}
						else {
							// ������������

							std::string newObjectOutReg = getStringNoComma(this->symbols[1]);

							if (this->getInputRegs().size() == 1) {
								auto sRegs = this->getInputRegs();
								if ((sRegs[0]->regName() == newObjectOutReg) && sRegs[0]->hasRegType()) {
									// BaseAssert(sRegs[0]->regType() == "O");
									BaseAssert(SmaliType(strType).isJavaType());
									sRegs[0]->setCheckedType(strType);
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

				if ((this->symbols[0] == "const-method-handle") || (this->symbols[0] == "const-method-type")) {
					BaseAssert(0);
				}

			}
			break;
			case k22c://,  // op vA, vB, thing@CCCC
			{
				// instance-of		vB �Ķ��������Ƿ��� thing@CCCC��bool ���͸� vA		instance-of v0, p0, Ljava/math/BigInteger;
				// new-array		vB �Ǵ�С�� vA �ǽ��								new-array v0, v0, [Ljava/lang/Class;
				// iget				vB ��ʵ�� vA �����
				// iget-wide
				// iget-object		iget-object p1, p1, Lcom/google/gson/JsonPrimitive;->value:Ljava/lang/Object;
				// iget-boolean
				// iget-byte
				// iget-char
				// iget-short
				// iput				vB ��ʵ�� vA ������		iput v0, p0, Lcom/google/gson/GsonBuilder;->dateStyle:I
				// iput-wide
				// iput-object
				// iput-boolean
				// iput-byte
				// iput-char
				// iput-short
				// 
				// iget-quick
				// iget-wide-quick
				// iget-object-quick
				// iput-quick
				// iput-wide-quick
				// iput-object-quick
				// iput-boolean-quick
				// iput-byte-quick
				// iput-char-quick
				// iput-short-quick
				// iget-boolean-quick
				// iget-byte-quick
				// iget-char-quick
				// iget-short-quick
				if (((int)this->symbols[0].find("-quick") > 0)) {
					BaseAssert(0);
				}


				if ("instance-of" == this->symbols[0]) {

					std::string newObjectOutReg = getStringNoComma(this->symbols[2]);

					if (this->getInputRegs().size() == 1) {
						auto sRegs = this->getInputRegs();
						if ((sRegs[0]->regName() == newObjectOutReg) && sRegs[0]->hasRegType()) {
							BaseAssert(sRegs[0]->regType() == "O");
							BaseAssert(SmaliType(this->symbols[3]).isJavaType());
							sRegs[0]->setCheckedType(this->symbols[3]);
						}
					}
					else {
						BaseAssert(0);
					}
				}
				else if ("new-array" == this->symbols[0]) {

					std::string newObjectOutReg = getStringNoComma(this->symbols[1]);

					if (this->getOutputRegs().size() == 1) {
						auto sRegs = this->getOutputRegs();
						if ((sRegs[0]->regName() == newObjectOutReg) && sRegs[0]->hasRegType()) {
							BaseAssert(sRegs[0]->regType() == "A");
							BaseAssert(this->symbols[3][0] == '[');
							BaseAssert(SmaliType(this->symbols[3]).isJavaType());
							sRegs[0]->setCheckedType(this->symbols[3]);
						}
					}
					else {
						BaseAssert(0);
					}
				}
				else if (((int)this->symbols[0].find("iget") >= 0) || ((int)this->symbols[0].find("iput") >= 0)) {
					std::string strObjectType;
					// strCode = "    iget-object v0, p0, Ljava/lang/-$Lambda$S9HjrJh0nDg7IyU6wZdPArnZWRQ;->-$f0:Ljava/lang/Object;"
					// iget-object v0, p0, Lcom/google/gson/Gson$FutureTypeAdapter;->delegate:Lcom/google/gson/TypeAdapter;
					size_t nFindDot = this->symbols[3].find_first_of(":");
					if (nFindDot > 0) {
						std::string strName = this->symbols[3].substr(0, nFindDot);	// Lcom/google/gson/stream/JsonToken;->END_DOCUMENT
						std::string strType = stringhelper::trim(this->symbols[3].substr(nFindDot + 1, this->symbols[3].length() - 1));	// Lcom/google/gson/stream/JsonToken;  ��һ����������
						BaseAssert(SmaliType(strType).isJavaType());
						strObjectType = stringhelper::trim(strName.substr(0, strName.find_last_of("->") - 1));  // �ڶ�����������


						std::regex igetRegex("^(L[0-9a-zA-Z_/$-]+;)->([^>:]+):(\\[*L[0-9a-zA-Z_/$-]+;|\\[*[BCDFIJSZV])$");
						std::smatch m;
						bool found = std::regex_search(this->symbols[3], m, igetRegex);
						if (found && (m.size() == 4)) {
							strName = m[2];
							strType = m[3];
							strObjectType = m[1];
						}
						else {
							BaseAssert(0);
						}
						BaseAssert(SmaliType(strObjectType).isJavaType());

						if (((int)this->symbols[0].find("iget") >= 0)) {
							// ��һ��������ڶ�������
							std::string newObjectReg1 = getStringNoComma(this->symbols[1]);
							std::string newObjectReg2 = getStringNoComma(this->symbols[2]);


							if (this->getOutputRegs().size() == 1) {
								auto sRegs = this->getOutputRegs();
								if ((sRegs[0]->regName() == newObjectReg1) && sRegs[0]->hasRegType()) {
									BaseAssert(SmaliType(strType).isJavaType());
									sRegs[0]->setCheckedType(strType);
								}
							}
							else {
								BaseAssert(0);
							}

							if (this->getInputRegs().size() == 1) {
								auto sRegs = this->getInputRegs();
								if ((sRegs[0]->regName() == newObjectReg2) && sRegs[0]->hasRegType()) {
									BaseAssert(sRegs[0]->regType() == "O");
									BaseAssert(SmaliType(strType).isJavaType());
									sRegs[0]->setCheckedType(strType);
								}
							}
							else {
								BaseAssert(0);
							}
						}
						else {
							// ������������

							std::string newObjectReg1 = getStringNoComma(this->symbols[1]);
							std::string newObjectReg2 = getStringNoComma(this->symbols[2]);

							if (this->getInputRegs().size() == 2) {
								auto sRegs = this->getInputRegs();
								if (((sRegs[0]->regName() == newObjectReg1) && sRegs[0]->hasRegType()) &&
									((sRegs[1]->regName() == newObjectReg2) && sRegs[1]->hasRegType())) {
									BaseAssert(SmaliType(strType).isJavaType());
									sRegs[0]->setCheckedType(strType);

									BaseAssert(SmaliType(strObjectType).isJavaType());
									sRegs[1]->setCheckedType(strObjectType);
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
			}
			break;
			case k23x://,  // op vAA, vBB, vCC
			{
				// �Ƚ�vBB��vCC��ֵ���������vAA��     ���  ����  ����
				// cmpl-float
				// cmpg-float
				// cmpl-double
				// cmpg-double
				// cmp-long

				// #��ȡ����v2����ĵ�v3��Ԫ��v2		���  ����  ����
				// aget   aget-object v2, v2, v3
				// aget-wide
				// aget-object
				// aget-boolean
				// aget-byte
				// aget-char
				// aget-short

				// aput									����  ����  ����
				// aput-wide
				// aput-object
				// aput-boolean
				// aput-byte
				// aput-char
				// aput-short

				// add-int			add-int v0, p1, p2	v0 = p1 + p2		���  ����  ����
				//...
				// shr-int
				// add-long
				//...
				// shr-long
				// add-float
				//...
				// rem-float
				// add-double
				//...
				// rem-double
			}
			break;
			case k22b://,  // op vAA, vBB, #+CC
			case k22s://,  // op vA, vB, #+CCCC
			{
				// add-int/lit8		// kContinue, kAdd | kRegCFieldOrConstant		add-int/lit8 v0, v1, lit8	v0 = v1 + lit8
				// rsub-int/lit8
				// mul-int/lit8
				// div-int/lit8
				// rem-int/lit8		����v2 % 3�����������v0��
				// and-int/lit8
				// or-int/lit8
				// xor-int/lit8
				// shl-int/lit8
				// shr-int/lit8
				// ushr-int/lit8

				// add-int/lit16	kAdd | kRegCFieldOrConstant
				// rsub-int
				// mul-int/lit16
				// div-int/lit16
				// rem-int/lit16
				// and-int/lit16
				// or-int/lit16
				// xor-int/lit16
			}
			break;

			case k31t://,  // op vAA, +BBBBBBBB
			{
				// fill-array-data   ��  +BBBBBBBBָ�� ������ ��䵽 vAA ������ȥ   vAA������
				// packed-switch	 ȥ +BBBBBBBBָ���������ȥ��ȡ��				vAA������
				// sparse-switch     ͬ�ϣ�ֻ�����ݽṹ��һ��
			}
			break;


			case k35c://,  // op {vC, vD, vE, vF, vG}, thing@BBBB (B: count, A: vG)
			case k3rc://,  // op {vCCCC .. v(CCCC+AA-1)}, meth@BBBB
			{
				// filled-new-array		// filled-new-array/range {v19..v21}, [B // type@0006
				// invoke-virtual		// invoke-virtual {v0, p1}, Lcom/google/gson/TypeAdapter;->read(Lcom/google/gson/stream/JsonReader;)Ljava/lang/Object;
				// invoke-super
				// invoke-direct
				// invoke-static
				// invoke-interface
				// invoke-virtual-quick
				// invoke-custom
				// 
				// filled-new-array/range
				// invoke-virtual/range
				// invoke-super/range
				// invoke-direct/range
				// invoke-static/range
				// invoke-interface/range
				// invoke-virtual/range-quick
				// invoke-custom/range
				// 
				//invoke-static ���ྲ̬�����ĵ��ã�����ʱ����̬ȷ���ģ�
				//invoke-virtual �鷽�����ã����õķ�������ʱȷ��ʵ�ʵ��ã���ʵ�����õ�ʵ�ʶ����йأ���̬ȷ�ϵģ�һ���Ǵ������η�protected��public�ķ�����
				//invoke-direct û�б����Ƿ����ĵ��ã������ö�̬����ʵ�������õĵ��ã�����ʱ����̬ȷ�ϵģ�һ����private��<init>������
				//invoke-super ֱ�ӵ��ø�����鷽��������ʱ����̬ȷ�ϵġ�
				//invoke-interface ���ýӿڷ��������õķ�������ʱȷ��ʵ�ʵ��ã�����������ʱ��ȷ��һ��ʵ�ִ˽ӿڵĶ���
				int nRegIndexCount = 0;
				if ("filled-new-array" == this->symbols[0]) {
					// filled-new-array {v2, v2}, [I
					// filled-new-array {v3, v3, v3, v3}, [I
					std::vector<std::string> strRegList;
					std::string strType;
					std::regex filled_new("^\\s*filled-new-array\\s*\\{([^}]*)\\}\\s*[,]\\s*(.*)\\s*$");

					std::smatch m;
					bool found = std::regex_search(this->strCode, m, filled_new);
					if (found && (m.size() == 3)) {
						std::string strp1 = m[1];
						strType = m[2];
						std::regex reg("\\s*,\\s*");
						std::sregex_token_iterator pos(strp1.begin(), strp1.end(), reg, -1);
						decltype(pos) end;
						for (; pos != end; ++pos) {
							std::string strReg = stringhelper::trim(pos->str());
							strRegList.push_back(strReg);
						}
					}
					else {
						BaseAssert(0);
					}

					BaseAssert(strType[0] == '[');

					std::string strBaseType = strType.substr(1);

					for (auto a = strRegList.begin(); a != strRegList.end(); a++) {
						std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(nRegIndexCount++, CSmaliRegister::REG_INPUT,
							*a, strBaseType, this, __LINE__);
						this->regCheckIn(reg);
						reg->setCheckedType(strBaseType);
						this->insertRegToList(reg);
					}

					std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(-1, CSmaliRegister::REG_OUTPUT, std::string("rr"), strType, this, __LINE__);
					this->regCheckIn(reg);
					reg->setCheckedType(strType);
					this->insertRegToList(reg);

					break;
					//BaseAssert(0);
				}
				if ("filled-new-array/range" == this->symbols[0]) {
					// filled-new-array/range {v23 .. v24}, [I
					std::vector<std::string> strRegList;
					std::string strType;
					std::regex filled_new("^\\s*filled-new-array/range\\s*\\{\\s*([vp])(\\d+)\\s*..\\s*([vp])(\\d+)\\s*\\}\\s*[,]\\s*(.*)\\s*$");

					std::smatch m;
					bool found = std::regex_search(this->strCode, m, filled_new);
					if (found && (m.size() == 6)) {
						strType = m[5];
						BaseAssert(std::string(m[1]) == std::string(m[3]));
						std::string strVP = std::string(m[1]);
						int nStart = std::atoi(std::string(m[2]).c_str());
						int nEnd = std::atoi(std::string(m[4]).c_str());

						for (int pos = nStart; pos <= nEnd; ++pos) {
							std::string strReg = stringhelper::formatString("%s%d", std::string(m[1]).c_str(), pos);
							strRegList.push_back(strReg);
						}
					}
					else {
						BaseAssert(0);
					}

					BaseAssert(strType[0] == '[');

					std::string strBaseType = strType.substr(1);

					for (auto a = strRegList.begin(); a != strRegList.end(); a++) {
						std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(nRegIndexCount++, CSmaliRegister::REG_INPUT,
							*a, strBaseType, this, __LINE__);
						this->regCheckIn(reg);
						reg->setCheckedType(strBaseType);
						this->insertRegToList(reg);
					}

					std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(-1, CSmaliRegister::REG_OUTPUT, std::string("rr"), strType, this, __LINE__);
					this->regCheckIn(reg);
					reg->setCheckedType(strType);
					this->insertRegToList(reg);

					break;
					//BaseAssert(0);
				}

				invokeParam invokeParam = getInvokeParamList(this->strCode);

				int nRegIndex = 0;
				if (((int)this->symbols[0].find("-static") > 0)) {
					// ȫ���ǲ���
				}
				else {
					// ��һ�����ǲ���
					BaseAssert(invokeParam.paramList.size() > 0);
					std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(nRegIndexCount++, CSmaliRegister::REG_INPUT,
						getStringNoComma(invokeParam.paramList[0]), invokeParam.objectType, this, __LINE__);
					this->regCheckIn(reg);
					reg->setCheckedType(invokeParam.objectType);
					this->insertRegToList(reg);

					nRegIndex = 1;
				}

				for (int i = 0; i < invokeParam.paramTypeList.size(); i++) {
					std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(nRegIndexCount++, CSmaliRegister::REG_INPUT,
						getStringNoComma(invokeParam.paramList[nRegIndex]), invokeParam.paramTypeList[i], this, __LINE__);
					this->regCheckIn(reg);
					reg->setCheckedType(invokeParam.paramTypeList[i]);
					this->insertRegToList(reg);

					if ((invokeParam.paramTypeList[i] == "D") || (invokeParam.paramTypeList[i] == "J")) {
						nRegIndex++;
					}
					nRegIndex++;
				}

				// ������
				//if (invokeParam.returnType != "V") {
				std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(-1, CSmaliRegister::REG_OUTPUT, std::string("rr"), invokeParam.returnType, this, __LINE__);
				this->regCheckIn(reg);
				reg->setCheckedType(invokeParam.returnType);
				this->insertRegToList(reg);
				//}
			}
			break;

			// op {vC, vD, vE, vF, vG}, meth@BBBB, proto@HHHH (A: count)
			// format: AG op BBBB FEDC HHHH
			case k45cc://,
			{
				/*
				*
				invoke-polymorphic {vC, vD, vE, vF, vG}, meth@BBBB, proto@HHHH
				A: ����������4 λ��
				B: ��������������16 λ��
				C: ��������4 λ��
				D..G: �����Ĵ�����ÿ���Ĵ�����ռ 4 λ��
				H: ԭ������������16 λ��	����ָ����ǩ����̬��������ʹ����Ӧ�� move-result* ���彫���ý��������еĻ����洢Ϊ��������ָ�

				�������ñ������ǩ����̬���������� java.lang.invoke.MethodHandle.invoke �� java.lang.invoke.MethodHandle.invokeExact��

				������������һ��֧��������ǩ����̬�����Ķ���

				ԭ������˵�������ṩ�Ĳ������ͺ�Ԥ�ڵķ������͡�

				invoke-polymorphic �ֽ���ִ��ʱ���ܻ������쳣���й���Щ�쳣�����˵���������������ǩ����̬������ API �ĵ���

				������ 038 �����߰汾�� Dex �ļ��С�

					invoke-virtual {v0, p1}, Lcom/google/gson/TypeAdapter;->read(Lcom/google/gson/stream/JsonReader;)Ljava/lang/Object;

					// v0 �� method ָ��
					// p0 �� ��
					// p1 �ǲ���
					// ���������
					// rr = v0->(p0, p1)
					invoke-polymorphic {v0, p0, p1}, Ljava/lang/invoke/MethodHandle;->invoke([Ljava/lang/Object;)Ljava/lang/Object;, (Ljava/lang/invoke/MethodHandle;[Ljava/lang/Object;)Ljava/lang/Object;
					move-result-object v1
				*/
				if ((this->symbols[0] == "invoke-polymorphic") || (this->symbols[0] == "invoke-polymorphic/range")) {
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
						"([\\[]*L[\\w/$.-]+;|[\\[]*B|[\\[]*C|[\\[]*D|[\\[]*F|[\\[]*I|[\\[]*J|[\\[]*S|[\\[]*Z|V)\\s*"
						"$");			// ��������
					std::smatch m;
					bool found = std::regex_search(this->strCode, m, invokePoly);
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
						if (m[1] == "invoke-polymorphic/range") {
							BaseAssert(0);
						}
						else {
							std::vector<std::string> strRegList;
							std::string strp1 = m[2];
							std::regex regReg("\\s*,\\s*");
							std::sregex_token_iterator pos(strp1.begin(), strp1.end(), regReg, -1);
							decltype(pos) end;
							for (; pos != end; ++pos) {
								std::string strReg = stringhelper::trim(pos->str());
								strRegList.push_back(strReg);
							}
							// ȫ���Ĳ���
							std::vector<std::string> strRegTypeList;
							strRegTypeList.push_back(m[3]);		// this ָ������
							std::string strp2 = m[7];
							while (strp2.size() > 0) {
								std::regex regType("^\\s*([\\[]*L[\\w/$.-]+;|[\\[]*B|[\\[]*C|[\\[]*D|[\\[]*F|[\\[]*I|[\\[]*J|[\\[]*S|[\\[]*Z|V)\\s*");
								std::smatch m2;
								bool found = std::regex_search(strp2, m2, regType);
								BaseAssert(found && (m2.size() == 2));
								if (found) {
									strRegTypeList.push_back(m2[1]);
									strp2 = strp2.substr(m2[0].length());
								}
							}

							// ���ز���
							std::string returnType = m[8];

							int nRegIndex = 0;
							int nRegIndexCount = 0;
							for (int i = 0; i < strRegTypeList.size(); i++) {
								std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(nRegIndexCount++, CSmaliRegister::REG_INPUT,
									getStringNoComma(strRegList[nRegIndex]), strRegTypeList[i], this, __LINE__);
								this->regCheckIn(reg);
								reg->setCheckedType(strRegTypeList[i]);
								this->insertRegToList(reg);
								if ((strRegTypeList[i] == "D") || (strRegTypeList[i] == "J")) {
									nRegIndex++;
								}
								nRegIndex++;
							}

							std::shared_ptr<CSmaliRegister> reg = std::make_shared<CSmaliRegister>(-1, CSmaliRegister::REG_OUTPUT, std::string("rr"), returnType, this, __LINE__);
							this->regCheckIn(reg);
							reg->setCheckedType(returnType);
							this->insertRegToList(reg);
						}
					}
					else {
						BaseAssert(0);
					}
				}

				// invoke-polymorphic
			}
			break;

			// op {VCCCC .. v(CCCC+AA-1)}, meth@BBBB, proto@HHHH (AA: count)
			// format: AA op BBBB CCCC HHHH
			case k4rcc://,  // op {VCCCC .. v(CCCC+AA-1)}, meth@BBBB, proto@HHHH (AA: count)
			{
				// invoke-polymorphic/range
				BaseAssert(0);
			}
			break;


			}
		}
		else {
			//BaseAssert(0);
		}
	}

	this->bitState |= (1 << ASM_CODE_LIST_REG);
}