#ifndef __SmaliType_H__
#define __SmaliType_H__
#include "BaseObject.h"


#include <string>
#include <memory>
#include "stringhelper.h"
#include "SmaliImportSaver.h"
#include <regex>
class CSmaliMethod;
class CSmaliClass;
class SmaliType : public CBaseObject
{
private:
	std::string strSmaliType;
	std::string strBaseType;

	static bool isJavaClassName(std::string str);
public:
	SmaliType(std::string str);

	bool isReDefineType();

	// �ж��ǲ��� java ��
	bool isJavaType(CSmaliMethod* pHost = nullptr);
	bool isJavaTypeForSmaliBase(CSmaliMethod* pHost = nullptr);
	// ��� java ������
	std::shared_ptr<SmaliType> getBaseType();

	std::string getBaseTypeSmaliString();

	// ��Ҫ����
	bool isPrimitiveType();

	// ����C++����
	std::string getCppType(CSmaliClass* pClass, bool noTemplateTranslate = false);

	std::string getCppShortType(CSmaliClass* pClass = nullptr);

	// ��� cpp ���͵��ļ���
	std::string getCppFileName();
	std::string getCppFileMacroDefine();

	// ��ö��������
	std::string getCppDefineType(CSmaliClass* pClass);
};

#endif
