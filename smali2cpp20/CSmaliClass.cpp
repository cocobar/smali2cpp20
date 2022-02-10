#include "BaseObject.h"
#include <map>
#include <any>
#include <variant>
#include <typeinfo>
#include <iostream>
#include <fstream>
#include "stringhelper.h"
#include "instructionhelper.h"
#include "CodeDumper.h"
#include "SmaliMethod.h"
#include <filesystem>
#include <cassert>
#include <filesystem>
#include <fstream>
#include "config.hpp"
#include "SmaliClass.h"
#include "SmaliType.h"
#include <algorithm>
#include "TestAnnotationSignature.h"

// clang-format -style=Microsoft -i com.smali.helloworld.cpp		这个可以
// clang-format -style=WebKit -i com.smali.helloworld.cpp			这个也好看
// 可以使用上面的指令重新排版
// 直接将修改后的文件放在和代码文件相同的文件夹中，并且设置格式化选项-style=file，即可以使用自定义的排版格式。

CSmaliClass::CSmaliClass() {

}

CSmaliClass::CSmaliClass(std::string strFilePath) {
	this->listImportSaver = std::make_shared<SmaliImportSaver>();
	this->strFilePath = strFilePath;
}

std::string CSmaliClass::getClassCppSaveName() {
	return SmaliType(this->strClassName).getBaseType()->getCppFileName();
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


std::string CSmaliClass::getClassName() {
	return this->strClassName;
}

unsigned long CSmaliClass::isJavaAnnotationFlags(std::string str) {
	if (str == "annotation") return CSmaliClass::kAccAnnotation;
	return 0;
}
unsigned long CSmaliClass::isJavaSyntheticFlags(std::string str) {
	if (str == "synthetic") return CSmaliClass::kAccSynthetic;
	return 0;
}

unsigned long CSmaliClass::isJavaEnumFlags(std::string str) {
	if (str == "enum") return CSmaliClass::kAccEnum;
	return 0;
}

unsigned long CSmaliClass::isJavaAccessFlags(std::string str) {
	if (str == "public") return CSmaliClass::kAccPublic;
	if (str == "protected") return CSmaliClass::kAccProtected;
	if (str == "private") return CSmaliClass::kAccPrivate;
	if (str == "final") return CSmaliClass::kAccFinal;
	if (str == "static") return CSmaliClass::kAccStatic;
	if (str == "abstract") return CSmaliClass::kAccAbstract;
	if (str == "interface") return CSmaliClass::kAccInterface;
	if (str == "transient") return CSmaliClass::kAccTransient;
	if (str == "volatile") return CSmaliClass::kAccVolatile;
	if (str == "synchronized") return CSmaliClass::kAccSynchronized;
	return 0;
}

bool CSmaliClass::isJavaClassName(std::string str) {
	if ((str[0] == 'L') && (str[str.size() - 1]) == ';') return true;
	return false;
}

bool CSmaliClass::insertTemplateParam(std::string strType, std::string strClass) {	
	auto a = listTemplateParam.find(strType);
	if (a != listTemplateParam.end()) {
		BaseAssert(a->second == strClass);
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

std::string CSmaliClass::getTemplateDefineString(CSmaliMethod * pMethod) {
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
	this->eOutType = config::OUT_CPP;
	//SmaliImportSaver::clearCache();
	this->listImportSaver->clearCache();

	// 如果是模板類， CPP 文件中不放東西，全部放到 H 文件中
	if (!(this->listTemplateParam.size() > 0)) {
		// CPP 文件
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			(*a)->dumpAllField(&cppMethodDumper, this);
		}

		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			(*a)->dumpAllMethod(&cppMethodDumper);
		}
	}
	else {
		// 模板類，放進去編譯看看
		this->listImportSaver->checkJavaClass(this->strClassName);
	}
	// 引入 include 
	d->add("// CPP ").add(this->strFilePath).newline();

	//SmaliImportSaver::checkJavaClass("Ljava/lang/Object;");
	//SmaliImportSaver::remove(this->strClassName);



	// 定义头文件

	d->add("#include \"").add("java2ctype").add(".h\"").newline();
	std::vector<std::string> listImport = this->listImportSaver->getCachedClassType();
	std::sort(listImport.begin(), listImport.end());
	for (auto imp = listImport.begin(); imp != listImport.end(); imp++) {
		std::string strInc = SmaliType(*imp).getBaseType()->getCppFileName();
		d->add("#include \"").add(strInc).add(".h\"").newline();
	}
	d->newline();

	// 增加代码实体
	d->add(cppMethodDumper);


	d->newline();
	d->reFormat();
}

void CSmaliClass::dumpToCpp20Cpp(CodeDumper* d) {

	CodeDumper cppMethodDumper;
	this->eOutType = config::OUT_CPP;
	//SmaliImportSaver::clearCache();
	this->listImportSaver->clearCache();

	// 如果是模板類， CPP 文件中不放東西，全部放到 H 文件中
	if (!(this->listTemplateParam.size() > 0)) {
		// CPP 文件
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			(*a)->dumpAllField(&cppMethodDumper, this);
		}

		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			(*a)->dumpAllMethod(&cppMethodDumper);
		}
	}
	else {
		// 模板類，放進去編譯看看
		this->listImportSaver->checkJavaClass(this->strClassName);
	}

	{
		std::string strClassCppName = SmaliType(this->strClassName).getBaseType()->getCppType(this, true);
		std::string strModuleName = strClassCppName;
		stringhelper::replace(strModuleName, "::", ".");
		d->add("module ").add(strModuleName).add(";").newline();
	}

	// 引入 include 
	d->add("// CPP ").add(this->strFilePath).newline();

	// 定义头文件

	d->add("import ").add("java2ctype").add(";").newline();
	std::vector<std::string> listImport = this->listImportSaver->getCachedClassType();
	std::sort(listImport.begin(), listImport.end());
	for (auto imp = listImport.begin(); imp != listImport.end(); imp++) {
		std::string strInc = SmaliType(*imp).getBaseType()->getCppFileName();
		d->add("import ").add(strInc).add(";").newline();
	}
	d->newline();

	// 增加代码实体
	d->add(cppMethodDumper);


	d->newline();
	d->reFormat();
}

