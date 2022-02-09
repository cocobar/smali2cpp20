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

	// bridge synthetic �@�����Ҫ���[�ؿ������@���� java ��ͬ� C++ �ĵط�
	bool isNeedHide;

	bool isAbstract;

	// ����������ͬ�Ĵ���������
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

	// ��ж��x������ģ�兢��
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

	// ��������,һֱ�������
	void insertStringLine(std::string& str, int nLine);

	// �γɷ����б�
	void makeSymbolList(void);

	// ������õ�
	void dumpAllMethod(CodeDumper* d);
	void dumpAllMethodForTemplate(CodeDumper* d);
};

#endif
