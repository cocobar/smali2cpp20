#ifndef __dalvik_system_DalvikLogging__
#define __dalvik_system_DalvikLogging__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DalvikLogging.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace dalvik::system{
class DalvikLogging : public java::lang::Object {
protected:
private:
	DalvikLogging();
public:
	static std::shared_ptr<java::lang::String> loggerNameToTag(std::shared_ptr<java::lang::String> loggerName);
public:
	virtual ~DalvikLogging(){
	}

}; // class DalvikLogging
}; // namespace dalvik::system

#endif //__dalvik_system_DalvikLogging__

