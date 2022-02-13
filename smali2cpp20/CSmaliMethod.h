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



	// bridge synthetic 這類函數需要先隱藏看看，這個是 java 不同於 C++ 的地方
	bool isNeedHide;

	bool isAbstract;

	std::map<int, std::shared_ptr<CSmaliCodeline>> mapCode;	// 保存所有指令的
	friend class CSmaliMethod;
	std::vector<std::shared_ptr<CSyntaxNode>> syntaxRoot;	// 这里只保留入口,所有的

	std::map<std::string, std::shared_ptr<CSmaliRegister>> mapListAssignReg;
	std::map<std::string, std::shared_ptr<CSmaliRegister>> mapListUseReg;

	std::vector<std::string> listVarPreDefine;
	std::vector<std::vector<std::shared_ptr<CSyntaxNode>>> listRunThreads;	// 代码运行线程

public:

	std::string strParamList;						// 参数字符串
	std::vector<std::string> listParam;				// 已经提出出来的函数参数

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
	std::shared_ptr<CSmaliType> getClassType();
	std::string getMethodType();
	std::string getMethodName();
	void setMethodSignature(std::string strSign);
	std::string getMethodSignature();
	CSmaliMethod(std::shared_ptr<CSmaliType> ptrClassName, CSmaliClass* pHost);

	bool insertTemplateParam(std::string strType, std::string strClass);

	std::shared_ptr<CVarGroup> GroupSameVar;

	~CSmaliMethod();

	// 插入行数,一直往后插入
	void insertStringLine(std::string& str, int nLine);

	// 形成符号列表
	void makeSymbolList(void);

	// 外面调用的
	void dumpAllMethod(int outType, CodeDumper* d);
	void dumpAllMethodForTemplate(CodeDumper* d);

	std::vector<struct tryCatchRecordItem> listTryCatchRecord;
	std::string strAnnotationSignature;
	bool regCheckIn(std::shared_ptr<CSmaliRegister>);

	void clearAllData();
	// 插入所有的数据
	bool insertCode(int nIndex, std::string& code);

	// 生成语法图
	void syntaxDiagram();

	// 重新命名所有变量
	bool renameVar(std::vector<std::shared_ptr<CSyntaxNode>> listNode);

	void runToCppCode(bool inTemplate = false);

	CodeDumper dumpCode(int outType);

	CodeDumper dumpCodeForTemplate();

	void getMethodName(std::string strDefine);

	// 获取所有的模式标签
	std::vector<std::string> getExpModeStringList(std::string& str);

	void fillOneCodeExp(std::vector<std::shared_ptr<CSyntaxNode>> thread, int nThreadIndex, std::shared_ptr<CSmaliCodeline> code, std::vector<std::string>& listMode, std::string& outStr);

	std::string getMethodString(int outType, bool inTemplate);

	void collectAllCode(std::map<std::string, std::shared_ptr<CTypeDefine>>& usedTypeMap);

};

#endif
