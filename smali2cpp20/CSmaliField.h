#ifndef __SmaliField_H__
#define __SmaliField_H__

#include "CBaseAssert.h"
#include "CodeDumper.h"
#include "CSmaliAbstract.h"
#include "CSmaliType.h"

class CSmaliClass;
class CSmaliField : public CSmaliAbstract
{
public:
	CSmaliField();
public:

	unsigned long fieldFlag;		// 标志
	std::string fieldName;			// 变量名

	std::shared_ptr<CSmaliType> fieldType;

	std::string fieldTypeSignature;	// 注解符号
	int hasValue;					// 有值
	int isStatic;					// 
	std::string strValue;			// 值的类型

	void dumpAllField(int outType, CodeDumper* d, CSmaliClass* pClass);
	std::string getCppName();

};

#endif