// 返回一个使用类型，必然会返回的，不会有失败的可能性
std::shared_ptr<CTypeDefine> CSmaliClass::findUsedType(std::string strClass) {
	auto a = this->usedTypeMap.find(strClass);
	if (a == this->usedTypeMap.end()) {
		auto b = std::make_shared<CTypeDefine>(strClass);
		this->usedTypeMap.insert(std::make_pair(strClass, b));
		return b;
	}
	else {
		return a->second;
	}
}

void CSmaliClass::dumpToH(CodeDumper* d) {
	std::string strSelfHName = this->getClassCppSaveName();
	CodeDumper hMethodDumper;
	this->eOutType = config::OUT_H;
	//SmaliImportSaver::clearCache();
	this->listImportSaver->clearCache();

	// 获得完整的类名  XXX::XXXX::XXXXX:XXX
	std::string strClassCppName = SmaliType(this->strClassName).getBaseType()->getCppType(this, true);
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
		BaseAssert(0);
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
			BaseAssert(0);
		}
	}

	// 输出继承类
	if ((listStrImplements.size() > 0) && (this->strSuperName == "Ljava/lang/Object;")) {
		hMethodDumper.add("class ").add(strClassName).add(" : ");
		for (auto a = listStrImplements.begin(); a != listStrImplements.end(); a++) {
			hMethodDumper.add("public ").add(SmaliType(*a).getCppType(this));
			auto b = a; b++;
			if (b != listStrImplements.end()) {
				hMethodDumper.add(", ");
			}
		}

		hMethodDumper.add(" {").newline();
	}
	else {

		if ((this->strClassName == "Ljava/lang/Object;") && (this->strSuperName == "")) {
			hMethodDumper.add("class ").add(strClassName).add(" : ").add("public ").add("java2cBase");
		}
		else {
			hMethodDumper.add("class ").add(strClassName).add(" : ").add("public ").add(SmaliType(this->strSuperName).getCppType(this));
		}

		if (listStrImplements.size() > 0) {
			hMethodDumper.add(", ");
		}
		for (auto a = listStrImplements.begin(); a != listStrImplements.end(); a++) {
			hMethodDumper.add("public ").add(SmaliType(*a).getCppType(this));
			auto b = a; b++;
			if (b != listStrImplements.end()) {
				hMethodDumper.add(", ");
			}
		}

		hMethodDumper.add(" {").newline();
	}

	// 输出函数
#if 0
	{
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			(*a)->dumpAllMethod(&hMethodDumper);
		}
	}
#else
	{
		hMethodDumper.add("protected:").newline();
		hMethodDumper.addNestDepth();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getProtctedType()) {
				(*a)->dumpAllField(&hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getProtctedType()) {
				(*a)->dumpAllMethod(&hMethodDumper);
			}
		}
		hMethodDumper.subNestDepth();
		hMethodDumper.add("private:").newline();
		hMethodDumper.addNestDepth();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getPrivateType()) {
				(*a)->dumpAllField(&hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getPrivateType()) {
				(*a)->dumpAllMethod(&hMethodDumper);
			}
		}
		hMethodDumper.subNestDepth();
		hMethodDumper.add("public:").newline();
		hMethodDumper.addNestDepth();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getPublicType()) {
				(*a)->dumpAllField(&hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getPublicType()) {
				(*a)->dumpAllMethod(&hMethodDumper);
			}
		}
		hMethodDumper.subNestDepth();
	}

