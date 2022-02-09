// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\BaseCalendar$Date.smali
#include "java2ctype.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.CalendarDate.h"

// .method protected constructor <init>()V
sun::util::calendar::BaseCalendar_S_Date::BaseCalendar_S_Date()
{
	
	// 031    invoke-direct {p0}, Lsun/util/calendar/CalendarDate;-><init>()V
	this->cachedYear = 0x7d4;
	this->cachedFixedDateJan1 = 0xb29bd;
	this->cachedFixedDateNextJan1 = (this->cachedFixedDateJan1 +  0x16e);
	return;

}
// .method protected constructor <init>(Ljava/util/TimeZone;)V
sun::util::calendar::BaseCalendar_S_Date::BaseCalendar_S_Date(std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "zone"    # Ljava/util/TimeZone;
	sun::util::calendar::CalendarDate::(zone);
	this->cachedYear = 0x7d4;
	this->cachedFixedDateJan1 = 0xb29bd;
	this->cachedFixedDateNextJan1 = (this->cachedFixedDateJan1 +  0x16e);
	return;

}
// .method protected getCachedJan1()J
long long sun::util::calendar::BaseCalendar_S_Date::getCachedJan1()
{
	
	return this->cachedFixedDateJan1;

}
// .method protected getCachedYear()I
int sun::util::calendar::BaseCalendar_S_Date::getCachedYear()
{
	
	return this->cachedYear;

}
// .method protected final hit(I)Z
bool sun::util::calendar::BaseCalendar_S_Date::hit(int year)
{
	
	bool cVar0;
	
	//    .param p1, "year"    # I
	if ( year != this->cachedYear )
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method protected final hit(J)Z
bool sun::util::calendar::BaseCalendar_S_Date::hit(long long fixedDate)
{
	
	bool cVar1;
	
	//    .param p1, "fixedDate"    # J
	cVar1 = 0x0;
	if ( (fixedDate > this->cachedFixedDateJan1) < 0 ) 
		goto label_cond_e;
	if ( (fixedDate > this->cachedFixedDateNextJan1) >= 0 )
		goto label_cond_e;
	cVar1 = 0x1;
label_cond_e:
	return cVar1;

}
// .method protected setCache(IJI)V
void sun::util::calendar::BaseCalendar_S_Date::setCache(int year,long long jan1,int len)
{
	
	//    .param p1, "year"    # I
	//    .param p2, "jan1"    # J
	//    .param p4, "len"    # I
	this->cachedYear = year;
	this->cachedFixedDateJan1 = jan1;
	this->cachedFixedDateNextJan1 = ((long long)(len) +  jan1);
	return;

}
// .method public setNormalizedDate(III)Lsun/util/calendar/BaseCalendar$Date;
std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> sun::util::calendar::BaseCalendar_S_Date::setNormalizedDate(int normalizedYear,int month,int dayOfMonth)
{
	
	//    .param p1, "normalizedYear"    # I
	//    .param p2, "month"    # I
	//    .param p3, "dayOfMonth"    # I
	this->setNormalizedYear(normalizedYear);
	this->setMonth(month)->setDayOfMonth(dayOfMonth);
	return this;

}


