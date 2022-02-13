#include "CBaseAssert.h"
#include <map>
#include <any>
#include <variant>
#include <typeinfo>
#include <iostream>
#include <fstream>
#include "stringhelper.h"
#include "instructionhelper.h"
#include "CodeDumper.h"
#include "CSmaliMethod.h"
#include <filesystem>
#include <cassert>
#include <filesystem>
#include <fstream>
#include "CSmaliClass.h"
#include "CSmaliType.h"
#include <algorithm>
#include "TestAnnotationSignature.h"
#include "CMultiWorkThread.h"

// clang-format -style=Microsoft -i com.smali.helloworld.cpp		这个可以
// clang-format -style=WebKit -i com.smali.helloworld.cpp			这个也好看
// 可以使用上面的指令重新排版
// 直接将修改后的文件放在和代码文件相同的文件夹中，并且设置格式化选项-style=file，即可以使用自定义的排版格式。

CSmaliClass::CSmaliClass() {

}

CSmaliClass::CSmaliClass(std::string strFilePath) {
	//this->listImportSaver = std::make_shared<SmaliImportSaver>();
	this->strFilePath = strFilePath;
}

std::string CSmaliClass::getClassCppSaveName() {
	return CSmaliType(strClassName, nullptr).getBaseType()->getCppFileName();
	//return this->ptrClassName->getBaseType()->getCppFileName();
}

// 把文件中的数据全部加载到 listSmaliFileData 上去
bool CSmaliClass::loadFile(void) {
	std::filesystem::path fsPath(strFilePath);
	if (std::filesystem::exists(fsPath)) {

		strFileName = fsPath.filename().string();
		std::ifstream ifile(strFilePath, std::ifstream::in);
		int nCurrentLineIndex = 1;
		if (ifile.is_open()) {
			std::string strLine;
			while (std::getline(ifile, strLine)) {
				if (stringhelper::trim(strLine).size() > 0) {
					FileStringLine fileStrLine;
					fileStrLine.nLine = nCurrentLineIndex;
					fileStrLine.strLine = strLine;
					fileStrLine.listSymbol = stringhelper::splitToSymbol(fileStrLine.strLine);
					listSmaliFileData.push_back(fileStrLine);
				}
				nCurrentLineIndex++;
				// printf("%s\n", strLine.c_str());
			}
			ifile.close();
			return true;
		}
	}
	return false;
}

bool CSmaliClass::isJavaClassName(std::string str) {
	if ((str[0] == 'L') && (str[str.size() - 1]) == ';') return true;
	return false;
}

bool CSmaliClass::insertTemplateParam(std::string strType, std::string strClass) {
	auto a = listTemplateParam.find(strType);
	if (a != listTemplateParam.end()) {
		CBaseAssert(a->second == strClass);
		return false;
	}
	this->listTemplateParam.insert(std::make_pair(strType, strClass));
	return true;
}

std::string CSmaliClass::getTemplateUseString() {
	std::string strTemplateParam = "<";

	for (auto a = listTemplateParam.begin(); a != listTemplateParam.end(); a++) {
		std::smatch m;
		std::string strTypeDefName = a->first;
		if (std::regex_search(strTypeDefName, m, std::regex(
			RegexStart
			"(" AnnoNameNoColon ")" "([:]{1,2})"
			RegexEnd
		)) && (m.size() == 3)) {
			if (m[2] == ":") {
				if (a != listTemplateParam.begin()) {
					strTemplateParam.append(",");
				}
				strTemplateParam.append(m[1]);
			}
			else {
				// 两个冒号的
			}
		}
	}

	strTemplateParam.append(">");
	return strTemplateParam;
}

std::string CSmaliClass::getTemplateDefineString(CSmaliMethod* pMethod) {
	std::string strTemplateParam = "template <";

	std::map<std::string, std::string> listTemplateTmpParam = listTemplateParam;

	if (pMethod) {
		listTemplateTmpParam.insert(pMethod->listTemplateParam.begin(), pMethod->listTemplateParam.end());
	}

	for (auto a = listTemplateTmpParam.begin(); a != listTemplateTmpParam.end(); a++) {
		std::smatch m;
		std::string strTypeDefName = a->first;
		if (std::regex_search(strTypeDefName, m, std::regex(
			RegexStart
			"(" AnnoNameNoColon ")" "([:]{1,2})"
			RegexEnd
		)) && (m.size() == 3)) {
			if (m[2] == ":") {
				if (a != listTemplateTmpParam.begin()) {
					strTemplateParam.append(",");
				}
				strTemplateParam.append("typename ").append(m[1]);
			}
			else {
				// 两个冒号的
			}
		}
	}

	strTemplateParam.append(">");
	return strTemplateParam;
}

void CSmaliClass::dumpToCpp(CodeDumper* d) {

	CodeDumper cppMethodDumper;
	//this->eOutType = config::OUT_CPP;
	//this->listImportSaver->clearCache();

	// 如果是模板類， CPP 文件中不放東西，全部放到 H 文件中
	if (!(this->listTemplateParam.size() > 0)) {
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			(*a)->dumpAllField(OUT_CPP, &cppMethodDumper, this);
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			(*a)->dumpAllMethod(OUT_CPP, &cppMethodDumper);
		}
	}

	d->add("// CPP ").add(this->strFilePath).newline();
	d->add("#include \"").add(this->getClassCppSaveName()).add(".h\"").newline();
	d->add(cppMethodDumper);
	d->newline();
	d->format();
}

