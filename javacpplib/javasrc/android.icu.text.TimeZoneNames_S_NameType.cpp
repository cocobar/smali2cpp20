// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$NameType.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::TimeZoneNames_S_NameType::_S_VALUES;
static android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION;
static android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT;
static android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC;
static android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD;
static android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT;
static android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC;
static android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD;
// .method static constructor <clinit>()V
void android::icu::text::TimeZoneNames_S_NameType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> cVar5;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> cVar6;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> cVar7;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> cVar8;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> cVar9;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> cVar10;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> cVar11;
	std::shared<std::vector<std::vector<android::icu::text::TimeZoneNames_S_NameType>>> cVar12;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::TimeZoneNames_S_NameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LONG_GENERIC")), cVar4);
	android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC = cVar5;
	cVar6 = std::make_shared<android::icu::text::TimeZoneNames_S_NameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LONG_STANDARD")), cVar3);
	android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD = cVar6;
	cVar7 = std::make_shared<android::icu::text::TimeZoneNames_S_NameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LONG_DAYLIGHT")), cVar2);
	android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT = cVar7;
	cVar8 = std::make_shared<android::icu::text::TimeZoneNames_S_NameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORT_GENERIC")), cVar1);
	android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC = cVar8;
	cVar9 = std::make_shared<android::icu::text::TimeZoneNames_S_NameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORT_STANDARD")), cVar0);
	android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD = cVar9;
	cVar10 = std::make_shared<android::icu::text::TimeZoneNames_S_NameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORT_DAYLIGHT")), 0x5);
	android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT = cVar10;
	cVar11 = std::make_shared<android::icu::text::TimeZoneNames_S_NameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EXEMPLAR_LOCATION")), 0x6);
	android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<android::icu::text::TimeZoneNames_S_NameType>>>(0x7);
	cVar12[cVar4] = android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC;
	cVar12[cVar3] = android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD;
	cVar12[cVar2] = android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT;
	cVar12[cVar1] = android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC;
	cVar12[cVar0] = android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD;
	cVar12[0x5] = android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT;
	cVar12[0x6] = android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION;
	android::icu::text::TimeZoneNames_S_NameType::_S_VALUES = cVar12;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::TimeZoneNames_S_NameType::TimeZoneNames_S_NameType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/TimeZoneNames$NameType;
std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> android::icu::text::TimeZoneNames_S_NameType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::TimeZoneNames_S_NameType(), name);
	cVar0->checkCast("android::icu::text::TimeZoneNames_S_NameType");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/TimeZoneNames$NameType;
std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> android::icu::text::TimeZoneNames_S_NameType::values()
{
	
	return android::icu::text::TimeZoneNames_S_NameType::_S_VALUES;

}


