
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

	std::string strForceVarName; // 强制设置的变量名称

	std::string varName;		 // 变量名称

	std::shared_ptr<CSmaliRegister> assign;

	CSmaliMethod* pMethod;

	// 寄存器名				寄存器指针
	std::map<std::string, std::shared_ptr<CSmaliRegister>> listUse;

	CVar(std::shared_ptr<CSmaliRegister> as, std::shared_ptr<CVarGroup> pGroup, CSmaliMethod* pHostMethod);

	bool addUse(std::shared_ptr<CSmaliRegister> reg);

	std::string getVarName();

	bool setCVarName(std::string strVar);

	bool setCVarForceVarName(std::string strVar);

	// 解决所有的类型
	bool resolveType();

	std::shared_ptr<CSmaliType> getVarType();

	int getUsedCount();

private:
	std::shared_ptr<CVarGroup> group;
	CVar();
};

// 变量分组, 挂在  Method
class CVarGroup :CBaseObject {
	friend class CVar;
public:
	// 对寄存器分组
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

	// 查找是否有
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
	// 插入
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

