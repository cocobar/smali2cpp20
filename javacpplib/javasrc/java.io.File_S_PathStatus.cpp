// CPP L:\smali2cpp20\x64\Release\out\java\io\File$PathStatus.smali
#include "java2ctype.h"
#include "java.io.File_S_PathStatus.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static java::io::File_S_PathStatus::_S_VALUES;
static java::io::File_S_PathStatus::CHECKED;
static java::io::File_S_PathStatus::INVALID;
// .method static constructor <clinit>()V
void java::io::File_S_PathStatus::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::io::File_S_PathStatus> cVar2;
	std::shared_ptr<java::io::File_S_PathStatus> cVar3;
	std::shared<std::vector<std::vector<java::io::File_S_PathStatus>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<java::io::File_S_PathStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INVALID")), cVar1);
	java::io::File_S_PathStatus::INVALID = cVar2;
	cVar3 = std::make_shared<java::io::File_S_PathStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CHECKED")), cVar0);
	java::io::File_S_PathStatus::CHECKED = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<java::io::File_S_PathStatus>>>(0x2);
	cVar4[cVar1] = java::io::File_S_PathStatus::INVALID;
	cVar4[cVar0] = java::io::File_S_PathStatus::CHECKED;
	java::io::File_S_PathStatus::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
java::io::File_S_PathStatus::File_S_PathStatus(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Ljava/io/File$PathStatus;
std::shared_ptr<java::io::File_S_PathStatus> java::io::File_S_PathStatus::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::File_S_PathStatus> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(java::io::File_S_PathStatus(), name);
	cVar0->checkCast("java::io::File_S_PathStatus");
	return cVar0;

}
// .method public static values()[Ljava/io/File$PathStatus;
std::shared_ptr<java::io::File_S_PathStatus> java::io::File_S_PathStatus::values()
{
	
	return java::io::File_S_PathStatus::_S_VALUES;

}