// 输出 H 文件中的类型定义
void CSmaliClass::dumpToHdefine(CodeDumper* d, std::shared_ptr<CTypeDefine> cTypeDef, CSmaliClass* pClass) {
	std::string strSelfHName = this->getClassCppSaveName();
	CodeDumper hMethodDumper;
	//this->eOutType = config::OUT_H;
	//this->listImportSaver->clearCache();

	// 获得完整的类名  XXX::XXXX::XXXXX:XXX
	std::string strClassCppName = this->ptrClassName->getBaseType()->getCppType(true);
	std::string strNameSpace = "";
	std::string strClassName = "";
	int nFindLast = (int)strClassCppName.find_last_of("::");
	if (nFindLast > 0) {
		strClassName = strClassCppName.substr(((size_t)nFindLast + 1), strClassCppName.size() - ((size_t)nFindLast + 1));
		strNameSpace = strClassCppName.substr(0, (size_t)nFindLast - 1);
	}
	else if (nFindLast < 0) {
		strClassName = strClassCppName;
	}
	else {
		CBaseAssert(0);
	}

	// 先输出 namespace 空间
	hMethodDumper.add("namespace ").add(strNameSpace).add("{").newline();

	// 生成类模板
	if (this->listTemplateParam.size() > 0) {
		if (this->listTemplateParam.size() > 0) {
			std::string strTemplateParam = getTemplateDefineString(nullptr);
			hMethodDumper.add(strTemplateParam).newline();
		}
		else {
			CBaseAssert(0);
		}
	}

	// 输出继承类
	if ((listStrImplements.size() > 0) && (this->ptrSuperName->getFullTypeSmaliString() == "Ljava/lang/Object;")) {
		hMethodDumper.add("class ").add(strClassName).add(" : ");
		for (auto a = listStrImplements.begin(); a != listStrImplements.end(); a++) {
			hMethodDumper.add("public ").add((*a)->getCppType());
			auto b = a; b++;
			if (b != listStrImplements.end()) {
				hMethodDumper.add(", ");
			}
		}
		hMethodDumper.add(" {").newline();
	}
	else {
		if ((this->ptrClassName->getBaseTypeSmaliString() == "Ljava/lang/Object;") && (!this->ptrSuperName)) {
			hMethodDumper.add("class ").add(strClassName).add(" : ").add("public ").add("java2cBase");
		}
		else {
			hMethodDumper.add("class ").add(strClassName).add(" : ").add("public ").add(this->ptrSuperName->getCppType());
		}
		if (listStrImplements.size() > 0) {
			hMethodDumper.add(", ");
		}
		for (auto a = listStrImplements.begin(); a != listStrImplements.end(); a++) {
			hMethodDumper.add("public ").add((*a)->getCppType());
			auto b = a; b++;
			if (b != listStrImplements.end()) {
				hMethodDumper.add(", ");
			}
		}
		hMethodDumper.add(" {").newline();
	}
	// 输出函数和
	{
		hMethodDumper.add("protected:").newline();
		hMethodDumper.addIndent();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getProtctedType() && cTypeDef->hasField((*a)->fieldName)) {
				(*a)->dumpAllField(OUT_H, &hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getProtctedType() && cTypeDef->hasMethod((*a)->getMethodSignature())) {
				(*a)->dumpAllMethod(OUT_H, &hMethodDumper);
			}
		}
		hMethodDumper.subIndent();
		hMethodDumper.add("private:").newline();
		hMethodDumper.addIndent();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getPrivateType() && cTypeDef->hasField((*a)->fieldName)) {
				(*a)->dumpAllField(OUT_H, &hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getPrivateType() && cTypeDef->hasMethod((*a)->getMethodSignature())) {
				(*a)->dumpAllMethod(OUT_H, &hMethodDumper);
			}
		}
		hMethodDumper.subIndent();
		hMethodDumper.add("public:").newline();
		hMethodDumper.addIndent();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getPublicType() && cTypeDef->hasField((*a)->fieldName)) {
				(*a)->dumpAllField(OUT_H, &hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getPublicType() && cTypeDef->hasMethod((*a)->getMethodSignature())) {
				(*a)->dumpAllMethod(OUT_H, &hMethodDumper);
			}
		}
		hMethodDumper.subIndent();
	}

	// 如果有静态初始化代码,那么就生成静态初始化的调用过程
	if (this->hasStaticInit()) {
		CodeDumper hStaticInitDumper;
		this->dumpStaticInited(&hStaticInitDumper);
		hMethodDumper.add(hStaticInitDumper);
	}

	// 增加虚析构函数, 检测是否有构造函数
	if (!this->dumpDestructor(&hMethodDumper)) {
		// 没有增加成功,那么意味着构造也没有,需要补齐
		hMethodDumper.addIndent();
		hMethodDumper.add(this->ptrClassName->getBaseType()->getCppShortType());
		hMethodDumper.add("(){ }").endl().newline();
		hMethodDumper.add("virtual ~");
		hMethodDumper.add(this->ptrClassName->getBaseType()->getCppShortType());
		hMethodDumper.add("(){ }").endl().newline();
		hMethodDumper.subIndent();
	}

	hMethodDumper.newline();
	hMethodDumper.add("}; // class ").add(strClassName).newline();
	hMethodDumper.add("}; // ").add("namespace ").add(strNameSpace).newline();

	// 如果是模板類，就需要單獨多生成一些代碼
	if (this->listTemplateParam.size() > 0) {
		CodeDumper cppMethodDumper;
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if (cTypeDef->hasMethod((*a)->getMethodSignature())) {
				(*a)->dumpAllMethodForTemplate(&cppMethodDumper);
			}
		}
		hMethodDumper.add(cppMethodDumper);
	}

	d->add("// H ").add(this->strFilePath).newline();
	d->add(hMethodDumper);
	d->newline();
}

