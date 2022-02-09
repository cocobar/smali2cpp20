// CPP L:\smali2cpp20\x64\Release\out\com\sun\nio\file\ExtendedWatchEventModifier.smali
#include "java2ctype.h"
#include "com.sun.nio.file.ExtendedWatchEventModifier.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static com::sun::nio::file::ExtendedWatchEventModifier::_S_VALUES;
static com::sun::nio::file::ExtendedWatchEventModifier::FILE_TREE;
// .method static constructor <clinit>()V
void com::sun::nio::file::ExtendedWatchEventModifier::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<com::sun::nio::file::ExtendedWatchEventModifier> cVar1;
	std::shared<std::vector<std::vector<com::sun::nio::file::ExtendedWatchEventModifier>>> cVar2;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<com::sun::nio::file::ExtendedWatchEventModifier>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FILE_TREE")), cVar0);
	com::sun::nio::file::ExtendedWatchEventModifier::FILE_TREE = cVar1;
	cVar2 = std::make_shared<std::vector<std::vector<com::sun::nio::file::ExtendedWatchEventModifier>>>(0x1);
	cVar2[cVar0] = com::sun::nio::file::ExtendedWatchEventModifier::FILE_TREE;
	com::sun::nio::file::ExtendedWatchEventModifier::_S_VALUES = cVar2;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
com::sun::nio::file::ExtendedWatchEventModifier::ExtendedWatchEventModifier(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Lcom/sun/nio/file/ExtendedWatchEventModifier;
std::shared_ptr<com::sun::nio::file::ExtendedWatchEventModifier> com::sun::nio::file::ExtendedWatchEventModifier::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<com::sun::nio::file::ExtendedWatchEventModifier> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(com::sun::nio::file::ExtendedWatchEventModifier(), name);
	cVar0->checkCast("com::sun::nio::file::ExtendedWatchEventModifier");
	return cVar0;

}
// .method public static values()[Lcom/sun/nio/file/ExtendedWatchEventModifier;
std::shared_ptr<com::sun::nio::file::ExtendedWatchEventModifier> com::sun::nio::file::ExtendedWatchEventModifier::values()
{
	
	return com::sun::nio::file::ExtendedWatchEventModifier::_S_VALUES;

}


