#include "CSmaliRegister.h"
#include "stringhelper.h"
#include "CVar.h"
#include "CSmaliMethod.h"
#include "CBaseAssert.h"



CSmaliRegister::CSmaliRegister(int nIndex, RegisterFlags f, std::string strReg, std::string strRegType, CSmaliCodeline* pHost, int nCCodeLine) {
	this->nRegIndexInCurrentInstruction = nIndex;
	this->flag = f;
	this->strRegName = strReg;
	//this->strRegType = strRegType;
	//this->checkedType.clear();
	this->ptrRegType = std::make_shared<CSmaliType>(strRegType, pHost->pMethod->pClass);
	this->ptrCheckedType = nullptr;

	this->varName.clear();
	this->cited.clear();
	this->refer.clear();
	this->pHostCode = pHost;
	this->nCodeLine = nCCodeLine;

	// ��ָ���б������мĴ���
	pHost->listAllRegName.insert(std::make_pair(nIndex, strReg));

	// �⼸������ǿ��������
	if ((strRegType == "I") || (strRegType == "J") || (strRegType == "F") || (strRegType == "D") 
		|| (strRegType == "S") || (strRegType == "C") || (strRegType == "B") || (strRegType == "Z") ) {
		this->setCheckedType(strRegType);
	}

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

const std::shared_ptr<CSmaliType> CSmaliRegister::regType() {
	return this->ptrRegType;
}

bool CSmaliRegister::hasRegType() {
	return  (ptrRegType->getFullTypeSmaliString().size() > 0);
}

void CSmaliRegister::setCheckedType(std::string strCheck) {
	//CBaseAssert(CSmaliType(strCheck).isJavaType());
	this->ptrCheckedType = std::make_shared<CSmaliType>(strCheck, this->pHostCode->pMethod->pClass);
}

CSmaliCodeline* CSmaliRegister::getHostLine() {
	return pHostCode;
}

bool CSmaliRegister::hasCheckedType() {
	if (!this->ptrCheckedType) {
		return false;
	}
	if (this->ptrCheckedType->getFullTypeSmaliString().size() > 0) {
		return true;
	}
	return false;
}

std::shared_ptr<CVar> CSmaliRegister::getVar() {
	return ptrVar;
}

std::shared_ptr<CSmaliType> CSmaliRegister::getCheckedType() {
	return this->ptrCheckedType;
}

bool CSmaliRegister::setVar(std::shared_ptr<CVar> var) {
	if (ptrVar) {
		std::string strVal1 = ptrVar->getVarName();
		std::string strVal2 = var->getVarName();

		if (strVal1 != strVal2) {
			// ��¼������һ���� �ط���ֵ
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

// ���ñ�������
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
			CBaseAssert(0);
		}
	}

	return false;
}

// ��üĴ�����ǩ��
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
			CBaseAssert(0);
			break;
		}
		char buf[128];
		sprintf(buf, "reg:L{%04d}I{%02d}as:%s->%s", nLine, nIndex, this->strRegName.c_str(), pInOrOutChar);
		strSignature = std::string(buf);
	}
	else {
		CBaseAssert(0);
	}
	return strSignature;
}