#ifndef __SmaliMethod_H__
#define __SmaliMethod_H__
#include "CBaseAssert.h"
#include "CodeDumper.h"


#include <map>
#include <variant>
#include <algorithm>

//#include "DrawGraph.h"
#include "CSmaliCodeline.h"
#include "CSyntaxNode.h"

#include "CSmaliAbstract.h"

class CVarGroup;
class CSmaliClass;

class CSmaliMethod :public CSmaliAbstract {
private:
	CSmaliMethod();
	std::shared_ptr<CSmaliType> classType;
	std::string strFunctionName;
	std::string strSignature;
	std::string strMethodType;

	std::shared_ptr<CSmaliCodeline> codeParam;



	// bridge synthetic �@�����Ҫ���[�ؿ������@���� java ��ͬ� C++ �ĵط�
	bool isNeedHide;

	bool isAbstract;

	std::map<int, std::shared_ptr<CSmaliCodeline>> mapCode;	// ��������ָ���
	friend class CSmaliMethod;
	std::vector<std::shared_ptr<CSyntaxNode>> syntaxRoot;	// ����ֻ�������,���е�

	std::map<std::string, std::shared_ptr<CSmaliRegister>> mapListAssignReg;
	std::map<std::string, std::shared_ptr<CSmaliRegister>> mapListUseReg;

	std::vector<std::string> listVarPreDefine;
	std::vector<std::vector<std::shared_ptr<CSyntaxNode>>> listRunThreads;	// ���������߳�

public:

	std::string strParamList;						// �����ַ���
	std::vector<std::string> listParam;				// �Ѿ���������ĺ�������

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
	std::shared_ptr<CSmaliType> getClassType();
	std::string getMethodType();
	std::string getMethodName();
	void setMethodSignature(std::string strSign);
	std::string getMethodSignature();
	CSmaliMethod(std::shared_ptr<CSmaliType> ptrClassName, CSmaliClass* pHost);

	bool insertTemplateParam(std::string strType, std::string strClass);

	std::shared_ptr<CVarGroup> GroupSameVar;

	~CSmaliMethod();

	// ��������,һֱ�������
	void insertStringLine(std::string& str, int nLine);

	// �γɷ����б�
	void makeSymbolList(void);

	// ������õ�
	void dumpAllMethod(int outType, CodeDumper* d);
	void dumpAllMethodForTemplate(CodeDumper* d);

	std::vector<struct tryCatchRecordItem> listTryCatchRecord;
	std::string strAnnotationSignature;
	bool regCheckIn(std::shared_ptr<CSmaliRegister>);

	void clearAllData();
	// �������е�����
	bool insertCode(int nIndex, std::string& code);

	// �����﷨ͼ
	void syntaxDiagram();

	// �����������б���
	bool renameVar(std::vector<std::shared_ptr<CSyntaxNode>> listNode);

	void runToCppCode(bool inTemplate = false);

	CodeDumper dumpCode(int outType);

	CodeDumper dumpCodeForTemplate();

	void getMethodName(std::string strDefine);

	// ��ȡ���е�ģʽ��ǩ
	std::vector<std::string> getExpModeStringList(std::string& str);

	void fillOneCodeExp(std::vector<std::shared_ptr<CSyntaxNode>> thread, int nThreadIndex, std::shared_ptr<CSmaliCodeline> code, std::vector<std::string>& listMode, std::string& outStr);

	std::string getMethodString(int outType, bool inTemplate);

	void collectAllCode(std::map<std::string, std::shared_ptr<CTypeDefine>>& usedTypeMap);

};

#endif
