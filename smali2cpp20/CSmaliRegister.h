#ifndef __SmaliRegister_H__
#define __SmaliRegister_H__
#include "CBaseAssert.h"

#include "CSmaliCodeline.h"
#include <memory>
#include "CSmaliType.h"

class CVar;
class CSmaliCodeline;

// �����
class CSmaliRegister : CBaseObject {

public:
	// ��δ��
	enum RegisterFlags : uint32_t {
		REG_INPUT = 0x00000001,
		REG_OUTPUT = 0x00000002,
		REG_DUMMY = 0x00000004,
	};


private:
	int nRegIndexInCurrentInstruction;				// ���ٲ����õ�, ��
	enum RegisterFlags flag;	//RegisterFlags
	std::string strRegName;		// �Ĵ�������
	std::string varName;		// ������
	CSmaliCodeline* pHostCode;
	std::shared_ptr<CVar> ptrVar;	// ָ��׃��
	std::vector<int> cited;		// ������
	std::vector<int> refer;		// ���ο�
	std::string strSignature;

	//std::string strRegType;		// �Ĵ�������
	//std::string checkedType;	// ȷ��������
	std::shared_ptr<CSmaliType> ptrRegType;
	std::shared_ptr<CSmaliType> ptrCheckedType;

	CSmaliRegister();
public:
	~CSmaliRegister() {};
	int nCodeLine;
	bool isInput();
	bool isOutput();
	const std::string& regName();
	bool changeRegName(std::string strNewName);
	const std::shared_ptr<CSmaliType> regType();
	bool hasRegType();
	CSmaliRegister(int nIndex, RegisterFlags f, std::string strReg, std::string strRegType, CSmaliCodeline* pHost, int nCCodeLine);
	void setCheckedType(std::string strCheck);
	CSmaliCodeline* getHostLine();
	bool hasCheckedType();
	bool setRegVarName(std::string strVar);
	bool setVar(std::shared_ptr<CVar> var);
	std::shared_ptr<CVar> getVar();
	std::shared_ptr<CSmaliType> getCheckedType();
	std::string& getSignature();

	std::shared_ptr<CSmaliRegister> sameReg;
};

#endif

