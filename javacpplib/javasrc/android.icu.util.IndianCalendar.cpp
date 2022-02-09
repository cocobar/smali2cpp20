// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\IndianCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.IndianCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::IndianCalendar::AGRAHAYANA = 0x8;
static android::icu::util::IndianCalendar::ASADHA = 0x3;
static android::icu::util::IndianCalendar::ASVINA = 0x6;
static android::icu::util::IndianCalendar::BHADRA = 0x5;
static android::icu::util::IndianCalendar::CHAITRA = 0x0;
static android::icu::util::IndianCalendar::IE = 0x0;
static android::icu::util::IndianCalendar::INDIAN_ERA_START = 0x4e;
static android::icu::util::IndianCalendar::INDIAN_YEAR_START = 0x50;
static android::icu::util::IndianCalendar::JYAISTHA = 0x2;
static android::icu::util::IndianCalendar::KARTIKA = 0x7;
static android::icu::util::IndianCalendar::LIMITS;
static android::icu::util::IndianCalendar::MAGHA = 0xa;
static android::icu::util::IndianCalendar::PAUSA = 0x9;
static android::icu::util::IndianCalendar::PHALGUNA = 0xb;
static android::icu::util::IndianCalendar::SRAVANA = 0x4;
static android::icu::util::IndianCalendar::VAISAKHA = 0x1;
static android::icu::util::IndianCalendar::serialVersionUID = 0x3235383330303532L;
// .method static constructor <clinit>()V
void android::icu::util::IndianCalendar::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<int[][]>> cVar5;
	
	cVar0 = 0x5;
	cVar1 = 0x4c4b40;
	cVar2 = -0x4c4b40;
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
	android::icu::util::IndianCalendar::LIMITS = cVar5;
	return;

}
// .method public constructor <init>()V
android::icu::util::IndianCalendar::IndianCalendar()
{
	
	android::icu::util::IndianCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(III)V
android::icu::util::IndianCalendar::IndianCalendar(int year,int month,int date)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->set(0x1, year);
	this->set(0x2, month);
	this->set(0x5, date);
	return;

}
// .method public constructor <init>(IIIIII)V
android::icu::util::IndianCalendar::IndianCalendar(int year,int month,int date,int hour,int minute,int second)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
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
android::icu::util::IndianCalendar::IndianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::IndianCalendar::(zone, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::IndianCalendar::IndianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::Calendar::(zone, locale);
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::IndianCalendar::IndianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::Calendar::(zone, aLocale);
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::IndianCalendar::IndianCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::IndianCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), locale);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::IndianCalendar::IndianCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->setTime(date);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::IndianCalendar::IndianCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::IndianCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), aLocale);
	return;

}
// .method private static IndianToJD(III)D
double android::icu::util::IndianCalendar::IndianToJD(int year,int month,int date)
{
	
	int cVar0;
	int gyear;
	auto start;
	double jd;
	
	//    .param p0, "year"    # I
	//    .param p1, "month"    # I
	//    .param p2, "date"    # I
	cVar0 = 0x3;
	gyear = ( year + 0x4e);
	//    .local v0, "gyear":I
	if ( !(android::icu::util::IndianCalendar::isGregorianLeap(gyear)) )  
		goto label_cond_1a;
	//    .local v1, "leapMonth":I
	start = android::icu::util::IndianCalendar::gregorianToJD(gyear, cVar0, 0x15);
	//    .local v6, "start":D
label_goto_11:
	if ( month != 0x1 )
		goto label_cond_23;
	jd = (start +  (double)(( date + -0x1)));
	//    .local v2, "jd":D
label_goto_19:
	return jd;
	// 537    .line 450
	// 538    .end local v1    # "leapMonth":I
	// 539    .end local v2    # "jd":D
	// 540    .end local v6    # "start":D
label_cond_1a:
	//    .restart local v1    # "leapMonth":I
	//    .restart local v6    # "start":D
	goto label_goto_11;
	// 555    .line 457
label_cond_23:
	jd = (start +  (double)(leapMonth));
	//    .restart local v2    # "jd":D
	//    .local v4, "m":I
	jd = ( jd + (double)(( java::lang::Math::min(( month + -0x2), 0x5) * 0x1f)));
	if ( month <  0x8 )
		goto label_cond_3b;
	jd = ( jd + (double)(( ( month + -0x7) * 0x1e)));
label_cond_3b:
	jd = ( jd + (double)(( date + -0x1)));
	goto label_goto_19;

}
// .method private static gregorianToJD(III)D
double android::icu::util::IndianCalendar::gregorianToJD(int year,int month,int date)
{
	
	int y;
	int cVar0;
	
	//    .param p0, "year"    # I
	//    .param p1, "month"    # I
	//    .param p2, "date"    # I
	0x413a445180000000L;
	//    .local v0, "JULIAN_EPOCH":D
	y = ( year + -0x1);
	//    .local v3, "y":I
	if ( month >  0x2 )
		goto label_cond_2a;
	cVar0 = 0x0;
label_goto_1d:
	//    .local v2, "result":I
	return ( (double)(( ((cVar0 +  (( ( ( month * 0x16f) + -0x16a) / 0xc) +  (((( y * 0x16d) +  ( y / 0x4)) -  ( y / 0x64)) +  ( y / 0x190)))) + date) + -0x1)) + 0x413a445180000000L);
	// 679    .line 486
	// 680    .end local v2    # "result":I
label_cond_2a:
	if ( !(android::icu::util::IndianCalendar::isGregorianLeap(year)) )  
		goto label_cond_32;
	cVar0 = -0x1;
	goto label_goto_1d;
label_cond_32:
	cVar0 = -0x2;
	goto label_goto_1d;

}
// .method private static isGregorianLeap(I)Z
bool android::icu::util::IndianCalendar::isGregorianLeap(int year)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p0, "year"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( ( year % 0x4) )     
		goto label_cond_11;
	if ( ( year % 0x64) )     
		goto label_cond_e;
	if ( ( year % 0x190) )     
		goto label_cond_f;
