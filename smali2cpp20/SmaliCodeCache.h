#ifndef __SmaliCodeCache_H__
#define __SmaliCodeCache_H__
#include "BaseObject.h"
#include "SmaliCodeline.h"
#include "SyntaxNode.h"
#include <map>
#include <memory>
#include <vector>
#include <unordered_map>
#include "SmaliRegister.h"


class CodeDumper;
class CSmaliMethod;

// 代码段
class CSmaliCodeCache : CBaseObject {
private:
	CSmaliCodeCache() {};
	CSmaliMethod* pMethod;
	std::map<int, std::shared_ptr<CSmaliCodeline>> mapCode;	// 保存所有指令的
	friend class CSmaliMethod;
	std::vector<std::shared_ptr<CSyntaxNode>> syntaxRoot;	// 这里只保留入口,所有的

#if 0
	std::unordered_map<std::string, std::shared_ptr<CSmaliRegister>> mapListAssignReg;
	std::unordered_map<std::string, std::shared_ptr<CSmaliRegister>> mapListUseReg;
#else
	std::map<std::string, std::shared_ptr<CSmaliRegister>> mapListAssignReg;
	std::map<std::string, std::shared_ptr<CSmaliRegister>> mapListUseReg;
#endif
	std::vector<std::string> listVarPreDefine;
	std::vector<std::vector<std::shared_ptr<CSyntaxNode>>> listRunThreads;	// 代码运行线程

public:

	std::vector<struct tryCatchRecordItem> listTryCatchRecord;
	std::string strAnnotationSignature;
	bool regCheckIn(std::shared_ptr<CSmaliRegister>);
	~CSmaliCodeCache();
	CSmaliCodeCache(CSmaliMethod* pMethod);

	void clearAllData();
	// 插入所有的数据
	bool insertCode(int nIndex, std::string& code);

	// 生成语法图
	void syntaxDiagram();

	// 重新命名所有变量
	bool renameVar(std::vector<std::shared_ptr<CSyntaxNode>> listNode);

	void runToCppCode(bool inTemplate = false);

	CodeDumper dumpCode();

	CodeDumper dumpCodeForTemplate();

	// 获取所有的模式标签
	std::vector<std::string> getExpModeStringList(std::string& str);

	void fillOneCodeExp(std::vector<std::shared_ptr<CSyntaxNode>> thread, int nThreadIndex, std::shared_ptr<CSmaliCodeline> code, std::vector<std::string>& listMode, std::string& outStr);
};

#endif
