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

	// 判断是不是 java 类
	bool isJavaType(CSmaliMethod* pHost = nullptr);
	bool isJavaTypeForSmaliBase(CSmaliMethod* pHost = nullptr);
	// 获得 java 基础类
	std::shared_ptr<SmaliType> getBaseType();

	std::string getBaseTypeSmaliString();

	// 主要类型
	bool isPrimitiveType();

	// 返回C++类型
	std::string getCppType(CSmaliClass* pClass, bool noTemplateTranslate = false);

	std::string getCppShortType(CSmaliClass* pClass = nullptr);

	// 获得 cpp 类型的文件名
	std::string getCppFileName();
	std::string getCppFileMacroDefine();

	// 获得定义的类型
	std::string getCppDefineType(CSmaliClass* pClass);
};

#endif
