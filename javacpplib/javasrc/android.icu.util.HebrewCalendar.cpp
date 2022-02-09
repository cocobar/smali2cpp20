// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\HebrewCalendar.smali
#include "java2ctype.h"
#include "android.icu.impl.CalendarCache.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.HebrewCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::HebrewCalendar::ADAR = 0x6;
static android::icu::util::HebrewCalendar::ADAR_1 = 0x5;
static android::icu::util::HebrewCalendar::AV = 0xb;
static android::icu::util::HebrewCalendar::BAHARAD = 0x2f34L;
static android::icu::util::HebrewCalendar::DAY_PARTS = 0x6540L;
static android::icu::util::HebrewCalendar::ELUL = 0xc;
static android::icu::util::HebrewCalendar::HESHVAN = 0x1;
static android::icu::util::HebrewCalendar::HOUR_PARTS = 0x438L;
static android::icu::util::HebrewCalendar::IYAR = 0x8;
static android::icu::util::HebrewCalendar::KISLEV = 0x2;
static android::icu::util::HebrewCalendar::LEAP_MONTH_START;
static android::icu::util::HebrewCalendar::LIMITS;
static android::icu::util::HebrewCalendar::MONTH_DAYS = 0x1d;
static android::icu::util::HebrewCalendar::MONTH_FRACT = 0x35b9L;
static android::icu::util::HebrewCalendar::MONTH_LENGTH;
static android::icu::util::HebrewCalendar::MONTH_PARTS = 0xbadf9L;
static android::icu::util::HebrewCalendar::MONTH_START;
static android::icu::util::HebrewCalendar::NISAN = 0x7;
static android::icu::util::HebrewCalendar::SHEVAT = 0x4;
static android::icu::util::HebrewCalendar::SIVAN = 0x9;
static android::icu::util::HebrewCalendar::TAMUZ = 0xa;
static android::icu::util::HebrewCalendar::TEVET = 0x3;
static android::icu::util::HebrewCalendar::TISHRI = 0x0;
static android::icu::util::HebrewCalendar::cache = nullptr;
static android::icu::util::HebrewCalendar::serialVersionUID = -0x1b18c2be311f64d8L;
// .method static constructor <clinit>()V
void android::icu::util::HebrewCalendar::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<int[][]>> cVar5;
	std::shared<std::vector<int[][]>> cVar6;
	std::shared<std::vector<int[][]>> cVar7;
	std::shared<std::vector<int[][]>> cVar8;
	std::shared_ptr<android::icu::impl::CalendarCache> cVar9;
	
	cVar0 = -0x4c4b40;
	cVar1 = 0x1;
	cVar2 = 0x1d;
	cVar3 = 0x1e;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<int[][]>>(0x16);
	?;
	cVar5[cVar4] = ?;
	?;
	cVar5[cVar1] = ?;
	?;
	cVar5[0x2] = ?;
	?;
	cVar5[0x3] = ?;
	cVar5[0x4] = std::make_shared<std::vector<int[]>>(cVar4);
	?;
	cVar5[0x5] = ?;
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
	android::icu::util::HebrewCalendar::LIMITS = cVar5;
	cVar6 = std::make_shared<std::vector<int[][]>>(0xd);
	?;
	cVar6[cVar4] = ?;
	?;
	cVar6[cVar1] = ?;
	?;
	cVar6[0x2] = ?;
	?;
	cVar6[0x3] = ?;
	?;
	cVar6[0x4] = ?;
	?;
	cVar6[0x5] = ?;
	?;
	cVar6[0x6] = ?;
	?;
	cVar6[0x7] = ?;
	?;
	cVar6[0x8] = ?;
	?;
	cVar6[0x9] = ?;
	?;
	cVar6[0xa] = ?;
	?;
	cVar6[0xb] = ?;
	?;
	cVar6[0xc] = ?;
	android::icu::util::HebrewCalendar::MONTH_LENGTH = cVar6;
	cVar7 = std::make_shared<std::vector<int[][]>>(0xe);
	?;
	cVar7[cVar4] = ?;
	?;
	cVar7[cVar1] = ?;
	?;
	cVar7[0x2] = ?;
	?;
	cVar7[0x3] = ?;
	?;
	cVar7[0x4] = ?;
	?;
	cVar7[0x5] = ?;
	?;
	cVar7[0x6] = ?;
	?;
	cVar7[0x7] = ?;
	?;
	cVar7[0x8] = ?;
	?;
	cVar7[0x9] = ?;
	?;
	cVar7[0xa] = ?;
	?;
	cVar7[0xb] = ?;
	?;
	cVar7[0xc] = ?;
	?;
	cVar7[0xd] = ?;
	android::icu::util::HebrewCalendar::MONTH_START = cVar7;
	cVar8 = std::make_shared<std::vector<int[][]>>(0xe);
	?;
	cVar8[cVar4] = ?;
	?;
	cVar8[cVar1] = ?;
	?;
	cVar8[0x2] = ?;
	?;
	cVar8[0x3] = ?;
	?;
	cVar8[0x4] = ?;
	?;
	cVar8[0x5] = ?;
	?;
	cVar8[0x6] = ?;
	?;
	cVar8[0x7] = ?;
	?;
	cVar8[0x8] = ?;
	?;
	cVar8[0x9] = ?;
	?;
	cVar8[0xa] = ?;
	?;
	cVar8[0xb] = ?;
	?;
	cVar8[0xc] = ?;
	?;
	cVar8[0xd] = ?;
	android::icu::util::HebrewCalendar::LEAP_MONTH_START = cVar8;
	cVar9 = std::make_shared<android::icu::impl::CalendarCache>();
	android::icu::util::HebrewCalendar::cache = cVar9;
	return;

}
// .method public constructor <init>()V
android::icu::util::HebrewCalendar::HebrewCalendar()
{
	
	android::icu::util::HebrewCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(III)V
android::icu::util::HebrewCalendar::HebrewCalendar(int year,int month,int date)
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
android::icu::util::HebrewCalendar::HebrewCalendar(int year,int month,int date,int hour,int minute,int second)
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
android::icu::util::HebrewCalendar::HebrewCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::HebrewCalendar::(zone, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::HebrewCalendar::HebrewCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::Calendar::(zone, locale);
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::HebrewCalendar::HebrewCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::Calendar::(zone, aLocale);
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::HebrewCalendar::HebrewCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::HebrewCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), locale);
	return;

}
// .method public constructor <init>(Ljava/util/Date;)V
android::icu::util::HebrewCalendar::HebrewCalendar(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->setTime(date);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::HebrewCalendar::HebrewCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::HebrewCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), aLocale);
	return;

}
// .method public static isLeapYear(I)Z
bool android::icu::util::HebrewCalendar::isLeapYear(int year)
{
	
	bool cVar2;
	int x;
	int cVar1;
	
	//    .param p0, "year"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1053    .end annotation
	cVar2 = 0x0;
	x = ( ( ( year * 0xc) + 0x11) % 0x13);
	//    .local v0, "x":I
	if ( x >= 0 )
		goto label_cond_e;
	cVar1 = -0x7;
label_goto_a:
	if ( x <  cVar1 )
		goto label_cond_d;
	cVar2 = 0x1;
label_cond_d:
	return cVar2;
label_cond_e:
	cVar1 = 0xc;
	goto label_goto_a;

}
// .method private static monthsInYear(I)I
int android::icu::util::HebrewCalendar::monthsInYear(int year)
{
	
	int cVar0;
	
	//    .param p0, "year"    # I
	if ( !(android::icu::util::HebrewCalendar::isLeapYear(year)) )  
		goto label_cond_9;
	cVar0 = 0xd;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0xc;
	goto label_goto_8;

}
// .method private static startOfYear(I)J
long long android::icu::util::HebrewCalendar::startOfYear(int year)
{
	
	long long day;
	int months;
	long long frac;
	int wd;
	
	//    .param p0, "year"    # I
	day = android::icu::util::HebrewCalendar::cache->get((long long)(year));
	//    .local v0, "day":J
	if ( (day > android::icu::impl::CalendarCache::EMPTY) )     
		goto label_cond_54;
	months = ( ( ( year * 0xeb) + -0xea) / 0x13);
	//    .local v4, "months":I
	frac = (((long long)(months) *  0x35b9) + 0x2f34);
	//    .local v2, "frac":J
	day = ((long long)(( months * 0x1d)) + (frac / 0x6540));
	frac = (frac %  0x6540);
	wd = (int)((day % 0x7));
	//    .local v5, "wd":I
	if ( wd == 0x2 )
		goto label_cond_32;
	if ( wd != 0x4 )
		goto label_cond_55;
label_cond_32:
label_goto_32:
	day = (day +  0x1);
	wd = (int)((day % 0x7));
label_cond_3a:
	if ( wd != 0x1 )
		goto label_cond_59;
	if ( (frac > 0x4014) <= 0 )
		goto label_cond_59;
	if ( !(( android::icu::util::HebrewCalendar::isLeapYear(year) ^ 0x1)) )  
		goto label_cond_59;
	day = (day +  0x2);
label_cond_4e:
label_goto_4e:
	android::icu::util::HebrewCalendar::cache->put((long long)(year), day);
	//    .end local v2    # "frac":J
	//    .end local v4    # "months":I
	//    .end local v5    # "wd":I
label_cond_54:
	return day;
	// 1238    .line 595
	// 1239    .restart local v2    # "frac":J
	// 1240    .restart local v4    # "months":I
	// 1241    .restart local v5    # "wd":I
label_cond_55:
	if ( wd != 0x6 )
		goto label_cond_3a;
	goto label_goto_32;
	// 1249    .line 606
label_cond_59:
	if ( wd )     
		goto label_cond_4e;
	if ( (frac > 0x5ae5) <= 0 )
		goto label_cond_4e;
	if ( !(android::icu::util::HebrewCalendar::isLeapYear(( year + -0x1))) )  
		goto label_cond_4e;
	day = (day +  0x1);
	goto label_goto_4e;

}
// .method private final yearType(I)I
int android::icu::util::HebrewCalendar::yearType(int year)
{
	
	int yearLength;
	int type;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "year"    # I
	yearLength = this->handleGetYearLength(year);
	//    .local v1, "yearLength":I
	if ( yearLength <= 0x17c )
		goto label_cond_a;
	yearLength = ( yearLength + -0x1e);
label_cond_a:
	type = 0x0;
	//    .local v0, "type":I
	// switch
	{
	auto item = ( yearLength );
	if (item == 353) goto label_pswitch_33;
	if (item == 354) goto label_pswitch_35;
	if (item == 355) goto label_pswitch_37;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal year length ")))->append(yearLength)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in year ")))->append(year)->toString());
	// throw
	throw cVar0;
	// 1337    .line 647
