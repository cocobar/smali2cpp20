#ifndef __SmaliType_H__
#define __SmaliType_H__
#include "CBaseAssert.h"


#include <string>
#include <memory>
#include "stringhelper.h"
#include <regex>
class CSmaliMethod;
class CSmaliClass;
class CSmaliType : public CBaseObject
{
private:
	std::string strSmaliType;
	std::string strBaseType;

	CSmaliClass* pClass;

	static bool isJavaClassName(std::string str);
public:
	CSmaliType(std::string str, CSmaliClass* pClass);

	// �� java ����, �������Լ���Ƶ�����
	bool isReDefineType();

	// �ж��ǲ��� java ��
	bool isJavaType();
	// ��� java ������
	std::shared_ptr<CSmaliType> getBaseType();

	std::string getFullTypeSmaliString();
	std::string getBaseTypeSmaliString();

	// ��Ҫ����
	bool isPrimitiveType();

	// ����C++����
	std::string getCppType(bool noTemplateTranslate = false);

	std::string getCppShortType();

	// ��� cpp ���͵��ļ���
	std::string getCppFileName();
	std::string getCppFileMacroDefine();

	// ��ö��������
	std::string getCppDefineType();
};

#endif
