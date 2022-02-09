#ifndef __CTYPEDEFINE_H__
#define __CTYPEDEFINE_H__

#include "BaseObject.h"
#include <string>
#include <vector>

class CTypeDefine : public CBaseObject
{
public:
	CTypeDefine();
	~CTypeDefine();

	std::string strClassName;						// 被使用的Class名称
	std::vector<std::string> listSupperClassName;	// 依赖的文件

	bool bUsedType;									// 只使用了类型
	bool bUsedCreate;								// 使用了构造函数	
	bool bUsedFull;									// 全部都使用了
	std::vector<std::string> listUsedField;			// 被使用的Field
	std::vector<std::string> listUsedMethod;		// 被使用的Method

};

#endif

