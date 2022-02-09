// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$OffsetFields.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneFormat_S_OffsetFields.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::TimeZoneFormat_S_OffsetFields::_S_VALUES;
static android::icu::text::TimeZoneFormat_S_OffsetFields::H;
static android::icu::text::TimeZoneFormat_S_OffsetFields::HM;
static android::icu::text::TimeZoneFormat_S_OffsetFields::HMS;
// .method static constructor <clinit>()V
void android::icu::text::TimeZoneFormat_S_OffsetFields::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> cVar3;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> cVar4;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> cVar5;
	std::shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_OffsetFields>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::text::TimeZoneFormat_S_OffsetFields>(std::make_shared<java::lang::String>(std::make_shared<char[]>("H")), cVar2);
	android::icu::text::TimeZoneFormat_S_OffsetFields::H = cVar3;
	cVar4 = std::make_shared<android::icu::text::TimeZoneFormat_S_OffsetFields>(std::make_shared<java::lang::String>(std::make_shared<char[]>("HM")), cVar1);
	android::icu::text::TimeZoneFormat_S_OffsetFields::HM = cVar4;
	cVar5 = std::make_shared<android::icu::text::TimeZoneFormat_S_OffsetFields>(std::make_shared<java::lang::String>(std::make_shared<char[]>("HMS")), cVar0);
	android::icu::text::TimeZoneFormat_S_OffsetFields::HMS = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_OffsetFields>>>(0x3);
	cVar6[cVar2] = android::icu::text::TimeZoneFormat_S_OffsetFields::H;
	cVar6[cVar1] = android::icu::text::TimeZoneFormat_S_OffsetFields::HM;
	cVar6[cVar0] = android::icu::text::TimeZoneFormat_S_OffsetFields::HMS;
	android::icu::text::TimeZoneFormat_S_OffsetFields::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::TimeZoneFormat_S_OffsetFields::TimeZoneFormat_S_OffsetFields(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$OffsetFields;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> android::icu::text::TimeZoneFormat_S_OffsetFields::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::TimeZoneFormat_S_OffsetFields(), name);
	cVar0->checkCast("android::icu::text::TimeZoneFormat_S_OffsetFields");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/TimeZoneFormat$OffsetFields;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_OffsetFields> android::icu::text::TimeZoneFormat_S_OffsetFields::values()
{
	
	return android::icu::text::TimeZoneFormat_S_OffsetFields::_S_VALUES;

}


