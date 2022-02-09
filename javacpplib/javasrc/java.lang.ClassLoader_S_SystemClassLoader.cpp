// CPP L:\smali2cpp20\x64\Release\out\java\lang\ClassLoader$SystemClassLoader.smali
#include "java2ctype.h"
#include "java.lang.ClassLoader_S_SystemClassLoader.h"
#include "java.lang.ClassLoader.h"

static java::lang::ClassLoader_S_SystemClassLoader::loader;
// .method static constructor <clinit>()V
void java::lang::ClassLoader_S_SystemClassLoader::static_cinit()
{
	
	java::lang::ClassLoader_S_SystemClassLoader::loader = java::lang::ClassLoader::-wrap0({const[class].FS-Param});
	return;

}
// .method private constructor <init>()V
java::lang::ClassLoader_S_SystemClassLoader::ClassLoader_S_SystemClassLoader()
{
	
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


