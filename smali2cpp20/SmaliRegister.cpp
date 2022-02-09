#include "SmaliRegister.h"
#include "stringhelper.h"
#include "CVar.h"
#include "SmaliMethod.h"



CSmaliRegister::CSmaliRegister(int nIndex, RegisterFlags f, std::string strReg, std::string strRegType, CSmaliCodeline* pHost, int nCCodeLine) {
	this->nRegIndexInCurrentInstruction = nIndex;
	this->flag = f;
	this->strRegName = strReg;
	this->strRegType = strRegType;
	this->checkedType.clear();
	this->varName.clear();
	this->cited.clear();
	this->refer.clear();
	this->pHostCode = pHost;
	this->nCodeLine = nCCodeLine;

	//if (strRegType.size() > 0) {
	//	BaseAssert(SmaliType(strRegType).isReDefineType());
	//}

	// 在指令行保存所有寄存器
	pHost->listAllRegName.insert(std::make_pair(nIndex, strReg));
}

bool CSmaliRegister::isInput() {
	if (this->flag == REG_INPUT) {
		return true;
	}
	return false;
}

bool CSmaliRegister::isOutput() {
	if (this->flag == REG_OUTPUT) {
		return true;
	}
	return false;
}

const std::string& CSmaliRegister::regName() {
	return strRegName;
}

bool CSmaliRegister::changeRegName(std::string strNewName) {
	strRegName = strNewName;
	strSignature.clear();
	return true;
}

const std::string& CSmaliRegister::regType() {
	return strRegType;
}

bool CSmaliRegister::hasRegType() {
	return  (strRegType.size() > 0);
}

void CSmaliRegister::setCheckedType(std::string strCheck) {
	//BaseAssert(SmaliType(strCheck).isJavaType());
	this->checkedType = strCheck;
}

CSmaliCodeline* CSmaliRegister::getHostLine() {
	return pHostCode;
}

bool CSmaliRegister::hasCheckedType() {
	if (this->checkedType.empty()) {
		return false;
	}
	if (this->checkedType.size() > 0) {
		return true;
	}
	return false;
}

std::shared_ptr<CVar> CSmaliRegister::getVar() {
	return ptrVar;
}

std::string CSmaliRegister::getCheckedType() {
	return this->checkedType;
}

bool CSmaliRegister::setVar(std::shared_ptr<CVar> var) {
	if (ptrVar) {
		std::string strVal1 = ptrVar->getVarName();
		std::string strVal2 = var->getVarName();

		if (strVal1 != strVal2) {
			// 记录下来不一样的 地方赋值
			((CSmaliMethod*)(getHostLine()->pMethod))->GroupSameVar->recordSameVar(ptrVar, var);

			//CVar::recordSameVar(ptrVar, var);
			// ptrVar = var;
			return false;
		}
		else {
			ptrVar = var;
		}
	}
	else {
		ptrVar = var;
	}
	return true;
}

// 设置变量名称
bool CSmaliRegister::setRegVarName(std::string strVar) {
	if (this->varName != "this") {
		if (flag == REG_OUTPUT) {
			if (this->ptrVar->setCVarName(strVar)) {
				this->varName = strVar;
				return true;
			}
			else {
				return false;
			}
		}
		else {
			BaseAssert(0);
		}
	}

	return false;
}

// 获得寄存器的签名
std::string& CSmaliRegister::getSignature() {
	if (!strSignature.empty()) {
		return strSignature;
	}
	//std::string strSign;
	if (this->pHostCode) {
		int nLine = this->pHostCode->nCodeLine;
		int nIndex = this->nRegIndexInCurrentInstruction;
		const char* pInOrOutChar = nullptr;

		switch (this->flag)
		{
		case REG_INPUT:
		{
			pInOrOutChar = "i";
		}
		break;
		case REG_OUTPUT:
		{
			pInOrOutChar = "o";
		}
		break;
		default:
			BaseAssert(0);
			break;
		}
		char buf[128];
		sprintf(buf, "reg:L{%04d}I{%02d}as:%s->%s", nLine, nIndex, this->strRegName.c_str(), pInOrOutChar);
		strSignature = std::string(buf);
	}
	else {
		BaseAssert(0);
	}
	return strSignature;
}