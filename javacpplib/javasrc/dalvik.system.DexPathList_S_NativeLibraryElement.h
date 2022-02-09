#ifndef __dalvik_system_DexPathList_S_NativeLibraryElement__
#define __dalvik_system_DexPathList_S_NativeLibraryElement__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DexPathList$NativeLibraryElement.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "libcore.io.ClassPathURLStreamHandler.h"

namespace dalvik::system{
class DexPathList_S_NativeLibraryElement : public java::lang::Object {
protected:
private:
	bool initialized;
	std::shared_ptr<java::io::File> path;
	std::shared_ptr<libcore::io::ClassPathURLStreamHandler> urlHandler;
	std::shared_ptr<java::lang::String> zipDir;
public:
	DexPathList_S_NativeLibraryElement(std::shared_ptr<java::io::File> dir);
	DexPathList_S_NativeLibraryElement(std::shared_ptr<java::io::File> zip,std::shared_ptr<java::lang::String> zipDir);
	std::shared_ptr<java::lang::String> virtual findNativeLibrary(std::shared_ptr<java::lang::String> name);
	void virtual maybeInit();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DexPathList_S_NativeLibraryElement(){
	}

}; // class DexPathList_S_NativeLibraryElement
}; // namespace dalvik::system

#endif //__dalvik_system_DexPathList_S_NativeLibraryElement__

