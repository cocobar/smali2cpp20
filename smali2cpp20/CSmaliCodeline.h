#ifndef __SmaliCodeline_H__
#define __SmaliCodeline_H__
#include "CBaseAssert.h"
#include "CSmaliRegister.h"
#include <memory>
#include <map>
#include "CSmaliAbstract.h"
#include "CBaseObject.h"

class CVar;
class CSmaliRegister;
class CSmaliMethod;
class InstructionInfoClass;

// 代码段
class CSmaliCodeline : public CSmaliAbstract {

public:
	CSmaliMethod* pMethod;				// 指向的是 当前的 Method
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

	std::shared_ptr<InstructionInfoClass> info;

	std::vector<std::string> symbols;				// 指令的分段信息
	std::map<int, std::string> listAllRegName;		// 所有寄存器的名字,以及序号

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
		std::string strSignature;
	};

	void listCodeLineReg();

	// 如果存在输出寄存器的时候才有这个值
	std::shared_ptr<CVar> assign;

	unsigned long isJavaMathodTypeFlags(std::string str);
	unsigned long isJavaMathodConstructorFlags(std::string str);

public:
	CSmaliCodeline();
	~CSmaliCodeline();

	std::string dumpAllRegs();

	CSmaliCodeline(CSmaliMethod* pMethod, int nLine, std::string& strCodeLine);

	bool isMethodDefine();
	bool regCheckIn(std::shared_ptr<CSmaliRegister> reg);

	void incDeep() {
		nDeep++;
	}
	void decDeep() {
		nDeep--;
	}

	std::vector<std::string> getJavaTypeList(std::string str);
	struct invokeParam getInvokeParamList(std::string str);

	bool isJavaClassName(std::string str);

	// 获得一个没有逗号的字符串
	static std::string getStringNoComma(std::string str);
};

#endif