// 定义状态下收集
void CSmaliClass::colloectDefine(std::shared_ptr<CTypeDefine> typeDef, std::map<std::string, std::shared_ptr<CTypeDefine>>& cType) {
	this->collect(cType);
	for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
		if (typeDef->hasField((*a)->fieldName)) {
			(*a)->collect(cType);
		}
	}
	if (this->listTemplateParam.size() > 0) {
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if (typeDef->hasMethod((*a)->getMethodSignature())) {
				(*a)->collectAllCode(cType);
			}
		}
	}
	else {
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if (typeDef->hasMethod((*a)->getMethodSignature())) {
				(*a)->collect(cType);
			}
		}
	}
}

// 排序
std::vector<std::string> CSmaliClass::sortSuperType(std::map<std::string, std::shared_ptr<CTypeDefine>>& cType) {

	struct typeRec {
		std::string strName;
		std::vector<std::string> listSuper;
	};

	std::vector<std::string> listSorted;

	// 提取出所有的依赖
	std::vector<struct typeRec> listRec;
	for (auto h = cType.begin(); h != cType.end(); h++) {
		if (!CSmaliType(h->second->strClassName, nullptr).getBaseType()->isPrimitiveType()) {
			std::map<std::string, std::shared_ptr<CTypeDefine>> newCollect;
			struct typeRec rec;
			auto s = CSmaliType(h->second->strClassName, nullptr).getBaseType()->getCppFileName();
			auto v = CMultiWorkThread::mapSmaliFile.find(s);
			if (v != CMultiWorkThread::mapSmaliFile.end()) {
				v->second->colloectDefine(h->second, newCollect);
			}
			else {
				CBaseAssert(0);
			}
			rec.strName = CSmaliType(h->second->strClassName, nullptr).getBaseType()->getFullTypeSmaliString();
			for (auto a = newCollect.begin(); a != newCollect.end(); a++) {
				rec.listSuper.push_back(a->first);
			}
			listRec.push_back(rec);
		}
	}

	while (listRec.size() > 0) {
		// 生成完整的名称数据
		std::vector<std::string> listFull;
		for (auto a = listRec.begin(); a != listRec.end(); a++) {
			listFull.push_back(a->strName);
		}

		// 如果被引用了就删掉
		for (auto a = listRec.begin(); a != listRec.end(); a++) {
			for (auto b = a->listSuper.begin(); b != a->listSuper.end(); b++) {
				auto c = std::find(listFull.begin(), listFull.end(), *b);
				if (c != listFull.end()) {
					listFull.erase(c);
				}
			}
		}

		CBaseAssert(listFull.size() > 0);
		for (auto c = listFull.begin(); c != listFull.end(); c++) {
			listSorted.push_back(*c);
			for (auto a = listRec.begin(); a != listRec.end(); a++) {
				if (a->strName == (*c)) {
					listRec.erase(a);
					break;
				}
			}
		}
	}

	return listSorted;
}

void CSmaliClass::collectSuperType(std::map<std::string, std::shared_ptr<CTypeDefine>>& cType) {
	bool bNeedLoop = true;
	int nLoopCount = 0;

	while(bNeedLoop) {
		bNeedLoop = false;
		nLoopCount++;
		// 临时收集下来
		std::map<std::string, std::shared_ptr<CTypeDefine>> newCollect;
		for (auto h = cType.begin(); h != cType.end(); h++) {
			if (!CSmaliType(h->second->strClassName, nullptr).getBaseType()->isPrimitiveType()) {
				auto s = CSmaliType(h->second->strClassName, nullptr).getBaseType()->getCppFileName();
				auto v = CMultiWorkThread::mapSmaliFile.find(s);
				if (v != CMultiWorkThread::mapSmaliFile.end()) {
					v->second->colloectDefine(h->second, newCollect);
				}
				else {
					CBaseAssert(0);
				}
			}
		}
		for (auto a = newCollect.begin(); a != newCollect.end(); a++) {
			auto b = cType.find(a->first);
			if (b == cType.end()) {
				std::string strClassName = a->first;
				auto c = std::make_shared<CTypeDefine>(strClassName);
				cType.insert(std::make_pair(strClassName, c));
				b = cType.find(a->first);
				CBaseAssert(b != cType.end());
			}
			for (auto c = a->second->listUsedField.begin(); c != a->second->listUsedField.end(); c++) {
				if (!b->second->hasField(*c)) {
					b->second->addUsedField(*c);
					bNeedLoop = true;
				}
			}
			for (auto c = a->second->listUsedMethod.begin(); c != a->second->listUsedMethod.end(); c++) {
				if (!b->second->hasMethod(*c)) {
					b->second->addUsedMethod(*c);
					bNeedLoop = true;
				}
			}
		}
		CBaseAssert(nLoopCount < 1000);
	}
}

