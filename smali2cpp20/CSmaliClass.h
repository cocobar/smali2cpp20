#ifndef __SmaliClass_H__
#define __SmaliClass_H__
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
#include <memory>
#include "CSmaliField.h"
#include "CSmaliType.h"
#include <regex>
#include "CTypeDefine.h"
#include "CSmaliAbstract.h"

class CSmaliClass :public CSmaliAbstract {

private:
	CSmaliClass();

	std::string strFilePath;
	std::string strFileName;
	std::vector<std::shared_ptr<CSmaliMethod>> listMethod;
	std::vector<std::shared_ptr<CSmaliField>> listField;

	std::string strClassName;		// 类名字
	std::shared_ptr<CSmaliType> ptrClassName;

	unsigned long classFlag;				// 属性
	//std::string strSuperName;		// 父类名字
	std::shared_ptr<CSmaliType> ptrSuperName;

	std::string strSourceName;		// 源文件名
	//std::vector<std::string> listStrImplements;
	std::vector<std::shared_ptr<CSmaliType>> listStrImplements;

	typedef struct tagFileStringLine {
		int nLine;
		std::string strLine;
		std::vector<std::string> listSymbol;
	}FileStringLine;


	typedef struct {
		std::string strOldName;
		std::string strInputParam;
		std::map<std::string, std::string> methodCall;
	}MethodRenameDefineItem;

	std::map<std::string, std::vector<MethodRenameDefineItem>> listMethodRename;
	//std::vector<MethodRenameDefineItem> listMethodRename;
	std::map<std::string, std::string> listMethodRenameTranslation;	// 用于快速获取函数名称

	std::vector<FileStringLine> listSmaliFileData;			// 所有的指令数据都在这里了

	std::vector<std::string> listAllMethodSignatureType;	// 所有的函数类型签名，不能有重复的

	bool isJavaClassName(std::string str);

	// 当前定义的信息
	std::map<std::string, std::shared_ptr<CTypeDefine>> collectTypeMap;

	std::vector<std::string> listStaticInit;
	std::string strDestructor;

	void collectSuperType(std::map<std::string, std::shared_ptr<CTypeDefine>>& cType);
	std::vector<std::string> sortSuperType(std::map<std::string, std::shared_ptr<CTypeDefine>>& cType);

	void colloectDefine(std::shared_ptr<CTypeDefine> typeDef, std::map<std::string, std::shared_ptr<CTypeDefine>>& cType);

public:
	bool hasStaticInit() {
		if (listStaticInit.size() > 0) {
			return true;
		}
		return false;
	}

	bool addStaticInited(std::string str) {
		listStaticInit.push_back(str);
		return true;
	}

	bool setDestructor(std::string str) {
		strDestructor = str;
		return true;
	}

	bool dumpDestructor(CodeDumper* d) {
		if (!strDestructor.empty()) {
			d->add("public:").newline();
			{
				d->addIndent();
				d->add(strDestructor).add("{").newline();
				d->add("}").newline();
				d->subIndent();
			}

			return true;
		}

		return false;
	}

	// 生成静态初始化的调用代码
	void dumpStaticInited(CodeDumper* d) {
		d->add("private:").newline();
		{
			d->addIndent();
			d->add("class static_init_class {").newline();
			d->add("public:").newline();
			d->addIndent();
			d->add("static_init_class(){").newline();
			{
				d->addIndent();
				for (auto a = listStaticInit.begin(); a != listStaticInit.end(); a++) {
					d->add(*a).endl().newline();
				}
				d->subIndent();
			}
			d->add("}").newline();
			d->subIndent();
			d->add("};").newline();
			d->add("static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>()").endl().newline();
			d->subIndent();
		}
	}

	std::string& getFilePath() {
		return strFilePath;
	}

	std::shared_ptr<CSmaliType> getSuperNamePtr() {
		return ptrSuperName;
	}

	std::vector<std::shared_ptr<CSmaliType>>& getListImplements() {
		return listStrImplements;
	}



	//config::otType eOutType;

	//std::shared_ptr<SmaliImportSaver> listImportSaver;

	CSmaliClass(std::string strFilePath);

	void insertMethodSignatureType(std::string str);

	std::string strMethodRenameTranslation(std::string str);

	std::vector<std::string> listAnnotationInClass;
	// 類中定義的所有模板參數
	std::map<std::string, std::string> listTemplateParam;
	// Class 域用的类型翻译表
	std::map<std::string, std::string> listTemplateTranslate;
	// 在class级别进行模板翻译
	std::string TemplateTranslate(std::string str);
	// 返回类声明模板
	std::string getTemplateDefineString(CSmaliMethod* pMethod);
	// 返回类声明模板
	std::string getTemplateUseString();
	// 记录模板名称
	bool insertTemplateParam(std::string strType, std::string strClass);
	// 处理 .class
	std::vector<FileStringLine>::iterator dotLineClass(std::vector<FileStringLine>::iterator it);
	// 处理 .super
	std::vector<FileStringLine>::iterator dotLineSuper(std::vector<FileStringLine>::iterator it);
	// 处理 .source
	std::vector<FileStringLine>::iterator dotLineSource(std::vector<FileStringLine>::iterator it);
	// 处理 .implements
	std::vector<FileStringLine>::iterator dotLineImplements(std::vector<FileStringLine>::iterator it);
	// 处理 .field
	std::vector<FileStringLine>::iterator dotLineField(std::vector<FileStringLine>::iterator it);
	// 处理 .method
	std::vector<FileStringLine>::iterator dotLineMethod(std::vector<FileStringLine>::iterator it);
	// 处理 class 级别的 annotation
	std::vector<FileStringLine>::iterator dotLineClassAnnotation(std::vector<FileStringLine>::iterator it);

	// 按行处理所有数据
	void processAllLine();

	void insertClassRecord(std::string tagName, std::string& tagData);

	std::string getClassCppSaveName();

	// 把文件中的数据全部加载到 listSmaliFileData 上去
	bool loadFile(void);

	//std::string getClassName();
	std::shared_ptr<CSmaliType> getClassType() {
		return ptrClassName;
	}

	// dump 到 CPP 格式
	void dumpToCpp(CodeDumper* d);
	void dumpToH(CodeDumper* d);
	void dumpToHdefine(CodeDumper* d, std::shared_ptr<CTypeDefine> cTypeDef, CSmaliClass* pClass);
};

#endif

