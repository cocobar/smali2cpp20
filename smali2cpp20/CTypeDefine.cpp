#include "CTypeDefine.h"


CTypeDefine::CTypeDefine() {
	this->bUsedType = true;									// ֻʹ��������
	this->bUsedCreate = false;								// ʹ���˹��캯��	
	this->bUsedFull = false;									// ȫ����ʹ����
}

CTypeDefine::CTypeDefine(std::string strClass) {
	this->bUsedType = true;									// ֻʹ��������
	this->bUsedCreate = false;								// ʹ���˹��캯��	
	this->bUsedFull = false;									// ȫ����ʹ����

	this->strClassName = strClass;
}

CTypeDefine::~CTypeDefine() {
}
