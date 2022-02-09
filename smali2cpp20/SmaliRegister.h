#ifndef __SmaliRegister_H__
#define __SmaliRegister_H__
#include "BaseObject.h"

#include "SmaliCodeline.h"
#include <memory>
#include "SmaliType.h"

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
	std::string strRegType;		// �Ĵ�������
	std::string checkedType;	// ȷ��������
	std::string varName;		// ������
	CSmaliCodeline* pHostCode;
	std::shared_ptr<CVar> ptrVar;	// ָ��׃��
	std::vector<int> cited;		// ������
	std::vector<int> refer;		// ���ο�
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

