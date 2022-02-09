// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZone$SystemTimeZoneType.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZone_S_SystemTimeZoneType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::TimeZone_S_SystemTimeZoneType::_S_VALUES;
static android::icu::util::TimeZone_S_SystemTimeZoneType::ANY;
static android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL;
static android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL_LOCATION;
// .method static constructor <clinit>()V
void android::icu::util::TimeZone_S_SystemTimeZoneType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> cVar3;
	std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> cVar4;
	std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> cVar5;
	std::shared<std::vector<std::vector<android::icu::util::TimeZone_S_SystemTimeZoneType>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::util::TimeZone_S_SystemTimeZoneType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ANY")), cVar2);
	android::icu::util::TimeZone_S_SystemTimeZoneType::ANY = cVar3;
	cVar4 = std::make_shared<android::icu::util::TimeZone_S_SystemTimeZoneType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CANONICAL")), cVar1);
	android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL = cVar4;
	cVar5 = std::make_shared<android::icu::util::TimeZone_S_SystemTimeZoneType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CANONICAL_LOCATION")), cVar0);
	android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL_LOCATION = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::util::TimeZone_S_SystemTimeZoneType>>>(0x3);
	cVar6[cVar2] = android::icu::util::TimeZone_S_SystemTimeZoneType::ANY;
	cVar6[cVar1] = android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL;
	cVar6[cVar0] = android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL_LOCATION;
	android::icu::util::TimeZone_S_SystemTimeZoneType::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::TimeZone_S_SystemTimeZoneType::TimeZone_S_SystemTimeZoneType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/TimeZone$SystemTimeZoneType;
std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> android::icu::util::TimeZone_S_SystemTimeZoneType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::TimeZone_S_SystemTimeZoneType(), name);
	cVar0->checkCast("android::icu::util::TimeZone_S_SystemTimeZoneType");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/TimeZone$SystemTimeZoneType;
std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> android::icu::util::TimeZone_S_SystemTimeZoneType::values()
{
	
	return android::icu::util::TimeZone_S_SystemTimeZoneType::_S_VALUES;

}