#endif

	// 如果有静态初始化代码,那么就生成静态初始化的调用过程
	if (this->listImportSaver->hasStaticInit()) {
		CodeDumper hStaticInitDumper;
		this->listImportSaver->dumpStaticInited(&hStaticInitDumper);
		hMethodDumper.add(hStaticInitDumper);
	}

	// 增加虚析构函数
	if (!this->listImportSaver->dumpDestructor(&hMethodDumper)) {
		// 没有增加成功,那么意味着构造也没有,需要补齐

		//hMethodDumper.add("public:").newline();
		hMethodDumper.addNestDepth();
		{
			hMethodDumper.add(SmaliType(this->strClassName).getBaseType()->getCppShortType());
			hMethodDumper.add("(){ }").endl().newline();

			hMethodDumper.add("virtual ~");
			hMethodDumper.add(SmaliType(this->strClassName).getBaseType()->getCppShortType());
			hMethodDumper.add("(){ }").endl().newline();

		}
		hMethodDumper.subNestDepth();
	}

	// 增加函数多态表示
	if (listMethodRename.size() > 0){
		hMethodDumper.addNestDepth();
		for (auto a = listMethodRename.begin(); a != listMethodRename.end(); a++) {
#if 1
			// 先定义一个Class
			hMethodDumper.add("class ").add(a->first).add("_data_").add(" {").newline();
			hMethodDumper.addNestDepth();
			hMethodDumper.add("public:").newline();
			hMethodDumper.add(strClassName).add(" * pHost = nullptr;").newline();

			std::vector<std::string> listCreatedStruct;

			// 循环定义结构体
			for (auto ss = a->second.begin(); ss != a->second.end(); ss++) {
				std::string strStructName = "struct__";
				strStructName.append(ss->strOldName).append("_").append(ss->strInputParam);
				stringhelper::replace(strStructName, "$", "_");
				stringhelper::replace(strStructName, "/", "_");
				stringhelper::replace(strStructName, ".", "_");
				stringhelper::replace(strStructName, ";", "_");
				stringhelper::replace(strStructName, "[", "_");

				CSmaliCodeline cscodeline;
				std::vector<std::string> listParam = cscodeline.getJavaTypeList(ss->strInputParam);

				// 创建结构体,创建过了就不要再创建了
				if (std::find(listCreatedStruct.begin(), listCreatedStruct.end(), strStructName) == listCreatedStruct.end()) {
					// 增加第一个结构体
					int nIndexVal = 0;
					hMethodDumper.add("struct ").add(strStructName).add(" {").newline();
					hMethodDumper.add("\tbool").add(" ").add("inited;").newline();
					for (auto c = listParam.begin(); c != listParam.end(); c++) {
						std::string strTypedef = SmaliType(*c).getCppDefineType(this);
						std::string strTypeVal = stringhelper::formatString("tval%d", nIndexVal++);
						hMethodDumper.add("\t").add(strTypedef).add(" ").add("__").add(strTypeVal).add(";").newline();
					}
					hMethodDumper.add("}").add(strStructName).add("_data").add(";").newline();	// 变量
					listCreatedStruct.push_back(strStructName);
				}
			}

			// 定义一个结构体初始化函数
			hMethodDumper.add("void initAllFlags(){").newline();
			for (auto sd = listCreatedStruct.begin(); sd != listCreatedStruct.end(); sd++) {
				hMethodDumper.add("\t").add(*sd).add("_data.inited = false;").newline();
			}
			hMethodDumper.add("}").newline();


			// 定义操作结构
			std::vector<std::string> listReturnType;  // 先找出有多少种返回类型
			for (auto ss = a->second.begin(); ss != a->second.end(); ss++) {
				for (auto b = ss->methodCall.begin(); b != ss->methodCall.end(); b++) {
					if (std::find(listReturnType.begin(), listReturnType.end(), b->first) == listReturnType.end()) {
						listReturnType.push_back(b->first);
					}
				}
			}

			// 生成操作
			for (auto dd = listReturnType.begin(); dd != listReturnType.end(); dd++) {
				hMethodDumper.add("operator ").add(SmaliType(*dd).getCppDefineType(this)).add("(").add(")").add("{").newline();
				hMethodDumper.addNestDepth();
				for (auto ss = a->second.begin(); ss != a->second.end(); ss++) {
					for (auto b = ss->methodCall.begin(); b != ss->methodCall.end(); b++) {
						if ((*dd) == b->first) {
							// 这里生成一些列的条件调用
							std::string strStructName = "struct__";
							strStructName.append(ss->strOldName).append("_").append(ss->strInputParam);
							stringhelper::replace(strStructName, "$", "_");
							stringhelper::replace(strStructName, "/", "_");
							stringhelper::replace(strStructName, ".", "_");
							stringhelper::replace(strStructName, ";", "_");
							stringhelper::replace(strStructName, "[", "_");

							hMethodDumper.add("if ( ").add(strStructName).add("_data.inited ) {").newline();
							CSmaliCodeline cscodeline;
							std::vector<std::string> listParam = cscodeline.getJavaTypeList(ss->strInputParam);

							// 减少长度
							hMethodDumper.add("\tauto c = &").add(strStructName).add("_data;").newline();
							int nIndexVal = 0;
							std::string strCallParam;
							for (auto c = listParam.begin(); c != listParam.end(); c++) {

								if (!strCallParam.empty()) {
									strCallParam.append(", ");
								}
								//std::string strTypedef = SmaliType(*c).getCppDefineType(this);
								std::string strTypeVal = stringhelper::formatString("tval%d", nIndexVal++);
								strCallParam.append("c->__").append(strTypeVal);
							}
							hMethodDumper.add("\treturn pHost->").add(b->second).add("(").add(strCallParam).add(")").add(";").newline();
							hMethodDumper.add("}").newline();
						}
					}
				}
				hMethodDumper.add("return nullptr;").newline();
				hMethodDumper.subNestDepth();
				hMethodDumper.add("}").newline();
			}

			hMethodDumper.subNestDepth();
			hMethodDumper.add("};").newline();

			// bridge synthetic 的函數需要隱藏，不顯示

			// 定义构造函数
			for (auto ss = a->second.begin(); ss != a->second.end(); ss++) {
				std::string strStructName = "struct__";
				strStructName.append(ss->strOldName).append("_").append(ss->strInputParam);
				stringhelper::replace(strStructName, "$", "_");
				stringhelper::replace(strStructName, "/", "_");
				stringhelper::replace(strStructName, ".", "_");
				stringhelper::replace(strStructName, ";", "_");
				stringhelper::replace(strStructName, "[", "_");

				CSmaliCodeline cscodeline;
				std::vector<std::string> listParam = cscodeline.getJavaTypeList(ss->strInputParam);


				std::string strValDefine;		// 定义声明函数的
				int nIndexVal = 0;
				for (auto c = listParam.begin(); c != listParam.end(); c++) {
					if (!strValDefine.empty()) {
						strValDefine.append(",");
					}
					std::string strTypedef = SmaliType(*c).getCppDefineType(this);
					std::string strTypeVal = stringhelper::formatString("tval%d", nIndexVal++);
					strValDefine.append(strTypedef).append(" ").append(strTypeVal);
				}
				// .add("class ")
				hMethodDumper.add(a->first).add("_data_").add(" ").add(ss->strOldName).add("(").add(strValDefine).add(") {").newline();
				nIndexVal = 0;
				// .add("\tclass ")
				hMethodDumper.add("\t").add(a->first).add("_data_").add(" ").add("c").add(";").newline();
				hMethodDumper.add("\t").add("c.initAllFlags();").newline();
				hMethodDumper.add("\t").add("c.pHost = this;").newline();
				hMethodDumper.add("\t").add("c.").add(strStructName).add("_data").add(".inited = true;").newline();
				for (auto c = listParam.begin(); c != listParam.end(); c++) {
					std::string strTypedef = SmaliType(*c).getCppDefineType(this);
					std::string strTypeVal = stringhelper::formatString("tval%d", nIndexVal++);
					hMethodDumper.add("\t").add("c.").add(strStructName).add("_data").add(".__").add(strTypeVal).add(" = ").add(strTypeVal).add(";").newline();
				}
				hMethodDumper.add("\treturn c;").newline();
				hMethodDumper.add("}").newline();
			}
#endif 
		}
		hMethodDumper.subNestDepth();
	}


	hMethodDumper.newline();
	hMethodDumper.add("}; // class ").add(strClassName).newline();
	hMethodDumper.add("}; // ").add("namespace ").add(strNameSpace).newline();

	// 如果是模板類，就需要單獨多生成一些代碼
	if (this->listTemplateParam.size() > 0) {
		//BaseAssert(0);
		CodeDumper cppMethodDumper;
		// CPP 文件
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			(*a)->dumpAllMethodForTemplate(&cppMethodDumper);
		}

		// 合并到文件定義尾部
		hMethodDumper.add(cppMethodDumper);
	}

	d->add("#ifndef ").add("__").add(SmaliType(this->strClassName).getBaseType()->getCppFileMacroDefine()).add("__").newline();
	d->add("#define ").add("__").add(SmaliType(this->strClassName).getBaseType()->getCppFileMacroDefine()).add("__").newline();

	d->add("// H ").add(this->strFilePath).newline();

	//SmaliImportSaver::checkJavaClass("Ljava/lang/Object;");
	//SmaliImportSaver::remove(this->strClassName);

	d->add("#include \"").add("java2ctype").add(".h\"").newline();

