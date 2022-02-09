#ifndef __dalvik_system_PathClassLoader__
#define __dalvik_system_PathClassLoader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\PathClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

namespace dalvik::system{
class PathClassLoader : public dalvik::system::BaseDexClassLoader {
protected:
private:
public:
	PathClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::ClassLoader> parent);
	PathClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::lang::ClassLoader> parent);
public:
	virtual ~PathClassLoader(){
	}

}; // class PathClassLoader
}; // namespace dalvik::system

#endif //__dalvik_system_PathClassLoader__

