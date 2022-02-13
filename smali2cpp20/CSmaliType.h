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

	// 是 java 类型, 或者是自己设计的类型
	bool isReDefineType();

	// 判断是不是 java 类
	bool isJavaType();
	// 获得 java 基础类
	std::shared_ptr<CSmaliType> getBaseType();

	std::string getFullTypeSmaliString();
	std::string getBaseTypeSmaliString();

	// 主要类型
	bool isPrimitiveType();

	// 返回C++类型
	std::string getCppType(bool noTemplateTranslate = false);

	std::string getCppShortType();

	// 获得 cpp 类型的文件名
	std::string getCppFileName();
	std::string getCppFileMacroDefine();

	// 获得定义的类型
	std::string getCppDefineType();
};

#endif