label_cond_e:
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = cVar1;
	goto label_goto_e;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_e;

}
// .method private static jdToGregorian(D)[I
int android::icu::util::IndianCalendar::jdToGregorian(double jd)
{
	
	double wjd;
	double depoch;
	double dqc;
	auto cent;
	double dcent;
	auto yindex;
	int year;
	int cVar0;
	int cVar1;
	int month;
	std::shared<std::vector<int[]>> julianDate;
	
	//    .param p0, "jd"    # D
	0x413a445180000000L;
	//    .local v4, "JULIAN_EPOCH":D
	wjd = (java::lang::Math::floor((jd -  0x3fe0000000000000L)) +  0x3fe0000000000000L);
	//    .local v26, "wjd":D
	depoch = (wjd -  0x413a445180000000L);
	//    .local v12, "depoch":D
	//    .local v24, "quadricent":D
	dqc = (depoch %  0x4101d58800000000L);
	//    .local v14, "dqc":D
	cent = java::lang::Math::floor((dqc /  0x40e1d58000000000L));
	//    .local v6, "cent":D
	dcent = (dqc %  0x40e1d58000000000L);
	//    .local v10, "dcent":D
	//    .local v22, "quad":D
	//    .local v16, "dquad":D
	yindex = java::lang::Math::floor(((dcent %  0x4096d40000000000L) /  0x4076d00000000000L));
	//    .local v30, "yindex":D
	year = (int)(((((0x4079000000000000L *  java::lang::Math::floor((depoch /  0x4101d58800000000L))) +  (0x4059000000000000L *  cent)) +  (0x4010000000000000L *  java::lang::Math::floor((dcent /  0x4096d40000000000L)))) +  yindex));
	//    .local v21, "year":I
	if ( !((cent < 0x4010000000000000L)) )  
		goto label_cond_7c;
	if ( (yindex < 0x4010000000000000L) )     
		goto label_cond_f0;
label_cond_7c:
	cVar0 = 0x1;
label_goto_7e:
	if ( cVar0 )     
		goto label_cond_82;
	year = ( year + 0x1);
label_cond_82:
	//    .local v28, "yearday":D
	if ( (wjd > android::icu::util::IndianCalendar::gregorianToJD(year, 0x3, 0x1)) >= 0 )
		goto label_cond_f3;
	cVar1 = 0x0;
label_goto_a6:
	//    .local v18, "leapadj":D
	month = (int)(java::lang::Math::floor((((((wjd -  android::icu::util::IndianCalendar::gregorianToJD(year, 0x1, 0x1)) +  (double)(cVar1)) *  0x4028000000000000L) +  0x4077500000000000L) /  0x4076f00000000000L)));
	//    .local v20, "month":I
	//    .local v8, "day":I
	julianDate = std::make_shared<std::vector<int[]>>(0x3);
	//    .local v9, "julianDate":[I
	julianDate[0x0] = year;
	julianDate[0x1] = month;
	julianDate[0x2] = ( (int)((wjd -  android::icu::util::IndianCalendar::gregorianToJD(year, month, 0x1))) + 0x1);
	return julianDate;
	// 999    .line 512
	// 1000    .end local v8    # "day":I
	// 1001    .end local v9    # "julianDate":[I
	// 1002    .end local v18    # "leapadj":D
	// 1003    .end local v20    # "month":I
	// 1004    .end local v28    # "yearday":D
label_cond_f0:
	cVar0 = 0x0;
	goto label_goto_7e;
	// 1010    .line 519
	// 1011    .restart local v28    # "yearday":D
label_cond_f3:
	if ( !(android::icu::util::IndianCalendar::isGregorianLeap(year)) )  
		goto label_cond_fc;
	cVar1 = 0x1;
	goto label_goto_a6;
label_cond_fc:
	cVar1 = 0x2;
	goto label_goto_a6;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::IndianCalendar::getType()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("indian"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::IndianCalendar::handleComputeFields(int julianDay)
{
	
	int cVar0;
	int cVar1;
	auto gregorianDay;
	int IndianYear;
	int yday;
	int leapMonth;
	int mday;
	
	//    .param p1, "julianDay"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	gregorianDay = android::icu::util::IndianCalendar::jdToGregorian((double)(julianDay));
	//    .local v3, "gregorianDay":[I
	IndianYear = ( gregorianDay[cVar1] + -0x4e);
	//    .local v2, "IndianYear":I
	//    .local v4, "jdAtStartOfGregYear":D
	yday = (int)(( (double)(julianDay) - android::icu::util::IndianCalendar::gregorianToJD(gregorianDay[cVar1], cVar0, cVar0)));
	//    .local v8, "yday":I
	if ( yday >= 0x50 )
		goto label_cond_4f;
	IndianYear = ( IndianYear + -0x1);
	if ( !(android::icu::util::IndianCalendar::isGregorianLeap(( gregorianDay[cVar1] + -0x1))) )  
		goto label_cond_4c;
	leapMonth = 0x1f;
	//    .local v6, "leapMonth":I
label_goto_26:
	yday = (yday +  ( ( ( leapMonth + 0x9b) + 0x5a) + 0xa));
label_goto_2d:
	if ( yday >= leapMonth )
		goto label_cond_5f;
	//    .local v1, "IndianMonth":I
	//    .local v0, "IndianDayOfMonth":I
label_goto_32:
	this->internalSet(cVar1, cVar1);
	this->internalSet(0x13, IndianYear);
	this->internalSet(cVar0, IndianYear);
	this->internalSet(0x2, IndianMonth);
	this->internalSet(0x5, IndianDayOfMonth);
	this->internalSet(0x6, ( yday + 0x1));
	return;
	// 1156    .line 345
	// 1157    .end local v0    # "IndianDayOfMonth":I
	// 1158    .end local v1    # "IndianMonth":I
	// 1159    .end local v6    # "leapMonth":I
label_cond_4c:
	leapMonth = 0x1e;
	//    .restart local v6    # "leapMonth":I
	goto label_goto_26;
	// 1166    .line 348
	// 1167    .end local v6    # "leapMonth":I
label_cond_4f:
	if ( !(android::icu::util::IndianCalendar::isGregorianLeap(gregorianDay[cVar1])) )  
		goto label_cond_5c;
	leapMonth = 0x1f;
	//    .restart local v6    # "leapMonth":I
label_goto_59:
	yday = ( yday + -0x50);
	goto label_goto_2d;
	// 1186    .line 348
	// 1187    .end local v6    # "leapMonth":I
label_cond_5c:
	leapMonth = 0x1e;
	//    .restart local v6    # "leapMonth":I
	goto label_goto_59;
	// 1194    .line 356
label_cond_5f:
	mday = (yday - leapMonth);
	//    .local v7, "mday":I
	if ( mday >= 0x9b )
		goto label_cond_6e;
	//    .restart local v1    # "IndianMonth":I
	//    .restart local v0    # "IndianDayOfMonth":I
	goto label_goto_32;
	// 1218    .line 361
	// 1219    .end local v0    # "IndianDayOfMonth":I
	// 1220    .end local v1    # "IndianMonth":I
label_cond_6e:
	mday = ( mday + -0x9b);
	//    .restart local v1    # "IndianMonth":I
	//    .restart local v0    # "IndianDayOfMonth":I
	goto label_goto_32;

}
// .method protected handleComputeMonthStart(IIZ)I
int android::icu::util::IndianCalendar::handleComputeMonthStart(int cVar0,int cVar1,bool useMonth)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "useMonth"    # Z
	if ( cVar1 < 0 ) 
		goto label_cond_6;
	if ( cVar1 <= 0xb )
		goto label_cond_b;
label_cond_6:
	cVar0 = (cVar0 +  ( cVar1 / 0xc));
	cVar1 = ( cVar1 % 0xc);
label_cond_b:
	//    .local v0, "imonth":I
	//    .local v2, "jd":D
	return (int)(android::icu::util::IndianCalendar::IndianToJD(cVar0, ( cVar1 + 0x1), 0x1));

}
// .method protected handleGetExtendedYear()I
int android::icu::util::IndianCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	
	cVar0 = 0x13;
	cVar1 = 0x1;
	if ( this->newerField(cVar0, cVar1) != cVar0 )
		goto label_cond_e;
	//    .local v0, "year":I
label_goto_d:
	return year;
	// 1306    .line 295
	// 1307    .end local v0    # "year":I
label_cond_e:
	//    .restart local v0    # "year":I
	goto label_goto_d;

}
// .method protected handleGetLimit(II)I
int android::icu::util::IndianCalendar::handleGetLimit(int field,int limitType)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	return android::icu::util::IndianCalendar::LIMITS[field][limitType];

}
// .method protected handleGetMonthLength(II)I
int android::icu::util::IndianCalendar::handleGetMonthLength(int cVar2,int cVar3)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> remainder;
	int cVar2;
	int cVar3;
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
	cVar0 = 0x1f;
	cVar1 = 0x1;
	if ( cVar3 < 0 ) 
		goto label_cond_a;
	if ( cVar3 <= 0xb )
		goto label_cond_15;
label_cond_a:
	remainder = std::make_shared<std::vector<int[]>>(cVar1);
	//    .local v0, "remainder":[I
	cVar2 = (cVar2 +  android::icu::util::IndianCalendar::floorDivide(cVar3, 0xc, remainder));
	cVar3 = remainder[0x0];
	//    .end local v0    # "remainder":[I
label_cond_15:
	if ( !(android::icu::util::IndianCalendar::isGregorianLeap(( cVar2 + 0x4e))) )  
		goto label_cond_20;
	if ( cVar3 )     
		goto label_cond_20;
	return cVar0;
	// 1385    .line 322
label_cond_20:
	if ( cVar3 <  cVar1 )
		goto label_cond_26;
	if ( cVar3 >  0x5 )
		goto label_cond_26;
	return cVar0;
	// 1396    .line 326
label_cond_26:
	return 0x1e;

}
// .method protected handleGetYearLength(I)I
int android::icu::util::IndianCalendar::handleGetYearLength(int extendedYear)
{
	
	//    .param p1, "extendedYear"    # I
	return this->handleGetYearLength(extendedYear);

}


