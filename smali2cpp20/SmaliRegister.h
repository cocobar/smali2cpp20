#ifndef __SmaliRegister_H__
#define __SmaliRegister_H__
#include "BaseObject.h"

#include "SmaliCodeline.h"
#include <memory>
#include "SmaliType.h"

class CVar;
class CSmaliCodeline;

// 代码段
class CSmaliRegister : CBaseObject {

public:
	// 按未或
	enum RegisterFlags : uint32_t {
		REG_INPUT = 0x00000001,
		REG_OUTPUT = 0x00000002,
		REG_DUMMY = 0x00000004,
	};


private:
	int nRegIndexInCurrentInstruction;				// 快速查找用的, 在
	enum RegisterFlags flag;	//RegisterFlags
	std::string strRegName;		// 寄存器名字
	std::string strRegType;		// 寄存器类型
	std::string checkedType;	// 确定的类型
	std::string varName;		// 变量名
	CSmaliCodeline* pHostCode;
	std::shared_ptr<CVar> ptrVar;	// 指向變量
	std::vector<int> cited;		// 被引用
	std::vector<int> refer;		// 被参考
	std::string strSignature;
	CSmaliRegister();
public:
	~CSmaliRegister() {};
	int nCodeLine;
	bool isInput();
	bool isOutput();
	const std::string& regName();
	bool changeRegName(std::string strNewName);
	const std::string& regType();
	bool hasRegType();
	CSmaliRegister(int nIndex, RegisterFlags f, std::string strReg, std::string strRegType, CSmaliCodeline* pHost, int nCCodeLine);
	void setCheckedType(std::string strCheck);
	CSmaliCodeline* getHostLine();
	bool hasCheckedType();
	bool setRegVarName(std::string strVar);
	bool setVar(std::shared_ptr<CVar> var);
	std::shared_ptr<CVar> getVar();
	std::string getCheckedType();
	std::string& getSignature();
};

#endif

