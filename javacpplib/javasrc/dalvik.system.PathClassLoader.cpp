// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\PathClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader.h"
#include "dalvik.system.PathClassLoader.h"
#include "java.io.File.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/ClassLoader;)V
dalvik::system::PathClassLoader::PathClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	std::shared_ptr<java::io::File> cVar0;
	
	//    .param p1, "dexPath"    # Ljava/lang/String;
	//    .param p2, "parent"    # Ljava/lang/ClassLoader;
	cVar0 = 0x0;
	dalvik::system::BaseDexClassLoader::(dexPath, cVar0, cVar0, parent);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V
dalvik::system::PathClassLoader::PathClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	//    .param p1, "dexPath"    # Ljava/lang/String;
	//    .param p2, "librarySearchPath"    # Ljava/lang/String;
	//    .param p3, "parent"    # Ljava/lang/ClassLoader;
	dalvik::system::BaseDexClassLoader::(dexPath, 0x0, librarySearchPath, parent);
	return;

}


