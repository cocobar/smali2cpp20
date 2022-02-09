#ifndef __dalvik_system_BaseDexClassLoader__
#define __dalvik_system_BaseDexClassLoader__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\BaseDexClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader_S_Reporter.h"
#include "dalvik.system.DexPathList.h"
#include "java.io.File.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.Package.h"
#include "java.lang.String.h"
#include "java.net.URL.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Enumeration.h"

namespace dalvik::system{
class BaseDexClassLoader : public java::lang::ClassLoader {
protected:
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual findClass(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::net::URL> virtual findResource(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::net::URL>> virtual findResources(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Package> virtual getPackage(std::shared_ptr<java::lang::String> name);
private:
	static std::shared_ptr<dalvik::system::BaseDexClassLoader_S_Reporter> reporter;
	std::shared_ptr<dalvik::system::DexPathList> pathList;
	void virtual reportClassLoaderChain();
public:
	static void static_cinit();
	BaseDexClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::io::File> optimizedDirectory,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::lang::ClassLoader> parent);
	BaseDexClassLoader(std::shared_ptr<std::vector<java::nio::ByteBuffer>> dexFiles,std::shared_ptr<java::lang::ClassLoader> parent);
	static std::shared_ptr<dalvik::system::BaseDexClassLoader_S_Reporter> getReporter();
	static void setReporter(std::shared_ptr<dalvik::system::BaseDexClassLoader_S_Reporter> newReporter);
	void virtual addDexPath(std::shared_ptr<java::lang::String> dexPath);
	std::shared_ptr<java::lang::String> virtual findLibrary(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::String> virtual getLdLibraryPath();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			dalvik::system::BaseDexClassLoader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BaseDexClassLoader(){
	}

}; // class BaseDexClassLoader
}; // namespace dalvik::system

#endif //__dalvik_system_BaseDexClassLoader__

