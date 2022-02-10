
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

	// 初始化寄存器信息
	listCodeLineReg();
}

// 获得一个没有逗号的字符串
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

	// 在指令行上登记一个变量
	if (reg->isOutput()) {
		// 是输出寄存器,那么就分配一个变量
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

	// 函数要改一个名字, C++ 和 h 文件都需要修改

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
			// 構建類模板
			if (inTemplate) {
				strMethod.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppType(this->pMethod->pClass));
#if 0
				std::string strTemplateParam = this->pMethod->pClass->getTemplateUseString();
				strMethod.append(strTemplateParam);
#endif
				strMethod.append("::");
			}
			strMethod.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppShortType()).append("(");

			// 增加析构函数
			std::string strDes = "virtual ~";
			strDes.append(SmaliType(((CSmaliMethod*)pMethod)->getClassName()).getBaseType()->getCppShortType()).append("()");
			//SmaliImportSaver::setDestructor(strDes);
			pMethod->pClass->listImportSaver->setDestructor(strDes);
		}
	}
	else if (strMethodNameTmp == "<clinit>") {

		// 静态初始化函数
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

		// 函数声明
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

			// 構建類模板
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

	// 函数参数
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

	// 函数结尾
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

		// 处理一下
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

		if (isJavaMathodTypeFlags(*k) > 0) {		// 获得访问权限
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

	// 处理调用参数类型
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

	// strParamList  处理寄存器列表
	if ((int)strParamList.find("..") > 0) {
		// 这个是范围
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
		// 这里是列表
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

// 列出所有的寄存器
void CSmaliCodeline::listCodeLineReg() {

	// 已经列过了就不再列了
	if (this->bitState & (1 << ASM_CODE_LIST_REG)) {
		return;
	}

	if (this->symbols[0][0] == ':') {		// 行号标签

	}
	if (this->symbols[0] == ".method") {
		std::string strMethodS;
		isMethod = true;
		for (auto k = this->symbols.begin() + 1; k != this->symbols.end(); k++) {
			if ((*k) == "static") {
				isStatic = 1;
			}
			if (isJavaMathodTypeFlags(*k) > 0) {		// 获得访问权限
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

						// 插入数组
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

		// 将类型保存上去
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

		// 保存签名
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

					// 符号加宽
					if ((_cType == 'W') || (_cType == 'D') || (_cType == 'J')) {
						//param.regName.append("-");
					}
					else if (_cType == '?') {
						continue;		// 不能确定的下次再来
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
				//“move vA, vB”：将vB寄存器的值赋给vA寄存器，源寄存器与目的寄存器都为4位。
				//“move-wide vA, vB”：为4位的寄存器对赋值。源寄存器与目的寄存器都为4位。64位宽度
				//“move-object vA, vB”：为对象赋值。源寄存器与目的寄存器都为4位。
				//“array-length vA, vB”：获取给定vB寄存器中数组的长度并将值赋给vA寄存器，数组长度指的是数组的条目个数。

				// 如 float-to-int  将v2寄存器中的float类型值转换为int类型，并赋值给v1寄存器
				//“neg-int”：对整型数求补。
				//“not-int”：对整型数求反。
				//“neg-long”：对长整型数求补。				// 计算-(v0,v1) 并将结果存入(v2,v3)
				//“not-long”：对长整型数求反。
				//“neg-float”：对单精度浮点型数求补。
				//“neg-double”：对双精度浮点型数求补。		// 计算-(v0,v1) 并将结果存入(v2,v3)。
				//“int-to-long”：将整型数转换为长整型。
				//“int-to-float”：将整型数转换为单精度浮点型数。
				//“int-to-dobule”：将整型数转换为双精度浮点数。
				//“long-to-int”：将长整型数转换为整型。
				//“long-to-float”：将长整型数转换为单精度浮点型。
				//“long-to-double”：将长整型数转换为双精度浮点型。
				//“float-to-int”：将单精度浮点数转换为整型。
				//“float-to-long”：将单精度浮点数转换为长整型数。
				//“float-to-double”：将单精度浮点数转换为双精度浮点型数。	//转换vy寄存器中的float型值为double型值存入vx,vx+1
				//“double-to-int”：将双精度浮点数转换为整型。
				//“double-to-long”：将双精度浮点数转换为长整型。
				//“double-to-float”：将双精度浮点数转换为单精度浮点型。	//转换v4,v5寄存器中的double型值为float型值存入v0。
				//“int-to-byte”：将整型转换为字节型。
				//“int-to-char”：将整型转换为字符型。
				//“int-to-short”：将整型转换为短整型。

				// 这里特殊, 两个寄存器都是输入，第一个寄存器是输出
				// add-int/2addr v1, v2 将v1、v2寄存器中的值相加，并赋值给v1寄存器
				// add-int/2addr
				// ...
				// rem-double/2addr		// 计算vx,vx+1 % vy,vy+1并将结果存入vx,vx+1。
			}
			break;
			case k11n://,  // op vA, #+B
			case k21s://,  // op vAA, #+BBBB
			case k21h://,  // op vAA, #+BBBB00000[00000000]
			case k31i://,  // op vAA, #+BBBBBBBB
			case k51l://,  // op vAA, #+BBBBBBBBBBBBBBBB
			{
				// const/4 v1,			0x0 最大只允许存放4位数值(4个二进制位) 1 111 7
				// const/16				可以放16位
				// const-wide/16		16位数扩展到64位
				// const/high16			#定义一个容器 最大只允许存放高16位数值 比如0xFFFF0000末四位补0 存入高四位0XFFFF		const/high16 v3, -0x7fff0000
				// const-wide/high16	存入16位常量到最高16位的vx,vx+1寄存器，用于初始化double 值。
				// const				存入int 型常量到vx。
				// const-wide/32		存入32位常量到vx,vx+1寄存器，扩展int型常量到long常量。
				// const-wide			存入64位常量到vx,vx+1寄存器。
			}
			break;

			case k22x://,  // op vAA, vBBBB
			case k32x://,  // op vAAAA, vBBBB
			{
				//move/from16			移动vy的内容到vx。vy可能在64K寄存器范围以内，而vx则是在最初的256寄存器范围以内。
				//move-wide/from16		移动一个long/double值，从vy到vx。vy可能在64K寄存器范围以内，而vx则是在最初的256寄存器范围以内。
				//move-object/from16	移动对象引用，从vy到vx。vy可以处理64K寄存器地址，vx可以处理256寄存器地址。
				// move/16				将16位的v2寄存器中的值移入到16位的v1寄存器中
				// move-wide/16			将16位的v2寄存器对（一组）中的值移入到16位的v1寄存器中
				// move-object/16		将16位的v2寄存器中的对象指针移入到v1（16位）寄存器中
			}
			break;
			case k11x://,  // op vAA
			{
				// move-result 将上一个方法调用的结果值移到vx中									虚拟引用和输出
				// move-result-wide	将上个方法调用的结果 ( 类型为 double 或 long ) 移到vx中		虚拟引用和输出
				// 移动上一次方法调用的long/double型返回值到v2,v3。
				// move-result-object	将上一个方法调用后得到的对象的引用赋值给 vx				虚拟引用和输出
				// 
				// 
				// move-exception	将本方法在执行过程中抛出的异常赋值给 vx						输出
				// 当方法调用抛出异常时移动异常对象引用到v25。
				// return	返回v0寄存器中的值									引用
				// return-wide	返回v0,v1寄存器中的double/long值。				引用
				// return-object	返回v0寄存器中的对象引用。					引用
				// monitor-enter	获得v3寄存器中的对象引用的监视器。			引用
				// monitor-exit		释放v3寄存器中的对象引用的监视器。			引用
				// throw v0			抛出异常对象，异常对象的引用在v0寄存器。	引用

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
				// const-string			// 通过字符串索引构造一个字符串，并且赋值给寄存器vAA						输出
				// const-class			// 通过类型索引获得 类型的引用		const-class v1, Ljava/lang/Integer;		输出
				// // const-string/jumbo		同 const-string														输出
				// check-cast			// 失败会抛出 ClassCastException	check-cast p0, Ljava/lang/Number;		输入
				// new-instance			new-instance v1, Ljava/math/BigDecimal;										输出
				// sget					// 根据字段ID读取静态int型字段到vx。										输入
				// sget-wide			// 根据字段ID读取静态double/long型字段到vx,vx+1。
				// sget-object			sget-object v1, Ljava/lang/Float;->TYPE:Ljava/lang/Class;
				// sget-boolean
				// sget-byte
				// sget-char
				// sget-short
				// sput					// 根据字段ID将vx寄存器中的值赋值到int型静态字段							输出
				// sput-wide
				// sput-object
				// sput-boolean
				// sput-byte
				// sput-char
				// sput-short
				// 
				// ？？？？？
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
						std::string strType = stringhelper::trim(this->symbols[2].substr(nFindDot + 1, this->symbols[2].length() - 1));	// Lcom/google/gson/stream/JsonToken;  第一个参数类型
						BaseAssert(SmaliType(strType).isJavaType());
						strObjectType = stringhelper::trim(strName.substr(0, strName.find("->")));  // 第二个参数类型
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
							// 两个都是输入

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
				// instance-of		vB 的对象类型是否是 thing@CCCC，bool 类型给 vA		instance-of v0, p0, Ljava/math/BigInteger;
				// new-array		vB 是大小， vA 是结果								new-array v0, v0, [Ljava/lang/Class;
				// iget				vB 是实例 vA 是输出
				// iget-wide
				// iget-object		iget-object p1, p1, Lcom/google/gson/JsonPrimitive;->value:Ljava/lang/Object;
				// iget-boolean
				// iget-byte
				// iget-char
				// iget-short
				// iput				vB 是实例 vA 是输入		iput v0, p0, Lcom/google/gson/GsonBuilder;->dateStyle:I
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
						std::string strType = stringhelper::trim(this->symbols[3].substr(nFindDot + 1, this->symbols[3].length() - 1));	// Lcom/google/gson/stream/JsonToken;  第一个参数类型
						BaseAssert(SmaliType(strType).isJavaType());
						strObjectType = stringhelper::trim(strName.substr(0, strName.find_last_of("->") - 1));  // 第二个参数类型


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
							// 第一个输出，第二个输入
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
							// 两个都是输入

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
				// 比较vBB与vCC的值，结果放在vAA中     输出  输入  输入
				// cmpl-float
				// cmpg-float
				// cmpl-double
				// cmpg-double
				// cmp-long

				// #获取数组v2里面的第v3个元素v2		输出  输入  输入
				// aget   aget-object v2, v2, v3
				// aget-wide
				// aget-object
				// aget-boolean
				// aget-byte
				// aget-char
				// aget-short

				// aput									输入  输入  输入
				// aput-wide
				// aput-object
				// aput-boolean
				// aput-byte
				// aput-char
				// aput-short

				// add-int			add-int v0, p1, p2	v0 = p1 + p2		输出  输入  输入
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
				// rem-int/lit8		计算v2 % 3并将结果存入v0。
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
				// fill-array-data   将  +BBBBBBBB指向 的数据 填充到 vAA 对象上去   vAA：输入
				// packed-switch	 去 +BBBBBBBB指向的数据中去获取表，				vAA：输入
				// sparse-switch     同上，只是数据结构不一样
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
				//invoke-static 是类静态方法的调用，编译时，静态确定的；
				//invoke-virtual 虚方法调用，调用的方法运行时确认实际调用，和实例引用的实际对象有关，动态确认的，一般是带有修饰符protected或public的方法；
				//invoke-direct 没有被覆盖方法的调用，即不用动态根据实例所引用的调用，编译时，静态确认的，一般是private或<init>方法；
				//invoke-super 直接调用父类的虚方法，编译时，静态确认的。
				//invoke-interface 调用接口方法，调用的方法运行时确认实际调用，即会在运行时才确定一个实现此接口的对象。
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
					// 全部是参数
				}
				else {
					// 第一个不是参数
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

				// 输出结果
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
				A: 参数字数（4 位）
				B: 方法引用索引（16 位）
				C: 接收器（4 位）
				D..G: 参数寄存器（每个寄存器各占 4 位）
				H: 原型引用索引（16 位）	调用指定的签名多态方法。可使用相应的 move-result* 变体将所得结果（如果有的话）存储为紧跟其后的指令。

				方法引用必须针对签名多态方法，例如 java.lang.invoke.MethodHandle.invoke 或 java.lang.invoke.MethodHandle.invokeExact。

				接收器必须是一个支持所调用签名多态方法的对象。

				原型引用说明了所提供的参数类型和预期的返回类型。

				invoke-polymorphic 字节码执行时可能会引发异常。有关这些异常的相关说明，请参阅所调用签名多态方法的 API 文档。

				存在于 038 及更高版本的 Dex 文件中。

					invoke-virtual {v0, p1}, Lcom/google/gson/TypeAdapter;->read(Lcom/google/gson/stream/JsonReader;)Ljava/lang/Object;

					// v0 是 method 指针
					// p0 是 类
					// p1 是参数
					// 翻译过来是
					// rr = v0->(p0, p1)
					invoke-polymorphic {v0, p0, p1}, Ljava/lang/invoke/MethodHandle;->invoke([Ljava/lang/Object;)Ljava/lang/Object;, (Ljava/lang/invoke/MethodHandle;[Ljava/lang/Object;)Ljava/lang/Object;
					move-result-object v1
				*/
				if ((this->symbols[0] == "invoke-polymorphic") || (this->symbols[0] == "invoke-polymorphic/range")) {
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
						"([\\[]*L[\\w/$.-]+;|[\\[]*B|[\\[]*C|[\\[]*D|[\\[]*F|[\\[]*I|[\\[]*J|[\\[]*S|[\\[]*Z|V)\\s*"
						"$");			// 结束符号
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
							// 全部的参数
							std::vector<std::string> strRegTypeList;
							strRegTypeList.push_back(m[3]);		// this 指针类型
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

							// 返回参数
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