label_pswitch_33:
	type = 0x0;
label_goto_34:
	return type;
	// 1345    .line 649
label_pswitch_35:
	type = 0x1;
	goto label_goto_34;
	// 1351    .line 651
label_pswitch_37:
	type = 0x2;
	goto label_goto_34;
	// 1357    .line 645
	// 1358    nop
	// 1360    :pswitch_data_3a
	// 1361    .packed-switch 0x161
	// 1362        :pswitch_33
	// 1363        :pswitch_35
	// 1364        :pswitch_37
	// 1365    .end packed-switch

}
// .method public add(II)V
void android::icu::util::HebrewCalendar::add(int field,int amount)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int month;
	int year;
	int acrossAdar1;
	
	//    .param p1, "field"    # I
	//    .param p2, "amount"    # I
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x5;
	// switch
	{
	auto item = ( field );
	if (item == 2) goto label_pswitch_a;
	}
	this->add(field, amount);
label_goto_9:
	return;
	// 1392    .line 435
label_pswitch_a:
	month = this->get(cVar0);
	//    .local v1, "month":I
	year = this->get(cVar1);
	//    .local v2, "year":I
	if ( amount <= 0 )
		goto label_cond_3c;
	if ( month >= cVar2 )
		goto label_cond_34;
	acrossAdar1 = 0x1;
	//    .local v0, "acrossAdar1":Z
