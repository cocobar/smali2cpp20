// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$AbsoluteUnit.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_AbsoluteUnit.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::_S_VALUES;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::DAY;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::FRIDAY;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONDAY;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONTH;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::NOW;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::QUARTER;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SATURDAY;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SUNDAY;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::THURSDAY;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::TUESDAY;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEDNESDAY;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEEK;
static android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::YEAR;
// .method static constructor <clinit>()V
void android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar5;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar6;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar7;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar8;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar9;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar10;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar11;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar12;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar13;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar14;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar15;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar16;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar17;
	std::shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>>> cVar18;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUNDAY")), cVar4);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SUNDAY = cVar5;
	cVar6 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONDAY")), cVar3);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONDAY = cVar6;
	cVar7 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TUESDAY")), cVar2);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::TUESDAY = cVar7;
	cVar8 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WEDNESDAY")), cVar1);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEDNESDAY = cVar8;
	cVar9 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("THURSDAY")), cVar0);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::THURSDAY = cVar9;
	cVar10 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FRIDAY")), 0x5);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::FRIDAY = cVar10;
	cVar11 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SATURDAY")), 0x6);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SATURDAY = cVar11;
	cVar12 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY")), 0x7);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::DAY = cVar12;
	cVar13 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WEEK")), 0x8);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEEK = cVar13;
	cVar14 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONTH")), 0x9);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONTH = cVar14;
	cVar15 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("YEAR")), 0xa);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::YEAR = cVar15;
	cVar16 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOW")), 0xb);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::NOW = cVar16;
	cVar17 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("QUARTER")), 0xc);
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::QUARTER = cVar17;
	cVar18 = std::make_shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit>>>(0xd);
	cVar18[cVar4] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SUNDAY;
	cVar18[cVar3] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONDAY;
	cVar18[cVar2] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::TUESDAY;
	cVar18[cVar1] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEDNESDAY;
	cVar18[cVar0] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::THURSDAY;
	cVar18[0x5] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::FRIDAY;
	cVar18[0x6] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SATURDAY;
	cVar18[0x7] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::DAY;
	cVar18[0x8] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEEK;
	cVar18[0x9] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONTH;
	cVar18[0xa] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::YEAR;
	cVar18[0xb] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::NOW;
	cVar18[0xc] = android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::QUARTER;
	android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::_S_VALUES = cVar18;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::RelativeDateTimeFormatter_S_AbsoluteUnit(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit(), name);
	cVar0->checkCast("android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::values()
{
	
	return android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::_S_VALUES;

}


