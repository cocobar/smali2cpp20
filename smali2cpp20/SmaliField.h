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

	unsigned long fieldFlag;		// ��־
	std::string fieldName;			// ������
	std::string fieldType;			// ����
	std::string fieldTypeSignature;	// ע�����
	int hasValue;					// ��ֵ
	int isStatic;					// 
	std::string strValue;			// ֵ������

	void dumpAllField(CodeDumper* d, CSmaliClass* pClass);
	std::string getCppMethodPermissionString(unsigned long val);

};

#endif

