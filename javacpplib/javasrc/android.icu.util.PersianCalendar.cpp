// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\PersianCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.PersianCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::PersianCalendar::LIMITS;
static android::icu::util::PersianCalendar::MONTH_COUNT;
static android::icu::util::PersianCalendar::PERSIAN_EPOCH = 0x1dbaa0;
static android::icu::util::PersianCalendar::serialVersionUID = -0x5d5c320ee73c81dbL;
// .method static constructor <clinit>()V
void android::icu::util::PersianCalendar::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<int[][]>> cVar5;
	std::shared<std::vector<int[][]>> cVar6;
	
	cVar0 = -0x4c4b40;
	cVar1 = 0x1;
	cVar2 = 0x1e;
	cVar3 = 0x1f;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<int[][]>>(0xc);
	?;
	cVar5[cVar4] = ?;
	?;
	cVar5[cVar1] = ?;
	?;
	cVar5[0x2] = ?;
	?;
	cVar5[0x3] = ?;
	?;
	cVar5[0x4] = ?;
	?;
	cVar5[0x5] = ?;
	?;
	cVar5[0x6] = ?;
	?;
	cVar5[0x7] = ?;
	?;
	cVar5[0x8] = ?;
	?;
	cVar5[0x9] = ?;
	?;
	cVar5[0xa] = ?;
	?;
	cVar5[0xb] = ?;
	android::icu::util::PersianCalendar::MONTH_COUNT = cVar5;
	cVar6 = std::make_shared<std::vector<int[][]>>(0x16);
	?;
	cVar6[cVar4] = ?;
	?;
	cVar6[cVar1] = ?;
	?;
	cVar6[0x2] = ?;
	?;
	cVar6[0x3] = ?;
	cVar6[0x4] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar6[0x5] = ?;
	?;
	cVar6[0x6] = ?;
	cVar6[0x7] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar6[0x8] = ?;
	cVar6[0x9] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar6[0xa] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar6[0xb] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar6[0xc] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar6[0xd] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar6[0xe] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar6[0xf] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar6[0x10] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar6[0x11] = ?;
	cVar6[0x12] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar6[0x13] = ?;
	cVar6[0x14] = std::make_shared<std::vector<int[]>>(cVar4);
	cVar6[0x15] = std::make_shared<std::vector<int[]>>(cVar4);
	android::icu::util::PersianCalendar::LIMITS = cVar6;
	return;

}
// .method public constructor <init>()V
android::icu::util::PersianCalendar::PersianCalendar()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 387    .end annotation
	android::icu::util::PersianCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(III)V