label_goto_17:
	month = (month +  amount);
label_goto_18:
	if ( !(acrossAdar1) )  
		goto label_cond_26;
	if ( month <  cVar2 )
		goto label_cond_26;
	if ( !(( android::icu::util::HebrewCalendar::isLeapYear(year) ^ 0x1)) )  
		goto label_cond_26;
	month = ( month + 0x1);
label_cond_26:
	if ( month >  0xc )
		goto label_cond_36;
label_cond_2a:
	this->set(cVar0, month);
	this->set(cVar1, year);
	this->pinField(cVar2);
	goto label_goto_9;
	// 1453    .line 439
	// 1454    .end local v0    # "acrossAdar1":Z
label_cond_34:
	acrossAdar1 = 0x0;
	//    .restart local v0    # "acrossAdar1":Z
	goto label_goto_17;
	// 1461    .line 448
label_cond_36:
	month = ( month + -0xd);
	year = ( year + 0x1);
	acrossAdar1 = 0x1;
	goto label_goto_18;
	// 1473    .line 453
	// 1474    .end local v0    # "acrossAdar1":Z
label_cond_3c:
	if ( month <= cVar2 )
		goto label_cond_56;
	acrossAdar1 = 0x1;
	//    .restart local v0    # "acrossAdar1":Z
