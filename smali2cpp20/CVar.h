
#ifndef __CVar_H__
#define __CVar_H__
#include "CBaseAssert.h"

#include "CSmaliRegister.h"
#include <vector>
#include <map>
#include <memory>
#include "CSmaliType.h"

class CVarGroup;
class CSmaliMethod;

class CVar : CBaseObject {

public:

	~CVar() {
	}

	std::string strForceVarName; // ǿ�����õı�������

	std::string varName;		 // ��������

	std::shared_ptr<CSmaliRegister> assign;

	CSmaliMethod* pMethod;

	// �Ĵ�����				�Ĵ���ָ��
	std::map<std::string, std::shared_ptr<CSmaliRegister>> listUse;

	CVar(std::shared_ptr<CSmaliRegister> as, std::shared_ptr<CVarGroup> pGroup, CSmaliMethod* pHostMethod);

	bool addUse(std::shared_ptr<CSmaliRegister> reg);

	std::string getVarName();

	bool setCVarName(std::string strVar);

	bool setCVarForceVarName(std::string strVar);

	// ������е�����
	bool resolveType();

	std::shared_ptr<CSmaliType> getVarType();

	int getUsedCount();

private:
	std::shared_ptr<CVarGroup> group;
	CVar();
};

// ��������, ����  Method
class CVarGroup :CBaseObject {
	friend class CVar;
public:
	// �ԼĴ�������
	std::vector<std::vector<std::shared_ptr<CVar>>> listSameVar;
	void clearSameVarRecorder() {
		listSameVar.clear();
	}
	void recordSameVar(std::shared_ptr<CVar> a, std::shared_ptr<CVar> b);

private:
	std::vector<std::vector<std::shared_ptr<CVar>>>::iterator getRecordGroup(std::string varName) {
		for (auto a = listSameVar.begin(); a != listSameVar.end(); a++) {
			for (auto b = a->begin(); b != a->end(); b++) {
				if ((*b)->varName == varName) {
					return a;
				}
			}
		}
		return listSameVar.end();
	}

	// �����Ƿ���
	std::vector<std::vector<std::shared_ptr<CVar>>>::iterator getRecordGroup(std::shared_ptr<CVar> v) {
		for (auto a = listSameVar.begin(); a != listSameVar.end(); a++) {
			for (auto b = a->begin(); b != a->end(); b++) {
				if (b->get() == v.get()) {
					return a;
				}
			}
		}
		return listSameVar.end();
	}
	// ����
	bool insertRecordGroup(std::vector<std::vector<std::shared_ptr<CVar>>>::iterator a, std::shared_ptr<CVar> v) {
		for (auto b = a->begin(); b != a->end(); b++) {
			if (b->get() == v.get()) {
				return false;
			}
		}
		a->push_back(v);
		return true;
	}
};

#endif

