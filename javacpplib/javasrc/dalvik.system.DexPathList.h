#ifndef __dalvik_system_DexPathList__
#define __dalvik_system_DexPathList__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DexPathList.smali
#include "java2ctype.h"
#include "dalvik.system.DexFile.h"
#include "dalvik.system.DexPathList_S_Element.h"
#include "dalvik.system.DexPathList_S_NativeLibraryElement.h"
#include "java.io.File.h"
#include "java.io.IOException.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.net.URL.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"

namespace dalvik::system{
class DexPathList : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> DEX_SUFFIX;
	static std::shared_ptr<java::lang::String> zipSeparator;
	std::shared_ptr<java::lang::ClassLoader> definingContext;
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> dexElements;
	std::shared_ptr<std::vector<java::io::IOException>> dexElementsSuppressedExceptions;
	std::shared_ptr<java::util::List<java::io::File>> nativeLibraryDirectories;
	std::shared_ptr<std::vector<dalvik::system::DexPathList_S_NativeLibraryElement>> nativeLibraryPathElements;
	std::shared_ptr<java::util::List<java::io::File>> systemNativeLibraryDirectories;
	static std::shared_ptr<dalvik::system::DexFile> loadDexFile(std::shared_ptr<java::io::File> file,std::shared_ptr<java::io::File> optimizedDirectory,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements);
	static std::shared_ptr<dalvik::system::DexPathList_S_Element> makeDexElements(std::shared_ptr<java::util::List<java::io::File>> files,std::shared_ptr<java::io::File> optimizedDirectory,std::shared_ptr<java::util::List<java::io::IOException>> suppressedExceptions,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<dalvik::system::DexPathList_S_Element> makeInMemoryDexElements(std::shared_ptr<std::vector<java::nio::ByteBuffer>> dexFiles,std::shared_ptr<java::util::List<java::io::IOException>> suppressedExceptions);
	static std::shared_ptr<dalvik::system::DexPathList_S_Element> makePathElements(std::shared_ptr<java::util::List<java::io::File>> files,std::shared_ptr<java::io::File> optimizedDirectory,std::shared_ptr<java::util::List<java::io::IOException>> suppressedExceptions);
	static std::shared_ptr<dalvik::system::DexPathList_S_NativeLibraryElement> makePathElements(std::shared_ptr<java::util::List<java::io::File>> files);
	static std::shared_ptr<java::lang::String> optimizedPathFor(std::shared_ptr<java::io::File> path,std::shared_ptr<java::io::File> optimizedDirectory);
	static std::shared_ptr<java::util::List<java::io::File>> splitDexPath(std::shared_ptr<java::lang::String> path);
	static std::shared_ptr<java::util::List<java::io::File>> splitPaths(std::shared_ptr<java::lang::String> searchPath,bool directoriesOnly);
public:
	DexPathList(std::shared_ptr<java::lang::ClassLoader> definingContext,std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::io::File> optimizedDirectory);
	DexPathList(std::shared_ptr<java::lang::ClassLoader> definingContext,std::shared_ptr<std::vector<java::nio::ByteBuffer>> dexFiles);
	static bool lambda_S__dalvik_system_DexPathList_3307(std::shared_ptr<java::nio::ByteBuffer> v);
	void virtual addDexPath(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::io::File> optimizedDirectory);
	std::shared_ptr<java::lang::Class<java::lang::Object>> virtual findClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::util::List<java::lang::Throwable>> suppressed);
	std::shared_ptr<java::lang::String> virtual findLibrary(std::shared_ptr<java::lang::String> libraryName);
	std::shared_ptr<java::net::URL> virtual findResource(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Enumeration<java::net::URL>> virtual findResources(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::List<java::lang::String>> virtual getDexPaths();
	std::shared_ptr<java::util::List<java::io::File>> virtual getNativeLibraryDirectories();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DexPathList(){
	}

}; // class DexPathList
}; // namespace dalvik::system

#endif //__dalvik_system_DexPathList__

