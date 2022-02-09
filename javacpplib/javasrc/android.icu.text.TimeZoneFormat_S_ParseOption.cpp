// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$ParseOption.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneFormat_S_ParseOption.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::TimeZoneFormat_S_ParseOption::_S_VALUES;
static android::icu::text::TimeZoneFormat_S_ParseOption::ALL_STYLES;
static android::icu::text::TimeZoneFormat_S_ParseOption::TZ_DATABASE_ABBREVIATIONS;
// .method static constructor <clinit>()V
void android::icu::text::TimeZoneFormat_S_ParseOption::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_ParseOption> cVar2;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_ParseOption> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_ParseOption>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::TimeZoneFormat_S_ParseOption>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ALL_STYLES")), cVar1);
	android::icu::text::TimeZoneFormat_S_ParseOption::ALL_STYLES = cVar2;
	cVar3 = std::make_shared<android::icu::text::TimeZoneFormat_S_ParseOption>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZ_DATABASE_ABBREVIATIONS")), cVar0);
	android::icu::text::TimeZoneFormat_S_ParseOption::TZ_DATABASE_ABBREVIATIONS = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_ParseOption>>>(0x2);
	cVar4[cVar1] = android::icu::text::TimeZoneFormat_S_ParseOption::ALL_STYLES;
	cVar4[cVar0] = android::icu::text::TimeZoneFormat_S_ParseOption::TZ_DATABASE_ABBREVIATIONS;
	android::icu::text::TimeZoneFormat_S_ParseOption::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::TimeZoneFormat_S_ParseOption::TimeZoneFormat_S_ParseOption(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$ParseOption;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_ParseOption> android::icu::text::TimeZoneFormat_S_ParseOption::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_ParseOption> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::TimeZoneFormat_S_ParseOption(), name);
	cVar0->checkCast("android::icu::text::TimeZoneFormat_S_ParseOption");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/TimeZoneFormat$ParseOption;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_ParseOption> android::icu::text::TimeZoneFormat_S_ParseOption::values()
{
	
	return android::icu::text::TimeZoneFormat_S_ParseOption::_S_VALUES;

}


