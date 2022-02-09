// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\SimpleHoliday.smali
#include "java2ctype.h"
#include "android.icu.util.DateRule.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.RangeDateRule.h"
#include "android.icu.util.SimpleDateRule.h"
#include "android.icu.util.SimpleHoliday.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

static android::icu::util::SimpleHoliday::ALL_SAINTS_DAY;
static android::icu::util::SimpleHoliday::ALL_SOULS_DAY;
static android::icu::util::SimpleHoliday::ASSUMPTION;
static android::icu::util::SimpleHoliday::BOXING_DAY;
static android::icu::util::SimpleHoliday::CHRISTMAS;
static android::icu::util::SimpleHoliday::CHRISTMAS_EVE;
static android::icu::util::SimpleHoliday::EPIPHANY;
static android::icu::util::SimpleHoliday::IMMACULATE_CONCEPTION;
static android::icu::util::SimpleHoliday::MAY_DAY;
static android::icu::util::SimpleHoliday::NEW_YEARS_DAY;
static android::icu::util::SimpleHoliday::NEW_YEARS_EVE;
static android::icu::util::SimpleHoliday::ST_STEPHENS_DAY;
// .method static constructor <clinit>()V
void android::icu::util::SimpleHoliday::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar5;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar6;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar7;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar8;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar9;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar10;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar11;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar12;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar13;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar14;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar15;
	std::shared_ptr<android::icu::util::SimpleHoliday> cVar16;
	
	cVar0 = 0x1a;
	cVar1 = 0xa;
	cVar2 = 0x0;
	cVar3 = 0x1;
	cVar4 = 0xb;
	cVar5 = std::make_shared<android::icu::util::SimpleHoliday>(cVar2, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("New Year\'s Day")));
	android::icu::util::SimpleHoliday::NEW_YEARS_DAY = cVar5;
	cVar6 = std::make_shared<android::icu::util::SimpleHoliday>(cVar2, 0x6, std::make_shared<java::lang::String>(std::make_shared<char[]>("Epiphany")));
	android::icu::util::SimpleHoliday::EPIPHANY = cVar6;
	cVar7 = std::make_shared<android::icu::util::SimpleHoliday>(0x4, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("May Day")));
	android::icu::util::SimpleHoliday::MAY_DAY = cVar7;
	cVar8 = std::make_shared<android::icu::util::SimpleHoliday>(0x7, 0xf, std::make_shared<java::lang::String>(std::make_shared<char[]>("Assumption")));
	android::icu::util::SimpleHoliday::ASSUMPTION = cVar8;
	cVar9 = std::make_shared<android::icu::util::SimpleHoliday>(cVar1, cVar3, std::make_shared<java::lang::String>(std::make_shared<char[]>("All Saints\' Day")));
	android::icu::util::SimpleHoliday::ALL_SAINTS_DAY = cVar9;
	cVar10 = std::make_shared<android::icu::util::SimpleHoliday>(cVar1, 0x2, std::make_shared<java::lang::String>(std::make_shared<char[]>("All Souls\' Day")));
	android::icu::util::SimpleHoliday::ALL_SOULS_DAY = cVar10;
	cVar11 = std::make_shared<android::icu::util::SimpleHoliday>(cVar4, 0x8, std::make_shared<java::lang::String>(std::make_shared<char[]>("Immaculate Conception")));
	android::icu::util::SimpleHoliday::IMMACULATE_CONCEPTION = cVar11;
	cVar12 = std::make_shared<android::icu::util::SimpleHoliday>(cVar4, 0x18, std::make_shared<java::lang::String>(std::make_shared<char[]>("Christmas Eve")));
	android::icu::util::SimpleHoliday::CHRISTMAS_EVE = cVar12;
	cVar13 = std::make_shared<android::icu::util::SimpleHoliday>(cVar4, 0x19, std::make_shared<java::lang::String>(std::make_shared<char[]>("Christmas")));
	android::icu::util::SimpleHoliday::CHRISTMAS = cVar13;
	cVar14 = std::make_shared<android::icu::util::SimpleHoliday>(cVar4, cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("Boxing Day")));
	android::icu::util::SimpleHoliday::BOXING_DAY = cVar14;
	cVar15 = std::make_shared<android::icu::util::SimpleHoliday>(cVar4, cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("St. Stephen\'s Day")));
	android::icu::util::SimpleHoliday::ST_STEPHENS_DAY = cVar15;
	cVar16 = std::make_shared<android::icu::util::SimpleHoliday>(cVar4, 0x1f, std::make_shared<java::lang::String>(std::make_shared<char[]>("New Year\'s Eve")));
	android::icu::util::SimpleHoliday::NEW_YEARS_EVE = cVar16;
	return;

}
// .method public constructor <init>(IIILjava/lang/String;)V
android::icu::util::SimpleHoliday::SimpleHoliday(int month,int dayOfMonth,int dayOfWeek,std::shared_ptr<java::lang::String> name)
{
	
	bool cVar3;
	std::shared_ptr<android::icu::util::SimpleDateRule> cVar1;
	int cVar2;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "name"    # Ljava/lang/String;
	cVar3 = 0x0;
	if ( dayOfWeek <= 0 )
		goto label_cond_10;
	cVar2 = dayOfWeek;
label_goto_6:
	if ( dayOfWeek <= 0 )
		goto label_cond_9;
	cVar3 = 0x1;
label_cond_9:
	cVar1 = std::make_shared<android::icu::util::SimpleDateRule>(month, dayOfMonth, cVar2, cVar3);
	android::icu::util::Holiday::(name, cVar1);
	return;
	// 222    .line 112
label_cond_10:
	cVar2 = (0 - dayOfWeek);
	goto label_goto_6;

}
// .method public constructor <init>(IIILjava/lang/String;I)V
android::icu::util::SimpleHoliday::SimpleHoliday(int month,int dayOfMonth,int dayOfWeek,std::shared_ptr<java::lang::String> name,int startYear)
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::SimpleDateRule> cVar1;
	int cVar2;
	bool cVar3;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "name"    # Ljava/lang/String;
	//    .param p5, "startYear"    # I
	cVar0 = 0x0;
	if ( dayOfWeek <= 0 )
		goto label_cond_14;
	cVar2 = dayOfWeek;
