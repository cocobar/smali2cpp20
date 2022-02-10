#ifndef __SmaliClass_H__
#define __SmaliClass_H__
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
#include <memory>
#include "SmaliField.h"
#include "SmaliType.h"
#include <regex>
#include "config.hpp"
#include "CTypeDefine.h"

class CSmaliClass :public CBaseObject {

private:
	CSmaliClass();

	std::string strFilePath;
	std::string strFileName;
	std::vector<std::shared_ptr<CSmaliMethod>> listMethod;
	std::vector<std::shared_ptr<CSmaliField>> listField;

	std::string strClassName;		// ������
	unsigned long classFlag;				// ����
	std::string strSuperName;		// ��������
	std::string strSourceName;		// Դ�ļ���
	std::vector<std::string> listStrImplements;

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

	unsigned long isJavaAnnotationFlags(std::string str);
	unsigned long isJavaSyntheticFlags(std::string str);
	unsigned long isJavaEnumFlags(std::string str);
	unsigned long isJavaAccessFlags(std::string str);
	bool isJavaClassName(std::string str);

	std::map<std::string, std::shared_ptr<CTypeDefine>> usedTypeMap;

public:

	std::shared_ptr<CTypeDefine> findUsedType(std::string strClass);

	std::string& getFilePath() {
		return strFilePath;
	}

	std::string& getSuperName() {
		return strSuperName;
	}

	std::vector<std::string>& getListImplements() {
		return listStrImplements;
	}

	static constexpr uint32_t kAccPublic = 0x0001;  // class, field, method, ic
	static constexpr uint32_t kAccPrivate = 0x0002;  // field, method, ic
	static constexpr uint32_t kAccProtected = 0x0004;  // field, method, ic
	static constexpr uint32_t kAccStatic = 0x0008;  // field, method, ic
	static constexpr uint32_t kAccFinal = 0x0010;  // class, field, method, ic
	static constexpr uint32_t kAccSynchronized = 0x0020;  // method (only allowed on natives)
	static constexpr uint32_t kAccSuper = 0x0020;  // class (not used in dex)
	static constexpr uint32_t kAccVolatile = 0x0040;  // field
	static constexpr uint32_t kAccBridge = 0x0040;  // method (1.5)
	static constexpr uint32_t kAccTransient = 0x0080;  // field
	static constexpr uint32_t kAccVarargs = 0x0080;  // method (1.5)
	static constexpr uint32_t kAccNative = 0x0100;  // method
	static constexpr uint32_t kAccInterface = 0x0200;  // class, ic
	static constexpr uint32_t kAccAbstract = 0x0400;  // class, method, ic
	static constexpr uint32_t kAccStrict = 0x0800;  // method
	static constexpr uint32_t kAccSynthetic = 0x1000;  // class, field, method, ic
	static constexpr uint32_t kAccAnnotation = 0x2000;  // class, ic (1.5)
	static constexpr uint32_t kAccEnum = 0x4000;  // class, field, ic (1.5)

	static constexpr uint32_t kAccConstructor = 0x00010000;  // method (dex only) <(cl)init>
	static constexpr uint32_t kAccDeclaredSynchronized = 0x00020000;  // method (dex only)

	static constexpr uint32_t kAllMethodFlags =
		kAccPublic |
		kAccPrivate |
		kAccProtected |
		kAccStatic |
		kAccFinal |
		kAccSynchronized |
		kAccBridge |
		kAccVarargs |
		kAccNative |
		kAccAbstract |
		kAccStrict |
		kAccSynthetic;

	config::otType eOutType;

	std::shared_ptr<SmaliImportSaver> listImportSaver;

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

	std::string getClassName();

	// dump �� CPP ��ʽ
	void dumpToCpp(CodeDumper* d);
	void dumpToCpp20Cpp(CodeDumper* d);
	void dumpToH(CodeDumper* d);
	void dumpToModule(CodeDumper* d);
};

#endif

