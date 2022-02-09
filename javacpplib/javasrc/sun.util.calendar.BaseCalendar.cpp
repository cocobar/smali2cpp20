// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\BaseCalendar.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.BaseCalendar.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarUtils.h"

static sun::util::calendar::BaseCalendar::_assertionsDisabled;
static sun::util::calendar::BaseCalendar::ACCUMULATED_DAYS_IN_MONTH;
static sun::util::calendar::BaseCalendar::ACCUMULATED_DAYS_IN_MONTH_LEAP;
static sun::util::calendar::BaseCalendar::APRIL = 0x4;
static sun::util::calendar::BaseCalendar::AUGUST = 0x8;
static sun::util::calendar::BaseCalendar::BASE_YEAR = 0x7b2;
static sun::util::calendar::BaseCalendar::DAYS_IN_MONTH;
static sun::util::calendar::BaseCalendar::DECEMBER = 0xc;
static sun::util::calendar::BaseCalendar::FEBRUARY = 0x2;
static sun::util::calendar::BaseCalendar::FIXED_DATES;
static sun::util::calendar::BaseCalendar::FRIDAY = 0x6;
static sun::util::calendar::BaseCalendar::JANUARY = 0x1;
static sun::util::calendar::BaseCalendar::JULY = 0x7;
static sun::util::calendar::BaseCalendar::JUNE = 0x6;
static sun::util::calendar::BaseCalendar::MARCH = 0x3;
static sun::util::calendar::BaseCalendar::MAY = 0x5;
static sun::util::calendar::BaseCalendar::MONDAY = 0x2;
static sun::util::calendar::BaseCalendar::NOVEMBER = 0xb;
static sun::util::calendar::BaseCalendar::OCTOBER = 0xa;
static sun::util::calendar::BaseCalendar::SATURDAY = 0x7;
static sun::util::calendar::BaseCalendar::SEPTEMBER = 0x9;
static sun::util::calendar::BaseCalendar::SUNDAY = 0x1;
static sun::util::calendar::BaseCalendar::THURSDAY = 0x5;
static sun::util::calendar::BaseCalendar::TUESDAY = 0x3;
static sun::util::calendar::BaseCalendar::WEDNESDAY = 0x4;
// .method static constructor <clinit>()V
void sun::util::calendar::BaseCalendar::static_cinit()
{
	
	int cVar0;
	std::shared<std::vector<int[]>> cVar1;
	std::shared<std::vector<int[]>> cVar2;
	std::shared<std::vector<int[]>> cVar3;
	std::shared<std::vector<int[]>> cVar4;
	
	cVar0 = 0xd;
	sun::util::calendar::BaseCalendar::_assertionsDisabled = ( sun::util::calendar::BaseCalendar()->desiredAssertionStatus() ^ 0x1);
	cVar1 = std::make_shared<std::vector<int[]>>(0x46);
	?;
	sun::util::calendar::BaseCalendar::FIXED_DATES = cVar1;
	cVar2 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::util::calendar::BaseCalendar::DAYS_IN_MONTH = cVar2;
	cVar3 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::util::calendar::BaseCalendar::ACCUMULATED_DAYS_IN_MONTH = cVar3;
	cVar4 = std::make_shared<std::vector<int[]>>(cVar0);
	?;
	sun::util::calendar::BaseCalendar::ACCUMULATED_DAYS_IN_MONTH_LEAP = cVar4;
	return;
	// 119    .line 70
	// 120    nop
	// 122    :array_2c
	// 123    .array-data 4
	// 124        0xaf93b
	// 125        0xafaa8
	// 126        0xafc15
	// 127        0xafd83
	// 128        0xafef0
	// 129        0xb005d
	// 130        0xb01ca
	// 131        0xb0338
	// 132        0xb04a5
	// 133        0xb0612
	// 134        0xb077f
	// 135        0xb08ed
	// 136        0xb0a5a
	// 137        0xb0bc7
	// 138        0xb0d34
	// 139        0xb0ea2
	// 140        0xb100f
	// 141        0xb117c
	// 142        0xb12e9
	// 143        0xb1457
	// 144        0xb15c4
	// 145        0xb1731
	// 146        0xb189e
	// 147        0xb1a0c
	// 148        0xb1b79
	// 149        0xb1ce6
	// 150        0xb1e53
	// 151        0xb1fc1
	// 152        0xb212e
	// 153        0xb229b
	// 154        0xb2408
	// 155        0xb2576
	// 156        0xb26e3
	// 157        0xb2850
	// 158        0xb29bd
	// 159        0xb2b2b
	// 160        0xb2c98
	// 161        0xb2e05
	// 162        0xb2f72
	// 163        0xb30e0
	// 164        0xb324d
	// 165        0xb33ba
	// 166        0xb3527
	// 167        0xb3695
	// 168        0xb3802
	// 169        0xb396f
	// 170        0xb3adc
	// 171        0xb3c4a
	// 172        0xb3db7
	// 173        0xb3f24
	// 174        0xb4091
	// 175        0xb41ff
	// 176        0xb436c
	// 177        0xb44d9
	// 178        0xb4646
	// 179        0xb47b4
	// 180        0xb4921
	// 181        0xb4a8e
	// 182        0xb4bfb
	// 183        0xb4d69
	// 184        0xb4ed6
	// 185        0xb5043
	// 186        0xb51b0
	// 187        0xb531e    # 1.040007E-39f
	// 188        0xb548b
	// 189        0xb55f8
	// 190        0xb5765
	// 191        0xb58d3
	// 192        0xb5a40
	// 193        0xb5bad
	// 194    .end array-data
	// 196    .line 312
	// 197    :array_bc
	// 198    .array-data 4
	// 199        0x1f
	// 200        0x1f
	// 201        0x1c
	// 202        0x1f
	// 203        0x1e
	// 204        0x1f
	// 205        0x1e
	// 206        0x1f
	// 207        0x1f
	// 208        0x1e
	// 209        0x1f
	// 210        0x1e
	// 211        0x1f
	// 212    .end array-data
	// 214    .line 315
	// 215    :array_da
	// 216    .array-data 4
	// 217        -0x1e
	// 218        0x0
	// 219        0x1f
	// 220        0x3b
	// 221        0x5a
	// 222        0x78
	// 223        0x97
	// 224        0xb5
	// 225        0xd4
	// 226        0xf3
	// 227        0x111
	// 228        0x130
	// 229        0x14e
	// 230    .end array-data
	// 232    .line 319
	// 233    :array_f8
	// 234    .array-data 4
	// 235        -0x1e
	// 236        0x0
	// 237        0x1f
	// 238        0x3c
	// 239        0x5b
	// 240        0x79
	// 241        0x98
	// 242        0xb6
	// 243        0xd5
	// 244        0xf4
	// 245        0x112
	// 246        0x131
	// 247        0x14f
	// 248    .end array-data

}
// .method public constructor <init>()V
sun::util::calendar::BaseCalendar::BaseCalendar()
{
	
	// 256    invoke-direct {p0}, Lsun/util/calendar/AbstractCalendar;-><init>()V
	return;

}
// .method public static final getDayOfWeekFromFixedDate(J)I
int sun::util::calendar::BaseCalendar::getDayOfWeekFromFixedDate(long long fixedDate)
{
	
	long long cVar0;
	
	//    .param p0, "fixedDate"    # J
	cVar0 = 0x7;
	if ( (fixedDate > 0x0) < 0 ) 
		goto label_cond_e;
	return ( (int)((fixedDate % cVar0)) + 0x1);
	// 284    .line 481
label_cond_e:
	return ( (int)(sun::util::calendar::CalendarUtils::mod(fixedDate, cVar0)) + 0x1);

}
// .method private getMonthLength(II)I
int sun::util::calendar::BaseCalendar::getMonthLength(int year,int month)
{
	
	int days;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	days = sun::util::calendar::BaseCalendar::DAYS_IN_MONTH[month];
	//    .local v0, "days":I
	if ( month != 0x2 )
		goto label_cond_f;
	if ( !(this->isLeapYear(year)) )  
		goto label_cond_f;
label_cond_f:
	return days;

}
// .method public getCalendarDateFromFixedDate(Lsun/util/calendar/CalendarDate;J)V
void sun::util::calendar::BaseCalendar::getCalendarDateFromFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> date,long long fixedDate)
{
	
	std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> gdate;
	int year;
	auto jan1;
	bool isLeap;
	int priorDays;
	long long mar1;
	int cVar0;
	int month;
	long long month1;
	int dayOfWeek;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	long long jan1;
	int cVar3;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	//    .param p2, "fixedDate"    # J
	gdate = date;
	gdate->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	//    .local v8, "gdate":Lsun/util/calendar/BaseCalendar$Date;
	if ( !(gdate->hit(fixedDate)) )  
		goto label_cond_89;
	year = gdate->getCachedYear();
	//    .local v18, "year":I
	jan1 = gdate->getCachedJan1();
	//    .local v10, "jan1":J
	isLeap = this->isLeapYear(year);
	//    .local v9, "isLeap":Z
label_goto_1c:
	priorDays = (int)((fixedDate - jan1));
	//    .local v15, "priorDays":I
	mar1 = ((0x1f + jan1) + 0x1c);
	//    .local v12, "mar1":J
	if ( !(isLeap) )  
		goto label_cond_2f;
label_cond_2f:
	if ( (fixedDate > mar1) < 0 ) 
		goto label_cond_39;
	if ( !(isLeap) )  
		goto label_cond_bd;
	cVar0 = 0x1;
label_goto_37:
label_cond_39:
	month = ( ( priorDays * 0xc) + 0x175);
	//    .local v14, "month":I
	if ( month <= 0 )
		goto label_cond_c1;
	month = ( month / 0x16f);
label_goto_43:
	month1 = (jan1 + (long long)(sun::util::calendar::BaseCalendar::ACCUMULATED_DAYS_IN_MONTH[month]));
	//    .local v16, "month1":J
	if ( !(isLeap) )  
		goto label_cond_5a;
	if ( month <  0x3 )
		goto label_cond_5a;
label_cond_5a:
	//    .local v6, "dayOfMonth":I
	dayOfWeek = sun::util::calendar::BaseCalendar::getDayOfWeekFromFixedDate(fixedDate);
	//    .local v7, "dayOfWeek":I
	if ( sun::util::calendar::BaseCalendar::_assertionsDisabled )     
		goto label_cond_cb;
	if ( dayOfWeek > 0 ) 
		goto label_cond_cb;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::AssertionError>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("negative day of week ")))->append(dayOfWeek)->toString());
	// throw
	throw cVar1;
	// 510    .line 432
	// 511    .end local v6    # "dayOfMonth":I
	// 512    .end local v7    # "dayOfWeek":I
	// 513    .end local v9    # "isLeap":Z
	// 514    .end local v10    # "jan1":J
	// 515    .end local v12    # "mar1":J
	// 516    .end local v14    # "month":I
	// 517    .end local v15    # "priorDays":I
	// 518    .end local v16    # "month1":J
	// 519    .end local v18    # "year":I