label_goto_6:
	if ( dayOfWeek <= 0 )
		goto label_cond_17;
	cVar3 = 0x1;
label_goto_9:
	cVar1 = std::make_shared<android::icu::util::SimpleDateRule>(month, dayOfMonth, cVar2, cVar3);
	android::icu::util::Holiday::(name, android::icu::util::SimpleHoliday::rangeRule(startYear, cVar0, cVar1));
	return;
	// 268    .line 124
label_cond_14:
	cVar2 = (0 - dayOfWeek);
	goto label_goto_6;
label_cond_17:
	cVar3 = cVar0;
	goto label_goto_9;

}
// .method public constructor <init>(IIILjava/lang/String;II)V
android::icu::util::SimpleHoliday::SimpleHoliday(int month,int dayOfMonth,int dayOfWeek,std::shared_ptr<java::lang::String> name,int startYear,int endYear)
{
	
	bool cVar3;
	std::shared_ptr<android::icu::util::SimpleDateRule> cVar1;
	int cVar2;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "name"    # Ljava/lang/String;
	//    .param p5, "startYear"    # I
	//    .param p6, "endYear"    # I
	cVar3 = 0x0;
	if ( dayOfWeek <= 0 )
		goto label_cond_14;
	cVar2 = dayOfWeek;
label_goto_6:
	if ( dayOfWeek <= 0 )
		goto label_cond_9;
	cVar3 = 0x1;
label_cond_9:
	cVar1 = std::make_shared<android::icu::util::SimpleDateRule>(month, dayOfMonth, cVar2, cVar3);
	android::icu::util::Holiday::(name, android::icu::util::SimpleHoliday::rangeRule(startYear, endYear, cVar1));
	return;
	// 323    .line 137
label_cond_14:
	cVar2 = (0 - dayOfWeek);
	goto label_goto_6;

}
// .method public constructor <init>(IILjava/lang/String;)V
android::icu::util::SimpleHoliday::SimpleHoliday(int month,int dayOfMonth,std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::SimpleDateRule> cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "name"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::SimpleDateRule>(month, dayOfMonth);
	android::icu::util::Holiday::(name, cVar0);
	return;

}
// .method public constructor <init>(IILjava/lang/String;I)V
android::icu::util::SimpleHoliday::SimpleHoliday(int month,int dayOfMonth,std::shared_ptr<java::lang::String> name,int startYear)
{
	
	std::shared_ptr<android::icu::util::SimpleDateRule> cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "name"    # Ljava/lang/String;
	//    .param p4, "startYear"    # I
	cVar0 = std::make_shared<android::icu::util::SimpleDateRule>(month, dayOfMonth);
	android::icu::util::Holiday::(name, android::icu::util::SimpleHoliday::rangeRule(startYear, 0x0, cVar0));
	return;

}
// .method public constructor <init>(IILjava/lang/String;II)V
android::icu::util::SimpleHoliday::SimpleHoliday(int month,int dayOfMonth,std::shared_ptr<java::lang::String> name,int startYear,int endYear)
{
	
	std::shared_ptr<android::icu::util::SimpleDateRule> cVar0;
	
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "name"    # Ljava/lang/String;
	//    .param p4, "startYear"    # I
	//    .param p5, "endYear"    # I
	cVar0 = std::make_shared<android::icu::util::SimpleDateRule>(month, dayOfMonth);
	android::icu::util::Holiday::(name, android::icu::util::SimpleHoliday::rangeRule(startYear, endYear, cVar0));
	return;

}
// .method private static rangeRule(IILandroid/icu/util/DateRule;)Landroid/icu/util/DateRule;
std::shared_ptr<android::icu::util::DateRule> android::icu::util::SimpleHoliday::rangeRule(int startYear,int endYear,std::shared_ptr<android::icu::util::DateRule> rule)
{
	
	std::shared_ptr<android::icu::util::RangeDateRule> rangeRule;
	std::shared_ptr<android::icu::util::GregorianCalendar> start;
	std::shared_ptr<android::icu::util::GregorianCalendar> cVar0;
	
	//    .param p0, "startYear"    # I
	//    .param p1, "endYear"    # I
	//    .param p2, "rule"    # Landroid/icu/util/DateRule;
	if ( startYear )     
		goto label_cond_6;
	if ( endYear )     
		goto label_cond_6;
	return rule;
	// 414    .line 147
label_cond_6:
	rangeRule = std::make_shared<android::icu::util::RangeDateRule>();
	//    .local v1, "rangeRule":Landroid/icu/util/RangeDateRule;
	if ( !(startYear) )  
		goto label_cond_2e;
	start = std::make_shared<android::icu::util::GregorianCalendar>(startYear, 0x0, 0x1);
	//    .local v2, "start":Landroid/icu/util/Calendar;
	rangeRule->add(start->getTime(), rule);
	//    .end local v2    # "start":Landroid/icu/util/Calendar;
label_goto_1a:
	if ( !(endYear) )  
		goto label_cond_2d;
	cVar0 = std::make_shared<android::icu::util::GregorianCalendar>(endYear, 0xb, 0x1f);
	//    .local v0, "end":Ljava/util/Date;
	rangeRule->add(cVar0->getTime(), 0x0);
	//    .end local v0    # "end":Ljava/util/Date;
label_cond_2d:
	return rangeRule;
	// 468    .line 153
label_cond_2e:
	rangeRule->add(rule);
	goto label_goto_1a;

}


