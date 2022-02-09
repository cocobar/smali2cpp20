#ifndef __dalvik_system_ClassExt__
#define __dalvik_system_ClassExt__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\ClassExt.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace dalvik::system{
class ClassExt : public java::lang::Object {
protected:
private:
	std::shared_ptr<std::vector<java::lang::Object>> obsoleteDexCaches;
	std::shared_ptr<java::lang::Object> obsoleteMethods;
	std::shared_ptr<java::lang::Object> originalDexFile;
	std::shared_ptr<java::lang::Object> verifyError;
	ClassExt();
public:
public:
	virtual ~ClassExt(){
	}

}; // class ClassExt
}; // namespace dalvik::system

#endif //__dalvik_system_ClassExt__

