#include "CTypeDefine.h"


CTypeDefine::CTypeDefine() {
	this->bUsedType = true;									// 只使用了类型
	this->bUsedCreate = false;								// 使用了构造函数	
	this->bUsedFull = false;									// 全部都使用了
}

CTypeDefine::CTypeDefine(std::string strClass) {
	this->bUsedType = true;									// 只使用了类型
	this->bUsedCreate = false;								// 使用了构造函数	
	this->bUsedFull = false;									// 全部都使用了

	this->strClassName = strClass;
}

CTypeDefine::~CTypeDefine() {
}
