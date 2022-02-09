// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelativeDateTimeUnit.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeDateTimeUnit.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::_S_VALUES;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::DAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::FRIDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::HOUR;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MINUTE;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MONDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MONTH;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::QUARTER;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SATURDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SECOND;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SUNDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::THURSDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::TUESDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::WEDNESDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::WEEK;
static android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::YEAR;
// .method static constructor <clinit>()V
void android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar5;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar6;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar7;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar8;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar9;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar10;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar11;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar12;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar13;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar14;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar15;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar16;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar17;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar18;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar19;
	std::shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>>> cVar20;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("YEAR")), cVar4);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::YEAR = cVar5;
	cVar6 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("QUARTER")), cVar3);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::QUARTER = cVar6;
	cVar7 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONTH")), cVar2);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MONTH = cVar7;
	cVar8 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WEEK")), cVar1);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::WEEK = cVar8;
	cVar9 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY")), cVar0);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::DAY = cVar9;
	cVar10 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("HOUR")), 0x5);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::HOUR = cVar10;
	cVar11 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MINUTE")), 0x6);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MINUTE = cVar11;
	cVar12 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SECOND")), 0x7);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SECOND = cVar12;
	cVar13 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUNDAY")), 0x8);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SUNDAY = cVar13;
	cVar14 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONDAY")), 0x9);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MONDAY = cVar14;
	cVar15 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TUESDAY")), 0xa);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::TUESDAY = cVar15;
	cVar16 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WEDNESDAY")), 0xb);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::WEDNESDAY = cVar16;
	cVar17 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("THURSDAY")), 0xc);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::THURSDAY = cVar17;
	cVar18 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FRIDAY")), 0xd);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::FRIDAY = cVar18;
	cVar19 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SATURDAY")), 0xe);
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SATURDAY = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit>>>(0xf);
	cVar20[cVar4] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::YEAR;
	cVar20[cVar3] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::QUARTER;
	cVar20[cVar2] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MONTH;
	cVar20[cVar1] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::WEEK;
	cVar20[cVar0] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::DAY;
	cVar20[0x5] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::HOUR;
	cVar20[0x6] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MINUTE;
	cVar20[0x7] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SECOND;
	cVar20[0x8] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SUNDAY;
	cVar20[0x9] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::MONDAY;
	cVar20[0xa] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::TUESDAY;
	cVar20[0xb] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::WEDNESDAY;
	cVar20[0xc] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::THURSDAY;
	cVar20[0xd] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::FRIDAY;
	cVar20[0xe] = android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::SATURDAY;
	android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::_S_VALUES = cVar20;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::RelativeDateTimeFormatter_S_RelativeDateTimeUnit(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit(), name);
	cVar0->checkCast("android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/RelativeDateTimeFormatter$RelativeDateTimeUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit> android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::values()
{
	
	return android::icu::text::RelativeDateTimeFormatter_S_RelativeDateTimeUnit::_S_VALUES;

}