label_cond_89:
	year = this->getGregorianYearFromFixedDate(fixedDate);
	//    .restart local v18    # "year":I
	jan1 = this->getFixedDate(year, 0x1, 0x1, 0x0);
	//    .restart local v10    # "jan1":J
	isLeap = this->isLeapYear(year);
	//    .restart local v9    # "isLeap":Z
	if ( !(isLeap) )  
		goto label_cond_ba;
	cVar3 = 0x16e;
label_goto_b1:
	gdate->setCache(year, jan1, cVar3);
	goto label_goto_1c;
label_cond_ba:
	cVar3 = 0x16d;
	goto label_goto_b1;
	// 581    .line 445
	// 582    .restart local v12    # "mar1":J
	// 583    .restart local v15    # "priorDays":I
label_cond_bd:
	cVar0 = 0x2;
	goto label_goto_37;
	// 589    .line 451
	// 590    .restart local v14    # "month":I
label_cond_c1:
	month = sun::util::calendar::CalendarUtils::floorDivide(month, 0x16f);
	goto label_goto_43;
	// 602    .line 460
	// 603    .restart local v6    # "dayOfMonth":I
	// 604    .restart local v7    # "dayOfWeek":I
	// 605    .restart local v16    # "month1":J
label_cond_cb:
	gdate->setNormalizedYear(year);
	gdate->setMonth(month);
	gdate->setDayOfMonth(( (int)((fixedDate - month1)) + 0x1));
	gdate->setDayOfWeek(dayOfWeek);
	gdate->setLeapYear(isLeap);
	gdate->setNormalized(0x1);
	return;

}
// .method public getDayOfWeek(Lsun/util/calendar/CalendarDate;)I
int sun::util::calendar::BaseCalendar::getDayOfWeek(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	//    .local v0, "fixedDate":J
	return sun::util::calendar::BaseCalendar::getDayOfWeekFromFixedDate(this->getFixedDate(date));

}
// .method final getDayOfYear(III)J
long long sun::util::calendar::BaseCalendar::getDayOfYear(int year,int month,int dayOfMonth)
{
	
	int cVar0;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "dayOfMonth"    # I
	if ( !(this->isLeapYear(year)) )  
		goto label_cond_e;
	cVar0 = sun::util::calendar::BaseCalendar::ACCUMULATED_DAYS_IN_MONTH_LEAP[month];
label_goto_b:
	return ((long long)(cVar0) +  (long long)(dayOfMonth));
	// 684    .line 348
label_cond_e:
	cVar0 = sun::util::calendar::BaseCalendar::ACCUMULATED_DAYS_IN_MONTH[month];
	goto label_goto_b;

}
// .method public getDayOfYear(Lsun/util/calendar/CalendarDate;)J
long long sun::util::calendar::BaseCalendar::getDayOfYear(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> cVar0;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	cVar0 = date;
	cVar0->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	return this->getDayOfYear(cVar0->getNormalizedYear(), date->getMonth(), date->getDayOfMonth());

}
// .method public getFixedDate(IIILsun/util/calendar/BaseCalendar$Date;)J
long long sun::util::calendar::BaseCalendar::getFixedDate(int year,int month,int dayOfMonth,std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> cache)
{
	
	int isJan1;
	int n;
	long long jan1;
	int cVar0;
	long long prevyear;
	long long days;
	int cVar2;
	int cVar3;
	
	//    .param p1, "year"    # I
	//    .param p2, "month"    # I
	//    .param p3, "dayOfMonth"    # I
	//    .param p4, "cache"    # Lsun/util/calendar/BaseCalendar$Date;
	if ( month != 0x1 )
		goto label_cond_1c;
	if ( dayOfMonth != 0x1 )
		goto label_cond_1c;
	isJan1 = 0x1;
	//    .local v4, "isJan1":Z
label_goto_b:
	if ( !(cache) )  
		goto label_cond_2b;
	if ( !(cache->hit(year)) )  
		goto label_cond_2b;
	if ( !(isJan1) )  
		goto label_cond_1e;
	return cache->getCachedJan1();
	// 771    .line 364
	// 772    .end local v4    # "isJan1":Z
label_cond_1c:
	0x0;
	//    .restart local v4    # "isJan1":Z
	goto label_goto_b;
	// 779    .line 371
label_cond_1e:
	return ((cache->getCachedJan1() +  this->getDayOfYear(year, month, dayOfMonth)) -  0x1);
	// 797    .line 375
label_cond_2b:
	n = ( year + -0x7b2);
	//    .local v5, "n":I
	if ( n < 0 ) 
		goto label_cond_58;
	if ( n >= sun::util::calendar::BaseCalendar::FIXED_DATES->size() )
		goto label_cond_58;
	jan1 = (long long)(sun::util::calendar::BaseCalendar::FIXED_DATES[n]);
	//    .local v6, "jan1":J
	if ( !(cache) )  
		goto label_cond_48;
	if ( !(this->isLeapYear(year)) )  
		goto label_cond_4b;
	cVar0 = 0x16e;
label_goto_43:
	cache->setCache(year, jan1, cVar0);
label_cond_48:
	if ( !(isJan1) )  
		goto label_cond_4e;
	//    .end local v6    # "jan1":J
label_goto_4a:
	return jan1;
	// 844    .line 379
	// 845    .restart local v6    # "jan1":J
label_cond_4b:
	cVar0 = 0x16d;
	goto label_goto_43;
	// 851    .line 381
label_cond_4e:
	jan1 = ((this->getDayOfYear(year, month, dayOfMonth) +  jan1) - 0x1);
	goto label_goto_4a;
	// 865    .line 384
	// 866    .end local v6    # "jan1":J
label_cond_58:
	prevyear = ((long long)(year) - 0x1);
	//    .local v8, "prevyear":J
	days = (long long)(dayOfMonth);
	//    .local v2, "days":J
	if ( (prevyear > 0x0) < 0 ) 
		goto label_cond_a3;
	days = (days +  (((((0x16d *  prevyear) +  (prevyear / 0x4)) -  (prevyear / 0x64)) +  (prevyear / 0x190)) +  (long long)(( ( ( month * 0x16f) + -0x16a) / 0xc))));
label_goto_83:
	if ( month <= 0x2 )
		goto label_cond_91;
	if ( !(this->isLeapYear(year)) )  
		goto label_cond_cb;
	cVar2 = 0x1;
label_goto_8f:
	days = (days -  (long long)(cVar2));
label_cond_91:
	if ( !(cache) )  
		goto label_cond_a2;
	if ( !(isJan1) )  
		goto label_cond_a2;
	if ( !(this->isLeapYear(year)) )  
		goto label_cond_cd;
	cVar3 = 0x16e;
label_goto_9d:
	cache->setCache(year, days, cVar3);
label_cond_a2:
	return days;
	// 979    .line 394
label_cond_a3:
	days = (days +  (((((0x16d *  prevyear) +  sun::util::calendar::CalendarUtils::floorDivide(prevyear, 0x4)) -  sun::util::calendar::CalendarUtils::floorDivide(prevyear, 0x64)) +  sun::util::calendar::CalendarUtils::floorDivide(prevyear, 0x190)) +  (long long)(sun::util::calendar::CalendarUtils::floorDivide(( ( month * 0x16f) + -0x16a), 0xc))));
	goto label_goto_83;
	// 1037    .line 402
label_cond_cb:
	cVar2 = 0x2;
	goto label_goto_8f;
	// 1043    .line 407
label_cond_cd:
	cVar3 = 0x16d;
	goto label_goto_9d;

}
// .method public getFixedDate(Lsun/util/calendar/CalendarDate;)J
long long sun::util::calendar::BaseCalendar::getFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> cVar0;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	if ( date->isNormalized() )     
		goto label_cond_9;
	this->normalizeMonth(date);
