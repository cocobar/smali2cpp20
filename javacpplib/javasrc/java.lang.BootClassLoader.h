#ifndef __java_lang_BootClassLoader__
#define __java_lang_BootClassLoader__
// H L:\smali2cpp20\x64\Release\out\java\lang\BootClassLoader.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.Package.h"
#include "java.lang.String.h"
#include "java.net.URL.h"
#include "java.util.Enumeration.h"

namespace java::lang{
class BootClassLoader : public java::lang::ClassLoader {
protected:
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual findClass(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::net::URL> virtual findResource(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::net::URL>> virtual findResources(std::shared_ptr<java::lang::String> resName);
	std::shared_ptr<java::lang::Package> virtual getPackage(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual loadClass(std::shared_ptr<java::lang::String> className,bool resolve);
private:
	static std::shared_ptr<java::lang::BootClassLoader> instance;
public:
	BootClassLoader();
	static std::shared_ptr<java::lang::BootClassLoader> getInstance();
	std::shared_ptr<java::net::URL> virtual getResource(std::shared_ptr<java::lang::String> resName);
	std::shared_ptr<java::util::Enumeration<java::net::URL>> virtual getResources(std::shared_ptr<java::lang::String> resName);
public:
	virtual ~BootClassLoader(){
	}

}; // class BootClassLoader
}; // namespace java::lang

#endif //__java_lang_BootClassLoader__

