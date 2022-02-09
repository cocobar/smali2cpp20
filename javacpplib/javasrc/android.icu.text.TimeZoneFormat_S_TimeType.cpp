// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$TimeType.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneFormat_S_TimeType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::TimeZoneFormat_S_TimeType::_S_VALUES;
static android::icu::text::TimeZoneFormat_S_TimeType::DAYLIGHT;
static android::icu::text::TimeZoneFormat_S_TimeType::STANDARD;
static android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
// .method static constructor <clinit>()V
void android::icu::text::TimeZoneFormat_S_TimeType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> cVar3;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> cVar4;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> cVar5;
	std::shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_TimeType>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::text::TimeZoneFormat_S_TimeType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNKNOWN")), cVar2);
	android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN = cVar3;
	cVar4 = std::make_shared<android::icu::text::TimeZoneFormat_S_TimeType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("STANDARD")), cVar1);
	android::icu::text::TimeZoneFormat_S_TimeType::STANDARD = cVar4;
	cVar5 = std::make_shared<android::icu::text::TimeZoneFormat_S_TimeType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAYLIGHT")), cVar0);
	android::icu::text::TimeZoneFormat_S_TimeType::DAYLIGHT = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_TimeType>>>(0x3);
	cVar6[cVar2] = android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	cVar6[cVar1] = android::icu::text::TimeZoneFormat_S_TimeType::STANDARD;
	cVar6[cVar0] = android::icu::text::TimeZoneFormat_S_TimeType::DAYLIGHT;
	android::icu::text::TimeZoneFormat_S_TimeType::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::TimeZoneFormat_S_TimeType::TimeZoneFormat_S_TimeType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$TimeType;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> android::icu::text::TimeZoneFormat_S_TimeType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::TimeZoneFormat_S_TimeType(), name);
	cVar0->checkCast("android::icu::text::TimeZoneFormat_S_TimeType");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/TimeZoneFormat$TimeType;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> android::icu::text::TimeZoneFormat_S_TimeType::values()
{
	
	return android::icu::text::TimeZoneFormat_S_TimeType::_S_VALUES;

}

