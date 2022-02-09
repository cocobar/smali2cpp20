
#ifndef __CVar_H__
#define __CVar_H__
#include "BaseObject.h"

#include "SmaliRegister.h"
#include <vector>
#include <map>
#include <memory>
#include "SmaliType.h"

class CVarGroup;
class CSmaliMethod;

class CVar : CBaseObject {

public:

	~CVar() {
	}

	std::string strForceVarName; // ǿ�����õı�������

	std::string varName;		 // ��������

	// CSmaliRegister
	// assign
	std::shared_ptr<CSmaliRegister> assign;

	CSmaliMethod* pHostM;

	// use
	// �Ĵ�����				�Ĵ���ָ��
	std::map<std::string, std::shared_ptr<CSmaliRegister>> listUse;

	CVar(std::shared_ptr<CSmaliRegister> as, std::shared_ptr<CVarGroup> pGroup, CSmaliMethod* pHostMethod);

	bool addUse(std::shared_ptr<CSmaliRegister> reg);

	std::string getVarName();

	bool setCVarName(std::string strVar);

	bool setCVarForceVarName(std::string strVar);

	// ������е�����
	bool resolveType();

	std::string getVarType();

	int getUsedCount();



private:
	std::shared_ptr<CVarGroup> group;
	CVar() {
	}

};

class CVarGroup :CBaseObject {
	friend class CVar;
public:
	// �ԼĴ�������
	std::vector<std::vector<std::shared_ptr<CVar>>> listSameVar;
	void clearSameVarRecorder() {
		listSameVar.clear();
	}
	void recordSameVar(std::shared_ptr<CVar> a, std::shared_ptr<CVar> b) {
		if (a.get() == b.get()) {
			BaseAssert(0);
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

	//std::vector<std::vector<std::shared_ptr<CVar>>> getSameVarListData() {
	//	return listSameVar;
	//}
	//void setSameVarListData(std::vector<std::vector<std::shared_ptr<CVar>>>& a) {
	//	listSameVar = a;
	//}

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

