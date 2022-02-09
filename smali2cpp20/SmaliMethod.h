#ifndef __SmaliMethod_H__
#define __SmaliMethod_H__
#include "BaseObject.h"
#include "CodeDumper.h"



#include "SmaliImportSaver.h"


#include <map>
#include <variant>
#include <algorithm>

#include "DrawGraph.h"
#include "SmaliCodeCache.h"
class CVarGroup;
class CSmaliClass;

class CSmaliMethod :public CBaseObject {
private:
	CSmaliMethod() {};
	std::string strClassName;
	std::shared_ptr<CSmaliCodeCache> codeCache;
	std::string methodType;
	std::string strFunctionName;
	int isConstructor;

	bool isPrivate;
	bool isPublic;
	bool isProtcted;

	// bridge synthetic 這類函數需要先隱藏看看，這個是 java 不同於 C++ 的地方
	bool isNeedHide;

	bool isAbstract;

	// 用来保存相同寄存器的数据
	//std::vector<std::vector<std::shared_ptr<CVar>>> listSameVar;



public:

	void setPrivateType();
	void setPublicType();
	void setProtctedType();
	bool getPrivateType();
	bool getPublicType();
	bool getProtctedType();

	void setHide();
	bool getHide();

	void setAbstract() {
		isAbstract = true;
	}
	bool getAbstract() {
		return isAbstract;
	}

	// 類中定義的所有模板參數
	std::map<std::string, std::string> listTemplateParam;

	CSmaliClass* pClass;
	std::string getClassName();
	void setMethodType(std::string strType);
	std::string getMethodType();
	void setMethodName(std::string strName);
	std::string getMethodName();
	CSmaliMethod(std::string strClassName, CSmaliClass* pHost);

	bool insertTemplateParam(std::string strType, std::string strClass);

	std::shared_ptr<CVarGroup> GroupSameVar;

	~CSmaliMethod();

	// 插入行数,一直往后插入
	void insertStringLine(std::string& str, int nLine);

	// 形成符号列表
	void makeSymbolList(void);

	// 外面调用的
	void dumpAllMethod(CodeDumper* d);
	void dumpAllMethodForTemplate(CodeDumper* d);
};

#endif
