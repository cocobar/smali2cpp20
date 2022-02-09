// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\GregorianCalendar.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.GregorianCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"

static android::icu::util::GregorianCalendar::AD = 0x1;
static android::icu::util::GregorianCalendar::BC = 0x0;
static android::icu::util::GregorianCalendar::EPOCH_YEAR = 0x7b2;
static android::icu::util::GregorianCalendar::LIMITS;
static android::icu::util::GregorianCalendar::MONTH_COUNT;
static android::icu::util::GregorianCalendar::serialVersionUID = 0x7faacb46ed8a2479L;
// .method static constructor <clinit>()V
void android::icu::util::GregorianCalendar::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<int[][]>> cVar5;
	std::shared<std::vector<int[][]>> cVar6;
	
	cVar0 = 0xb;
	cVar1 = 0x1e;
	cVar2 = 0x1;
	cVar3 = 0x1f;
	cVar4 = 0x0;
	cVar5 = std::make_shared<std::vector<int[][]>>(0xc);
	?;
	cVar5[cVar4] = ?;
	?;
	cVar5[cVar2] = ?;
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
	cVar5[cVar0] = ?;
	android::icu::util::GregorianCalendar::MONTH_COUNT = cVar5;
	cVar6 = std::make_shared<std::vector<int[][]>>(0x17);
	?;
	cVar6[cVar4] = ?;
	?;
	cVar6[cVar2] = ?;
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
	cVar6[cVar0] = std::make_shared<std::vector<int[]>>(cVar4);
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
	cVar6[0x16] = std::make_shared<std::vector<int[]>>(cVar4);
	android::icu::util::GregorianCalendar::LIMITS = cVar6;
	return;

}
// .method public constructor <init>()V
android::icu::util::GregorianCalendar::GregorianCalendar()
{
	
	android::icu::util::GregorianCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(III)V
android::icu::util::GregorianCalendar::GregorianCalendar(int year,int month,int date)
{
	
	int cVar0;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	cVar0 = 0x1;
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->gregorianCutover = -0xb1d069b5400L;
	this->cutoverJulianDay = 0x231519;
	this->gregorianCutoverYear = 0x62e;
	this->set(0x0, cVar0);
	this->set(cVar0, year);
	this->set(0x2, month);
	this->set(0x5, date);
	return;

}
// .method public constructor <init>(IIIII)V
android::icu::util::GregorianCalendar::GregorianCalendar(int year,int month,int date,int hour,int minute)
{
	
	int cVar0;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	cVar0 = 0x1;
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->gregorianCutover = -0xb1d069b5400L;
	this->cutoverJulianDay = 0x231519;
	this->gregorianCutoverYear = 0x62e;
	this->set(0x0, cVar0);
	this->set(cVar0, year);
	this->set(0x2, month);
	this->set(0x5, date);
	this->set(0xb, hour);
	this->set(0xc, minute);
	return;

}
// .method public constructor <init>(IIIIII)V
android::icu::util::GregorianCalendar::GregorianCalendar(int year,int month,int date,int hour,int minute,int second)
{
	
	int cVar0;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "date"    # I
	//    .param p4, "hour"    # I
	//    .param p5, "minute"    # I
	//    .param p6, "second"    # I
	cVar0 = 0x1;
	android::icu::util::Calendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	this->gregorianCutover = -0xb1d069b5400L;
	this->cutoverJulianDay = 0x231519;
	this->gregorianCutoverYear = 0x62e;
	this->set(0x0, cVar0);
	this->set(cVar0, year);
	this->set(0x2, month);
	this->set(0x5, date);
	this->set(0xb, hour);
	this->set(0xc, minute);
	this->set(0xd, second);
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;)V
android::icu::util::GregorianCalendar::GregorianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	android::icu::util::GregorianCalendar::(zone, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V
android::icu::util::GregorianCalendar::GregorianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::Calendar::(zone, locale);
	this->gregorianCutover = -0xb1d069b5400L;
	this->cutoverJulianDay = 0x231519;
	this->gregorianCutoverYear = 0x62e;
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V
android::icu::util::GregorianCalendar::GregorianCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "aLocale"    # Ljava/util/Locale;
	android::icu::util::Calendar::(zone, aLocale);
	this->gregorianCutover = -0xb1d069b5400L;
	this->cutoverJulianDay = 0x231519;
	this->gregorianCutoverYear = 0x62e;
	this->setTimeInMillis(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::util::GregorianCalendar::GregorianCalendar(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::util::GregorianCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), locale);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::util::GregorianCalendar::GregorianCalendar(std::shared_ptr<java::util::Locale> aLocale)
{
	
	//    .param p1, "aLocale"    # Ljava/util/Locale;
	android::icu::util::GregorianCalendar::(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), aLocale);
	return;

}
// .method public getActualMaximum(I)I
int android::icu::util::GregorianCalendar::getActualMaximum(int field)
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::Calendar> cal;
	int lowGood;
	int highBad;
	int y;
	
	//    .param p1, "field"    # I
	cVar0 = 0x0;
	cVar1 = 0x1;
	// switch
	{
	auto item = ( field );
	if (item == 1) goto label_pswitch_a;
	}
	return this->getActualMaximum(field);
	// 793    .line 649
label_pswitch_a:
	cal = this->clone();
	cal->checkCast("android::icu::util::Calendar");
	//    .local v0, "cal":Landroid/icu/util/Calendar;
	cal->setLenient(cVar1);
	//    .local v2, "era":I
	//    .local v1, "d":Ljava/util/Date;
	lowGood = android::icu::util::GregorianCalendar::LIMITS[cVar1][cVar1];
	//    .local v4, "lowGood":I
	highBad = ( android::icu::util::GregorianCalendar::LIMITS[cVar1][0x2] + 0x1);
	//    .local v3, "highBad":I
label_goto_2a:
	if ( ( lowGood + 0x1) >= highBad )
		goto label_cond_48;
	y = ( (lowGood + highBad) / 0x2);
	//    .local v5, "y":I
	cal->set(cVar1, y);
	if ( cal->get(cVar1) != y )
		goto label_cond_43;
	if ( cal->get(cVar0) != cal->get(cVar0) )
		goto label_cond_43;
	lowGood = y;
	goto label_goto_2a;
	// 871    .line 666
label_cond_43:
	highBad = y;
	cal->setTime(cal->getTime());
	goto label_goto_2a;
	// 880    .line 671
	// 881    .end local v5    # "y":I
label_cond_48:
	return lowGood;
	// 885    .line 626
	// 886    nop
	// 888    :pswitch_data_4a
	// 889    .packed-switch 0x1
	// 890        :pswitch_a
	// 891    .end packed-switch

}
// .method public getActualMinimum(I)I
int android::icu::util::GregorianCalendar::getActualMinimum(int field)
{
	
	//    .param p1, "field"    # I
	return this->getMinimum(field);

}
// .method public final getGregorianChange()Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::GregorianCalendar::getGregorianChange()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	cVar0 = std::make_shared<java::util::Date>(this->gregorianCutover);
	return cVar0;

}
// .method public getType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::GregorianCalendar::getType()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"));

}
// .method protected handleComputeFields(I)V
void android::icu::util::GregorianCalendar::handleComputeFields(int julianDay)
{
	
	int dayOfYear;
	int eyear;
	long long julianEpochDay;
	int isLeap;
	int correction;
	int month;
	int cVar0;
	
	//    .param p1, "julianDay"    # I
	if ( julianDay <  this->cutoverJulianDay )
		goto label_cond_45;
	//    .local v13, "month":I
	//    .local v3, "dayOfMonth":I
	dayOfYear = this->getGregorianDayOfYear();
	//    .local v4, "dayOfYear":I
	eyear = this->getGregorianYear();
	//    .local v6, "eyear":I
label_goto_18:
	this->internalSet(0x2, month);
	this->internalSet(0x5, dayOfMonth);
	this->internalSet(0x6, dayOfYear);
	this->internalSet(0x13, eyear);
	//    .local v5, "era":I
	if ( eyear >= 0x1 )
		goto label_cond_38;
label_cond_38:
	this->internalSet(0x0, 0x1);
	this->internalSet(0x1, eyear);
	return;
	// 1031    .line 744
	// 1032    .end local v3    # "dayOfMonth":I
	// 1033    .end local v4    # "dayOfYear":I
	// 1034    .end local v5    # "era":I
	// 1035    .end local v6    # "eyear":I
	// 1036    .end local v13    # "month":I
label_cond_45:
	julianEpochDay = (long long)((julianDay - 0x1a4450));
	//    .local v10, "julianEpochDay":J
	eyear = (int)(android::icu::util::GregorianCalendar::floorDivide(((0x4 *  julianEpochDay) + 0x5b8), 0x5b5));
	//    .restart local v6    # "eyear":I
	//    .local v8, "january1":J
	dayOfYear = (int)((julianEpochDay - ((((long long)(eyear) - 0x1) * 0x16d) + android::icu::util::GregorianCalendar::floorDivide(((long long)(eyear) - 0x1), 0x4))));
	//    .restart local v4    # "dayOfYear":I
	if ( ( eyear & 0x3) )     
		goto label_cond_9c;
	isLeap = 0x1;
	//    .local v7, "isLeap":Z
label_goto_79:
	correction = 0x0;
	//    .local v2, "correction":I
	if ( !(isLeap) )  
		goto label_cond_9e;
	//    .local v12, "march1":I
label_goto_7e:
	if ( dayOfYear <  march1 )
		goto label_cond_83;
	if ( !(isLeap) )  
		goto label_cond_a1;
	correction = 0x1;
label_cond_83:
label_goto_83:
	month = ( ( ( (dayOfYear + correction) * 0xc) + 0x6) / 0x16f);
	//    .restart local v13    # "month":I
	if ( !(isLeap) )  
		goto label_cond_a3;
	cVar0 = 0x3;
label_goto_92:
	//    .restart local v3    # "dayOfMonth":I
	dayOfYear = ( dayOfYear + 0x1);
	goto label_goto_18;
	// 1159    .line 757
	// 1160    .end local v2    # "correction":I
	// 1161    .end local v3    # "dayOfMonth":I
	// 1162    .end local v7    # "isLeap":Z
	// 1163    .end local v12    # "march1":I
	// 1164    .end local v13    # "month":I
label_cond_9c:
	isLeap = 0x0;
	//    .restart local v7    # "isLeap":Z
	goto label_goto_79;
	// 1171    .line 761
	// 1172    .restart local v2    # "correction":I
label_cond_9e:
	//    .restart local v12    # "march1":I
	goto label_goto_7e;
	// 1179    .line 763
label_cond_a1:
	correction = 0x2;
	goto label_goto_83;
	// 1185    .line 766
	// 1186    .restart local v13    # "month":I
label_cond_a3:
	cVar0 = 0x2;
	goto label_goto_92;

}
// .method protected handleComputeJulianDay(I)I
int android::icu::util::GregorianCalendar::handleComputeJulianDay(int bestField)
{
	
	bool cVar0;
	bool cVar2;
	int jd;
	
	//    .param p1, "bestField"    # I
	cVar0 = 0x1;
	cVar2 = 0x0;
	this->invertGregorian = cVar2;
	jd = this->handleComputeJulianDay(bestField);
	//    .local v0, "jd":I
	if ( jd <  this->cutoverJulianDay )
		goto label_cond_f;
	cVar2 = cVar0;
label_cond_f:
	if ( this->isGregorian == cVar2 )
		goto label_cond_17;
	this->invertGregorian = cVar0;
label_cond_17:
	return jd;

}
// .method protected handleComputeMonthStart(IIZ)I
int android::icu::util::GregorianCalendar::handleComputeMonthStart(int cVar2,int cVar3,bool useMonth)
{
	
	bool cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> rem;
	int cVar2;
	int cVar3;
	int y;
	int julianDay;
	int cVar4;
	
	//    .param p1, "eyear"    # I
	//    .param p2, "month"    # I
	//    .param p3, "useMonth"    # Z
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( cVar3 < 0 ) 
		goto label_cond_8;
	if ( cVar3 <= 0xb )
		goto label_cond_13;
label_cond_8:
	rem = std::make_shared<std::vector<int[]>>(cVar0);
	//    .local v2, "rem":[I
	cVar2 = (cVar2 +  android::icu::util::GregorianCalendar::floorDivide(cVar3, 0xc, rem));
	cVar3 = rem[cVar1];
	//    .end local v2    # "rem":[I
label_cond_13:
	if ( ( cVar2 % 0x4) )     
		goto label_cond_63;
	//    .local v0, "isLeap":Z
label_goto_18:
	y = ( cVar2 + -0x1);
	//    .local v3, "y":I
	julianDay = ((( y * 0x16d) +  android::icu::util::GregorianCalendar::floorDivide(y, 0x4)) + 0x1a444f);
	//    .local v1, "julianDay":I
	if ( cVar2 <  this->gregorianCutoverYear )
		goto label_cond_65;
label_goto_2b:
	this->isGregorian = cVar0;
	if ( !(this->invertGregorian) )  
		goto label_cond_37;
	this->isGregorian = ( this->isGregorian ^ 0x1);
label_cond_37:
	if ( !(this->isGregorian) )  
		goto label_cond_56;
	if ( !(0x1) )  
		goto label_cond_67;
	if ( ( cVar2 % 0x64) )     
		goto label_cond_45;
	if ( ( cVar2 % 0x190) )     
		goto label_cond_67;
label_cond_45:
label_goto_46:
	julianDay = (julianDay +  ( (android::icu::util::GregorianCalendar::floorDivide(y, 0x190) -  android::icu::util::GregorianCalendar::floorDivide(y, 0x64)) + 0x2));
label_cond_56:
	if ( !(cVar3) )  
		goto label_cond_62;
	if ( !(0x1) )  
		goto label_cond_69;
	cVar4 = 0x3;
label_goto_5f:
label_cond_62:
	return julianDay;
	// 1384    .line 835
	// 1385    .end local v0    # "isLeap":Z
	// 1386    .end local v1    # "julianDay":I
	// 1387    .end local v3    # "y":I
label_cond_63:
	0x0;
	//    .restart local v0    # "isLeap":Z
	goto label_goto_18;
	// 1394    .restart local v1    # "julianDay":I
	// 1395    .restart local v3    # "y":I
label_cond_65:
	cVar0 = cVar1;
	goto label_goto_2b;
	// 1402    .line 844
label_cond_67:
	0x0;
	goto label_goto_46;
	// 1408    .line 855
label_cond_69:
	cVar4 = 0x2;
	goto label_goto_5f;

}
// .method protected handleGetExtendedYear()I
int android::icu::util::GregorianCalendar::handleGetExtendedYear()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	
	cVar0 = 0x7b2;
	cVar1 = 0x13;
	cVar2 = 0x1;
	if ( this->newerField(cVar1, cVar2) != cVar1 )
		goto label_cond_11;
	//    .local v1, "year":I
