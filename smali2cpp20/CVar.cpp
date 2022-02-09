#include "CVar.h"

#include "SmaliMethod.h"


CVar::CVar(std::shared_ptr<CSmaliRegister> as, std::shared_ptr<CVarGroup> pGroup, CSmaliMethod* pHostMethod) {

	this->assign = as;
	this->listUse.clear();
	this->varName.clear();
	this->group = pGroup;
	this->pHostM = pHostMethod;
}

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

bool CVar::setCVarName(std::string strVar) {
	if (this->strForceVarName.size() > 0) {
		return false;
	}
	varName = strVar;
	return true;
}

bool CVar::setCVarForceVarName(std::string strVar) {

	if (this->strForceVarName.size() > 0) {
		if (this->strForceVarName != strVar) {
			BaseAssert(0);
		}
	}

	this->strForceVarName = strVar;
	varName = strVar;
	return true;
}

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

// 解决所有的类型
bool CVar::resolveType() {
	// 先获取正确的类型
	if (this->assign->getCheckedType().empty()) {
		bool bFindCheckType = false;
		std::string strChecked;
		for (auto a = listUse.begin(); a != listUse.end(); a++) {
			if (!a->second->getCheckedType().empty()) {
				bFindCheckType = true;
				strChecked = a->second->getCheckedType();
				break;
			}
		}
		if (!bFindCheckType) {
			for (auto a = listUse.begin(); a != listUse.end(); a++) {
				if (!a->second->regType().empty()) {
					if (SmaliType(a->second->regType()).isJavaType(this->pHostM)) {
						bFindCheckType = true;
						strChecked = a->second->regType();
						break;
					}
				}
			}
		}

		if (!bFindCheckType) {
			if (!this->assign->regType().empty()) {
				if (SmaliType(this->assign->regType()).isJavaType(this->pHostM)) {
					bFindCheckType = true;
					strChecked = this->assign->regType();
				}
			}
		}

		if (!bFindCheckType) {
			if (this->assign->regType() == "N") {
				strChecked = "I";
				bFindCheckType = true;
			}
			else if (this->assign->regType() == "W") {
				strChecked = "J";
				bFindCheckType = true;
			}
			else if (this->assign->regType() == "O") {
				strChecked = "Ljava/lang/Object;";
				bFindCheckType = true;
			}
		}

		if (bFindCheckType) {
			this->assign->setCheckedType(strChecked);

			for (auto a = listUse.begin(); a != listUse.end(); a++) {
				if (a->second->getCheckedType().empty()) {
					a->second->setCheckedType(strChecked);
				}
			}
		}
		else {
			BaseAssert(0);
		}
	}

	return false;
}

bool CVar::addUse(std::shared_ptr<CSmaliRegister> reg) {
	auto it = listUse.find(reg->getSignature());
	if (it == listUse.end()) {
		listUse.insert(std::make_pair(reg->getSignature(), reg));
		return true;
	}
	return false;
}

std::string CVar::getVarType() {

	if (this->assign) {
		if (this->assign->hasCheckedType()) {
			return this->assign->getCheckedType();
		}
	}
	else {
		BaseAssert(0);
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

	return "auto";
}