// 输出 H 文件 
void CSmaliClass::dumpToH(CodeDumper* d) {
	std::string strSelfHName = this->getClassCppSaveName();
	CodeDumper hMethodDumper;

	// 收集所有的变量和引用
	this->collectTypeMap.clear();
	this->collect(this->collectTypeMap);
	for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			(*a)->collect(this->collectTypeMap);
	}
	for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
		(*a)->collectAllCode(this->collectTypeMap);
	}
	// 删除自己
	auto c = this->collectTypeMap.find(this->strClassName);
	if (c != this->collectTypeMap.end()) {
		this->collectTypeMap.erase(c);
	}

	// 去收集父类的
	collectSuperType(this->collectTypeMap);
	std::vector<std::string> sortedType = sortSuperType(this->collectTypeMap);

	CBaseAssert(sortedType.size() == this->collectTypeMap.size());



	// 获得完整的类名  XXX::XXXX::XXXXX:XXX
	std::string strClassCppName = this->ptrClassName->getBaseType()->getCppType(true);
	std::string strNameSpace = "";
	std::string strClassName = "";
	int nFindLast = (int)strClassCppName.find_last_of("::");
	if (nFindLast > 0) {
		strClassName = strClassCppName.substr(((size_t)nFindLast + 1), strClassCppName.size() - ((size_t)nFindLast + 1));
		strNameSpace = strClassCppName.substr(0, (size_t)nFindLast - 1);
	}
	else if (nFindLast < 0) {
		strClassName = strClassCppName;
	}
	else {
		CBaseAssert(0);
	}

	// 先输出 namespace 空间
	hMethodDumper.add("namespace ").add(strNameSpace).add("{").newline();

	// 生成类模板
	if (this->listTemplateParam.size() > 0) {
		if (this->listTemplateParam.size() > 0) {
			std::string strTemplateParam = getTemplateDefineString(nullptr);
			hMethodDumper.add(strTemplateParam).newline();
		}
		else {
			CBaseAssert(0);
		}
	}

	// 输出继承类
	if ((listStrImplements.size() > 0) && (this->ptrSuperName->getFullTypeSmaliString() == "Ljava/lang/Object;")) {
		hMethodDumper.add("class ").add(strClassName).add(" : ");
		for (auto a = listStrImplements.begin(); a != listStrImplements.end(); a++) {
			hMethodDumper.add("public ").add((*a)->getCppType());
			auto b = a; b++;
			if (b != listStrImplements.end()) {
				hMethodDumper.add(", ");
			}
		}

		hMethodDumper.add(" {").newline();
	}
	else {

		if ((this->ptrClassName->getBaseTypeSmaliString() == "Ljava/lang/Object;") && (this->ptrSuperName->getFullTypeSmaliString() == "")) {
			hMethodDumper.add("class ").add(strClassName).add(" : ").add("public ").add("java2cBase");
		}
		else {
			hMethodDumper.add("class ").add(strClassName).add(" : ").add("public ").add(this->ptrSuperName->getCppType());
		}

		if (listStrImplements.size() > 0) {
			hMethodDumper.add(", ");
		}
		for (auto a = listStrImplements.begin(); a != listStrImplements.end(); a++) {
			hMethodDumper.add("public ").add((*a)->getCppType(this));
			auto b = a; b++;
			if (b != listStrImplements.end()) {
				hMethodDumper.add(", ");
			}
		}

		hMethodDumper.add(" {").newline();
	}

	// 输出函数
	{
		hMethodDumper.add("protected:").newline();
		hMethodDumper.addIndent();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getProtctedType()) {
				(*a)->dumpAllField(OUT_H, &hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getProtctedType()) {
				(*a)->dumpAllMethod(OUT_H, &hMethodDumper);
			}
		}
		hMethodDumper.subIndent();
		hMethodDumper.add("private:").newline();
		hMethodDumper.addIndent();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getPrivateType()) {
				(*a)->dumpAllField(OUT_H, &hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getPrivateType()) {
				(*a)->dumpAllMethod(OUT_H, &hMethodDumper);
			}
		}
		hMethodDumper.subIndent();
		hMethodDumper.add("public:").newline();
		hMethodDumper.addIndent();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getPublicType()) {
				(*a)->dumpAllField(OUT_H, &hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getPublicType()) {
				(*a)->dumpAllMethod(OUT_H, &hMethodDumper);
			}
		}
		hMethodDumper.subIndent();
	}

	// 如果有静态初始化代码,那么就生成静态初始化的调用过程
	if (this->hasStaticInit()) {
		CodeDumper hStaticInitDumper;
		this->dumpStaticInited(&hStaticInitDumper);
		hMethodDumper.add(hStaticInitDumper);
	}

	// 增加虚析构函数
	if (!this->dumpDestructor(&hMethodDumper)) {
		// 没有增加成功,那么意味着构造也没有,需要补齐
		hMethodDumper.addIndent();
		{
			hMethodDumper.add(this->ptrClassName->getBaseType()->getCppShortType());
			hMethodDumper.add("(){ }").endl().newline();
			hMethodDumper.add("virtual ~");
			hMethodDumper.add(this->ptrClassName->getBaseType()->getCppShortType());
			hMethodDumper.add("(){ }").endl().newline();

		}
		hMethodDumper.subIndent();
	}

	hMethodDumper.newline();
	hMethodDumper.add("}; // class ").add(strClassName).newline();
	hMethodDumper.add("}; // ").add("namespace ").add(strNameSpace).newline();

	// 如果是模板類，就需要單獨多生成一些代碼
	if (this->listTemplateParam.size() > 0) {
		CodeDumper cppMethodDumper;
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			(*a)->dumpAllMethodForTemplate(&cppMethodDumper);
		}
		hMethodDumper.add(cppMethodDumper);
	}

	d->add("#ifndef ").add("__").add(this->ptrClassName->getBaseType()->getCppFileMacroDefine()).add("__").newline();
	d->add("#define ").add("__").add(this->ptrClassName->getBaseType()->getCppFileMacroDefine()).add("__").newline();
	d->add("// H ").add(this->strFilePath).newline();
	d->add("#include \"").add("java2ctype").add(".h\"").newline();


	for (auto h = sortedType.rbegin(); h != sortedType.rend(); h++) {
		auto b = this->collectTypeMap.find(*h);
		CBaseAssert(b != this->collectTypeMap.end());
		if (!CSmaliType(b->second->strClassName, nullptr).getBaseType()->isPrimitiveType()) {
			auto s = CSmaliType(b->second->strClassName, nullptr).getBaseType()->getCppFileName();
			auto v = CMultiWorkThread::mapSmaliFile.find(s);
			if (v != CMultiWorkThread::mapSmaliFile.end()) {
				CodeDumper hDumper;
				v->second->dumpToHdefine(&hDumper, b->second, this);
				d->add(hDumper);
			}
			else {
				d->add("can not find class: ").add(s).endl().newline();
				CBaseAssert(0);
			}
		}
	}

	for (auto h = this->collectTypeMap.begin(); h != this->collectTypeMap.end(); h++) {

	}
	d->newline();

	d->add(hMethodDumper);
	d->newline();
	d->add("#endif //").add("__").add(this->ptrClassName->getBaseType()->getCppFileMacroDefine()).add("__").newline();
}

