// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelDateTimeDataSink$DateTimeUnit.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_AbsoluteUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeUnit.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::_S_VALUES;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::DAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::FRIDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::HOUR;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MINUTE;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MONDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MONTH;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::QUARTER;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SATURDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SECOND;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SUNDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::THURSDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::TUESDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::WEDNESDAY;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::WEEK;
static android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::YEAR;
// .method static synthetic -wrap0(Ljava/lang/CharSequence;)Landroid/icu/text/RelativeDateTimeFormatter$RelDateTimeDataSink$DateTimeUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::_wrap0(std::shared_ptr<java::lang::CharSequence> keyword)
{
	
	//    .param p0, "keyword"    # Ljava/lang/CharSequence;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::orNullFromString(keyword);

}
// .method static constructor <clinit>()V
void android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> cVar4;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar5;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar6;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar7;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar8;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar9;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar10;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar11;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar12;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar13;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar14;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar15;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar16;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar17;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar18;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar19;
	std::shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>>> cVar20;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SECOND")), cVar3, android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::SECONDS, cVar4);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SECOND = cVar5;
	cVar6 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MINUTE")), cVar2, android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MINUTES, cVar4);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MINUTE = cVar6;
	cVar7 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("HOUR")), cVar1, android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::HOURS, cVar4);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::HOUR = cVar7;
	cVar8 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY")), cVar0, android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::DAYS, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::DAY);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::DAY = cVar8;
	cVar9 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WEEK")), 0x4, android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::WEEKS, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEEK);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::WEEK = cVar9;
	cVar10 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONTH")), 0x5, android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::MONTHS, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONTH);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MONTH = cVar10;
	cVar11 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("QUARTER")), 0x6, android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::QUARTERS, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::QUARTER);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::QUARTER = cVar11;
	cVar12 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("YEAR")), 0x7, android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit::YEARS, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::YEAR);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::YEAR = cVar12;
	cVar13 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUNDAY")), 0x8, cVar4, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SUNDAY);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SUNDAY = cVar13;
	cVar14 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONDAY")), 0x9, cVar4, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::MONDAY);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MONDAY = cVar14;
	cVar15 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TUESDAY")), 0xa, cVar4, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::TUESDAY);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::TUESDAY = cVar15;
	cVar16 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("WEDNESDAY")), 0xb, cVar4, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::WEDNESDAY);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::WEDNESDAY = cVar16;
	cVar17 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("THURSDAY")), 0xc, cVar4, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::THURSDAY);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::THURSDAY = cVar17;
	cVar18 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FRIDAY")), 0xd, cVar4, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::FRIDAY);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::FRIDAY = cVar18;
	cVar19 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SATURDAY")), 0xe, cVar4, android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit::SATURDAY);
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SATURDAY = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit>>>(0xf);
	cVar20[cVar3] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SECOND;
	cVar20[cVar2] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MINUTE;
	cVar20[cVar1] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::HOUR;
	cVar20[cVar0] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::DAY;
	cVar20[0x4] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::WEEK;
	cVar20[0x5] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MONTH;
	cVar20[0x6] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::QUARTER;
	cVar20[0x7] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::YEAR;
	cVar20[0x8] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SUNDAY;
	cVar20[0x9] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MONDAY;
	cVar20[0xa] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::TUESDAY;
	cVar20[0xb] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::WEDNESDAY;
	cVar20[0xc] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::THURSDAY;
	cVar20[0xd] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::FRIDAY;
	cVar20[0xe] = android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SATURDAY;
	android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::_S_VALUES = cVar20;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILandroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;)V
android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit> relUnit,std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit> absUnit)
{
	
	//    .param p3, "relUnit"    # Landroid/icu/text/RelativeDateTimeFormatter$RelativeUnit;
	//    .param p4, "absUnit"    # Landroid/icu/text/RelativeDateTimeFormatter$AbsoluteUnit;
	java::lang::Enum::(var0, var1);
	this->relUnit = relUnit;
	this->absUnit = absUnit;
	return;

}
// .method private static final orNullFromString(Ljava/lang/CharSequence;)Landroid/icu/text/RelativeDateTimeFormatter$RelDateTimeDataSink$DateTimeUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::orNullFromString(std::shared_ptr<java::lang::CharSequence> keyword)
{
	
	//    .param p0, "keyword"    # Ljava/lang/CharSequence;
	// switch
	{
	auto item = ( keyword->length() );
	if (item == 3) goto label_pswitch_9;
	if (item == 4) goto label_pswitch_69;
	if (item == 5) goto label_pswitch_8d;
	if (item == 6) goto label_pswitch_99;
	if (item == 7) goto label_pswitch_b1;
	}
label_cond_7:
	return 0x0;
	// 419    .line 876
label_pswitch_9:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("day"))->contentEquals(keyword)) )  
		goto label_cond_15;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::DAY;
	// 434    .line 878
label_cond_15:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("sun"))->contentEquals(keyword)) )  
		goto label_cond_21;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SUNDAY;
	// 449    .line 880
label_cond_21:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("mon"))->contentEquals(keyword)) )  
		goto label_cond_2d;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MONDAY;
	// 464    .line 882
label_cond_2d:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("tue"))->contentEquals(keyword)) )  
		goto label_cond_39;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::TUESDAY;
	// 479    .line 884
label_cond_39:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("wed"))->contentEquals(keyword)) )  
		goto label_cond_45;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::WEDNESDAY;
	// 494    .line 886
label_cond_45:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("thu"))->contentEquals(keyword)) )  
		goto label_cond_51;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::THURSDAY;
	// 509    .line 888
label_cond_51:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("fri"))->contentEquals(keyword)) )  
		goto label_cond_5d;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::FRIDAY;
	// 524    .line 890
label_cond_5d:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("sat"))->contentEquals(keyword)) )  
		goto label_cond_7;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SATURDAY;
	// 539    .line 895
label_pswitch_69:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("hour"))->contentEquals(keyword)) )  
		goto label_cond_75;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::HOUR;
	// 554    .line 897
label_cond_75:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("week"))->contentEquals(keyword)) )  
		goto label_cond_81;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::WEEK;
	// 569    .line 899
label_cond_81:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("year"))->contentEquals(keyword)) )  
		goto label_cond_7;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::YEAR;
	// 584    .line 904
label_pswitch_8d:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("month"))->contentEquals(keyword)) )  
		goto label_cond_7;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MONTH;
	// 599    .line 909
label_pswitch_99:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("minute"))->contentEquals(keyword)) )  
		goto label_cond_a5;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::MINUTE;
	// 614    .line 911
label_cond_a5:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("second"))->contentEquals(keyword)) )  
		goto label_cond_7;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::SECOND;
	// 629    .line 916
label_pswitch_b1:
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("quarter"))->contentEquals(keyword)) )  
		goto label_cond_7;
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::QUARTER;
	// 644    .line 874
	// 645    nop
	// 647    :pswitch_data_be
	// 648    .packed-switch 0x3
	// 649        :pswitch_9
	// 650        :pswitch_69
	// 651        :pswitch_8d
	// 652        :pswitch_99
	// 653        :pswitch_b1
	// 654    .end packed-switch

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$RelDateTimeDataSink$DateTimeUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit(), name);
	cVar0->checkCast("android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/RelativeDateTimeFormatter$RelDateTimeDataSink$DateTimeUnit;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::values()
{
	
	return android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit::_S_VALUES;

}


