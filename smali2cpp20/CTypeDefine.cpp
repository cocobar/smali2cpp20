#include "CTypeDefine.h"

CTypeDefine::CTypeDefine() {
	this->strClassName = nullptr;
}

CTypeDefine::CTypeDefine(std::string strClass) {
	this->strClassName = strClass;
}

CTypeDefine::~CTypeDefine() {

}
