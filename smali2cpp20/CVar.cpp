#include "CVar.h"

#include "CSmaliMethod.h"
#include "CBaseAssert.h"
#include "CSmaliRegister.h"


CVar::CVar() {
	this->pMethod = nullptr;
}

// ����һ������
CVar::CVar(std::shared_ptr<CSmaliRegister> as, std::shared_ptr<CVarGroup> pGroup, CSmaliMethod* pHostMethod) {
	this->assign = as;
	this->listUse.clear();
	this->varName.clear();
	this->group = pGroup;
	this->pMethod = pHostMethod;
}

// ��ñ�������
// �����ǿ������,��ô�ͷ���ǿ������
std::string CVar::getVarName() {
	if (group->listSameVar.size() > 0) {
		auto nameIt = group->getRecordGroup(this->varName);
		if (nameIt != group->listSameVar.end()) {
			if (nameIt->size() > 0) {
				for (auto a = nameIt->begin(); a != nameIt->end(); a++) {
					if ((*nameIt)[0]->strForceVarName.size() > 0) {
						return (*nameIt)[0]->strForceVarName;
					}
				}
				return (*nameIt)[0]->varName;
			}
		}
	}

	if (strForceVarName.size() > 0) {
		return strForceVarName;
	}

	return varName;
}

// ������ͨ�ı�������
bool CVar::setCVarName(std::string strVar) {
	if (this->strForceVarName.size() > 0) {
		return false;
	}
	varName = strVar;
	return true;
}

// ����ǿ�Ƶı�������
bool CVar::setCVarForceVarName(std::string strVar) {
	if (this->strForceVarName.size() > 0) {
		if (this->strForceVarName != strVar) {
			CBaseAssert(0);
		}
	}
	this->strForceVarName = strVar;
	varName = strVar;
	return true;
}

// ���ر�����ʹ�ô���
int CVar::getUsedCount() {
	if (group->listSameVar.size() > 0) {
		auto nameIt = group->getRecordGroup(this->varName);
		if (nameIt != group->listSameVar.end()) {
			int nCount = 0;
			for (auto a = nameIt->begin(); a != nameIt->end(); a++) {
				nCount += (int)((*a)->listUse.size());
			}
			if (nCount > 0) {
				return nCount;
			}
		}
	}
	return (int)listUse.size();
}

// ������е�����
bool CVar::resolveType() {
	// �Ȼ�ȡ��ȷ������
	if (!this->assign->getCheckedType()) {
		bool bFindCheckType = false;
		std::string strChecked;
		for (auto a = listUse.begin(); a != listUse.end(); a++) {
			if (a->second->getCheckedType()) {
				bFindCheckType = true;
				strChecked = a->second->getCheckedType()->getFullTypeSmaliString();
				break;
			}
		}
		if (!bFindCheckType) {
			for (auto a = listUse.begin(); a != listUse.end(); a++) {
				if (a->second->regType()) {
					if (a->second->regType()->isJavaType()) {
						bFindCheckType = true;
						strChecked = a->second->regType()->getFullTypeSmaliString();
						break;
					}
				}
			}
		}

		if (!bFindCheckType) {
			if (!this->assign->regType()) {
				if (this->assign->regType()->isJavaType()) {
					bFindCheckType = true;
					strChecked = this->assign->regType()->getFullTypeSmaliString();
				}
			}
		}

		// Ӧ�ò��ᵽ�����?
		if (!bFindCheckType) {
			if (this->assign->regType()->getBaseTypeSmaliString() == "N") {
				strChecked = "I";
				bFindCheckType = true;
			}
			else if (this->assign->regType()->getBaseTypeSmaliString() == "W") {
				strChecked = "J";
				bFindCheckType = true;
			}
			else if (this->assign->regType()->getBaseTypeSmaliString() == "O") {
				strChecked = "Ljava/lang/Object;";
				bFindCheckType = true;
			}
		}

		if (bFindCheckType) {
			this->assign->setCheckedType(strChecked);
			for (auto a = listUse.begin(); a != listUse.end(); a++) {
				if (a->second->getCheckedType()) {
					a->second->setCheckedType(strChecked);
				}
			}
		}
		else {
			if (this->assign->sameReg) {
				return this->assign->sameReg->getVar()->resolveType();
			}
			CBaseAssert(0);
		}
	}

	return false;
}

// ���ʹ����
bool CVar::addUse(std::shared_ptr<CSmaliRegister> reg) {
	auto it = listUse.find(reg->getSignature());
	if (it == listUse.end()) {
		listUse.insert(std::make_pair(reg->getSignature(), reg));
		return true;
	}
	return false;
}

// ��ñ�������
std::shared_ptr<CSmaliType> CVar::getVarType() {
	if (this->assign) {
		if (this->assign->hasCheckedType()) {
			return this->assign->getCheckedType();
		}
	}
	else {
		CBaseAssert(0);
	}

	for (auto a = listUse.begin(); a != listUse.end(); a++) {
		if (a->second->hasCheckedType()) {
			return a->second->getCheckedType();
		}
	}

	if (this->assign) {
		if (this->assign->hasRegType()) {
			return this->assign->regType();
		}
	}

	// ͬ���Ĵ���
	if (this->assign->sameReg) {
		return this->assign->sameReg->getVar()->getVarType();
	}

	return std::make_shared<CSmaliType>("auto", this->pMethod->pClass);
}

void CVarGroup::recordSameVar(std::shared_ptr<CVar> a, std::shared_ptr<CVar> b) {
	if (a.get() == b.get()) {
		CBaseAssert(0);
		return;
	}

	auto a_it = getRecordGroup(a);
	auto b_it = getRecordGroup(b);

	if ((a_it != listSameVar.end()) && (b_it != listSameVar.end())) {
		return;
	}
	else if ((a_it != listSameVar.end())) {
		insertRecordGroup(a_it, b);
	}
	else if ((b_it != listSameVar.end())) {
		insertRecordGroup(b_it, a);
	}
	else {
		std::vector<std::shared_ptr<CVar>> newGroup;
		newGroup.push_back(a);
		newGroup.push_back(b);
		listSameVar.push_back(newGroup);
	}
}