// 处理 .class
// .class public final Landroid/icu/impl/CalendarAstronomer$Ecliptic;
// .class interface abstract annotation Ldalvik/annotation/AnnotationDefault;
//it->strLine = ".class final synthetic Ldalvik/system/-$Lambda$xxvwQBVHC44UYbpcpA8j0sUqLOo;"
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineClass(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	constexpr auto pf = RegexStart
		"[.]class" "\\s+"
		"((?:" PatternClassFlags "\\s+" ")*)"		// 所有的属性
		"((?:" RegexSmaliBaseType "))"				// 类名字
		RegexEnd;

	std::smatch m;
	if (std::regex_search(it->strLine, m, std::regex(pf)) && (m.size() == 3)) {
		std::string strFlags = m[1];
		std::string strName = m[2];
		this->strClassName = strName;
		this->ptrClassName = std::make_shared<CSmaliType>(strName, this);
		this->setFlags(strFlags);
	}
	else {
		CBaseAssert(0);
	}
	return it;
}

// 处理 .super
//.super Landroid/icu/impl/LocaleDisplayNamesImpl$ICUDataTables;
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineSuper(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	std::smatch m;
	if (std::regex_search(it->strLine, m, CRegexString::matchDotSuperClass) && (m.size() == 2)) {
		this->ptrSuperName = std::make_shared<CSmaliType>(m[1], this);

		std::string strTemp = this->ptrSuperName->getFullTypeSmaliString();
		useType(strTemp, "<init>()V", true);
		this->insertClassRecord("super", strTemp);
	}
	else {
		CBaseAssert(0);
	}
	return it;
}

// 处理 .source
// .source "Wrapper.java"
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineSource(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	std::smatch m;
	if (std::regex_search(it->strLine, m, CRegexString::matchDotSourceFile) && (m.size() == 2)) {
		this->strSourceName = m[1];
	}
	else {
		CBaseAssert(0);
	}
	return it;
}

// 处理 .implements
//.implements Ljava/time/format/DateTimeFormatterBuilder$DateTimePrinterParser;
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineImplements(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	std::smatch m;
	if (std::regex_search(it->strLine, m, CRegexString::matchDotImplementsClass) && (m.size() == 2)) {
		this->listStrImplements.push_back(std::make_shared<CSmaliType>(m[1], this));
		std::string strImplements = m[1];
		useType(strImplements, "<init>()V", true);
		this->insertClassRecord("imple", strImplements);
	}
	else {
		CBaseAssert(0);
	}
	return it;
}

