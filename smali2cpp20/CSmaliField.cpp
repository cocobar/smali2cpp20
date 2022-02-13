#include "CSmaliField.h"
#include "CSmaliType.h"

#include "CSmaliClass.h"


CSmaliField::CSmaliField() {
	hasValue = 0;
	fieldFlag = 0;
	isStatic = 0;
	setPublicType();
}

std::string CSmaliField::getCppName() {
	std::string strCppFieldName = fieldName;
#if 1
	stringhelper::replace(strCppFieldName, "-", "_");
	stringhelper::replace(strCppFieldName, "+", "_p_");
	stringhelper::replace(strCppFieldName, "$", "_S_");
#endif

	return strCppFieldName;
}

void CSmaliField::dumpAllField(int outType, CodeDumper* d, CSmaliClass* pClass) {
	CodeDumper dumper;
	if (outType == OUT_H) {
		if (isStatic) {
			//dumper.add("static inline ");
			dumper.add("static ");
		}

		dumper.add(fieldType->getCppDefineType()).add(" ").add(getCppName());
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
	else if (outType == OUT_CPP) {
		if (isStatic) {
			dumper.add("static ");
			dumper.add(pClass->getClassType()->getBaseType()->getCppType().append("::"));
			dumper.add(getCppName());
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
