#ifndef __SmaliField_H__
#define __SmaliField_H__

#include "BaseObject.h"
#include "CodeDumper.h"

class CSmaliClass;
class CSmaliField : public CBaseObject
{

private:
	bool isPrivate;
	bool isPublic;
	bool isProtcted;

public:
	CSmaliField();



public:

	void setPrivateType();
	void setPublicType();
	void setProtctedType();
	bool getPrivateType();
	bool getPublicType();
	bool getProtctedType();

	unsigned long fieldFlag;		// 标志
	std::string fieldName;			// 变量名
	std::string fieldType;			// 类型
	std::string fieldTypeSignature;	// 注解符号
	int hasValue;					// 有值
	int isStatic;					// 
	std::string strValue;			// 值的类型

	void dumpAllField(CodeDumper* d, CSmaliClass* pClass);
	std::string getCppMethodPermissionString(unsigned long val);

};

#endif

