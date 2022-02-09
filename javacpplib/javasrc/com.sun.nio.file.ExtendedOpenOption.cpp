// CPP L:\smali2cpp20\x64\Release\out\com\sun\nio\file\ExtendedOpenOption.smali
#include "java2ctype.h"
#include "com.sun.nio.file.ExtendedOpenOption.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static com::sun::nio::file::ExtendedOpenOption::_S_VALUES;
static com::sun::nio::file::ExtendedOpenOption::NOSHARE_DELETE;
static com::sun::nio::file::ExtendedOpenOption::NOSHARE_READ;
static com::sun::nio::file::ExtendedOpenOption::NOSHARE_WRITE;
// .method static constructor <clinit>()V
void com::sun::nio::file::ExtendedOpenOption::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> cVar3;
	std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> cVar4;
	std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> cVar5;
	std::shared<std::vector<std::vector<com::sun::nio::file::ExtendedOpenOption>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<com::sun::nio::file::ExtendedOpenOption>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOSHARE_READ")), cVar2);
	com::sun::nio::file::ExtendedOpenOption::NOSHARE_READ = cVar3;
	cVar4 = std::make_shared<com::sun::nio::file::ExtendedOpenOption>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOSHARE_WRITE")), cVar1);
	com::sun::nio::file::ExtendedOpenOption::NOSHARE_WRITE = cVar4;
	cVar5 = std::make_shared<com::sun::nio::file::ExtendedOpenOption>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOSHARE_DELETE")), cVar0);
	com::sun::nio::file::ExtendedOpenOption::NOSHARE_DELETE = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<com::sun::nio::file::ExtendedOpenOption>>>(0x3);
	cVar6[cVar2] = com::sun::nio::file::ExtendedOpenOption::NOSHARE_READ;
	cVar6[cVar1] = com::sun::nio::file::ExtendedOpenOption::NOSHARE_WRITE;
	cVar6[cVar0] = com::sun::nio::file::ExtendedOpenOption::NOSHARE_DELETE;
	com::sun::nio::file::ExtendedOpenOption::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
com::sun::nio::file::ExtendedOpenOption::ExtendedOpenOption(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Lcom/sun/nio/file/ExtendedOpenOption;
std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> com::sun::nio::file::ExtendedOpenOption::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(com::sun::nio::file::ExtendedOpenOption(), name);
	cVar0->checkCast("com::sun::nio::file::ExtendedOpenOption");
	return cVar0;

}
// .method public static values()[Lcom/sun/nio/file/ExtendedOpenOption;
std::shared_ptr<com::sun::nio::file::ExtendedOpenOption> com::sun::nio::file::ExtendedOpenOption::values()
{
	
	return com::sun::nio::file::ExtendedOpenOption::_S_VALUES;

}