#if 1
	std::vector<std::string> listImport = this->listImportSaver->getCachedClassType();
	std::sort(listImport.begin(), listImport.end());
	for (auto imp = listImport.begin(); imp != listImport.end(); imp++) {
		std::string strInc = SmaliType(*imp).getBaseType()->getCppFileName();
		if (strSelfHName != strInc) {  // 不是自己类的
			bool bSuper = false;
			if (this->strSuperName.size() > 0) {
				std::string strInc2 = SmaliType(this->strSuperName).getBaseType()->getCppFileName();
				if (strInc == strInc2) {
					std::string strInc3 = this->strSuperName;
					if (((int)strInc3.find("<")) > 0) {
						d->add("#include \"").add(strInc).add(".h\"").newline();
					}
					else {
						d->add("#include \"").add(strInc).add(".h\"").newline();
					}
					bSuper = true;
				}
			}

			if (!bSuper) {
				bool bFind = false;
				for (auto aaa = listStrImplements.begin(); aaa != listStrImplements.end(); aaa++) {
					std::string strInc2 = SmaliType(*imp).getBaseType()->getCppFileName();
					if (strInc == strInc2) {
						std::string strInc3 = *aaa;
						if (((int)strInc3.find("<")) > 0) {
							d->add("#include \"").add(strInc).add(".h\"").newline();
						}
						else {
							d->add("#include \"").add(strInc).add(".h\"").newline();
						}
						bFind = true;
						break;
					}
				}
				if (!bFind) {
					// 不需要用到构造函数
					d->add("#include \"").add(strInc).add(".h\"").newline();
				}
			}
		}
	}
