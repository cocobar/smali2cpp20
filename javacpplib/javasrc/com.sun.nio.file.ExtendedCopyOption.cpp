// CPP L:\smali2cpp20\x64\Release\out\com\sun\nio\file\ExtendedCopyOption.smali
#include "java2ctype.h"
#include "com.sun.nio.file.ExtendedCopyOption.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static com::sun::nio::file::ExtendedCopyOption::_S_VALUES;
static com::sun::nio::file::ExtendedCopyOption::INTERRUPTIBLE;
// .method static constructor <clinit>()V
void com::sun::nio::file::ExtendedCopyOption::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<com::sun::nio::file::ExtendedCopyOption> cVar1;
	std::shared<std::vector<std::vector<com::sun::nio::file::ExtendedCopyOption>>> cVar2;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<com::sun::nio::file::ExtendedCopyOption>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INTERRUPTIBLE")), cVar0);
	com::sun::nio::file::ExtendedCopyOption::INTERRUPTIBLE = cVar1;
	cVar2 = std::make_shared<std::vector<std::vector<com::sun::nio::file::ExtendedCopyOption>>>(0x1);
	cVar2[cVar0] = com::sun::nio::file::ExtendedCopyOption::INTERRUPTIBLE;
	com::sun::nio::file::ExtendedCopyOption::_S_VALUES = cVar2;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
com::sun::nio::file::ExtendedCopyOption::ExtendedCopyOption(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Lcom/sun/nio/file/ExtendedCopyOption;
std::shared_ptr<com::sun::nio::file::ExtendedCopyOption> com::sun::nio::file::ExtendedCopyOption::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<com::sun::nio::file::ExtendedCopyOption> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(com::sun::nio::file::ExtendedCopyOption(), name);
	cVar0->checkCast("com::sun::nio::file::ExtendedCopyOption");
	return cVar0;

}
// .method public static values()[Lcom/sun/nio/file/ExtendedCopyOption;
std::shared_ptr<com::sun::nio::file::ExtendedCopyOption> com::sun::nio::file::ExtendedCopyOption::values()
{
	
	return com::sun::nio::file::ExtendedCopyOption::_S_VALUES;

}


