// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\DexClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader.h"
#include "dalvik.system.DexClassLoader.h"
#include "java.io.File.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V
dalvik::system::DexClassLoader::DexClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::String> optimizedDirectory,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	//    .param p1, "dexPath"    # Ljava/lang/String;
	//    .param p2, "optimizedDirectory"    # Ljava/lang/String;
	//    .param p3, "librarySearchPath"    # Ljava/lang/String;
	//    .param p4, "parent"    # Ljava/lang/ClassLoader;
	dalvik::system::BaseDexClassLoader::(dexPath, 0x0, librarySearchPath, parent);
	return;

}


