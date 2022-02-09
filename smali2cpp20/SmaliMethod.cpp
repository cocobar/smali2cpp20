#include "SmaliMethod.h"

#include "SmaliType.h"
#include "CVar.h"
#include "SmaliClass.h"

CSmaliMethod::CSmaliMethod(std::string strClassName, CSmaliClass* pHost) {
	this->codeCache = std::make_shared<CSmaliCodeCache>(this);
	this->strClassName = strClassName;
	this->pClass = pHost;
	this->isConstructor = 0;
	this->GroupSameVar = std::make_shared<CVarGroup>();
	this->isNeedHide = false;
	this->isAbstract = false;
	this->setPublicType();
}
void CSmaliMethod::setPrivateType() {
	isPublic = false;
	isPrivate = true;
	isProtcted = false;
}
void CSmaliMethod::setPublicType() {
	isPublic = true;
	isPrivate = false;
	isProtcted = false;
}
void CSmaliMethod::setProtctedType() {
	isPublic = false;
	isPrivate = false;
	isProtcted = true;
}

bool CSmaliMethod::getPrivateType() {
	return isPrivate;
}
bool CSmaliMethod::getPublicType() {
	return isPublic;
}
bool CSmaliMethod::getProtctedType() {
	return isProtcted;
}

void CSmaliMethod::setHide() {
	this->isNeedHide = true;
}
bool CSmaliMethod::getHide() {
	return this->isNeedHide;
}

CSmaliMethod::~CSmaliMethod() {
}

void CSmaliMethod::dumpAllMethod(CodeDumper* d) {
	//CVar::setSameVarListData(this->listSameVar);
	if (!this->getHide()) {
		CodeDumper d2 = codeCache->dumpCode();
		d->add(d2);
	}
}

void CSmaliMethod::dumpAllMethodForTemplate(CodeDumper* d) {
	//CVar::setSameVarListData(this->listSameVar);
	CodeDumper d2 = codeCache->dumpCodeForTemplate();
	d->add(d2);
}

bool CSmaliMethod::insertTemplateParam(std::string strType, std::string strClass) {
	auto a = listTemplateParam.find(strType);
	if (a != listTemplateParam.end()) {
		BaseAssert(a->second == strClass);
		return false;
	}
	this->listTemplateParam.insert(std::make_pair(strType, strClass));
	return true;
}


std::string CSmaliMethod::getClassName() {
	return strClassName;
}

void CSmaliMethod::setMethodType(std::string strType) {
	methodType = strType;
}

std::string CSmaliMethod::getMethodType() {
	return methodType;
}

void CSmaliMethod::setMethodName(std::string strName) {
	strFunctionName = strName;
}

std::string CSmaliMethod::getMethodName() {
	return strFunctionName;
}

void CSmaliMethod::makeSymbolList(void) {

	//this->pClass->listImportSaver->clearCache();
	//SmaliImportSaver::clearCache();

	// 分析所有语义数据
	codeCache->syntaxDiagram();
}

void CSmaliMethod::insertStringLine(std::string& str, int nLine) {

	// 插入到新的结构
	codeCache->insertCode(nLine, str);
}



