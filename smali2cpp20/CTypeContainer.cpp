#include "CTypeContainer.h"

CTypeContainer::CTypeContainer() {

}

// ����һ��ʹ�����ͣ���Ȼ�᷵�صģ�������ʧ�ܵĿ�����
std::shared_ptr<CTypeDefine> CTypeContainer::findType(std::string strClass) {
	auto a = this->usedTypeMap.find(strClass);
	if (a == this->usedTypeMap.end()) {
		auto b = std::make_shared<CTypeDefine>(strClass);
		this->usedTypeMap.insert(std::make_pair(strClass, b));
		return b;
	}
	else {
		return a->second;
	}
}

// �ռ��������Ϣ
void CTypeContainer::collect(std::map<std::string, std::shared_ptr<CTypeDefine>>& typeMap) {
	for (auto a = this->usedTypeMap.begin(); a != this->usedTypeMap.end(); a++) {
		auto b = typeMap.find(a->first);
		if (b == typeMap.end()) {
			std::string strClassName = a->first;
			auto c = std::make_shared<CTypeDefine>(strClassName);
			typeMap.insert(std::make_pair(strClassName, c));
			b = typeMap.find(a->first);
			CBaseAssert(b != typeMap.end());
		}

		for (auto c = a->second->listUsedField.begin(); c != a->second->listUsedField.end(); c++) {
			(*b).second->addUsedField(*c);
		}
		for (auto c = a->second->listUsedMethod.begin(); c != a->second->listUsedMethod.end(); c++) {
			(*b).second->addUsedMethod(*c);
		}
	}
}