label_cond_9:
	cVar0 = date;
	cVar0->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	date->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	//    .end local p1    # "date":Lsun/util/calendar/CalendarDate;
	return this->getFixedDate(cVar0->getNormalizedYear(), date->getMonth(), date->getDayOfMonth(), date);

}
// .method final getGregorianYearFromFixedDate(J)I
int sun::util::calendar::BaseCalendar::getGregorianYearFromFixedDate(long long fixedDate)
{
	
	long long d0;
	int d1;
	int n100;
	int d2;
	int d3;
	int n1;
	int year;
	
	//    .param p1, "fixedDate"    # J
	if ( (fixedDate > 0x0) <= 0 )
		goto label_cond_3d;
	d0 = (fixedDate - 0x1);
	//    .local v0, "d0":J
	//    .local v9, "n400":I
	d1 = (int)((d0 % 0x23ab1));
	//    .local v2, "d1":I
	n100 = (d1 / 0x8eac);
	//    .local v7, "n100":I
	d2 = (d1 % 0x8eac);
	//    .local v3, "d2":I
	//    .local v8, "n4":I
	d3 = ( d2 % 0x5b5);
	//    .local v4, "d3":I
	n1 = ( d3 / 0x16d);
	//    .local v6, "n1":I
	( ( d3 % 0x16d) + 0x1);
	//    .local v5, "d4":I
label_goto_2a:
	year = (((( n400 * 0x190) +  ( n100 * 0x64)) +  ( n4 * 0x4)) + n1);
	//    .local v10, "year":I
	if ( n100 == 0x4 )
		goto label_cond_3c;
	if ( n1 == 0x4 )
		goto label_cond_3c;
label_cond_3c:
	return year;
	// 1192    .line 508
	// 1193    .end local v0    # "d0":J
	// 1194    .end local v2    # "d1":I
	// 1195    .end local v3    # "d2":I
	// 1196    .end local v4    # "d3":I
	// 1197    .end local v5    # "d4":I
	// 1198    .end local v6    # "n1":I
	// 1199    .end local v7    # "n100":I
	// 1200    .end local v8    # "n4":I
	// 1201    .end local v9    # "n400":I
	// 1202    .end local v10    # "year":I
label_cond_3d:
	d0 = (fixedDate - 0x1);
	//    .restart local v0    # "d0":J
	//    .restart local v9    # "n400":I
	d1 = (int)(sun::util::calendar::CalendarUtils::mod(d0, 0x23ab1));
	//    .restart local v2    # "d1":I
	n100 = sun::util::calendar::CalendarUtils::floorDivide(d1, 0x8eac);
	//    .restart local v7    # "n100":I
	d2 = sun::util::calendar::CalendarUtils::mod(d1, 0x8eac);
	//    .restart local v3    # "d2":I
	//    .restart local v8    # "n4":I
	d3 = sun::util::calendar::CalendarUtils::mod(d2, 0x5b5);
	//    .restart local v4    # "d3":I
	//    .restart local v6    # "n1":I
	( sun::util::calendar::CalendarUtils::mod(d3, 0x16d) + 0x1);
	//    .restart local v5    # "d4":I
	goto label_goto_2a;

}
// .method public getMonthLength(Lsun/util/calendar/CalendarDate;)I
int sun::util::calendar::BaseCalendar::getMonthLength(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> gdate;
	int month;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	gdate = date;
	gdate->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	//    .local v0, "gdate":Lsun/util/calendar/BaseCalendar$Date;
	month = gdate->getMonth();
	//    .local v1, "month":I
	if ( month <  0x1 )
		goto label_cond_e;
	if ( month <= 0xc )
		goto label_cond_28;
label_cond_e:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal month value: ")))->append(month)->toString());
	// throw
	throw cVar0;
	// 1334    .line 327
label_cond_28:
	return this->getMonthLength(gdate->getNormalizedYear(), month);

}
// .method public getYearFromFixedDate(J)I
int sun::util::calendar::BaseCalendar::getYearFromFixedDate(long long fixedDate)
{
	
	//    .param p1, "fixedDate"    # J
	return this->getGregorianYearFromFixedDate(fixedDate);

}
// .method public getYearLength(Lsun/util/calendar/CalendarDate;)I
int sun::util::calendar::BaseCalendar::getYearLength(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	int cVar0;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	date->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	//    .end local p1    # "date":Lsun/util/calendar/CalendarDate;
	if ( !(this->isLeapYear(date->getNormalizedYear())) )  
		goto label_cond_f;
	cVar0 = 0x16e;
label_goto_e:
	return cVar0;
label_cond_f:
	cVar0 = 0x16d;
	goto label_goto_e;

}
// .method public getYearLengthInMonths(Lsun/util/calendar/CalendarDate;)I
int sun::util::calendar::BaseCalendar::getYearLengthInMonths(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	return 0xc;

}
// .method isLeapYear(I)Z
bool sun::util::calendar::BaseCalendar::isLeapYear(int normalizedYear)
{
	
	//    .param p1, "normalizedYear"    # I
	return sun::util::calendar::CalendarUtils::isGregorianLeapYear(normalizedYear);

}
// .method protected isLeapYear(Lsun/util/calendar/CalendarDate;)Z
bool sun::util::calendar::BaseCalendar::isLeapYear(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	date->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	//    .end local p1    # "date":Lsun/util/calendar/CalendarDate;
	return this->isLeapYear(date->getNormalizedYear());

}
// .method public normalize(Lsun/util/calendar/CalendarDate;)Z
bool sun::util::calendar::BaseCalendar::normalize(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> bdate;
	long long d;
	int m;
	int y;
	int ml;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	if ( !(date->isNormalized()) )  
		goto label_cond_8;
	return 0x1;
label_cond_8:
	bdate = date;
	bdate->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	//    .local v0, "bdate":Lsun/util/calendar/BaseCalendar$Date;
	//    .local v9, "zi":Ljava/util/TimeZone;
	if ( !(bdate->getZone()) )  
		goto label_cond_16;
	this->getTime(date);
	return 0x1;
	// 1475    .line 232
label_cond_16:
	//    .local v1, "days":I
	this->normalizeMonth(bdate);
	d = ((long long)(bdate->getDayOfMonth()) + (long long)(this->normalizeTime(bdate)));
	//    .local v2, "d":J
	m = bdate->getMonth();
	//    .local v6, "m":I
	y = bdate->getNormalizedYear();
	//    .local v8, "y":I
	ml = this->getMonthLength(y, m);
	//    .local v7, "ml":I
	if ( (d > 0x0) <= 0 )
		goto label_cond_3c;
	if ( (d > (long long)(ml)) <= 0 )
		goto label_cond_a9;
label_cond_3c:
	if ( (d > 0x0) > 0 ) 
		goto label_cond_79;
	if ( (d > -0x1c) <= 0 )
		goto label_cond_79;
	m = ( m + -0x1);
	bdate->setDayOfMonth((int)((d +  (long long)(this->getMonthLength(y, m)))));
	if ( m )     
		goto label_cond_5d;
	bdate->setNormalizedYear(( y + -0x1));
label_cond_5d:
	bdate->setMonth(m);
label_goto_60:
	date->setLeapYear(this->isLeapYear(bdate->getNormalizedYear()));
	date->setZoneOffset(0x0);
	date->setDaylightSaving(0x0);
	bdate->setNormalized(0x1);
	return 0x1;
	// 1606    .line 249
label_cond_79:
	if ( (d > (long long)(ml)) <= 0 )
		goto label_cond_9b;
	if ( (d > (long long)(( ml + 0x1c))) >= 0 )
		goto label_cond_9b;
	m = ( m + 0x1);
	bdate->setDayOfMonth((int)((d -  (long long)(ml))));
	if ( m <= 0xc )
		goto label_cond_97;
	bdate->setNormalizedYear(( y + 0x1));
label_cond_97:
	bdate->setMonth(m);
	goto label_goto_60;
	// 1654    .line 259
label_cond_9b:
	//    .local v4, "fixedDate":J
	this->getCalendarDateFromFixedDate(bdate, ((this->getFixedDate(y, m, 0x1, bdate) +  d) - 0x1));
	goto label_goto_60;
	// 1674    .line 263
	// 1675    .end local v4    # "fixedDate":J
label_cond_a9:
	bdate->setDayOfWeek(this->getDayOfWeek(bdate));
	goto label_goto_60;

}
// .method normalizeMonth(Lsun/util/calendar/CalendarDate;)V
void sun::util::calendar::BaseCalendar::normalizeMonth(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	long long cVar0;
	long long cVar1;
	std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> bdate;
	int year;
	long long month;
	long long xm;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	cVar0 = 0xc;
	cVar1 = 0x1;
	bdate = date;
	bdate->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	//    .local v0, "bdate":Lsun/util/calendar/BaseCalendar$Date;
	year = bdate->getNormalizedYear();
	//    .local v1, "year":I
	month = (long long)(bdate->getMonth());
	//    .local v2, "month":J
	if ( (month > 0x0) > 0 ) 
		goto label_cond_2b;
	xm = (cVar1 - month);
	//    .local v4, "xm":J
	bdate->setNormalizedYear((year -  (int)(((xm / cVar0) +  cVar1))));
	bdate->setMonth((int)((0xd - (xm % cVar0))));
	//    .end local v4    # "xm":J
label_cond_2a:
label_goto_2a:
	return;
	// 1756    .line 282
label_cond_2b:
	if ( (month > cVar0) <= 0 )
		goto label_cond_2a;
	bdate->setNormalizedYear((year +  (int)(((month - cVar1) /  cVar0))));
	bdate->setMonth((int)((((month - cVar1) %  cVar0) + cVar1)));
	goto label_goto_2a;

}
// .method public validate(Lsun/util/calendar/CalendarDate;)Z
bool sun::util::calendar::BaseCalendar::validate(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> bdate;
	int month;
	int d;
	int dow;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	cVar0 = 0x1;
	cVar1 = 0x0;
	bdate = date;
	bdate->checkCast("sun::util::calendar::BaseCalendar_S_Date");
	//    .local v0, "bdate":Lsun/util/calendar/BaseCalendar$Date;
	if ( !(bdate->isNormalized()) )  
		goto label_cond_c;
	return cVar0;
	// 1814    .line 196
label_cond_c:
	month = bdate->getMonth();
	//    .local v3, "month":I
	if ( month <  cVar0 )
		goto label_cond_16;
	if ( month <= 0xc )
		goto label_cond_17;
label_cond_16:
	return cVar1;
	// 1832    .line 200
label_cond_17:
	d = bdate->getDayOfMonth();
	//    .local v1, "d":I
	if ( d <= 0 )
		goto label_cond_27;
	if ( d <= this->getMonthLength(bdate->getNormalizedYear(), month) )
		goto label_cond_28;
label_cond_27:
	return cVar1;
	// 1856    .line 204
label_cond_28:
	dow = bdate->getDayOfWeek();
	//    .local v2, "dow":I
	if ( dow == -0x80000000 )
		goto label_cond_37;
	if ( dow == this->getDayOfWeek(bdate) )
		goto label_cond_37;
	return cVar1;
	// 1877    .line 209
label_cond_37:
	if ( this->validateTime(date) )     
		goto label_cond_3e;
	return cVar1;
	// 1888    .line 213
label_cond_3e:
	bdate->setNormalized(cVar0);
	return cVar0;

}


