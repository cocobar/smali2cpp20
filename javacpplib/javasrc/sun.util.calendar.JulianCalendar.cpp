// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\JulianCalendar.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarUtils.h"
#include "sun.util.calendar.Era.h"
#include "sun.util.calendar.JulianCalendar_S_Date.h"
#include "sun.util.calendar.JulianCalendar.h"

static sun::util::calendar::JulianCalendar::_assertionsDisabled;
static sun::util::calendar::JulianCalendar::BCE = 0x0;
static sun::util::calendar::JulianCalendar::CE = 0x1;
static sun::util::calendar::JulianCalendar::JULIAN_EPOCH = -0x1;
static sun::util::calendar::JulianCalendar::eras;
// .method static synthetic -get0()[Lsun/util/calendar/Era;
std::shared_ptr<sun::util::calendar::Era> sun::util::calendar::JulianCalendar::_get0()
{
	
	return sun::util::calendar::JulianCalendar::eras;

}
// .method static constructor <clinit>()V
void sun::util::calendar::JulianCalendar::static_cinit()
{
	
	int cVar0;
	bool cVar1;
	std::shared<std::vector<std::vector<sun::util::calendar::Era>>> cVar2;
	std::shared_ptr<sun::util::calendar::Era> cVar3;
	std::shared_ptr<sun::util::calendar::Era> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	sun::util::calendar::JulianCalendar::_assertionsDisabled = ( sun::util::calendar::JulianCalendar()->desiredAssertionStatus() ^ 0x1);
	cVar2 = std::make_shared<std::vector<std::vector<sun::util::calendar::Era>>>(0x2);
	cVar3 = std::make_shared<sun::util::calendar::Era>(std::make_shared<java::lang::String>(std::make_shared<char[]>("BeforeCommonEra")), std::make_shared<java::lang::String>(std::make_shared<char[]>("B.C.E.")), -0x8000000000000000L, cVar1);
	cVar2[cVar1] = cVar3;
	cVar4 = std::make_shared<sun::util::calendar::Era>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CommonEra")), std::make_shared<java::lang::String>(std::make_shared<char[]>("C.E.")), -0x388318df9000L, cVar0);
	cVar2[cVar0] = cVar4;
	sun::util::calendar::JulianCalendar::eras = cVar2;
	return;

}
// .method constructor <init>()V
sun::util::calendar::JulianCalendar::JulianCalendar()
{
	
	// 098    invoke-direct {p0}, Lsun/util/calendar/BaseCalendar;-><init>()V
	this->setEras(sun::util::calendar::JulianCalendar::eras);
	return;

}
// .method public getCalendarDate()Lsun/util/calendar/JulianCalendar$Date;
std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> sun::util::calendar::JulianCalendar::getCalendarDate()
{
	
	return this->getCalendarDate(java::lang::System::currentTimeMillis({const[class].FS-Param}), this->newCalendarDate());

}
// .method public getCalendarDate(J)Lsun/util/calendar/JulianCalendar$Date;
std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> sun::util::calendar::JulianCalendar::getCalendarDate(long long millis)
{
	
	//    .param p1, "millis"    # J
	return this->getCalendarDate(millis, this->newCalendarDate());

}
// .method public getCalendarDate(JLjava/util/TimeZone;)Lsun/util/calendar/JulianCalendar$Date;
std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> sun::util::calendar::JulianCalendar::getCalendarDate(long long millis,std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "millis"    # J
	//    .param p3, "zone"    # Ljava/util/TimeZone;
	return this->getCalendarDate(millis, this->newCalendarDate(zone));

}
// .method public getCalendarDate(JLsun/util/calendar/CalendarDate;)Lsun/util/calendar/JulianCalendar$Date;
std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> sun::util::calendar::JulianCalendar::getCalendarDate(long long millis,std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> cVar0;
	
	//    .param p1, "millis"    # J
	//    .param p3, "date"    # Lsun/util/calendar/CalendarDate;
	cVar0 = this->getCalendarDate(millis, date);
	cVar0->checkCast("sun::util::calendar::JulianCalendar_S_Date");
	return cVar0;

}
// .method public getCalendarDateFromFixedDate(Lsun/util/calendar/CalendarDate;J)V
void sun::util::calendar::JulianCalendar::getCalendarDateFromFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> date,long long fixedDate)
{
	
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> jdate;
	long long fd;
	int year;
	int priorDays;
	bool isLeap;
	int cVar0;
	int month;
	int dayOfWeek;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	//    .param p2, "fixedDate"    # J
	jdate = date;
	jdate->checkCast("sun::util::calendar::JulianCalendar_S_Date");
	//    .local v5, "jdate":Lsun/util/calendar/JulianCalendar$Date;
	fd = (((fixedDate - -0x1) *  0x4) + 0x5b8);
	//    .local v2, "fd":J
	if ( (fd > 0x0) < 0 ) 
		goto label_cond_6a;
	year = (int)((fd / 0x5b5));
	//    .local v8, "year":I
label_goto_19:
	priorDays = (int)((fixedDate - this->getFixedDate(year, 0x1, 0x1, jdate)));
	//    .local v7, "priorDays":I
	isLeap = sun::util::calendar::CalendarUtils::isJulianLeapYear(year);
	//    .local v4, "isLeap":Z
	if ( (fixedDate > this->getFixedDate(year, 0x3, 0x1, jdate)) < 0 ) 
		goto label_cond_34;
	if ( !(isLeap) )  
		goto label_cond_72;
	cVar0 = 0x1;
label_goto_33:
label_cond_34:
	month = ( ( priorDays * 0xc) + 0x175);
	//    .local v6, "month":I
	if ( month <= 0 )
		goto label_cond_74;
	month = ( month / 0x16f);
label_goto_3c:
	//    .local v0, "dayOfMonth":I
	dayOfWeek = sun::util::calendar::JulianCalendar::getDayOfWeekFromFixedDate(fixedDate);
	//    .local v1, "dayOfWeek":I
	if ( sun::util::calendar::JulianCalendar::_assertionsDisabled )     
		goto label_cond_7b;
	if ( dayOfWeek > 0 ) 
		goto label_cond_7b;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::AssertionError>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("negative day of week ")))->append(dayOfWeek)->toString());
	// throw
	throw cVar1;
	// 378    .line 192
	// 379    .end local v0    # "dayOfMonth":I
	// 380    .end local v1    # "dayOfWeek":I
	// 381    .end local v4    # "isLeap":Z
	// 382    .end local v6    # "month":I
	// 383    .end local v7    # "priorDays":I
	// 384    .end local v8    # "year":I
