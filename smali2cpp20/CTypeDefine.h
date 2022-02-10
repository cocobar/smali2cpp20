#ifndef __CTYPEDEFINE_H__
#define __CTYPEDEFINE_H__

#include "BaseObject.h"
#include <string>
#include <vector>

class CTypeDefine : public CBaseObject
{
private:
	CTypeDefine();

public:
	CTypeDefine(std::string strClass);
	~CTypeDefine();

	std::string strClassName;						// ��ʹ�õ�Class����
	std::vector<std::string> listSupperClassName;	// �������ļ�

	bool bUsedType;									// ֻʹ��������
	bool bUsedCreate;								// ʹ���˹��캯��	
	bool bUsedFull;									// ȫ����ʹ����
	std::vector<std::string> listUsedField;			// ��ʹ�õ�Field
	std::vector<std::string> listUsedMethod;		// ��ʹ�õ�Method

	void setUsedCreate() {
		bUsedCreate = true;
	}
	void setUsedFull() {
		bUsedFull = true;
	}

	void addUsedField(std::string strField) {
		auto a = std::find(listUsedField.begin(), listUsedField.end(), strField);
		if (a == listUsedField.end()) {
			listUsedField.push_back(strField);
		}
	}

	void addUsedMethod(std::string strMethod) {
		auto a = std::find(listUsedMethod.begin(), listUsedMethod.end(), strMethod);
		if (a == listUsedMethod.end()) {
			listUsedMethod.push_back(strMethod);
		}
	}

};

#endif

