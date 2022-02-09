// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ChineseCalendar.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarAstronomer_S_MoonAge.h"
#include "android.icu.impl.CalendarAstronomer_S_SolarLongitude.h"
#include "android.icu.impl.CalendarAstronomer.h"
#include "android.icu.impl.CalendarCache.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ChineseCalendar.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::ChineseCalendar::CHINA_ZONE;
static android::icu::util::ChineseCalendar::CHINESE_DATE_PRECEDENCE;
static android::icu::util::ChineseCalendar::CHINESE_EPOCH_YEAR = -0xa4c;
static android::icu::util::ChineseCalendar::LIMITS;
static android::icu::util::ChineseCalendar::SYNODIC_GAP = 0x19;
static android::icu::util::ChineseCalendar::serialVersionUID = 0x6579d5fcd7c0e78cL;
// .method static constructor <clinit>()V
void android::icu::util::ChineseCalendar::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<int[][]>> cVar5;
	std::shared<std::vector<int[][][]>> cVar6;
	std::shared<std::vector<int[][]>> cVar7;
	std::shared<std::vector<int[]>> cVar8;
	std::shared<std::vector<int[]>> cVar9;
	std::shared<std::vector<int[][]>> cVar10;
	std::shared<std::vector<int[]>> cVar11;
	std::shared<std::vector<int[]>> cVar12;
	std::shared<std::vector<int[]>> cVar13;
	std::shared_ptr<android::icu::util::SimpleTimeZone> cVar14;
	
	cVar0 = 0x5;
	cVar1 = 0x4;
	cVar2 = 0x3;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<int[][]>>(0x17);
	?;
	cVar5[cVar4] = ?;
	?;
	cVar5[cVar3] = ?;
	?;
	cVar5[0x2] = ?;
	?;
	cVar5[cVar2] = ?;
	cVar5[cVar1] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[cVar0] = ?;
	?;
	cVar5[0x6] = ?;
	cVar5[0x7] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[0x8] = ?;
	cVar5[0x9] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xa] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xb] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xc] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xd] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xe] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0xf] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0x10] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[0x11] = ?;
	cVar5[0x12] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[0x13] = ?;
	cVar5[0x14] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar5[0x15] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[0x16] = ?;
	android::icu::util::ChineseCalendar::LIMITS = cVar5;
	cVar6 = std::make_shared<std::vector<int[][][]>>(0x2);
	cVar7 = std::make_shared<std::vector<int[][]>>(0x9);
	cVar8 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar8[cVar4] = cVar0;
	cVar7[cVar4] = cVar8;
	?;
	cVar7[cVar3] = ?;
	?;
	cVar7[0x2] = ?;
	?;
	cVar7[cVar2] = ?;
	?;
	cVar7[cVar1] = ?;
	?;
	cVar7[cVar0] = ?;
	?;
	cVar7[0x6] = ?;
	cVar9 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar9[cVar4] = 0x6;
	cVar7[0x7] = cVar9;
	?;
	cVar7[0x8] = ?;
	cVar6[cVar4] = cVar7;
	cVar10 = std::make_shared<std::vector<int[][]>>(cVar0);
	cVar11 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar11[cVar4] = cVar2;
	cVar10[cVar4] = cVar11;
	cVar12 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar12[cVar4] = cVar1;
	cVar10[cVar3] = cVar12;
	cVar13 = std::make_shared<std::vector<int[]>>(cVar3);
	cVar13[cVar4] = 0x8;
	cVar10[0x2] = cVar13;
	?;
	cVar10[cVar2] = ?;
	?;
	cVar10[cVar1] = ?;
	cVar6[cVar3] = cVar10;
	android::icu::util::ChineseCalendar::CHINESE_DATE_PRECEDENCE = cVar6;
	cVar14 = std::make_shared<android::icu::util::SimpleTimeZone>(0x1b77400, std::make_shared<java::lang::String>(std::make_shared<char[]>("CHINA_ZONE")));
	android::icu::util::ChineseCalendar::CHINA_ZONE = cVar14->freeze();
	return;

}
// .method public constructor <init>()V
android::icu::util::ChineseCalendar::ChineseCalendar()
{
	
	android::icu::util::ChineseCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), -0xa4c, android::icu::util::ChineseCalendar::CHINA_ZONE);
	return;

}
// .method public constructor <init>(IIII)V
android::icu::util::ChineseCalendar::ChineseCalendar(int year,int month,int isLeapMonth,int date)
{
	
	int cVar0;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "isLeapMonth"    # I
	//    .param p4, "date"    # I
	cVar0 = 0x0;
	android::icu::util::ChineseCalendar::(year, month, isLeapMonth, date, cVar0, cVar0, cVar0);
	return;

}
// .method public constructor <init>(IIIII)V
android::icu::util::ChineseCalendar::ChineseCalendar(int era,int year,int month,int isLeapMonth,int date)
{
	
	int cVar0;
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "isLeapMonth"    # I
	//    .param p5, "date"    # I
	cVar0 = 0x0;
	android::icu::util::ChineseCalendar::(era, year, month, isLeapMonth, date, cVar0, cVar0, cVar0);
	return;

}
// .method public constructor <init>(IIIIIII)V
android::icu::util::ChineseCalendar::ChineseCalendar(int year,int month,int isLeapMonth,int date,int hour,int minute,int second)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "isLeapMonth"    # I
	//    .param p4, "date"    # I
	//    .param p5, "hour"    # I
	//    .param p6, "minute"    # I
	//    .param p7, "second"    # I
	android::icu::util::ChineseCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), -0xa4c, android::icu::util::ChineseCalendar::CHINA_ZONE);
	this->set(0xe, 0x0);
	this->set(0x1, year);
	this->set(0x2, month);
	this->set(0x16, isLeapMonth);
	this->set(0x5, date);
	this->set(0xb, hour);
	this->set(0xc, minute);
	this->set(0xd, second);
	return;

}
// .method public constructor <init>(IIIIIIII)V
android::icu::util::ChineseCalendar::ChineseCalendar(int era,int year,int month,int isLeapMonth,int date,int hour,int minute,int second)
{
	
	int cVar0;
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "isLeapMonth"    # I
	//    .param p5, "date"    # I
	//    .param p6, "hour"    # I
	//    .param p7, "minute"    # I
	//    .param p8, "second"    # I
	cVar0 = 0x0;
	android::icu::util::ChineseCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), -0xa4c, android::icu::util::ChineseCalendar::CHINA_ZONE);
	this->set(0xe, cVar0);
	this->set(cVar0, era);
	this->set(0x1, year);
	this->set(0x2, month);
	this->set(0x16, isLeapMonth);
	this->set(0x5, date);
	this->set(0xb, hour);
	this->set(0xc, minute);
	this->set(0xd, second);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::util::ChineseCalendar::ChineseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::ChineseCalendar::(zone, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), -0xa4c, android::icu::util::ChineseCalendar::CHINA_ZONE);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::ChineseCalendar::ChineseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::ChineseCalendar::(zone, locale, -0xa4c, android::icu::util::ChineseCalendar::CHINA_ZONE);
	return;

}
// .method protected constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;ILandroid/icu/util/TimeZone;)V
android::icu::util::ChineseCalendar::ChineseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale,int epochYear,std::shared_ptr<android::icu::util::TimeZone> zoneAstroCalc)
{
	
	std::shared_ptr<android::icu::impl::CalendarAstronomer> cVar0;
	std::shared_ptr<android::icu::impl::CalendarCache> cVar1;
	std::shared_ptr<android::icu::impl::CalendarCache> cVar2;
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "epochYear"    # I
	//    .param p4, "zoneAstroCalc"    # Landroid/icu/util/TimeZone;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 741    .end annotation
	android::icu::util::Calendar::(zone, locale);
	cVar0 = std::make_shared<android::icu::impl::CalendarAstronomer>();
	this->astro = cVar0;
	cVar1 = std::make_shared<android::icu::impl::CalendarCache>();
	this->winterSolsticeCache = cVar1;
	cVar2 = std::make_shared<android::icu::impl::CalendarCache>();
	this->newYearCache = cVar2;
	this->epochYear = epochYear;
	this->zoneAstro = zoneAstroCalc;
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::ChineseCalendar::ChineseCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::ChineseCalendar::(zone, android::icu::util::ULocale::forLocale(aLocale), -0xa4c, android::icu::util::ChineseCalendar::CHINA_ZONE);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::ChineseCalendar::ChineseCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::ChineseCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), locale, -0xa4c, android::icu::util::ChineseCalendar::CHINA_ZONE);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::ChineseCalendar::ChineseCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	android::icu::util::ChineseCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), -0xa4c, android::icu::util::ChineseCalendar::CHINA_ZONE);
	this->setTime(date);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::ChineseCalendar::ChineseCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::ChineseCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::forLocale(aLocale), -0xa4c, android::icu::util::ChineseCalendar::CHINA_ZONE);
	return;

}
// .method private computeChineseFields(IIIZ)V
void android::icu::util::ChineseCalendar::computeChineseFields(int days,int gyear,int gmonth,bool setAllFields)
{
	
	int solsticeAfter;
	int firstMoon;
	int thisMoon;
	bool cVar0;
	int month;
	int cVar1;
	int cVar2;
	int extended_year;
	int cycle_year;
	std::shared<std::vector<int[]>> yearOfCycle;
	int newYear;
	
	//    .param p1, "days"    # I
	//    .param p2, "gyear"    # I
	//    .param p3, "gmonth"    # I
	//    .param p4, "setAllFields"    # Z
	solsticeAfter = this->winterSolstice(gyear);
	//    .local v11, "solsticeAfter":I
	if ( days >= solsticeAfter )
		goto label_cond_10f;
	//    .local v12, "solsticeBefore":I
label_goto_14:
	firstMoon = this->newMoonNear(( solsticeBefore + 0x1), 0x1);
	//    .local v6, "firstMoon":I
	//    .local v8, "lastMoon":I
	thisMoon = this->newMoonNear(( days + 0x1), 0x0);
	//    .local v13, "thisMoon":I
	if ( this->synodicMonthsBetween(firstMoon, this->newMoonNear(( solsticeAfter + 0x1), 0x0)) != 0xc )
		goto label_cond_11a;
	cVar0 = 0x1;
label_goto_45:
	this->isLeapYear = cVar0;
	month = this->synodicMonthsBetween(firstMoon, thisMoon);
	//    .local v9, "month":I
	if ( !(this->isLeapYear) )  
		goto label_cond_5f;
	if ( !(this->isLeapMonthBetween(firstMoon, thisMoon)) )  
		goto label_cond_5f;
	month = ( month + -0x1);
label_cond_5f:
	if ( month >= 0x1 )
		goto label_cond_64;
	month = ( month + 0xc);
label_cond_64:
	if ( !(this->isLeapYear) )  
		goto label_cond_11d;
	if ( !(this->hasNoMajorSolarTerm(thisMoon)) )  
		goto label_cond_11d;
	cVar1 = ( this->isLeapMonthBetween(firstMoon, this->newMoonNear(( thisMoon + -0x19), 0x0)) ^ 0x1);
label_goto_86:
	this->internalSet(0x2, ( month + -0x1));
	if ( !(cVar1) )  
		goto label_cond_120;
	cVar2 = 0x1;
label_goto_94:
	this->internalSet(0x16, cVar2);
	if ( !(setAllFields) )  
		goto label_cond_10e;
	extended_year = (gyear - this->epochYear);
	//    .local v5, "extended_year":I
	cycle_year = ( gyear + 0xa4c);
	//    .local v3, "cycle_year":I
	if ( month <  0xb )
		goto label_cond_b2;
	if ( gmonth <  0x6 )
		goto label_cond_b6;
label_cond_b2:
label_cond_b6:
	//    .local v4, "dayOfMonth":I
	this->internalSet(0x13, extended_year);
	yearOfCycle = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v14, "yearOfCycle":[I
	//    .local v2, "cycle":I
	this->internalSet(0x0, ( android::icu::util::ChineseCalendar::floorDivide(( cycle_year + -0x1), 0x3c, yearOfCycle) + 0x1));
	this->internalSet(0x1, ( yearOfCycle[0x0] + 0x1));
	this->internalSet(0x5, ( (days - thisMoon) + 0x1));
	newYear = this->newYear(gyear);
	//    .local v10, "newYear":I
	if ( days >= newYear )
		goto label_cond_101;
label_cond_101:
	this->internalSet(0x6, ( (days - newYear) + 0x1));
	//    .end local v2    # "cycle":I
	//    .end local v3    # "cycle_year":I
	//    .end local v4    # "dayOfMonth":I
	//    .end local v5    # "extended_year":I
	//    .end local v10    # "newYear":I
	//    .end local v14    # "yearOfCycle":[I
label_cond_10e:
	return;
	// 1224    .line 846
	// 1225    .end local v6    # "firstMoon":I
	// 1226    .end local v8    # "lastMoon":I
	// 1227    .end local v9    # "month":I
	// 1228    .end local v12    # "solsticeBefore":I
	// 1229    .end local v13    # "thisMoon":I
label_cond_10f:
	//    .restart local v12    # "solsticeBefore":I
	solsticeAfter = this->winterSolstice(( gyear + 0x1));
	goto label_goto_14;
	// 1245    .line 857
	// 1246    .restart local v6    # "firstMoon":I
	// 1247    .restart local v8    # "lastMoon":I
	// 1248    .restart local v13    # "thisMoon":I
label_cond_11a:
	cVar0 = 0x0;
	goto label_goto_45;
	// 1254    .line 867
	// 1255    .restart local v9    # "month":I
label_cond_11d:
	cVar1 = 0x0;
	//    .local v7, "isLeapMonth":Z
	goto label_goto_86;
	// 1262    .line 872
	// 1263    .end local v7    # "isLeapMonth":Z
label_cond_120:
	cVar2 = 0x0;
	goto label_goto_94;

}
// .method private final daysToMillis(I)J
long long android::icu::util::ChineseCalendar::daysToMillis(int days)
{
	
	long long millis;
	
	//    .param p1, "days"    # I
	millis = ((long long)(days) * 0x5265c00);
	//    .local v0, "millis":J
	return (millis - (long long)(this->zoneAstro->getOffset(millis)));

}
// .method private hasNoMajorSolarTerm(I)Z
bool android::icu::util::ChineseCalendar::hasNoMajorSolarTerm(int newMoon)
{
	
	bool cVar0;
	
	//    .param p1, "newMoon"    # I
	cVar0 = 0x1;
	//    .local v0, "mst":I
	//    .local v2, "nmn":I
	//    .local v1, "mstt":I
	if ( this->majorSolarTerm(newMoon) != this->majorSolarTerm(this->newMoonNear(( newMoon + 0x19), cVar0)) )
		goto label_cond_12;
label_goto_11:
	return cVar0;
label_cond_12:
	cVar0 = 0x0;
	goto label_goto_11;

}
// .method private isLeapMonthBetween(II)Z
bool android::icu::util::ChineseCalendar::isLeapMonthBetween(int newMoon1,int newMoon2)
{
	
	bool cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "newMoon1"    # I
	//    .param p2, "newMoon2"    # I
	cVar3 = 0x0;
	if ( this->synodicMonthsBetween(newMoon1, newMoon2) <  0x32 )
		goto label_cond_35;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("isLeapMonthBetween(")))->append(newMoon1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(newMoon2)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("): Invalid parameters")))->toString());
	// throw
	throw cVar1;
	// 1398    .line 789
