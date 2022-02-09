#ifndef __SmaliCodeline_H__
#define __SmaliCodeline_H__
#include "BaseObject.h"
#include "SmaliRegister.h"
#include <memory>
#include <map>

class CVar;
class CSmaliRegister;
class CSmaliMethod;
class CSmaliCodeCache;
class InstructionInfoClass;

// 代码段
class CSmaliCodeline : CBaseObject {

public:
	CSmaliMethod* pMethod;				// 指向的是 当前的 Method
	CSmaliCodeCache* pCache;			// 指向当前的代码缓存器
	int nCodeLine;					// 行号
	std::string strCode;			// 汇编代码


	std::vector<std::string> strCCodeLine;		// C 语言的代码
	std::string strDefType;
	std::string strDefVar;
	std::string strOverDefVar;
	std::string strDefOp;
	std::string strDefExp;
	std::string strOverDefExp;


	int nDeep;
	bool reNamed;
	bool isMethod;
	int isStatic = 0;
	unsigned long methodFlag = 0;
	int isConstructor = 0;
	int isVold = 0;
	std::string strMethodType;
	std::string strMethodName;

	std::string strMethodSignature;

	int nUsedInConstructor;		// 这样语句要在构造器函数内使用
	int nForceDontShow;			// 强制不显示
	unsigned long bitState;

	//const struct InstructionInfo* info;				// 指令的描述信息
	std::shared_ptr<InstructionInfoClass> info;

	std::vector<std::string> symbols;				// 指令的分段信息
	std::map<int, std::string> listAllRegName;		// 所有寄存器的名字,以及序号

	//std::vector<std::shared_ptr<CSmaliRegister>> regs;
	std::vector<std::shared_ptr<CSmaliRegister>> regsIn;
	std::vector<std::shared_ptr<CSmaliRegister>> regsOut;
	std::vector<std::string> listCatchTag;

	std::vector<std::shared_ptr<CSmaliRegister>>& getInputRegs();
	std::vector<std::shared_ptr<CSmaliRegister>>& getOutputRegs();
	void insertRegToList(std::shared_ptr<CSmaliRegister> reg);

	enum CodeLineState {
		ASM_CODE_INIT = 0,
		ASM_CODE_LIST_REG,
		ASM_,
	};

	struct invokeParam {
		std::string invokeName;
		std::vector<std::string> paramList;
		std::string objectType;
		std::string methodName;
		std::vector <std::string> paramTypeList;
		std::string returnType;
	};

	void listCodeLineReg();

	// 如果存在输出寄存器的时候才有这个值
	std::shared_ptr<CVar> assign;

	unsigned long isJavaMathodTypeFlags(std::string str);
	unsigned long isJavaMathodConstructorFlags(std::string str);
	std::string getCppMethodPermissionString(unsigned long val);

public:
	CSmaliCodeline();
	~CSmaliCodeline();

	std::string dumpAllRegs();

	CSmaliCodeline(CSmaliMethod* pMethod, CSmaliCodeCache* pHostCache, int nLine, std::string& strCodeLine);

	bool isMethodDefine();
	bool regCheckIn(std::shared_ptr<CSmaliRegister> reg);
	std::string getMethodSignature();
	std::string getMethodString(bool inTemplate = false);
	std::string getMethodPermissionString();

	void incDeep() {
		nDeep++;
	}
	void decDeep() {
		nDeep--;
	}

	bool isJavaFunction(std::string str, CSmaliMethod* pMethod);
	bool isJavaType(std::string str, CSmaliMethod* pMethod);
	std::vector<std::string> getJavaTypeList(std::string str);
	struct invokeParam getInvokeParamList(std::string str);

	bool isJavaClassName(std::string str);

	// 获得一个没有逗号的字符串
	static std::string getStringNoComma(std::string str);
};

#endif