#else
	std::vector<std::string> listImport = this->listImportSaver->getCachedClassType();
	std::sort(listImport.begin(), listImport.end());
	for (auto imp = listImport.begin(); imp != listImport.end(); imp++) {
		std::string strInc = SmaliType(*imp).getBaseType()->getCppType(this);
		d->add("class ").add(strInc).add(";").newline();
	}
#endif
	d->newline();

	//d->add("#ifndef ").add("__").add(SmaliType(this->strClassName).getBaseType()->getCppFileMacroDefine()).add("__").newline();
	//d->add("#define ").add("__").add(SmaliType(this->strClassName).getBaseType()->getCppFileMacroDefine()).add("__").newline();

	d->add(hMethodDumper);
	d->newline();
	d->add("#endif //").add("__").add(SmaliType(this->strClassName).getBaseType()->getCppFileMacroDefine()).add("__").newline();
}


void CSmaliClass::dumpToModule(CodeDumper* d) {
	std::string strSelfHName = this->getClassCppSaveName();
	CodeDumper hMethodDumper;
	this->eOutType = config::OUT_H;
	this->listImportSaver->clearCache();

	// 获得完整的类名  XXX::XXXX::XXXXX:XXX
	std::string strClassCppName = SmaliType(this->strClassName).getBaseType()->getCppType(this, true);
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
		BaseAssert(0);
	}
	{
		std::string strModuleName = strClassCppName;
		stringhelper::replace(strModuleName, "::", ".");
		d->add("export module ").add(strModuleName).add(";").newline();
	}

	// 先输出 namespace 空间
	hMethodDumper.add("export namespace ").add(strNameSpace).add("{").newline();

	// 生成类模板
	if (this->listTemplateParam.size() > 0) {
		if (this->listTemplateParam.size() > 0) {
			std::string strTemplateParam = getTemplateDefineString(nullptr);
			hMethodDumper.add(strTemplateParam).newline();
		}
		else {
			BaseAssert(0);
		}
	}

	// 输出继承类
	if ((listStrImplements.size() > 0) && (this->strSuperName == "Ljava/lang/Object;")) {
		hMethodDumper.add("class ").add(strClassName).add(" : ");
		for (auto a = listStrImplements.begin(); a != listStrImplements.end(); a++) {
			hMethodDumper.add("public ").add(SmaliType(*a).getCppType(this));
			auto b = a; b++;
			if (b != listStrImplements.end()) {
				hMethodDumper.add(", ");
			}
		}

		hMethodDumper.add(" {").newline();
	}
	else {
		if ((this->strClassName == "Ljava/lang/Object;") && (this->strSuperName == "")) {
			hMethodDumper.add("class ").add(strClassName).add(" : ").add("public ").add("java2cBase");
		}
		else {
			hMethodDumper.add("class ").add(strClassName).add(" : ").add("public ").add(SmaliType(this->strSuperName).getCppType(this));
		}

		if (listStrImplements.size() > 0) {
			hMethodDumper.add(", ");
		}
		for (auto a = listStrImplements.begin(); a != listStrImplements.end(); a++) {
			hMethodDumper.add("public ").add(SmaliType(*a).getCppType(this));
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
		hMethodDumper.addNestDepth();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getProtctedType()) {
				(*a)->dumpAllField(&hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getProtctedType()) {
				(*a)->dumpAllMethod(&hMethodDumper);
			}
		}
		hMethodDumper.subNestDepth();
		hMethodDumper.add("private:").newline();
		hMethodDumper.addNestDepth();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getPrivateType()) {
				(*a)->dumpAllField(&hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getPrivateType()) {
				(*a)->dumpAllMethod(&hMethodDumper);
			}
		}
		hMethodDumper.subNestDepth();
		hMethodDumper.add("public:").newline();
		hMethodDumper.addNestDepth();
		for (auto a = this->listField.begin(); a != this->listField.end(); a++) {
			if ((*a)->getPublicType()) {
				(*a)->dumpAllField(&hMethodDumper, this);
			}
		}
		for (auto a = this->listMethod.begin(); a != this->listMethod.end(); a++) {
			if ((*a)->getPublicType()) {
				(*a)->dumpAllMethod(&hMethodDumper);
			}
		}
		hMethodDumper.subNestDepth();
	}

	// 如果有静态初始化代码,那么就生成静态初始化的调用过程
	if (this->listImportSaver->hasStaticInit()) {
		CodeDumper hStaticInitDumper;
		this->listImportSaver->dumpStaticInited(&hStaticInitDumper);
		hMethodDumper.add(hStaticInitDumper);
	}

	// 增加虚析构函数
	if (!this->listImportSaver->dumpDestructor(&hMethodDumper)) {
		// 没有增加成功,那么意味着构造也没有,需要补齐

		//hMethodDumper.add("public:").newline();
		hMethodDumper.addNestDepth();
		{
			hMethodDumper.add(SmaliType(this->strClassName).getBaseType()->getCppShortType());
			hMethodDumper.add("(){ }").endl().newline();

			hMethodDumper.add("virtual ~");
			hMethodDumper.add(SmaliType(this->strClassName).getBaseType()->getCppShortType());
			hMethodDumper.add("(){ }").endl().newline();

		}
		hMethodDumper.subNestDepth();
	}

	// 增加函数多态表示
	if (listMethodRename.size() > 0) {
		hMethodDumper.addNestDepth();
		for (auto a = listMethodRename.begin(); a != listMethodRename.end(); a++) {
			// 先定义一个Class
			hMethodDumper.add("class ").add(a->first).add("_data_").add(" {").newline();
			hMethodDumper.addNestDepth();
			hMethodDumper.add("public:").newline();
			hMethodDumper.add(strClassName).add(" * pHost = nullptr;").newline();

			std::vector<std::string> listCreatedStruct;

			// 循环定义结构体
			for (auto ss = a->second.begin(); ss != a->second.end(); ss++) {
				std::string strStructName = "struct__";
				strStructName.append(ss->strOldName).append("_").append(ss->strInputParam);
				stringhelper::replace(strStructName, "$", "_");
				stringhelper::replace(strStructName, "/", "_");
				stringhelper::replace(strStructName, ".", "_");
				stringhelper::replace(strStructName, ";", "_");
				stringhelper::replace(strStructName, "[", "_");

				CSmaliCodeline cscodeline;
				std::vector<std::string> listParam = cscodeline.getJavaTypeList(ss->strInputParam);

				// 创建结构体,创建过了就不要再创建了
				if (std::find(listCreatedStruct.begin(), listCreatedStruct.end(), strStructName) == listCreatedStruct.end()) {
					// 增加第一个结构体
					int nIndexVal = 0;
					hMethodDumper.add("struct ").add(strStructName).add(" {").newline();
					hMethodDumper.add("\tbool").add(" ").add("inited;").newline();
					for (auto c = listParam.begin(); c != listParam.end(); c++) {
						std::string strTypedef = SmaliType(*c).getCppDefineType(this);
						std::string strTypeVal = stringhelper::formatString("tval%d", nIndexVal++);
						hMethodDumper.add("\t").add(strTypedef).add(" ").add("__").add(strTypeVal).add(";").newline();
					}
					hMethodDumper.add("}").add(strStructName).add("_data").add(";").newline();	// 变量
					listCreatedStruct.push_back(strStructName);
				}
			}

			// 定义一个结构体初始化函数
			hMethodDumper.add("void initAllFlags(){").newline();
			for (auto sd = listCreatedStruct.begin(); sd != listCreatedStruct.end(); sd++) {
				hMethodDumper.add("\t").add(*sd).add("_data.inited = false;").newline();
			}
			hMethodDumper.add("}").newline();


			// 定义操作结构
			std::vector<std::string> listReturnType;  // 先找出有多少种返回类型
			for (auto ss = a->second.begin(); ss != a->second.end(); ss++) {
				for (auto b = ss->methodCall.begin(); b != ss->methodCall.end(); b++) {
					if (std::find(listReturnType.begin(), listReturnType.end(), b->first) == listReturnType.end()) {
						listReturnType.push_back(b->first);
					}
				}
			}

			// 生成操作
			for (auto dd = listReturnType.begin(); dd != listReturnType.end(); dd++) {
				hMethodDumper.add("operator ").add(SmaliType(*dd).getCppDefineType(this)).add("(").add(")").add("{").newline();
				hMethodDumper.addNestDepth();
				for (auto ss = a->second.begin(); ss != a->second.end(); ss++) {
					for (auto b = ss->methodCall.begin(); b != ss->methodCall.end(); b++) {
						if ((*dd) == b->first) {
							// 这里生成一些列的条件调用
							std::string strStructName = "struct__";
							strStructName.append(ss->strOldName).append("_").append(ss->strInputParam);
							stringhelper::replace(strStructName, "$", "_");
							stringhelper::replace(strStructName, "/", "_");
							stringhelper::replace(strStructName, ".", "_");
							stringhelper::replace(strStructName, ";", "_");
							stringhelper::replace(strStructName, "[", "_");

							hMethodDumper.add("if ( ").add(strStructName).add("_data.inited ) {").newline();
							CSmaliCodeline cscodeline;
							std::vector<std::string> listParam = cscodeline.getJavaTypeList(ss->strInputParam);

							// 减少长度
							hMethodDumper.add("\tauto c = &").add(strStructName).add("_data;").newline();
							int nIndexVal = 0;
							std::string strCallParam;
							for (auto c = listParam.begin(); c != listParam.end(); c++) {

								if (!strCallParam.empty()) {
									strCallParam.append(", ");
								}
								//std::string strTypedef = SmaliType(*c).getCppDefineType(this);
								std::string strTypeVal = stringhelper::formatString("tval%d", nIndexVal++);
								strCallParam.append("c->__").append(strTypeVal);
							}
							hMethodDumper.add("\treturn pHost->").add(b->second).add("(").add(strCallParam).add(")").add(";").newline();
							hMethodDumper.add("}").newline();
						}
					}
				}
				hMethodDumper.add("return nullptr;").newline();
				hMethodDumper.subNestDepth();
				hMethodDumper.add("}").newline();
			}

			hMethodDumper.subNestDepth();
			hMethodDumper.add("};").newline();

			// bridge synthetic 的函數需要隱藏，不顯示

			// 定义构造函数
			for (auto ss = a->second.begin(); ss != a->second.end(); ss++) {
				std::string strStructName = "struct__";
				strStructName.append(ss->strOldName).append("_").append(ss->strInputParam);
				stringhelper::replace(strStructName, "$", "_");
				stringhelper::replace(strStructName, "/", "_");
				stringhelper::replace(strStructName, ".", "_");
				stringhelper::replace(strStructName, ";", "_");
				stringhelper::replace(strStructName, "[", "_");

				CSmaliCodeline cscodeline;
				std::vector<std::string> listParam = cscodeline.getJavaTypeList(ss->strInputParam);


				std::string strValDefine;		// 定义声明函数的
				int nIndexVal = 0;
				for (auto c = listParam.begin(); c != listParam.end(); c++) {
					if (!strValDefine.empty()) {
						strValDefine.append(",");
					}
					std::string strTypedef = SmaliType(*c).getCppDefineType(this);
					std::string strTypeVal = stringhelper::formatString("tval%d", nIndexVal++);
					strValDefine.append(strTypedef).append(" ").append(strTypeVal);
				}
				// .add("class ")
				hMethodDumper.add(a->first).add("_data_").add(" ").add(ss->strOldName).add("(").add(strValDefine).add(") {").newline();
				nIndexVal = 0;
				// .add("\tclass ")
				hMethodDumper.add("\t").add(a->first).add("_data_").add(" ").add("c").add(";").newline();
				hMethodDumper.add("\t").add("c.initAllFlags();").newline();
				hMethodDumper.add("\t").add("c.pHost = this;").newline();
				hMethodDumper.add("\t").add("c.").add(strStructName).add("_data").add(".inited = true;").newline();
				for (auto c = listParam.begin(); c != listParam.end(); c++) {
					std::string strTypedef = SmaliType(*c).getCppDefineType(this);
					std::string strTypeVal = stringhelper::formatString("tval%d", nIndexVal++);
					hMethodDumper.add("\t").add("c.").add(strStructName).add("_data").add(".__").add(strTypeVal).add(" = ").add(strTypeVal).add(";").newline();
				}
				hMethodDumper.add("\treturn c;").newline();
				hMethodDumper.add("}").newline();
			}
		}
		hMethodDumper.subNestDepth();
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

	d->add("// Module ").add(this->strFilePath).newline();
	d->add("import ").add("java2ctype").add(";").newline();
	std::vector<std::string> listImport = this->listImportSaver->getCachedClassType();
	std::sort(listImport.begin(), listImport.end());
	for (auto imp = listImport.begin(); imp != listImport.end(); imp++) {
		std::string strInc = SmaliType(*imp).getBaseType()->getCppFileName();
		if (strSelfHName != strInc) {  // 不是自己类的
			d->add("import ").add(strInc).add(";").newline();
		}
	}
	d->newline();
	d->add(hMethodDumper);
	d->newline();
}

