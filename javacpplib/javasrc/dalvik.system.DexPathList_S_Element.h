#ifndef __dalvik_system_DexPathList_S_Element__
#define __dalvik_system_DexPathList_S_Element__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DexPathList$Element.smali
#include "java2ctype.h"
#include "dalvik.system.DexFile.h"
#include "java.io.File.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.net.URL.h"
#include "java.util.List.h"
#include "libcore.io.ClassPathURLStreamHandler.h"

namespace dalvik::system{
class DexPathList_S_Element : public java::lang::Object {
protected:
private:
	std::shared_ptr<dalvik::system::DexFile> dexFile;
	bool initialized;
	std::shared_ptr<java::io::File> path;
	std::shared_ptr<libcore::io::ClassPathURLStreamHandler> urlHandler;
	std::shared_ptr<java::lang::String> virtual getDexPath();
public:
	static std::shared_ptr<java::lang::String> _wrap0(std::shared_ptr<dalvik::system::DexPathList_S_Element> _this);
	DexPathList_S_Element(std::shared_ptr<dalvik::system::DexFile> dexFile);
	DexPathList_S_Element(std::shared_ptr<dalvik::system::DexFile> dexFile,std::shared_ptr<java::io::File> dexZipPath);
	DexPathList_S_Element(std::shared_ptr<java::io::File> path);
	DexPathList_S_Element(std::shared_ptr<java::io::File> dir,bool isDirectory,std::shared_ptr<java::io::File> zip,std::shared_ptr<dalvik::system::DexFile> dexFile);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual findClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::ClassLoader> definingContext,std::shared_ptr<java::util::List<java::lang::Throwable>> suppressed);
	std::shared_ptr<java::net::URL> virtual findResource(std::shared_ptr<java::lang::String> name);
	void virtual maybeInit();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DexPathList_S_Element(){
	}

}; // class DexPathList_S_Element
}; // namespace dalvik::system

#endif //__dalvik_system_DexPathList_S_Element__