android::icu::util::PersianCalendar::PersianCalendar(int year,int month,int date)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 413    .end annotation
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->set(0x1, year);
	this->set(0x2, month);
	this->set(0x5, date);
	return;

}
// .method public constructor <init>(IIIIII)V
android::icu::util::PersianCalendar::PersianCalendar(int year,int month,int date,int hour,int minute,int second)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 457    .end annotation
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->set(0x1, year);
	this->set(0x2, month);
	this->set(0x5, date);
	this->set(0xb, hour);
	this->set(0xc, minute);
	this->set(0xd, second);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::util::PersianCalendar::PersianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 511    .end annotation
	android::icu::util::PersianCalendar::(zone, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::PersianCalendar::PersianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 532    .end annotation
	android::icu::util::Calendar::(zone, locale);
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::PersianCalendar::PersianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 554    .end annotation
	android::icu::util::Calendar::(zone, aLocale);
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::PersianCalendar::PersianCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 575    .end annotation
	android::icu::util::PersianCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), locale);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::PersianCalendar::PersianCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 593    .end annotation
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->setTime(date);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::PersianCalendar::PersianCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 620    .end annotation
	android::icu::util::PersianCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), aLocale);
	return;

}
// .method private static final isLeapYear(I)Z
bool android::icu::util::PersianCalendar::isLeapYear(int year)
{
	
	bool cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> remainder;
	
	//    .param p0, "year"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	remainder = std::make_shared<std::vector<int[]>>(cVar0);
	//    .local v0, "remainder":[I
	android::icu::util::PersianCalendar::floorDivide(( ( year * 0x19) + 0xb), 0x21, remainder);
	if ( remainder[cVar1] >= 0x8 )
		goto label_cond_14;
label_goto_13:
	return cVar0;
label_cond_14:
	cVar0 = cVar1;
	goto label_goto_13;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::PersianCalendar::getType()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 677    .end annotation
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("persian"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::PersianCalendar::handleComputeFields(int julianDay)
{
	
	long long daysSinceEpoch;
	int year;
	int dayOfYear;
	int month;
	
	//    .param p1, "julianDay"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 690    .end annotation
	daysSinceEpoch = (long long)((julianDay - 0x1dbaa0));
	//    .local v2, "daysSinceEpoch":J
	year = ( (int)(android::icu::util::PersianCalendar::floorDivide(((0x21 *  daysSinceEpoch) +  0x3), 0x2f15)) + 0x1);
	//    .local v7, "year":I
	//    .local v4, "farvardin1":J
	dayOfYear = (int)((daysSinceEpoch - ((((long long)(year) -  0x1) *  0x16d) + android::icu::util::PersianCalendar::floorDivide((((long long)(year) *  0x8) +  0x15), 0x21))));
	//    .local v1, "dayOfYear":I
	if ( dayOfYear >= 0xd8 )
		goto label_cond_5c;
	month = ( dayOfYear / 0x1f);
	//    .local v6, "month":I
label_goto_34:
	//    .local v0, "dayOfMonth":I
	this->internalSet(0x0, 0x0);
	this->internalSet(0x1, year);
	this->internalSet(0x13, year);
	this->internalSet(0x2, month);
	this->internalSet(0x5, ( (dayOfYear - android::icu::util::PersianCalendar::MONTH_COUNT[month][0x2]) + 0x1));
	this->internalSet(0x6, ( dayOfYear + 0x1));
	return;
	// 819    .line 432
	// 820    .end local v0    # "dayOfMonth":I
	// 821    .end local v6    # "month":I
label_cond_5c:
	month = ( ( dayOfYear + -0x6) / 0x1e);
	//    .restart local v6    # "month":I
	goto label_goto_34;

}
// .method protected handleComputeMonthStart(IIZ)I
int android::icu::util::PersianCalendar::handleComputeMonthStart(int cVar0,int cVar1,bool useMonth)
{
	
	std::shared<std::vector<int[]>> rem;
	int cVar0;
	int cVar1;
	int julianDay;
	
	//    .param p1, "eyear"    # I
	//    .param p2, "month"    # I
	//    .param p3, "useMonth"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 837    .end annotation
	if ( cVar1 < 0 ) 
		goto label_cond_7;
	if ( cVar1 <= 0xb )
		goto label_cond_13;
label_cond_7:
	rem = std::make_shared<std::vector<int[]>>(0x1);
	//    .local v1, "rem":[I
	cVar0 = (cVar0 +  android::icu::util::PersianCalendar::floorDivide(cVar1, 0xc, rem));
	cVar1 = rem[0x0];
	//    .end local v1    # "rem":[I
label_cond_13:
	julianDay = ((( ( cVar0 + -0x1) * 0x16d) +  0x1dba9f) + android::icu::util::PersianCalendar::floorDivide(( ( cVar0 * 0x8) + 0x15), 0x21));
	//    .local v0, "julianDay":I
	if ( !(cVar1) )  
		goto label_cond_31;
label_cond_31:
	return julianDay;

}
// .method protected handleGetExtendedYear()I
int android::icu::util::PersianCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 914    .end annotation
	cVar0 = 0x13;
	cVar1 = 0x1;
	if ( this->newerField(cVar0, cVar1) != cVar0 )
		goto label_cond_e;
	//    .local v0, "year":I
label_goto_d:
	return year;
	// 938    .line 398
	// 939    .end local v0    # "year":I
label_cond_e:
	//    .restart local v0    # "year":I
	goto label_goto_d;

}
// .method protected handleGetLimit(II)I
int android::icu::util::PersianCalendar::handleGetLimit(int field,int limitType)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 954    .end annotation
	return android::icu::util::PersianCalendar::LIMITS[field][limitType];

}
// .method protected handleGetMonthLength(II)I
int android::icu::util::PersianCalendar::handleGetMonthLength(int cVar2,int cVar3)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> rem;
	int cVar2;
	int cVar3;
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 972    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( cVar3 < 0 ) 
		goto label_cond_8;
	if ( cVar3 <= 0xb )
		goto label_cond_13;
label_cond_8:
	rem = std::make_shared<std::vector<int[]>>(cVar0);
	//    .local v0, "rem":[I
	cVar2 = (cVar2 +  android::icu::util::PersianCalendar::floorDivide(cVar3, 0xc, rem));
	cVar3 = rem[cVar1];
	//    .end local v0    # "rem":[I
label_cond_13:
	if ( !(android::icu::util::PersianCalendar::isLeapYear(cVar2)) )  
		goto label_cond_20;
label_goto_1d:
	return android::icu::util::PersianCalendar::MONTH_COUNT[cVar3][cVar0];
label_cond_20:
	cVar0 = cVar1;
	goto label_goto_1d;

}
// .method protected handleGetYearLength(I)I
int android::icu::util::PersianCalendar::handleGetYearLength(int extendedYear)
{
	
	int cVar0;
	
	//    .param p1, "extendedYear"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1031    .end annotation
	if ( !(android::icu::util::PersianCalendar::isLeapYear(extendedYear)) )  
		goto label_cond_9;
	cVar0 = 0x16e;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x16d;
	goto label_goto_8;

}


