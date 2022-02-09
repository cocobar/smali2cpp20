#ifndef __dalvik_system_DexFile__
#define __dalvik_system_DexFile__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\DexFile.smali
#include "java2ctype.h"
#include "dalvik.system.DexPathList_S_Element.h"
#include "java.io.File.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"

namespace dalvik::system{
class DexFile : public java::lang::Object {
protected:
	void virtual finalize();
private:
	std::shared_ptr<java::lang::Object> mCookie;
	std::shared_ptr<java::lang::String> mFileName;
	std::shared_ptr<java::lang::Object> mInternalCookie;
	DexFile(std::shared_ptr<java::lang::String> sourceName,std::shared_ptr<java::lang::String> outputName,int flags,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements);
	static bool closeDexFile(std::shared_ptr<java::lang::Object> var0) = 0;
	static std::shared_ptr<java::lang::Object> createCookieWithArray(std::shared_ptr<unsigned char[]> var0,int var1,int var2) = 0;
	static std::shared_ptr<java::lang::Object> createCookieWithDirectBuffer(std::shared_ptr<java::nio::ByteBuffer> var0,int var1,int var2) = 0;
	static std::shared_ptr<java::lang::Class> defineClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::Object> cookie,std::shared_ptr<dalvik::system::DexFile> dexFile,std::shared_ptr<java::util::List<java::lang::Throwable>> suppressed);
	static std::shared_ptr<java::lang::Class> defineClassNative(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::ClassLoader> var1,std::shared_ptr<java::lang::Object> var2,std::shared_ptr<dalvik::system::DexFile> var3);
	static std::shared_ptr<java::lang::String> getClassNameList(std::shared_ptr<java::lang::Object> var0) = 0;
	static bool isBackedByOatFile(std::shared_ptr<java::lang::Object> var0) = 0;
	static std::shared_ptr<java::lang::Object> openDexFile(std::shared_ptr<java::lang::String> sourceName,std::shared_ptr<java::lang::String> outputName,int flags,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements);
	static std::shared_ptr<java::lang::Object> openDexFileNative(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,int var2,std::shared_ptr<java::lang::ClassLoader> var3,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> var4) = 0;
	static std::shared_ptr<java::lang::Object> openInMemoryDexFile(std::shared_ptr<java::nio::ByteBuffer> buf);
public:
	static int DEX2OAT_FOR_BOOT_IMAGE;
	static int DEX2OAT_FOR_FILTER;
	static int DEX2OAT_FOR_RELOCATION;
	static int DEX2OAT_FROM_SCRATCH;
	static int NO_DEXOPT_NEEDED;
	static std::shared_ptr<java::lang::Object> _get0(std::shared_ptr<dalvik::system::DexFile> _this);
	static std::shared_ptr<java::lang::String> _wrap0(std::shared_ptr<java::lang::Object> cookie);
	DexFile(std::shared_ptr<java::io::File> file);
	DexFile(std::shared_ptr<java::io::File> file,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements);
	DexFile(std::shared_ptr<java::lang::String> fileName);
	DexFile(std::shared_ptr<java::lang::String> fileName,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements);
	DexFile(std::shared_ptr<java::nio::ByteBuffer> buf);
	static std::shared_ptr<java::lang::String> getDexFileOutputPaths(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1);
	static std::shared_ptr<java::lang::String> getDexFileStatus(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1);
	static int getDexOptNeeded(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,bool var3,bool var4);
	static std::shared_ptr<java::lang::String> getNonProfileGuidedCompilerFilter(std::shared_ptr<java::lang::String> var0) = 0;
	static std::shared_ptr<java::lang::String> getSafeModeCompilerFilter(std::shared_ptr<java::lang::String> var0) = 0;
	static bool isDexOptNeeded(std::shared_ptr<java::lang::String> var0);
	static bool isProfileGuidedCompilerFilter(std::shared_ptr<java::lang::String> var0) = 0;
	static bool isValidCompilerFilter(std::shared_ptr<java::lang::String> var0) = 0;
	static std::shared_ptr<dalvik::system::DexFile> loadDex(std::shared_ptr<java::lang::String> sourcePathName,std::shared_ptr<java::lang::String> outputPathName,int flags);
	static std::shared_ptr<dalvik::system::DexFile> loadDex(std::shared_ptr<java::lang::String> sourcePathName,std::shared_ptr<java::lang::String> outputPathName,int flags,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<std::vector<dalvik::system::DexPathList_S_Element>> elements);
	void virtual close();
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual entries();
	std::shared_ptr<java::lang::String> virtual getName();
	bool virtual isBackedByOatFile();
	std::shared_ptr<java::lang::Class> virtual loadClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::ClassLoader> loader);
	std::shared_ptr<java::lang::Class> virtual loadClassBinaryName(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::util::List<java::lang::Throwable>> suppressed);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DexFile(){
	}

}; // class DexFile
}; // namespace dalvik::system

#endif //__dalvik_system_DexFile__

