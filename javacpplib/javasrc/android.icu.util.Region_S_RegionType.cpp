// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Region$RegionType.smali
#include "java2ctype.h"
#include "android.icu.util.Region_S_RegionType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::Region_S_RegionType::_S_VALUES;
static android::icu::util::Region_S_RegionType::CONTINENT;
static android::icu::util::Region_S_RegionType::DEPRECATED;
static android::icu::util::Region_S_RegionType::GROUPING;
static android::icu::util::Region_S_RegionType::SUBCONTINENT;
static android::icu::util::Region_S_RegionType::TERRITORY;
static android::icu::util::Region_S_RegionType::UNKNOWN;
static android::icu::util::Region_S_RegionType::WORLD;
// .method static constructor <clinit>()V
void android::icu::util::Region_S_RegionType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::util::Region_S_RegionType> cVar5;
	std::shared_ptr<android::icu::util::Region_S_RegionType> cVar6;
	std::shared_ptr<android::icu::util::Region_S_RegionType> cVar7;
	std::shared_ptr<android::icu::util::Region_S_RegionType> cVar8;
	std::shared_ptr<android::icu::util::Region_S_RegionType> cVar9;
	std::shared_ptr<android::icu::util::Region_S_RegionType> cVar10;
	std::shared_ptr<android::icu::util::Region_S_RegionType> cVar11;
	std::shared<std::vector<std::vector<android::icu::util::Region_S_RegionType>>> cVar12;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::util::Region_S_RegionType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNKNOWN")), cVar4);
	android::icu::util::Region_S_RegionType::UNKNOWN = cVar5;
	cVar6 = std::make_shared<android::icu::util::Region_S_RegionType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TERRITORY")), cVar3);
	android::icu::util::Region_S_RegionType::TERRITORY = cVar6;
	cVar7 = std::make_shared<android::icu::util::Region_S_RegionType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WORLD")), cVar2);
	android::icu::util::Region_S_RegionType::WORLD = cVar7;
	cVar8 = std::make_shared<android::icu::util::Region_S_RegionType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CONTINENT")), cVar1);
	android::icu::util::Region_S_RegionType::CONTINENT = cVar8;
	cVar9 = std::make_shared<android::icu::util::Region_S_RegionType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUBCONTINENT")), cVar0);
	android::icu::util::Region_S_RegionType::SUBCONTINENT = cVar9;
	cVar10 = std::make_shared<android::icu::util::Region_S_RegionType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GROUPING")), 0x5);
	android::icu::util::Region_S_RegionType::GROUPING = cVar10;
	cVar11 = std::make_shared<android::icu::util::Region_S_RegionType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DEPRECATED")), 0x6);
	android::icu::util::Region_S_RegionType::DEPRECATED = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<android::icu::util::Region_S_RegionType>>>(0x7);
	cVar12[cVar4] = android::icu::util::Region_S_RegionType::UNKNOWN;
	cVar12[cVar3] = android::icu::util::Region_S_RegionType::TERRITORY;
	cVar12[cVar2] = android::icu::util::Region_S_RegionType::WORLD;
	cVar12[cVar1] = android::icu::util::Region_S_RegionType::CONTINENT;
	cVar12[cVar0] = android::icu::util::Region_S_RegionType::SUBCONTINENT;
	cVar12[0x5] = android::icu::util::Region_S_RegionType::GROUPING;
	cVar12[0x6] = android::icu::util::Region_S_RegionType::DEPRECATED;
	android::icu::util::Region_S_RegionType::_S_VALUES = cVar12;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::Region_S_RegionType::Region_S_RegionType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/Region$RegionType;
std::shared_ptr<android::icu::util::Region_S_RegionType> android::icu::util::Region_S_RegionType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::Region_S_RegionType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::Region_S_RegionType(), name);
	cVar0->checkCast("android::icu::util::Region_S_RegionType");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/Region$RegionType;
std::shared_ptr<android::icu::util::Region_S_RegionType> android::icu::util::Region_S_RegionType::values()
{
	
	return android::icu::util::Region_S_RegionType::_S_VALUES;

}


