#ifndef __dalvik_system_DexClassLoader__
#define __dalvik_system_DexClassLoader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DexClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

namespace dalvik::system{
class DexClassLoader : public dalvik::system::BaseDexClassLoader {
protected:
private:
public:
	DexClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::String> optimizedDirectory,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::lang::ClassLoader> parent);
public:
	virtual ~DexClassLoader(){
	}

}; // class DexClassLoader
}; // namespace dalvik::system

#endif //__dalvik_system_DexClassLoader__

