#ifndef __CTYPEDEFINE_H__
#define __CTYPEDEFINE_H__

#include "BaseObject.h"
#include <string>
#include <vector>

class CTypeDefine : public CBaseObject
{
public:
	CTypeDefine();
	~CTypeDefine();

	std::string strClassName;						// ��ʹ�õ�Class����
	std::vector<std::string> listSupperClassName;	// �������ļ�

	bool bUsedType;									// ֻʹ��������
	bool bUsedCreate;								// ʹ���˹��캯��	
	bool bUsedFull;									// ȫ����ʹ����
	std::vector<std::string> listUsedField;			// ��ʹ�õ�Field
	std::vector<std::string> listUsedMethod;		// ��ʹ�õ�Method

};

#endif