// 处理 .class
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineClass(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	std::vector<std::string> listSymbol = it->listSymbol;
	this->classFlag = 0;
	for (auto k = listSymbol.begin() + 1; k != listSymbol.end(); k++) {
		if (isJavaAccessFlags(*k) > 0) {			// 获得访问权限
			this->classFlag |= isJavaAccessFlags(*k);
		}
		else if (isJavaAnnotationFlags(*k) > 0) {	// 注解类？
			this->classFlag |= isJavaAnnotationFlags(*k);
		}
		else if (isJavaSyntheticFlags(*k) > 0) {
			this->classFlag |= isJavaSyntheticFlags(*k);
		}
		else if (isJavaEnumFlags(*k) > 0) {
			this->classFlag |= isJavaEnumFlags(*k);
		}
		else if (isJavaClassName(*k)) {				// 获得类的名字
			this->strClassName = (*k);
		}
		else {
			BaseAssert(0);
		}
	}
	return it;
}

// 处理 .super
//.super Landroid/icu/impl/LocaleDisplayNamesImpl$ICUDataTables;
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineSuper(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	std::smatch m;
	if (std::regex_search(it->strLine, m, CRegexString::matchDotSuperClass) && (m.size() == 2)) {
		this->strSuperName = m[1];

		// 设置这个类型
		this->findUsedType(this->strSuperName)->setUsedCreate();

		this->insertClassRecord("super", this->strSuperName);
	}
	else {
		BaseAssert(0);
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
		BaseAssert(0);
	}
	return it;
}