label_goto_10:
	return year;
	// 1444    .line 794
	// 1445    .end local v1    # "year":I
label_cond_11:
	//    .local v0, "era":I
	if ( this->internalGet(0x0, cVar2) )     
		goto label_cond_1e;
	//    .restart local v1    # "year":I
	goto label_goto_10;
	// 1465    .line 798
	// 1466    .end local v1    # "year":I
label_cond_1e:
	//    .restart local v1    # "year":I
	goto label_goto_10;

}
// .method protected handleGetLimit(II)I
int android::icu::util::GregorianCalendar::handleGetLimit(int field,int limitType)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "limitType"    # I
	return android::icu::util::GregorianCalendar::LIMITS[field][limitType];

}
// .method protected handleGetMonthLength(II)I
int android::icu::util::GregorianCalendar::handleGetMonthLength(int cVar2,int cVar3)
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> rem;
	int cVar2;
	int cVar3;
	
	//    .param p1, "extendedYear"    # I
	//    .param p2, "month"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( cVar3 < 0 ) 
		goto label_cond_8;
	if ( cVar3 <= 0xb )
		goto label_cond_13;
label_cond_8:
	rem = std::make_shared<std::vector<int[]>>(cVar0);
	//    .local v0, "rem":[I
	cVar2 = (cVar2 +  android::icu::util::GregorianCalendar::floorDivide(cVar3, 0xc, rem));
	cVar3 = rem[cVar1];
	//    .end local v0    # "rem":[I
