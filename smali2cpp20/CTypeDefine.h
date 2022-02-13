#ifndef __CTYPEDEFINE_H__
#define __CTYPEDEFINE_H__

#include "CBaseAssert.h"
#include <string>
#include <vector>

class CTypeDefine : public CBaseObject
{
private:
	CTypeDefine();

public:
	CTypeDefine(std::string strClass);
	~CTypeDefine();

	std::string strClassName;						// 被使用的Class名称

	std::vector<std::string> listUsedField;			// 被使用的Field
	std::vector<std::string> listUsedMethod;		// 被使用的Method

	void addUsedField(std::string strField) {
		auto a = std::find(listUsedField.begin(), listUsedField.end(), strField);
		if (a == listUsedField.end()) {
			listUsedField.push_back(strField);
		}
	}

	void addUsedMethod(std::string strMethod) {
		auto a = std::find(listUsedMethod.begin(), listUsedMethod.end(), strMethod);
		if (a == listUsedMethod.end()) {
			listUsedMethod.push_back(strMethod);
		}
	}

	bool hasField(std::string strField) {
		auto a = std::find(listUsedField.begin(), listUsedField.end(), strField);
		if (a == listUsedField.end()) {
			return false;
		}
		return true;
	}

	bool hasMethod(std::string strMethod) {
		auto a = std::find(listUsedMethod.begin(), listUsedMethod.end(), strMethod);
		if (a == listUsedMethod.end()) {
			return false;
		}
		return true;
	}

};

#endif

