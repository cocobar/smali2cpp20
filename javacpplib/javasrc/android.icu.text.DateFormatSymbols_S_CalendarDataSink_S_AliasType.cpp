// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols$CalendarDataSink$AliasType.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormatSymbols_S_CalendarDataSink_S_AliasType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::_S_VALUES;
static android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::DIFFERENT_CALENDAR;
static android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::GREGORIAN;
static android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::NONE;
static android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::SAME_CALENDAR;
// .method static constructor <clinit>()V
void android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> cVar4;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> cVar5;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> cVar6;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> cVar7;
	std::shared<std::vector<std::vector<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SAME_CALENDAR")), cVar3);
	android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::SAME_CALENDAR = cVar4;
	cVar5 = std::make_shared<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DIFFERENT_CALENDAR")), cVar2);
	android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::DIFFERENT_CALENDAR = cVar5;
	cVar6 = std::make_shared<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GREGORIAN")), cVar1);
	android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::GREGORIAN = cVar6;
	cVar7 = std::make_shared<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NONE")), cVar0);
	android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::NONE = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType>>>(0x4);
	cVar8[cVar3] = android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::SAME_CALENDAR;
	cVar8[cVar2] = android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::DIFFERENT_CALENDAR;
	cVar8[cVar1] = android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::GREGORIAN;
	cVar8[cVar0] = android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::NONE;
	android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::DateFormatSymbols_S_CalendarDataSink_S_AliasType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/DateFormatSymbols$CalendarDataSink$AliasType;
std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType(), name);
	cVar0->checkCast("android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/DateFormatSymbols$CalendarDataSink$AliasType;
std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::values()
{
	
	return android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::_S_VALUES;

}


