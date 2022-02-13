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

	unsigned long fieldFlag;		// ��־
	std::string fieldName;			// ������

	std::shared_ptr<CSmaliType> fieldType;

	std::string fieldTypeSignature;	// ע�����
	int hasValue;					// ��ֵ
	int isStatic;					// 
	std::string strValue;			// ֵ������

	void dumpAllField(int outType, CodeDumper* d, CSmaliClass* pClass);
	std::string getCppName();

};

#endif