// 处理 .field
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineField(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	int nAnnotation = 0;
	std::vector<FileStringLine>::iterator nextIt = it;
	std::vector<std::string> listAnnotation;
	auto ss = it;
	for (ss++; ss != listSmaliFileData.end(); ss++) {
		std::vector<std::string> listSymbol = ss->listSymbol;
		if ((listSymbol.size() >= 2) && ((listSymbol[0] == ".annotation"))) {
			nAnnotation++;
		}
		if ((listSymbol.size() >= 2) && ((listSymbol[0] == ".end") && (listSymbol[1] == "annotation"))) {
			if (nAnnotation > 0) {
				nAnnotation--;
			}
			else {
				break;
			}
		}
		if (nAnnotation == 0) {
			if ((listSymbol.size() >= 2) && ((listSymbol[0] == ".end") && (listSymbol[1] == "field"))) {
				auto aa = it;
				for (aa++; aa != ss; aa++) {
					listAnnotation.push_back(aa->strLine);
				}
				nextIt = ss;
				break;
			}
		}
		if ((listSymbol.size() >= 2) && ((listSymbol[0] == ".field"))) {
			break;
		}
		if ((listSymbol.size() >= 2) && ((listSymbol[0] == ".method"))) {
			break;
		}
	}

	std::shared_ptr<CSmaliField> smaliField = std::make_shared<CSmaliField>();
	std::vector<std::string> listSymbol = it->listSymbol;

	/*
	.field static final synthetic -assertionsDisabled:Z
	.field private static final EXTERNAL_XML_VERSION:Ljava/lang/String; = "1.0"
	.field private static final PROPS_DTD:Ljava/lang/String; = "<?xml version=\"1.0\" encoding=\"UTF-8\"?><!-- DTD for properties --><!ELEMENT properties ( comment?, entry* ) ><!ATTLIST properties version CDATA #FIXED \"1.0\"><!ELEMENT comment (#PCDATA) ><!ELEMENT entry (#PCDATA) ><!ATTLIST entry  key CDATA #REQUIRED>"
	.field private static final PROPS_DTD_URI:Ljava/lang/String; = "http://java.sun.com/dtd/properties.dtd"
	.field private static final INVALID_INPUT_CHARACTER:C = '\\ufffd'
	.field public static final NEGATIVE_INFINITY:D = -Infinity
	*/
	constexpr auto pf = RegexStart
		"[.]field" "\\s+"
		"((?:" PatternFieldFlags "\\s+" ")*)"		// 所有的属性
		"([-\\w$]*)"								// 变量名
		"[:]"
		"(" SmaliTypePrefix "(?:" RegexSmaliBaseType ")" ")"					// 变量类型
		"((?:"										// 变量赋值
		"\\s*"
		"="
		"\\s*"
		PatternFieldValue
		")?)"
		RegexEnd;

	std::smatch m;
	if (std::regex_search(it->strLine, m, std::regex(pf)) && (m.size() == 5)) {
		std::string strFlags = m[1];
		std::string strName = m[2];
		std::string strType = m[3];		// 类型名字
		std::string strValue = m[4];

		smaliField->setFlags(strFlags);
		smaliField->fieldName = strName;
		smaliField->fieldType = std::make_shared<CSmaliType>(strType, this);

		// 放在 Field 上
		smaliField->useType(smaliField->fieldType->getBaseType()->getFullTypeSmaliString(), "<init>()V", true);

		// 变量赋值
		smaliField->hasValue = 0;
		if (strValue.size() > 0) {
			if (std::regex_search(strValue, m, std::regex(
				RegexStart
				"="
				"\\s*"
				"("
				PatternFieldValue
				")"
				RegexEnd
			)) && (m.size() == 2)) {
				smaliField->hasValue = 1;
				smaliField->strValue = m[1];
			}
		}
	}
	else {
		CBaseAssert(0);
	}

	// 看一下注解类
	if (listAnnotation.size() > 0) {
		for (auto it1 = listAnnotation.begin(); it1 != listAnnotation.end(); it1++) {
			std::regex annotationStart("(.annotation)([\t ]+)(system|runtime|build)([\t ]+)(L[0-9a-zA-Z_/$-]+;)");
			std::smatch m;
			bool found = std::regex_search((*it1), m, annotationStart);
			if (found && (m.size() == 6)) {
				std::string strAnnotationType = m[3];
				std::string strAnnotationClass = m[5];
				it1++;
				std::string strAnnotationString;
				for (auto ss = it1; ss != listAnnotation.end(); ss++) {
					if (((int)(*ss).find(".end annotation")) > 0) {
						if (strAnnotationType == "system") {
							if (strAnnotationClass == "Ldalvik/annotation/Signature;") {
								std::regex getValue("(value\\s*=\\s*[{])([^}]+)([}])");	    // value = { } 切割出中间的
								found = std::regex_search(strAnnotationString, m, getValue);
								if (found && (m.size() == 4)) {
									std::string strValue = m[2];
									stringhelper::replace(strValue, "\",\"", "");

									// 从引号中切割出来字符串
									std::smatch m_cut;
									if (std::regex_search(strValue, m_cut, std::regex("^\\s*\"([^\"]*)\"\\s*$")) && (m_cut.size() == 2)) {
										strValue = m_cut[1];
									}
									else {
										CBaseAssert(0);
									}
									std::string strFieldLine = it->strLine;
									strFieldLine = stringhelper::trim(strFieldLine);
									TestAnnotationSignature::insertFieldRecord(this->strFilePath, strFieldLine, strValue);
									std::string strTypeRename = TestAnnotationSignature::fieldResolver(strFieldLine, strValue, this);

									smaliField->fieldType = std::make_shared<CSmaliType>(strTypeRename, this);
								}
								else {
									CBaseAssert(0);
								}
							}
							else if (strAnnotationClass == "Ldalvik/annotation/EnclosingClass;") {

							}
							else if (strAnnotationClass == "Ldalvik/annotation/InnerClass;") {

							}
							else if (strAnnotationClass == "Ldalvik/annotation/MemberClasses;") {

							}
							else if (strAnnotationClass == "Ldalvik/annotation/EnclosingMethod;") {

							}
							else if (strAnnotationClass == "Ldalvik/annotation/AnnotationDefault;") {

							}
							else {
								CBaseAssert(0);
							}
						}
						else if (strAnnotationType == "runtime") {
							if (strAnnotationClass == "Ljava/lang/Deprecated;") {

							}
							else if (strAnnotationClass == "Ljava/lang/annotation/Retention;") {

							}
							else if (strAnnotationClass == "Ljava/lang/annotation/Target;") {

							}
							else if (strAnnotationClass == "Ljava/lang/FunctionalInterface;") {

							}
							else if (strAnnotationClass == "Ljava/lang/annotation/Documented;") {

							}
							else if (strAnnotationClass == "Ljava/lang/invoke/Stable;") {

							}
							else {
								CBaseAssert(0);
							}
						}
						else {
							CBaseAssert(0);
						}
						it1 = ss;
					}
					else {
						strAnnotationString.append(stringhelper::trim(*ss));
					}
				}
			}
			else {
				CBaseAssert(0);
			}
		}
	}

	//// 有其它注解
	//if ((*it).startIt != (*it).endIt) {
	//	for (auto m = (*it).nextLevel.begin(); m != (*it).nextLevel.end(); m++) {
	//		if ((*m).dataType == ".annotation") {
	//			std::vector<std::string> listSymbol2 = (*(*m).startIt).listSymbol;
	//			if ((listSymbol2[1] == "system") && (listSymbol2[2] == "Ldalvik/annotation/Signature;")) {
	//				std::string strValue;
	//				for (auto s = (*m).startIt + 1; (s + 1) != (*m).endIt; s++) {
	//					std::string sVal = stringhelper::trim((*s).strLine);
	//					strValue.append(sVal);
	//				}
	//				stringhelper::replace(strValue, std::string("\",\""), std::string(""));
	//				std::string strSignature = stringhelper::getOnlyString(strValue, std::string("\""));
	//				smaliField->fieldTypeSignature = strSignature;
	//			}
	//			else {
	//				CBaseAssert(0);
	//			}
	//		}
	//		else {
	//			CBaseAssert(0);
	//		}
	//	}
	//}
	this->listField.push_back(smaliField);
	return nextIt;
}