label_cond_35:
	if ( newMoon2 <  newMoon1 )
		goto label_cond_47;
	if ( this->isLeapMonthBetween(newMoon1, this->newMoonNear(( newMoon2 + -0x19), cVar3)) )     
		goto label_cond_48;
	cVar3 = this->hasNoMajorSolarTerm(newMoon2);
label_cond_47:
label_goto_47:
	return cVar3;
	// 1425    .line 790
label_cond_48:
	cVar3 = 0x1;
	goto label_goto_47;

}
// .method private majorSolarTerm(I)I
int android::icu::util::ChineseCalendar::majorSolarTerm(int days)
{
	
	int term;
	
	//    .param p1, "days"    # I
	this->astro->setTime(this->daysToMillis(days));
	term = ( ( (int)(java::lang::Math::floor(( ( this->astro->getSunLongitude() * 0x4018000000000000L) / 0x400921fb54442d18L))) + 0x2) % 0xc);
	//    .local v0, "term":I
	if ( term >= 0x1 )
		goto label_cond_26;
label_cond_26:
	return term;

}
// .method private final millisToDays(J)I
int android::icu::util::ChineseCalendar::millisToDays(long long millis)
{
	
	//    .param p1, "millis"    # J
	return (int)(android::icu::util::ChineseCalendar::floorDivide(((long long)(this->zoneAstro->getOffset(millis)) +  millis), 0x5265c00));

}
// .method private newMoonNear(IZ)I
int android::icu::util::ChineseCalendar::newMoonNear(int days,bool after)
{
	
	//    .param p1, "days"    # I
	//    .param p2, "after"    # Z
	this->astro->setTime(this->daysToMillis(days));
	//    .local v0, "newMoon":J
	return this->millisToDays(this->astro->getMoonTime(android::icu::impl::CalendarAstronomer::NEW_MOON, after));

}
// .method private newYear(I)I
int android::icu::util::ChineseCalendar::newYear(int gyear)
{
	
	bool cVar0;
	auto cacheValue;
	int newMoon1;
	int newMoon2;
	long long cacheValue;
	
	//    .param p1, "gyear"    # I
	cVar0 = 0x1;
	cacheValue = this->newYearCache->get((long long)(gyear));
	//    .local v0, "cacheValue":J
	if ( (cacheValue > android::icu::impl::CalendarCache::EMPTY) )     
		goto label_cond_4c;
	//    .local v6, "solsticeBefore":I
	//    .local v5, "solsticeAfter":I
	newMoon1 = this->newMoonNear(( this->winterSolstice(( gyear + -0x1)) + 0x1), cVar0);
	//    .local v2, "newMoon1":I
	newMoon2 = this->newMoonNear(( newMoon1 + 0x19), cVar0);
	//    .local v4, "newMoon2":I
	//    .local v3, "newMoon11":I
	if ( this->synodicMonthsBetween(newMoon1, this->newMoonNear(( this->winterSolstice(gyear) + 0x1), 0x0)) != 0xc )
		goto label_cond_4e;
	if ( this->hasNoMajorSolarTerm(newMoon1) )     
		goto label_cond_3f;
	if ( !(this->hasNoMajorSolarTerm(newMoon2)) )  
		goto label_cond_4e;
label_cond_3f:
	cacheValue = (long long)(this->newMoonNear(( newMoon2 + 0x19), cVar0));
label_goto_46:
	this->newYearCache->put((long long)(gyear), cacheValue);
	//    .end local v2    # "newMoon1":I
	//    .end local v3    # "newMoon11":I
	//    .end local v4    # "newMoon2":I
	//    .end local v5    # "solsticeAfter":I
	//    .end local v6    # "solsticeBefore":I
label_cond_4c:
	return (int)(cacheValue);
	// 1661    .line 934
	// 1662    .restart local v2    # "newMoon1":I
	// 1663    .restart local v3    # "newMoon11":I
	// 1664    .restart local v4    # "newMoon2":I
	// 1665    .restart local v5    # "solsticeAfter":I
	// 1666    .restart local v6    # "solsticeBefore":I
label_cond_4e:
	cacheValue = (long long)(newMoon2);
	goto label_goto_46;

}
// .method private offsetMonth(III)V
void android::icu::util::ChineseCalendar::offsetMonth(int newMoon,int dom,int delta)
{
	
	int cVar0;
	int jd;
	
	//    .param p1, "newMoon"    # I
	//    .param p2, "dom"    # I
	//    .param p3, "delta"    # I
	cVar0 = 0x14;
	jd = (( (0x253d8c +  this->newMoonNear((newMoon +  (int)(( ( (double)(delta) - 0x3fe0000000000000L) * 0x403d87d4abcb41d5L))), 0x1)) + -0x1) + dom);
	//    .local v0, "jd":I
	if ( dom <= 0x1d )
		goto label_cond_32;
	this->set(cVar0, ( jd + -0x1));
	this->complete();
	if ( this->getActualMaximum(0x5) <  dom )
		goto label_cond_31;
	this->set(cVar0, jd);
label_cond_31:
label_goto_31:
	return;
	// 1744    .line 537
label_cond_32:
	this->set(cVar0, jd);
	goto label_goto_31;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::util::ChineseCalendar::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	std::shared_ptr<android::icu::impl::CalendarAstronomer> cVar0;
	std::shared_ptr<android::icu::impl::CalendarCache> cVar1;
	std::shared_ptr<android::icu::impl::CalendarCache> cVar2;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1755        value = {
	// 1756            Ljava/io/IOException;,
	// 1757            Ljava/lang/ClassNotFoundException;
	// 1758        }
	// 1759    .end annotation
	this->epochYear = -0xa4c;
	this->zoneAstro = android::icu::util::ChineseCalendar::CHINA_ZONE;
	stream->defaultReadObject();
	cVar0 = std::make_shared<android::icu::impl::CalendarAstronomer>();
	this->astro = cVar0;
	cVar1 = std::make_shared<android::icu::impl::CalendarCache>();
	this->winterSolsticeCache = cVar1;
	cVar2 = std::make_shared<android::icu::impl::CalendarCache>();
	this->newYearCache = cVar2;
	return;

}
// .method private synodicMonthsBetween(II)I
int android::icu::util::ChineseCalendar::synodicMonthsBetween(int day1,int day2)
{
	
	//    .param p1, "day1"    # I
	//    .param p2, "day2"    # I
	return (int)(java::lang::Math::round(( (double)((day2 - day1)) / 0x403d87d4abcb41d5L)));

}
// .method private winterSolstice(I)I
int android::icu::util::ChineseCalendar::winterSolstice(int gyear)
{
	
	auto cacheValue;
	long long cacheValue;
	
	//    .param p1, "gyear"    # I
	cacheValue = this->winterSolsticeCache->get((long long)(gyear));
	//    .local v0, "cacheValue":J
	if ( (cacheValue > android::icu::impl::CalendarCache::EMPTY) )     
		goto label_cond_36;
	//    .local v2, "ms":J
	this->astro->setTime(this->daysToMillis((( this->computeGregorianMonthStart(gyear, 0xb) + 0x1) -  0x253d8c)));
	//    .local v4, "solarLong":J
	cacheValue = (long long)(this->millisToDays(this->astro->getSunTime(android::icu::impl::CalendarAstronomer::WINTER_SOLSTICE, 0x1)));
	this->winterSolsticeCache->put((long long)(gyear), cacheValue);
	//    .end local v2    # "ms":J
	//    .end local v4    # "solarLong":J
label_cond_36:
	return (int)(cacheValue);

}
// .method public add(II)V
void android::icu::util::ChineseCalendar::add(int field,int amount)
{
	
	int dom;
	
	//    .param p1, "field"    # I
	//    .param p2, "amount"    # I
	// switch
	{
	auto item = ( field );
	if (item == 2) goto label_pswitch_7;
	}
	this->add(field, amount);
label_cond_6:
label_goto_6:
	return;
	// 1927    .line 547
label_pswitch_7:
	if ( !(amount) )  
		goto label_cond_6;
	dom = this->get(0x5);
	//    .local v1, "dom":I
	//    .local v0, "day":I
	//    .local v2, "moon":I
	this->offsetMonth(( ((this->get(0x14) - 0x253d8c) - dom) + 0x1), dom, amount);
	goto label_goto_6;
	// 1962    .line 545
	// 1963    nop
	// 1965    :pswitch_data_22
	// 1966    .packed-switch 0x2
	// 1967        :pswitch_7
	// 1968    .end packed-switch

}
// .method protected getFieldResolutionTable()[[[I
int android::icu::util::ChineseCalendar::getFieldResolutionTable()
{
	
	return android::icu::util::ChineseCalendar::CHINESE_DATE_PRECEDENCE;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ChineseCalendar::getType()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("chinese"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::ChineseCalendar::handleComputeFields(int julianDay)
{
	
	//    .param p1, "julianDay"    # I
	this->computeChineseFields((julianDay - 0x253d8c), this->getGregorianYear(), this->getGregorianMonth(), 0x1);
	return;

}
// .method protected handleComputeMonthStart(IIZ)I
int android::icu::util::ChineseCalendar::handleComputeMonthStart(int cVar0,int cVar1,bool useMonth)
{
	
	std::shared<std::vector<int[]>> rem;
	int cVar0;
	int cVar1;
	int newMoon;
	int julianDay;
	int saveIsLeapMonth;
	
	//    .param p1, "eyear"    # I
	//    .param p2, "month"    # I
	//    .param p3, "useMonth"    # Z
	if ( cVar1 < 0 ) 
		goto label_cond_6;
	if ( cVar1 <= 0xb )
		goto label_cond_13;
label_cond_6:
	rem = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v5, "rem":[I
	cVar0 = (cVar0 +  android::icu::util::ChineseCalendar::floorDivide(cVar1, 0xc, rem));
	cVar1 = rem[0x0];
	//    .end local v5    # "rem":[I
label_cond_13:
	//    .local v0, "gyear":I
	//    .local v4, "newYear":I
	newMoon = this->newMoonNear((( cVar1 * 0x1d) +  this->newYear(( (this->epochYear +  cVar0) + -0x1))), 0x1);
	//    .local v3, "newMoon":I
	julianDay = (newMoon + 0x253d8c);
	//    .local v2, "julianDay":I
	//    .local v7, "saveMonth":I
	saveIsLeapMonth = this->internalGet(0x16);
	//    .local v6, "saveIsLeapMonth":I
	if ( !(useMonth) )  
		goto label_cond_6d;
	//    .local v1, "isLeapMonth":I
label_goto_37:
	this->computeGregorianFields(julianDay);
	this->computeChineseFields(newMoon, this->getGregorianYear(), this->getGregorianMonth(), 0x0);
	if ( cVar1 != this->internalGet(0x2) )
		goto label_cond_55;
	if ( saveIsLeapMonth == this->internalGet(0x16) )
		goto label_cond_61;
label_cond_55:
label_cond_61:
	this->internalSet(0x2, this->internalGet(0x2));
	this->internalSet(0x16, saveIsLeapMonth);
	return ( julianDay + -0x1);
	// 2179    .line 975
	// 2180    .end local v1    # "isLeapMonth":I
label_cond_6d:
	0x0;
	//    .restart local v1    # "isLeapMonth":I
	goto label_goto_37;

}
// .method protected handleGetDateFormat(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::util::ChineseCalendar::handleGetDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "override"    # Ljava/lang/String;
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	return this->handleGetDateFormat(pattern, override, locale);

}
// .method protected handleGetExtendedYear()I
int android::icu::util::ChineseCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	
	cVar0 = 0x13;
	cVar1 = 0x0;
	cVar2 = 0x1;
	if ( this->newestStamp(cVar1, cVar2, cVar1) >  this->getStamp(cVar0) )
		goto label_cond_13;
	//    .local v1, "year":I
label_goto_12:
	return year;
	// 2234    .line 437
	// 2235    .end local v1    # "year":I
label_cond_13:
	//    .local v0, "cycle":I
	//    .restart local v1    # "year":I
	goto label_goto_12;

}
// .method protected handleGetLimit(II)I
int android::icu::util::ChineseCalendar::handleGetLimit(int field,int limitType)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	return android::icu::util::ChineseCalendar::LIMITS[field][limitType];

}
// .method protected handleGetMonthLength(II)I
int android::icu::util::ChineseCalendar::handleGetMonthLength(int extendedYear,int month)
{
	
	bool cVar0;
	int thisStart;
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
	cVar0 = 0x1;
	thisStart = ( (this->handleComputeMonthStart(extendedYear, month, cVar0) -  0x253d8c) + 0x1);
	//    .local v1, "thisStart":I
	//    .local v0, "nextStart":I
	return (this->newMoonNear(( thisStart + 0x19), cVar0) - thisStart);

}
// .method public haveDefaultCentury()Z
bool android::icu::util::ChineseCalendar::haveDefaultCentury()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2318    .end annotation
	return 0x0;

}
// .method public roll(II)V
void android::icu::util::ChineseCalendar::roll(int field,int amount)
{
	
	bool cVar0;
	int dom;
	int moon;
	int m;
	int n;
	int newM;
	
	//    .param p1, "field"    # I
	//    .param p2, "amount"    # I
	cVar0 = 0x1;
	// switch
	{
	auto item = ( field );
	if (item == 2) goto label_pswitch_8;
	}
	this->roll(field, amount);
label_cond_7:
label_goto_7:
	return;
	// 2346    .line 566
label_pswitch_8:
	if ( !(amount) )  
		goto label_cond_7;
	dom = this->get(0x5);
	//    .local v1, "dom":I
	//    .local v0, "day":I
	moon = ( ((this->get(0x14) - 0x253d8c) - dom) + 0x1);
	//    .local v3, "moon":I
	m = this->get(0x2);
	//    .local v2, "m":I
	if ( !(this->isLeapYear) )  
		goto label_cond_31;
	if ( this->get(0x16) != cVar0 )
		goto label_cond_46;
	m = ( m + 0x1);
label_cond_31:
label_goto_31:
	if ( !(this->isLeapYear) )  
		goto label_cond_60;
	n = 0xd;
	//    .local v5, "n":I
label_goto_37:
	newM = ((m + amount) % n);
	//    .local v6, "newM":I
	if ( newM >= 0 )
		goto label_cond_3e;
	newM = (newM +  n);
label_cond_3e:
	if ( newM == m )
		goto label_cond_7;
	this->offsetMonth(moon, dom, (newM - m));
	goto label_goto_7;
	// 2435    .line 590
	// 2436    .end local v5    # "n":I
	// 2437    .end local v6    # "newM":I
label_cond_46:
	//    .local v4, "moon1":I
	if ( !(this->isLeapMonthBetween(this->newMoonNear((moon - (int)(( ( (double)(m) - 0x3fe0000000000000L) * 0x403d87d4abcb41d5L))), cVar0), moon)) )  
		goto label_cond_31;
	m = ( m + 0x1);
	goto label_goto_31;
	// 2472    .line 600
	// 2473    .end local v4    # "moon1":I
label_cond_60:
	//    .restart local v5    # "n":I
	goto label_goto_37;
	// 2480    .line 564
	// 2481    nop
	// 2483    :pswitch_data_64
	// 2484    .packed-switch 0x2
	// 2485        :pswitch_8
	// 2486    .end packed-switch

}


