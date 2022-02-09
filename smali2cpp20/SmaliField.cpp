#include "SmaliField.h"
#include "config.hpp"
#include "SmaliType.h"

#include "SmaliClass.h"


CSmaliField::CSmaliField() {
	hasValue = 0;
	fieldFlag = 0;
	isStatic = 0;
	setPublicType();
}

void CSmaliField::setPrivateType() {
	isPublic = false;
	isPrivate = true;
	isProtcted = false;
}
void CSmaliField::setPublicType() {
	isPublic = true;
	isPrivate = false;
	isProtcted = false;
}
void CSmaliField::setProtctedType() {
	isPublic = false;
	isPrivate = false;
	isProtcted = true;
}

bool CSmaliField::getPrivateType() {
	return isPrivate;
}
bool CSmaliField::getPublicType() {
	return isPublic;
}
bool CSmaliField::getProtctedType() {
	return isProtcted;
}

void CSmaliField::dumpAllField(CodeDumper* d, CSmaliClass * pClass) {
	CodeDumper dumper;
	if (pClass->eOutType == config::OUT_H) {
		if (isStatic) {
			//dumper.add("static inline ");
			dumper.add("static ");
		}
		std::string strCppFieldName = fieldName;
#if 1
		stringhelper::replace(strCppFieldName, "-", "_");
		stringhelper::replace(strCppFieldName, "+", "_p_");
		stringhelper::replace(strCppFieldName, "$", "_S_");
#endif
		dumper.add(SmaliType(fieldType).getCppDefineType(pClass)).add(" ").add(strCppFieldName);
#if 0
		if (hasValue) {
			if (strValue == "null") {
				strValue = "nullptr";
			}
			else if ((strValue[0] == '\"') && (strValue[strValue.size() - 1] == '\"')) {
				std::string strNewValue = "std::make_shared<java::lang::String>(";
				strNewValue.append(strValue).append(")");
				strValue = strNewValue;
			}

			dumper.add(" = ").add(strValue);
		}
#endif

		dumper.endl().newline();
	}
	else if (pClass->eOutType == config::OUT_CPP) {
		if (isStatic) {
			dumper.add("static ");
			std::string strCppFieldName = fieldName;
#if 1
			stringhelper::replace(strCppFieldName, "-", "_");
			stringhelper::replace(strCppFieldName, "+", "_p_");
			stringhelper::replace(strCppFieldName, "$", "_S_");
#endif
			dumper.add(SmaliType(pClass->getClassName()).getBaseType()->getCppType(pClass).append("::"));
			//dumper.add(SmaliType(fieldType).getCppDefineType(pClass)).add(" ").add(strCppFieldName);
			dumper.add(strCppFieldName);
			if (hasValue) {
				if (strValue == "null") {
					strValue = "nullptr";
				}
				else if ((strValue[0] == '\"') && (strValue[strValue.size() - 1] == '\"')) {
					std::string strNewValue = "std::make_shared<java::lang::String>(";
					strNewValue.append(strValue).append(")");
					strValue = strNewValue;
				}
				dumper.add(" = ").add(strValue);
			}
			dumper.endl().newline();
		}
	}
	d->add(dumper);
}

std::string CSmaliField::getCppMethodPermissionString(unsigned long val) {
	if (val & CSmaliClass::kAccPublic) {
		return "public";
	}
	if (val & CSmaliClass::kAccPrivate) {
		return "private";
	}
	if (val & CSmaliClass::kAccProtected) {
		return "protected";
	}
	return "public";
}