// 处理 .method
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineMethod(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	std::shared_ptr<CSmaliMethod> cSmaliMethod = std::make_shared<CSmaliMethod>(this->ptrClassName, this);
	cSmaliMethod->getMethodName(it->strLine);

	for (auto ss = it; ss != listSmaliFileData.end(); ss++) {
		std::vector<std::string> listSymbol = ss->listSymbol;

		if ((listSymbol.size() >= 2) && ((listSymbol[0] == ".end") && (listSymbol[1] == "method"))) {
			cSmaliMethod->insertStringLine(ss->strLine, ss->nLine);
			this->listMethod.push_back(cSmaliMethod);
			// 当场就把函数编译一下
			cSmaliMethod->makeSymbolList();

			return ss;
		}
		else {
			cSmaliMethod->insertStringLine(ss->strLine, ss->nLine);
		}
	}
	return it;
}

// 处理 class 级别的 annotation
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineClassAnnotation(std::vector<CSmaliClass::FileStringLine>::iterator it) {

	//std::regex cvt("(L[0-9a-zA-Z_/$]+;)->([^:]+):(.+)");
	// .annotation system Ldalvik/annotation/Signature;
	std::regex annotationStart("(.annotation)([\t ]+)(system|runtime|build)([\t ]+)(L[0-9a-zA-Z_/$-]+;)");
	std::smatch m;
	bool found = std::regex_search(it->strLine, m, annotationStart);
	if (found && (m.size() == 6)) {
		std::string strAnnotationType = m[3];
		std::string strAnnotationClass = m[5];

		it++;
		std::string strAnnotationString;
		for (auto ss = it; ss != listSmaliFileData.end(); ss++) {
			std::vector<std::string> listSymbol = ss->listSymbol;

			if ((listSymbol.size() >= 2) && ((listSymbol[0] == ".end") && (listSymbol[1] == "annotation"))) {

				if (strAnnotationType == "system") {
					if (strAnnotationClass == "Ldalvik/annotation/Signature;") {
						std::regex getValue("(value\\s*=\\s*[{])([^}]+)([}])");	    // value = { } 切割出中间的
						found = std::regex_search(strAnnotationString, m, getValue);
						if (found && (m.size() == 4)) {
							std::string strValue = m[2];
							stringhelper::replace(strValue, "\",\"", "");

							// 从引号中切割出来字符串
							std::smatch m_cut;
							if (std::regex_search(strValue, m_cut, std::regex("^\\s*\"([^\"]*)\"\\s*$")) && (m_cut.size() == 2)) {
								strValue = m_cut[1];
							}
							else {
								CBaseAssert(0);
							}

							this->insertClassRecord("Templ", strValue);

							AnnotationClassSignature Templ = TestAnnotationSignature::classResolver(strValue, this);

							int nMatchStart = 0;
							if (this->ptrSuperName->getFullTypeSmaliString().size() > 0) {
								this->ptrSuperName = std::make_shared<CSmaliType>(Templ.listClassType[0], this);
								nMatchStart++;
							}
							for (int vi = nMatchStart, ind = 0; vi < Templ.listClassType.size(); vi++, ind++) {
								this->listStrImplements[ind] = std::make_shared<CSmaliType>(Templ.listClassType[vi], this);
							}
						}
						else {
							CBaseAssert(0);
						}
					}
					else if (strAnnotationClass == "Ldalvik/annotation/EnclosingClass;") {

					}
					else if (strAnnotationClass == "Ldalvik/annotation/InnerClass;") {

					}
					else if (strAnnotationClass == "Ldalvik/annotation/MemberClasses;") {

					}
					else if (strAnnotationClass == "Ldalvik/annotation/EnclosingMethod;") {

					}
					else if (strAnnotationClass == "Ldalvik/annotation/AnnotationDefault;") {

					}
					else {
						CBaseAssert(0);
					}
				}
				else if (strAnnotationType == "runtime") {
					if (strAnnotationClass == "Ljava/lang/Deprecated;") {

					}
					else if (strAnnotationClass == "Ljava/lang/annotation/Retention;") {

					}
					else if (strAnnotationClass == "Ljava/lang/annotation/Target;") {

					}
					else if (strAnnotationClass == "Ljava/lang/FunctionalInterface;") {

					}
					else if (strAnnotationClass == "Ljava/lang/annotation/Documented;") {

					}
					else if (strAnnotationClass == "Ljava/lang/invoke/Stable;") {

					}
					else {
						CBaseAssert(0);
					}
				}
				else {
					CBaseAssert(0);
				}

				return ss;
			}
			else {
				strAnnotationString.append(stringhelper::trim(ss->strLine));
			}
		}
	}
	else {
		CBaseAssert(0);
	}

	return it;
}

void CSmaliClass::insertClassRecord(std::string tagName, std::string& tagData) {
	std::string strTag = tagName;
	strTag.append(":=");
	strTag.append(tagData);
	listAnnotationInClass.push_back(strTag);
}