// 处理 .implements
//.implements Ljava/time/format/DateTimeFormatterBuilder$DateTimePrinterParser;
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineImplements(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	std::smatch m;
	if (std::regex_search(it->strLine, m, CRegexString::matchDotImplementsClass) && (m.size() == 2)) {
		this->listStrImplements.push_back(m[1]);
		std::string strImplements = m[1];

		// 设置这个类型
		this->findUsedType(strImplements)->setUsedCreate();

		this->insertClassRecord("imple", strImplements);
	}
	else {
		BaseAssert(0);
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

		// 设置这个类型
		this->findUsedType(strType)->setUsedCreate();

		std::vector<std::string> listFlags = regexGetStringList(strFlags, "\\s*(" PatternFieldFlags ")\\s*", 2, 1);
		for (auto k = listFlags.begin(); k != listFlags.end(); k++) {
			if (isJavaAccessFlags(*k) > 0) {		// 获得访问权限
				smaliField->fieldFlag |= isJavaAccessFlags(*k);
				if ((*k) == "static") {
					smaliField->isStatic = 1;
				}
			}
			else if (isJavaAnnotationFlags(*k) > 0) {	// 注解类？
				smaliField->fieldFlag |= isJavaAnnotationFlags(*k);
			}
			else if (isJavaSyntheticFlags(*k) > 0) {
				smaliField->fieldFlag |= isJavaSyntheticFlags(*k);
			}
			else if (isJavaEnumFlags(*k) > 0) {
				smaliField->fieldFlag |= isJavaEnumFlags(*k);
			}
			else {
				BaseAssert(0);
			}
		}

		if (smaliField->fieldFlag & CSmaliClass::kAccPublic) {
			smaliField->setPublicType();
		}
		else if (smaliField->fieldFlag & CSmaliClass::kAccPrivate) {
			smaliField->setPrivateType();
		}
		else if (smaliField->fieldFlag & CSmaliClass::kAccProtected) {
			smaliField->setProtctedType();
		}

		smaliField->fieldName = strName;
		smaliField->fieldType = strType;

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
		BaseAssert(0);
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
										BaseAssert(0);
									}
									std::string strFieldLine = it->strLine;
									strFieldLine = stringhelper::trim(strFieldLine);
									TestAnnotationSignature::insertFieldRecord(this->strFilePath, strFieldLine, strValue);
									std::string strTypeRename = TestAnnotationSignature::fieldResolver(strFieldLine, strValue, this);

									smaliField->fieldType = strTypeRename;
								}
								else {
									BaseAssert(0);
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
								BaseAssert(0);
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
								BaseAssert(0);
							}
						}
						else {
							BaseAssert(0);
						}
						it1 = ss;
					}
					else {
						strAnnotationString.append(stringhelper::trim(*ss));
					}
				}
			}
			else {
				BaseAssert(0);
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
	//				BaseAssert(0);
	//			}
	//		}
	//		else {
	//			BaseAssert(0);
	//		}
	//	}
	//}
	this->listField.push_back(smaliField);
	return nextIt;
}