label_cond_13:
	if ( !(this->isLeapYear(cVar2)) )  
		goto label_cond_20;
label_goto_1d:
	return android::icu::util::GregorianCalendar::MONTH_COUNT[cVar3][cVar0];
label_cond_20:
	cVar0 = cVar1;
	goto label_goto_1d;

}
// .method protected handleGetYearLength(I)I
int android::icu::util::GregorianCalendar::handleGetYearLength(int eyear)
{
	
	int cVar0;
	
	//    .param p1, "eyear"    # I
	if ( !(this->isLeapYear(eyear)) )  
		goto label_cond_9;
	cVar0 = 0x16e;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x16d;
	goto label_goto_8;

}
// .method public hashCode()I
int android::icu::util::GregorianCalendar::hashCode()
{
	
	return (this->hashCode() ^  (int)(this->gregorianCutover));

}
// .method inDaylightTime()Z
bool android::icu::util::GregorianCalendar::inDaylightTime()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( this->getTimeZone()->useDaylightTime() )     
		goto label_cond_c;
	return cVar1;
	// 1610    .line 689
label_cond_c:
	this->complete();
	if ( !(this->internalGet(0x10)) )  
		goto label_cond_18;
	cVar1 = 0x1;
label_cond_18:
	return cVar1;

}
// .method public isEquivalentTo(Landroid/icu/util/Calendar;)Z
bool android::icu::util::GregorianCalendar::isEquivalentTo(std::shared_ptr<android::icu::util::Calendar> other)
{
	
	bool cVar1;
	
	//    .param p1, "other"    # Landroid/icu/util/Calendar;
	cVar1 = 0x0;
	if ( !(this->isEquivalentTo(other)) )  
		goto label_cond_12;
	other->checkCast("android::icu::util::GregorianCalendar");
	//    .end local p1    # "other":Landroid/icu/util/Calendar;
	if ( (this->gregorianCutover > other->gregorianCutover) )     
		goto label_cond_12;
	cVar1 = 0x1;
label_cond_12:
	return cVar1;

}
// .method public isLeapYear(I)Z
bool android::icu::util::GregorianCalendar::isLeapYear(int year)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "year"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( year <  this->gregorianCutoverYear )
		goto label_cond_15;
	if ( ( year % 0x4) )     
		goto label_cond_13;
	if ( ( year % 0x64) )     
		goto label_cond_12;
	if ( ( year % 0x190) )     
		goto label_cond_13;
