// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelativeUnit.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeUnit.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::_S_VALUES;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::DAYS;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::HOURS;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MINUTES;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MONTHS;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::QUARTERS;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::SECONDS;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::WEEKS;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::YEARS;
// .method static constructor <clinit>()V
void android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> cVar5;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> cVar6;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> cVar7;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> cVar8;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> cVar9;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> cVar10;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> cVar11;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> cVar12;
	std::shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>>> cVar13;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SECONDS")), cVar4);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::SECONDS = cVar5;
	cVar6 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MINUTES")), cVar3);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MINUTES = cVar6;
	cVar7 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("HOURS")), cVar2);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::HOURS = cVar7;
	cVar8 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAYS")), cVar1);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::DAYS = cVar8;
	cVar9 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WEEKS")), cVar0);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::WEEKS = cVar9;
	cVar10 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONTHS")), 0x5);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MONTHS = cVar10;
	cVar11 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("YEARS")), 0x6);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::YEARS = cVar11;
	cVar12 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("QUARTERS")), 0x7);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::QUARTERS = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit>>>(0x8);
	cVar13[cVar4] = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::SECONDS;
	cVar13[cVar3] = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MINUTES;
	cVar13[cVar2] = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::HOURS;
	cVar13[cVar1] = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::DAYS;
	cVar13[cVar0] = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::WEEKS;
	cVar13[0x5] = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MONTHS;
	cVar13[0x6] = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::YEARS;
	cVar13[0x7] = android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::QUARTERS;
	android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::_S_VALUES = cVar13;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::RelativeDateTimeFormatter_S_RelativeUnit(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit(), name);
	cVar0->checkCast("android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::values()
{
	
	return android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::_S_VALUES;

}


