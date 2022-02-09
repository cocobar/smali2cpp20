#ifndef __dalvik_system_DelegateLastClassLoader__
#define __dalvik_system_DelegateLastClassLoader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DelegateLastClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.PathClassLoader.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.URL.h"
#include "java.util.Enumeration.h"

namespace dalvik::system{
class DelegateLastClassLoader : public dalvik::system::PathClassLoader {
protected:
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual loadClass(std::shared_ptr<java::lang::String> name,bool resolve);
private:
public:
	DelegateLastClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::ClassLoader> parent);
	DelegateLastClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::lang::ClassLoader> parent);
	std::shared_ptr<java::net::URL> virtual getResource(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::net::URL>> virtual getResources(std::shared_ptr<java::lang::String> name);
public:
	virtual ~DelegateLastClassLoader(){
	}

}; // class DelegateLastClassLoader
}; // namespace dalvik::system

#endif //__dalvik_system_DelegateLastClassLoader__