label_cond_6a:
	year = (int)(sun::util::calendar::CalendarUtils::floorDivide(fd, 0x5b5));
	//    .restart local v8    # "year":I
	goto label_goto_19;
	// 397    .line 197
	// 398    .restart local v4    # "isLeap":Z
	// 399    .restart local v7    # "priorDays":I
label_cond_72:
	cVar0 = 0x2;
	goto label_goto_33;
	// 405    .line 203
	// 406    .restart local v6    # "month":I
label_cond_74:
	month = sun::util::calendar::CalendarUtils::floorDivide(month, 0x16f);
	goto label_goto_3c;
	// 416    .line 208
	// 417    .restart local v0    # "dayOfMonth":I
	// 418    .restart local v1    # "dayOfWeek":I
label_cond_7b:
	jdate->setNormalizedYear(year);
	jdate->setMonth(month);
	jdate->setDayOfMonth(( (int)((fixedDate - this->getFixedDate(year, month, 0x1, jdate))) + 0x1));
	jdate->setDayOfWeek(dayOfWeek);
	jdate->setLeapYear(isLeap);
	jdate->setNormalized(0x1);
	return;

}
// .method public getDayOfWeek(Lsun/util/calendar/CalendarDate;)I
int sun::util::calendar::JulianCalendar::getDayOfWeek(std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	//    .param p1, "date"    # Lsun/util/calendar/CalendarDate;
	//    .local v0, "fixedDate":J
	return sun::util::calendar::JulianCalendar::getDayOfWeekFromFixedDate(this->getFixedDate(date));

}
// .method public getFixedDate(IIILsun/util/calendar/BaseCalendar$Date;)J
long long sun::util::calendar::JulianCalendar::getFixedDate(int jyear,int month,int dayOfMonth,std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> cache)
{
	
	int isJan1;
	long long y;
	long long days;
	int cVar0;
	int cVar1;
	
	//    .param p1, "jyear"    # I
	//    .param p2, "month"    # I
	//    .param p3, "dayOfMonth"    # I
	//    .param p4, "cache"    # Lsun/util/calendar/BaseCalendar$Date;
	if ( month != 0x1 )
		goto label_cond_16;
	if ( dayOfMonth != 0x1 )
		goto label_cond_16;
	isJan1 = 0x1;
	//    .local v2, "isJan1":Z
label_goto_7:
	if ( !(cache) )  
		goto label_cond_25;
	if ( !(cache->hit(jyear)) )  
		goto label_cond_25;
	if ( !(isJan1) )  
		goto label_cond_18;
	return cache->getCachedJan1();
	// 502    .line 149
	// 503    .end local v2    # "isJan1":Z
label_cond_16:
	0x0;
	//    .restart local v2    # "isJan1":Z
	goto label_goto_7;
	// 510    .line 156
label_cond_18:
	return ((cache->getCachedJan1() +  this->getDayOfYear(jyear, month, dayOfMonth)) -  0x1);
	// 528    .line 159
label_cond_25:
	y = (long long)(jyear);
	//    .local v4, "y":J
	days = ((((y - 0x1) *  0x16d) +  -0x2) + (long long)(dayOfMonth));
	//    .local v0, "days":J
	if ( (y > 0x0) <= 0 )
		goto label_cond_6a;
	days = (days +  ((y - 0x1) /  0x4));
label_goto_41:
	if ( month <= 0 )
		goto label_cond_76;
	days = (days +  ((((long long)(month) *  0x16f) -  0x16a) /  0xc));
label_goto_4e:
	if ( month <= 0x2 )
		goto label_cond_5a;
	if ( !(sun::util::calendar::CalendarUtils::isJulianLeapYear(jyear)) )  
		goto label_cond_85;
	cVar0 = 0x1;
label_goto_58:
	days = (days -  (long long)(cVar0));
label_cond_5a:
	if ( !(cache) )  
		goto label_cond_69;
	if ( !(isJan1) )  
		goto label_cond_69;
	if ( !(sun::util::calendar::CalendarUtils::isJulianLeapYear(jyear)) )  
		goto label_cond_87;
	cVar1 = 0x16e;
label_goto_66:
	cache->setCache(jyear, days, cVar1);
label_cond_69:
	return days;
	// 632    .line 166
label_cond_6a:
	days = (days +  sun::util::calendar::CalendarUtils::floorDivide((y - 0x1), 0x4));
	goto label_goto_41;
	// 648    .line 171
label_cond_76:
	days = (days +  sun::util::calendar::CalendarUtils::floorDivide((((long long)(month) *  0x16f) -  0x16a), 0xc));
	goto label_goto_4e;
	// 670    .line 174
label_cond_85:
	cVar0 = 0x2;
	goto label_goto_58;
	// 676    .line 179
label_cond_87:
	cVar1 = 0x16d;
	goto label_goto_66;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::JulianCalendar::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("julian"));

}
// .method public getYearFromFixedDate(J)I
int sun::util::calendar::JulianCalendar::getYearFromFixedDate(long long fixedDate)
{
	
	//    .param p1, "fixedDate"    # J
	//    .local v0, "year":I
	return (int)(sun::util::calendar::CalendarUtils::floorDivide((((fixedDate - -0x1) *  0x4) +  0x5b8), 0x5b5));

}
// .method isLeapYear(I)Z
bool sun::util::calendar::JulianCalendar::isLeapYear(int jyear)
{
	
	//    .param p1, "jyear"    # I
	return sun::util::calendar::CalendarUtils::isJulianLeapYear(jyear);

}
// .method public newCalendarDate()Lsun/util/calendar/JulianCalendar$Date;
std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> sun::util::calendar::JulianCalendar::newCalendarDate()
{
	
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> cVar0;
	
	cVar0 = std::make_shared<sun::util::calendar::JulianCalendar_S_Date>();
	return cVar0;

}
// .method public newCalendarDate(Ljava/util/TimeZone;)Lsun/util/calendar/JulianCalendar$Date;
std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> sun::util::calendar::JulianCalendar::newCalendarDate(std::shared_ptr<java::util::TimeZone> zone)
{
	
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> cVar0;
	
	//    .param p1, "zone"    # Ljava/util/TimeZone;
	cVar0 = std::make_shared<sun::util::calendar::JulianCalendar_S_Date>(zone);
	return cVar0;

}