label_cond_12:
label_goto_12:
	return cVar0;
label_cond_13:
	cVar0 = cVar1;
	goto label_goto_12;
	// 1700    .line 513
label_cond_15:
	if ( !(( year % 0x4)) )  
		goto label_cond_12;
	cVar0 = cVar1;
	goto label_goto_12;

}
// .method public roll(II)V
void android::icu::util::GregorianCalendar::roll(int field,int amount)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int woy;
	int isoYear;
	int isoDoy;
	int lastDoy;
	int lastRelDow;
	int lastWoy;
	
	//    .param p1, "field"    # I
	//    .param p2, "amount"    # I
	cVar0 = 0x34;
	cVar1 = 0x3;
	cVar2 = 0x1;
	// switch
	{
	auto item = ( field );
	if (item == 3) goto label_pswitch_b;
	}
	this->roll(field, amount);
	return;
	// 1732    .line 550
label_pswitch_b:
	woy = this->get(cVar1);
	//    .local v5, "woy":I
	isoYear = this->get(0x11);
	//    .local v1, "isoYear":I
	isoDoy = this->internalGet(0x6);
	//    .local v0, "isoDoy":I
	if ( this->internalGet(0x2) )     
		goto label_cond_62;
	if ( woy <  cVar0 )
		goto label_cond_28;
	isoDoy = (isoDoy +  this->handleGetYearLength(isoYear));