// 处理 .method
std::vector<CSmaliClass::FileStringLine>::iterator CSmaliClass::dotLineMethod(std::vector<CSmaliClass::FileStringLine>::iterator it) {
	std::shared_ptr<CSmaliMethod> cSmaliMethod = std::make_shared<CSmaliMethod>(this->strClassName, this);
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
								BaseAssert(0);
							}

							this->insertClassRecord("Templ", strValue);

							AnnotationClassSignature Templ = TestAnnotationSignature::classResolver(strValue, this);

							int nMatchStart = 0;
							if (this->strSuperName.size() > 0) {
								this->strSuperName = Templ.listClassType[0];
								nMatchStart++;
							}
							for (int vi = nMatchStart, ind = 0; vi < Templ.listClassType.size(); vi++, ind++) {
								this->listStrImplements[ind] = Templ.listClassType[vi];
							}
						}
						else {
							BaseAssert(0);
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
						BaseAssert(0);
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
						BaseAssert(0);
					}
				}
				else {
					BaseAssert(0);
				}

				return ss;
			}
			else {
				strAnnotationString.append(stringhelper::trim(ss->strLine));
			}
		}
	}
	else {
		BaseAssert(0);
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
					BaseAssert(0);
				}
			}
		}
	}

	// 保存真实的模板名字
	if (this->listTemplateParam.size() > 0) {
		std::string strCppType = SmaliType(this->strClassName).getBaseType()->getCppType(this);
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
			BaseAssert(0);
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
							BaseAssert(0);
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
						BaseAssert(0);
					}
				}
				BaseAssert(item.methodCall.size() == a->second.size());

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
				BaseAssert(0);
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
		BaseAssert(0);
	}
#endif

	auto it = std::find(this->listAllMethodSignatureType.begin(), this->listAllMethodSignatureType.end(), str);
	if (it == this->listAllMethodSignatureType.end()) {
		this->listAllMethodSignatureType.push_back(str);
	}
	else {
		BaseAssert(0);
	}
}

std::string CSmaliClass::TemplateTranslate(std::string str) {
	auto a = listTemplateTranslate.find(str);
	if (a == listTemplateTranslate.end()) {
		return str;
	}
	return a->second;
}