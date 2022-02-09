#ifndef __dalvik_system_BaseDexClassLoader_S_Reporter__
#define __dalvik_system_BaseDexClassLoader_S_Reporter__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\BaseDexClassLoader$Reporter.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace dalvik::system{
class BaseDexClassLoader_S_Reporter : public java::lang::Object {
protected:
private:
public:
	void report(std::shared_ptr<java::util::List<dalvik::system::BaseDexClassLoader>> var0,std::shared_ptr<java::util::List<java::lang::String>> var1);
	BaseDexClassLoader_S_Reporter(){ };
	virtual ~BaseDexClassLoader_S_Reporter(){ };

}; // class BaseDexClassLoader_S_Reporter
}; // namespace dalvik::system

#endif //__dalvik_system_BaseDexClassLoader_S_Reporter__