label_cond_28:
label_goto_28:
	woy = (woy +  amount);
	if ( woy <  cVar2 )
		goto label_cond_2d;
	if ( woy <= cVar0 )
		goto label_cond_5b;
label_cond_2d:
	lastDoy = this->handleGetYearLength(isoYear);
	//    .local v2, "lastDoy":I
	lastRelDow = ( (((lastDoy - isoDoy) +  this->internalGet(0x7)) -  this->getFirstDayOfWeek()) % 0x7);
	//    .local v3, "lastRelDow":I
	if ( lastRelDow >= 0 )
		goto label_cond_44;
	lastRelDow = ( lastRelDow + 0x7);
label_cond_44:
	if ( ( lastRelDow - 0x6) <  this->getMinimalDaysInFirstWeek() )
		goto label_cond_4e;
label_cond_4e:
	lastWoy = this->weekNumber(lastDoy, ( lastRelDow + 0x1));
	//    .local v4, "lastWoy":I
	//    .end local v2    # "lastDoy":I
	//    .end local v3    # "lastRelDow":I
	//    .end local v4    # "lastWoy":I
label_cond_5b:
	this->set(cVar1, woy);
	this->set(cVar2, isoYear);
	return;
	// 1861    .line 560
label_cond_62:
	if ( woy != cVar2 )
		goto label_cond_28;
	isoDoy = (isoDoy -  this->handleGetYearLength(( isoYear + -0x1)));
	goto label_goto_28;
	// 1876    .line 540
	// 1877    :pswitch_data_6c
	// 1878    .packed-switch 0x3
	// 1879        :pswitch_b
	// 1880    .end packed-switch

}
// .method public setGregorianChange(Ljava/util/Date;)V
void android::icu::util::GregorianCalendar::setGregorianChange(std::shared_ptr<java::util::Date> date)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::util::GregorianCalendar> cal;
	
	//    .param p1, "date"    # Ljava/util/Date;
	cVar0 = 0x7fffffff;
	cVar1 = -0x80000000;
	this->gregorianCutover = date->getTime();
	if ( (this->gregorianCutover > -0x28ec76c40e65000L) > 0 ) 
		goto label_cond_1b;
	this->cutoverJulianDay = cVar1;
	this->gregorianCutoverYear = cVar1;
label_goto_1a:
	return;
	// 1917    .line 478
label_cond_1b:
	if ( (this->gregorianCutover > 0x28d47dbbf19b000L) < 0 ) 
		goto label_cond_2b;
	this->cutoverJulianDay = cVar0;
	this->gregorianCutoverYear = cVar0;
	goto label_goto_1a;
	// 1934    .line 484
label_cond_2b:
	this->cutoverJulianDay = (int)(android::icu::util::GregorianCalendar::floorDivide(this->gregorianCutover, 0x5265c00));
	cal = std::make_shared<android::icu::util::GregorianCalendar>(this->getTimeZone());
	//    .local v0, "cal":Landroid/icu/util/GregorianCalendar;
	cal->setTime(date);
	this->gregorianCutoverYear = cal->get(0x13);
	goto label_goto_1a;

}


