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

// �����
class CSmaliCodeline : public CSmaliAbstract {

public:
	CSmaliMethod* pMethod;				// ָ����� ��ǰ�� Method
	int nCodeLine;					// �к�
	std::string strCode;			// ������


	std::vector<std::string> strCCodeLine;		// C ���ԵĴ���
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

	std::vector<std::string> symbols;				// ָ��ķֶ���Ϣ
	std::map<int, std::string> listAllRegName;		// ���мĴ���������,�Լ����

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

	// �����������Ĵ�����ʱ��������ֵ
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

	// ���һ��û�ж��ŵ��ַ���
	static std::string getStringNoComma(std::string str);
};

#endif