label_goto_3f:
	month = (month +  amount);
label_goto_40:
	if ( !(acrossAdar1) )  
		goto label_cond_4e;
	if ( month >  cVar2 )
		goto label_cond_4e;
	if ( !(( android::icu::util::HebrewCalendar::isLeapYear(year) ^ 0x1)) )  
		goto label_cond_4e;
	month = ( month + -0x1);
label_cond_4e:
	if ( month >= 0 )
		goto label_cond_2a;
	month = ( month + 0xd);
	year = ( year + -0x1);
	acrossAdar1 = 0x1;
	goto label_goto_40;
	// 1517    .line 453
	// 1518    .end local v0    # "acrossAdar1":Z
label_cond_56:
	acrossAdar1 = 0x0;
	//    .restart local v0    # "acrossAdar1":Z
	goto label_goto_3f;
	// 1525    .line 427
	// 1526    :pswitch_data_58
	// 1527    .packed-switch 0x2
	// 1528        :pswitch_a
	// 1529    .end packed-switch

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::HebrewCalendar::getType()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("hebrew"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::HebrewCalendar::handleComputeFields(int julianDay)
{
	
	long long d;
	int year;
	int dayOfYear;
	int yearType;
	std::shared_ptr<int[][]> monthStart;
	int month;
	
	//    .param p1, "julianDay"    # I
	d = (long long)((julianDay - 0x54f5d));
	//    .local v2, "d":J
	//    .local v6, "m":J
	year = ( (int)((((0x13 *  ((0x6540 *  d) / 0xbadf9)) + 0xea) / 0xeb)) + 0x1);
	//    .local v10, "year":I
	//    .local v12, "ys":J
	dayOfYear = (int)((d - android::icu::util::HebrewCalendar::startOfYear(year)));
	//    .local v5, "dayOfYear":I
label_goto_23:
	if ( dayOfYear >= 0x1 )
		goto label_cond_30;
	year = ( year + -0x1);
	dayOfYear = (int)((d - android::icu::util::HebrewCalendar::startOfYear(year)));
	goto label_goto_23;
	// 1616    .line 783
label_cond_30:
	yearType = this->yearType(year);
	//    .local v11, "yearType":I
	if ( !(android::icu::util::HebrewCalendar::isLeapYear(year)) )  
		goto label_cond_48;
	monthStart = android::icu::util::HebrewCalendar::LEAP_MONTH_START;
	//    .local v9, "monthStart":[[I
label_goto_3e:
	month = 0x0;
	//    .local v8, "month":I
label_goto_3f:
	if ( dayOfYear <= monthStart[month][yearType] )
		goto label_cond_4b;
	month = ( month + 0x1);
	goto label_goto_3f;
	// 1653    .line 784
	// 1654    .end local v8    # "month":I
	// 1655    .end local v9    # "monthStart":[[I
label_cond_48:
	monthStart = android::icu::util::HebrewCalendar::MONTH_START;
	//    .restart local v9    # "monthStart":[[I
	goto label_goto_3e;
	// 1662    .line 790
	// 1663    .restart local v8    # "month":I
label_cond_4b:
	month = ( month + -0x1);
	//    .local v4, "dayOfMonth":I
	this->internalSet(0x0, 0x0);
	this->internalSet(0x1, year);
	this->internalSet(0x13, year);
	this->internalSet(0x2, month);
	this->internalSet(0x5, (dayOfYear - monthStart[month][yearType]));
	this->internalSet(0x6, dayOfYear);
	return;

}
// .method protected handleComputeMonthStart(IIZ)I
int android::icu::util::HebrewCalendar::handleComputeMonthStart(int eyear,int month,bool useMonth)
{
	
	int eyear;
	int month;
	auto day;
	long long day;
	
	//    .param p1, "eyear"    # I
	//    .param p2, "month"    # I
	//    .param p3, "useMonth"    # Z
label_goto_0:
	if ( month >= 0 )
		goto label_cond_42;
	eyear = ( eyear + -0x1);
	month = (month +  android::icu::util::HebrewCalendar::monthsInYear(eyear));
	goto label_goto_0;
	// 1745    .line 832
	// 1746    .end local p1    # "eyear":I
	// 1747    .local v2, "eyear":I
label_goto_a:
	if ( month <= 0xc )
		goto label_cond_17;
	eyear = ( eyear + 0x1);
	//    .end local v2    # "eyear":I
	//    .restart local p1    # "eyear":I
	month = (month -  android::icu::util::HebrewCalendar::monthsInYear(eyear));
	eyear = eyear;
	//    .end local p1    # "eyear":I
	//    .restart local v2    # "eyear":I
	goto label_goto_a;
	// 1770    .line 836
label_cond_17:
	day = android::icu::util::HebrewCalendar::startOfYear(eyear);
	//    .local v0, "day":J
	if ( !(month) )  
		goto label_cond_2f;
	if ( !(android::icu::util::HebrewCalendar::isLeapYear(eyear)) )  
		goto label_cond_35;
	day = (day +  (long long)(android::icu::util::HebrewCalendar::LEAP_MONTH_START[month][this->yearType(eyear)]));
label_cond_2f:
label_goto_2f:
	return (int)((0x54f5d +  day));
	// 1813    .line 842
label_cond_35:
	day = (day +  (long long)(android::icu::util::HebrewCalendar::MONTH_START[month][this->yearType(eyear)]));
	goto label_goto_2f;
	// 1831    .end local v0    # "day":J
	// 1832    .end local v2    # "eyear":I
	// 1833    .restart local p1    # "eyear":I
label_cond_42:
	eyear = eyear;
	//    .end local p1    # "eyear":I
	//    .restart local v2    # "eyear":I
	goto label_goto_a;

}
// .method protected handleGetExtendedYear()I
int android::icu::util::HebrewCalendar::handleGetExtendedYear()
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
	// 1867    .line 812
	// 1868    .end local v0    # "year":I
label_cond_e:
	//    .restart local v0    # "year":I
	goto label_goto_d;

}
// .method protected handleGetLimit(II)I
int android::icu::util::HebrewCalendar::handleGetLimit(int field,int limitType)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	return android::icu::util::HebrewCalendar::LIMITS[field][limitType];

}
// .method protected handleGetMonthLength(II)I
int android::icu::util::HebrewCalendar::handleGetMonthLength(int extendedYear,int month)
{
	
	int extendedYear;
	int month;
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
label_goto_1:
	if ( month >= 0 )
		goto label_cond_2d;
	extendedYear = ( extendedYear + -0x1);
	month = (month +  android::icu::util::HebrewCalendar::monthsInYear(extendedYear));
	goto label_goto_1;
	// 1917    .line 703
	// 1918    .end local p1    # "extendedYear":I
	// 1919    .local v0, "extendedYear":I
label_goto_b:
	if ( month <= 0xc )
		goto label_cond_18;
	extendedYear = ( extendedYear + 0x1);
	//    .end local v0    # "extendedYear":I
	//    .restart local p1    # "extendedYear":I
	month = (month -  android::icu::util::HebrewCalendar::monthsInYear(extendedYear));
	extendedYear = extendedYear;
	//    .end local p1    # "extendedYear":I
	//    .restart local v0    # "extendedYear":I
	goto label_goto_b;
	// 1942    .line 707
label_cond_18:
	// switch
	{
	auto item = ( month );
	if (item == 1) goto label_pswitch_22;
	if (item == 2) goto label_pswitch_22;
	}
	return android::icu::util::HebrewCalendar::MONTH_LENGTH[month][0x0];
	// 1955    .line 711
label_pswitch_22:
	return android::icu::util::HebrewCalendar::MONTH_LENGTH[month][this->yearType(extendedYear)];
	// 1969    .end local v0    # "extendedYear":I
	// 1970    .restart local p1    # "extendedYear":I
label_cond_2d:
	extendedYear = extendedYear;
	//    .end local p1    # "extendedYear":I
	//    .restart local v0    # "extendedYear":I
	goto label_goto_b;
	// 1978    .line 707
	// 1979    nop
	// 1981    :pswitch_data_30
	// 1982    .packed-switch 0x1
	// 1983        :pswitch_22
	// 1984        :pswitch_22
	// 1985    .end packed-switch

}
// .method protected handleGetYearLength(I)I
int android::icu::util::HebrewCalendar::handleGetYearLength(int eyear)
{
	
	//    .param p1, "eyear"    # I
	return (int)((android::icu::util::HebrewCalendar::startOfYear(( eyear + 0x1)) -  android::icu::util::HebrewCalendar::startOfYear(eyear)));

}
// .method public roll(II)V
void android::icu::util::HebrewCalendar::roll(int field,int amount)
{
	
	int cVar0;
	int cVar1;
	int month;
	int year;
	int newMonth;
	
	//    .param p1, "field"    # I
	//    .param p2, "amount"    # I
	cVar0 = 0x2;
	cVar1 = 0x5;
	// switch
	{
	auto item = ( field );
	if (item == 2) goto label_pswitch_9;
	}
	this->roll(field, amount);
	return;
	// 2030    .line 515
label_pswitch_9:
	month = this->get(cVar0);
	//    .local v1, "month":I
	year = this->get(0x1);
	//    .local v3, "year":I
	//    .local v0, "leapYear":Z
	//    .local v4, "yearLength":I
	newMonth = (month + (amount % android::icu::util::HebrewCalendar::monthsInYear(year)));
	//    .local v2, "newMonth":I
	if ( android::icu::util::HebrewCalendar::isLeapYear(year) )     
		goto label_cond_28;
	if ( amount <= 0 )
		goto label_cond_33;
	if ( month >= cVar1 )
		goto label_cond_33;
	if ( newMonth <  cVar1 )
		goto label_cond_33;
	newMonth = ( newMonth + 0x1);
label_cond_28:
label_goto_28:
	this->set(cVar0, ( ( newMonth + 0xd) % 0xd));
	this->pinField(cVar1);
	return;
	// 2091    .line 528
label_cond_33:
	if ( amount >= 0 )
		goto label_cond_28;
	if ( month <= cVar1 )
		goto label_cond_28;
	if ( newMonth >  cVar1 )
		goto label_cond_28;
	newMonth = ( newMonth + -0x1);
	goto label_goto_28;
	// 2104    .line 512
	// 2105    :pswitch_data_3c
	// 2106    .packed-switch 0x2
	// 2107        :pswitch_9
	// 2108    .end packed-switch

}
// .method protected validateField(I)V
void android::icu::util::HebrewCalendar::validateField(int field)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "field"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2115    .end annotation
	cVar0 = 0x2;
	if ( field != cVar0 )
		goto label_cond_1f;
	if ( !(( android::icu::util::HebrewCalendar::isLeapYear(this->handleGetExtendedYear()) ^ 0x1)) )  
		goto label_cond_1f;
	if ( this->internalGet(cVar0) != 0x5 )
		goto label_cond_1f;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONTH cannot be ADAR_1(5) except leap years")));
	// throw
	throw cVar1;
	// 2152    .line 741
label_cond_1f:
	this->validateField(field);
	return;

}


