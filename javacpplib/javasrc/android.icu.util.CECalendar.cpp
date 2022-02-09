// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CECalendar.smali
#include "java2ctype.h"
#include "android.icu.util.CECalendar.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.System.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::CECalendar::LIMITS;
static android::icu::util::CECalendar::serialVersionUID = -0xddf1b4470f5acbfL;
// .method static constructor <clinit>()V
void android::icu::util::CECalendar::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<int[][]>> cVar5;
	
	cVar0 = 0x5;
	cVar1 = -0x4c4b40;
	cVar2 = 0x4c4b40;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<int[][]>>(0x16);
	?;
	cVar5[cVar4] = ?;
	?;
	cVar5[cVar3] = ?;
	?;
	cVar5[0x2] = ?;
	?;
	cVar5[0x3] = ?;
	cVar5[0x4] = std::make_shared<std::vector<int[]>>(cVar4);
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
	android::icu::util::CECalendar::LIMITS = cVar5;
	return;

}
// .method protected constructor <init>()V
android::icu::util::CECalendar::CECalendar()
{
	
	android::icu::util::CECalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method protected constructor <init>(III)V
android::icu::util::CECalendar::CECalendar(int year,int month,int date)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->set(year, month, date);
	return;

}
// .method protected constructor <init>(IIIIII)V
android::icu::util::CECalendar::CECalendar(int year,int month,int date,int hour,int minute,int second)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->set(year, month, date, hour, minute, second);
	return;

}
// .method protected constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::util::CECalendar::CECalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::CECalendar::(zone, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method protected constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::CECalendar::CECalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::Calendar::(zone, locale);
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method protected constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::CECalendar::CECalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::Calendar::(zone, aLocale);
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method protected constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::CECalendar::CECalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::CECalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), locale);
	return;

}
// .method protected constructor <init>(Ljava/util/Date;)V
android::icu::util::CECalendar::CECalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->setTime(date);
	return;

}
// .method protected constructor <init>(Ljava/util/Locale;)V
android::icu::util::CECalendar::CECalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::CECalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), aLocale);
	return;

}
// .method public static ceToJD(JIII)I
int android::icu::util::CECalendar::ceToJD(long long year,int month,int day,int jdEpochOffset)
{
	
	long long cVar0;
	int cVar1;
	int cVar2;
	
	//    .param p0, "year"    # J
	//    .param p2, "month"    # I
	//    .param p3, "day"    # I
	//    .param p4, "jdEpochOffset"    # I
	if ( month < 0 ) 
		goto label_cond_1f;
	cVar0 = (year +  (long long)(( month / 0xd)));
	cVar1 = ( month % 0xd);
label_goto_8:
	return (int)(((((((long long)(jdEpochOffset) +  (0x16d *  cVar0)) +  android::icu::util::CECalendar::floorDivide(cVar0, 0x4)) +  (long long)(( cVar1 * 0x1e))) +  (long long)(day)) -  0x1));
	// 483    .line 247
label_cond_1f:
	cVar2 = ( month + 0x1);
	cVar0 = (year +  (long long)(( ( cVar2 / 0xd) + -0x1)));
	cVar1 = ( ( cVar2 % 0xd) + 0xc);
	goto label_goto_8;

}
// .method public static jdToCE(II[I)V
void android::icu::util::CECalendar::jdToCE(int julianDay,int jdEpochOffset,std::shared_ptr<int[]> fields)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> r4;
	int doy;
	
	//    .param p0, "julianDay"    # I
	//    .param p1, "jdEpochOffset"    # I
	//    .param p2, "fields"    # [I
	cVar0 = 0x1;
	cVar1 = 0x0;
	r4 = std::make_shared<std::vector<int[]>>(cVar0);
	//    .local v2, "r4":[I
	//    .local v0, "c4":I
	fields[cVar1] = (( android::icu::util::CECalendar::floorDivide((julianDay - jdEpochOffset), 0x5b5, r4) * 0x4) +  (( r4[cVar1] / 0x16d) -  ( r4[cVar1] / 0x5b4)));
	if ( r4[cVar1] != 0x5b4 )
		goto label_cond_2e;
	doy = 0x16d;
	//    .local v1, "doy":I
label_goto_22:
	fields[cVar0] = ( doy / 0x1e);
	fields[0x2] = ( ( doy % 0x1e) + 0x1);
	return;
	// 574    .line 273
	// 575    .end local v1    # "doy":I
label_cond_2e:
	doy = ( r4[cVar1] % 0x16d);
	//    .restart local v1    # "doy":I
	goto label_goto_22;

}
// .method protected handleComputeMonthStart(IIZ)I
int android::icu::util::CECalendar::handleComputeMonthStart(int eyear,int emonth,bool useMonth)
{
	
	//    .param p1, "eyear"    # I
	//    .param p2, "emonth"    # I
	//    .param p3, "useMonth"    # Z
	return android::icu::util::CECalendar::ceToJD((long long)(eyear), emonth, 0x0, this->getJDEpochOffset());

}
// .method protected handleGetLimit(II)I
int android::icu::util::CECalendar::handleGetLimit(int field,int limitType)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	return android::icu::util::CECalendar::LIMITS[field][limitType];

}
// .method protected handleGetMonthLength(II)I
int android::icu::util::CECalendar::handleGetMonthLength(int extendedYear,int month)
{
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
	if ( !(( ( month + 0x1) % 0xd)) )  
		goto label_cond_9;
	return 0x1e;
	// 647    .line 218
label_cond_9:
	return ( ( ( extendedYear % 0x4) / 0x3) + 0x5);

}


