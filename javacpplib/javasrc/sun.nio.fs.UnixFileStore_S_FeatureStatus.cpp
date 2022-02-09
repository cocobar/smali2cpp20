// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixFileStore$FeatureStatus.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "sun.nio.fs.UnixFileStore_S_FeatureStatus.h"

static sun::nio::fs::UnixFileStore_S_FeatureStatus::_S_VALUES;
static sun::nio::fs::UnixFileStore_S_FeatureStatus::NOT_PRESENT;
static sun::nio::fs::UnixFileStore_S_FeatureStatus::PRESENT;
static sun::nio::fs::UnixFileStore_S_FeatureStatus::UNKNOWN;
// .method static constructor <clinit>()V
void sun::nio::fs::UnixFileStore_S_FeatureStatus::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<sun::nio::fs::UnixFileStore_S_FeatureStatus> cVar3;
	std::shared_ptr<sun::nio::fs::UnixFileStore_S_FeatureStatus> cVar4;
	std::shared_ptr<sun::nio::fs::UnixFileStore_S_FeatureStatus> cVar5;
	std::shared<std::vector<std::vector<sun::nio::fs::UnixFileStore_S_FeatureStatus>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<sun::nio::fs::UnixFileStore_S_FeatureStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PRESENT")), cVar2);
	sun::nio::fs::UnixFileStore_S_FeatureStatus::PRESENT = cVar3;
	cVar4 = std::make_shared<sun::nio::fs::UnixFileStore_S_FeatureStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOT_PRESENT")), cVar1);
	sun::nio::fs::UnixFileStore_S_FeatureStatus::NOT_PRESENT = cVar4;
	cVar5 = std::make_shared<sun::nio::fs::UnixFileStore_S_FeatureStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNKNOWN")), cVar0);
	sun::nio::fs::UnixFileStore_S_FeatureStatus::UNKNOWN = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<sun::nio::fs::UnixFileStore_S_FeatureStatus>>>(0x3);
	cVar6[cVar2] = sun::nio::fs::UnixFileStore_S_FeatureStatus::PRESENT;
	cVar6[cVar1] = sun::nio::fs::UnixFileStore_S_FeatureStatus::NOT_PRESENT;
	cVar6[cVar0] = sun::nio::fs::UnixFileStore_S_FeatureStatus::UNKNOWN;
	sun::nio::fs::UnixFileStore_S_FeatureStatus::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
sun::nio::fs::UnixFileStore_S_FeatureStatus::UnixFileStore_S_FeatureStatus(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Lsun/nio/fs/UnixFileStore$FeatureStatus;
std::shared_ptr<sun::nio::fs::UnixFileStore_S_FeatureStatus> sun::nio::fs::UnixFileStore_S_FeatureStatus::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::nio::fs::UnixFileStore_S_FeatureStatus> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(sun::nio::fs::UnixFileStore_S_FeatureStatus(), name);
	cVar0->checkCast("sun::nio::fs::UnixFileStore_S_FeatureStatus");
	return cVar0;

}
// .method public static values()[Lsun/nio/fs/UnixFileStore$FeatureStatus;
std::shared_ptr<sun::nio::fs::UnixFileStore_S_FeatureStatus> sun::nio::fs::UnixFileStore_S_FeatureStatus::values()
{
	
	return sun::nio::fs::UnixFileStore_S_FeatureStatus::_S_VALUES;

}