// 按行处理所有数据
void CSmaliClass::processAllLine() {
	this->insertClassRecord("class", this->strFilePath);
	for (auto it = listSmaliFileData.begin(); it != listSmaliFileData.end(); it++) {
		std::vector<std::string> listSymbol = it->listSymbol;
		if ((listSymbol.size() > 0) && (listSymbol[0][0] == '.')) {
			if (listSymbol[0] == ".class") {
				it = dotLineClass(it);
			}
			else if (listSymbol[0] == ".super") {
				it = dotLineSuper(it);
			}
			else if (listSymbol[0] == ".source") {
				it = dotLineSource(it);
			}
			else if (listSymbol[0] == ".implements") {
				it = dotLineImplements(it);
			}
			else if (listSymbol[0] == ".field") {
				it = dotLineField(it);
			}
			else if (listSymbol[0] == ".method") {
				it = dotLineMethod(it);
			}
			else if (listSymbol[0] == ".annotation") {
				it = dotLineClassAnnotation(it);
			}
		}
		else {
			// 除了空行,什么都不能有
			if ((listSymbol.size() > 0)) {
				if (listSymbol[0] != "#") { // 注释行
					CBaseAssert(0);
				}
			}
		}
	}

	// 保存真实的模板名字
	if (this->listTemplateParam.size() > 0) {
		std::string strCppType = this->ptrClassName->getBaseType()->getCppType();
		std::string strTmplateType = strCppType + getTemplateUseString();
		listTemplateTranslate.insert(std::make_pair(strCppType, strTmplateType));
	}
	TestAnnotationSignature::insertClassRecordList(this->listAnnotationInClass);

	// 解决只有返回参数不一致的重载函数
	std::map<std::string, std::vector<std::string>> listMethodCounts;
	for (auto a = listAllMethodSignatureType.begin(); a != listAllMethodSignatureType.end(); a++) {
		std::smatch m;
		if (std::regex_search(*a, m, std::regex("^\\s*([^)]*[)])\\S+\\s*$")) && (m.size() == 2)) {
			auto b = listMethodCounts.find(m[1]);
			if (b == listMethodCounts.end()) {
				std::vector<std::string> listString;
				listString.push_back(*a);
				listMethodCounts.insert(std::make_pair(m[1], listString));
			}
			else {
				b->second.push_back(*a);
			}
		}
		else {
			CBaseAssert(0);
		}
	}

	// 统计哪些是重复的
	// 这里不会再跑了
	for (auto a = listMethodCounts.begin(); a != listMethodCounts.end(); a++) {
		if (a->second.size() > 1) {
			// MethodRenameDefineItem
			std::smatch m;
			if (std::regex_search(a->first, m, std::regex("^\\s*([^(]*)[(]([^)]*)[)]\\s*$")) && (m.size() == 3)) {
				std::string strMethodOldName = m[1];		// 旧的函数名称
				std::string strMethodParam = m[2];			// 函数输入参数
				MethodRenameDefineItem item;
				if (strMethodOldName == "delete") {
					strMethodOldName = "_delete_";
				}

				item.strInputParam = strMethodParam;
				item.strOldName = strMethodOldName;
				item.methodCall.clear();

				for (auto b = a->second.begin(); b != a->second.end(); b++) {
					std::smatch m;
					if (std::regex_search(*b, m, std::regex("^\\s*([^(]*)[(]([^)]*)[)](\\S+)\\s*$")) && (m.size() == 4)) {
						std::string strMethodOldName = m[1];		// 旧的函数名称
						std::string strMethodParam = m[2];			// 函数输入参数
						std::string strMethodType = m[3];
						std::string strMethodReturnType = m[3];		// 返回参数
						if (listMethodRenameTranslation.find(*b) != listMethodRenameTranslation.end()) {
							CBaseAssert(0);
						}

						stringhelper::replace(strMethodReturnType, "$", "_");
						stringhelper::replace(strMethodReturnType, ".", "_");
						stringhelper::replace(strMethodReturnType, "/", "_");
						stringhelper::replace(strMethodReturnType, ";", "_");
						stringhelper::replace(strMethodReturnType, "[", "_");

						std::string strNewName = strMethodOldName;
						strNewName.append("__");
						strNewName.append(strMethodReturnType);
						listMethodRenameTranslation.insert(std::make_pair(*b, strNewName));
						item.methodCall.insert(std::make_pair(strMethodType, strNewName));
					}
					else {
						CBaseAssert(0);
					}
				}
				CBaseAssert(item.methodCall.size() == a->second.size());

				auto pItem = listMethodRename.find(strMethodOldName);
				if (pItem == listMethodRename.end()) {
					std::vector<MethodRenameDefineItem> tmp;
					tmp.push_back(item);
					listMethodRename.insert(std::make_pair(strMethodOldName, tmp));
				}
				else {
					pItem->second.push_back(item);
				}
			}
			else {
				CBaseAssert(0);
			}
		}
	}


}

std::string CSmaliClass::strMethodRenameTranslation(std::string str) {

	auto it = listMethodRenameTranslation.find(str);
	if (it != listMethodRenameTranslation.end()) {
		return it->second;
	}

	return std::string("");
}

// 把所有函数签名保存起来，用来测试是否存在重复
void CSmaliClass::insertMethodSignatureType(std::string str) {

#if 0
	std::smatch m;
	if (std::regex_search(str, m, std::regex("^\\s*([^(]*)[(]([^)]*)[)](\\S+)\\s*$")) && (m.size() == 4)) {
	}
	else {
		CBaseAssert(0);
	}
#endif

	auto it = std::find(this->listAllMethodSignatureType.begin(), this->listAllMethodSignatureType.end(), str);
	if (it == this->listAllMethodSignatureType.end()) {
		this->listAllMethodSignatureType.push_back(str);
	}
	else {
		CBaseAssert(0);
	}
}

std::string CSmaliClass::TemplateTranslate(std::string str) {
	auto a = listTemplateTranslate.find(str);
	if (a == listTemplateTranslate.end()) {
		return str;
	}
	return a->second;
}