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

	std::string strClassName;		// ������
	std::shared_ptr<CSmaliType> ptrClassName;

	unsigned long classFlag;				// ����
	//std::string strSuperName;		// ��������
	std::shared_ptr<CSmaliType> ptrSuperName;

	std::string strSourceName;		// Դ�ļ���
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
	std::map<std::string, std::string> listMethodRenameTranslation;	// ���ڿ��ٻ�ȡ��������

	std::vector<FileStringLine> listSmaliFileData;			// ���е�ָ�����ݶ���������

	std::vector<std::string> listAllMethodSignatureType;	// ���еĺ�������ǩ�����������ظ���

	bool isJavaClassName(std::string str);

	// ��ǰ�������Ϣ
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

	// ���ɾ�̬��ʼ���ĵ��ô���
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
	// ��ж��x������ģ�兢��
	std::map<std::string, std::string> listTemplateParam;
	// Class ���õ����ͷ����
	std::map<std::string, std::string> listTemplateTranslate;
	// ��class�������ģ�巭��
	std::string TemplateTranslate(std::string str);
	// ����������ģ��
	std::string getTemplateDefineString(CSmaliMethod* pMethod);
	// ����������ģ��
	std::string getTemplateUseString();
	// ��¼ģ������
	bool insertTemplateParam(std::string strType, std::string strClass);
	// ���� .class
	std::vector<FileStringLine>::iterator dotLineClass(std::vector<FileStringLine>::iterator it);
	// ���� .super
	std::vector<FileStringLine>::iterator dotLineSuper(std::vector<FileStringLine>::iterator it);
	// ���� .source
	std::vector<FileStringLine>::iterator dotLineSource(std::vector<FileStringLine>::iterator it);
	// ���� .implements
	std::vector<FileStringLine>::iterator dotLineImplements(std::vector<FileStringLine>::iterator it);
	// ���� .field
	std::vector<FileStringLine>::iterator dotLineField(std::vector<FileStringLine>::iterator it);
	// ���� .method
	std::vector<FileStringLine>::iterator dotLineMethod(std::vector<FileStringLine>::iterator it);
	// ���� class ����� annotation
	std::vector<FileStringLine>::iterator dotLineClassAnnotation(std::vector<FileStringLine>::iterator it);

	// ���д�����������
	void processAllLine();

	void insertClassRecord(std::string tagName, std::string& tagData);

	std::string getClassCppSaveName();

	// ���ļ��е�����ȫ�����ص� listSmaliFileData ��ȥ
	bool loadFile(void);

	//std::string getClassName();
	std::shared_ptr<CSmaliType> getClassType() {
		return ptrClassName;
	}

	// dump �� CPP ��ʽ
	void dumpToCpp(CodeDumper* d);
	void dumpToH(CodeDumper* d);
	void dumpToHdefine(CodeDumper* d, std::shared_ptr<CTypeDefine> cTypeDef, CSmaliClass* pClass);
};

#endif

