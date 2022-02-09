// CPP L:\smali2cpp20\x64\Release\out\sun\util\calendar\Gregorian.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.Gregorian_S_Date.h"
#include "sun.util.calendar.Gregorian.h"

// .method constructor <init>()V
sun::util::calendar::Gregorian::Gregorian()
{
	
	// 020    invoke-direct {p0}, Lsun/util/calendar/BaseCalendar;-><init>()V
	return;

}
// .method public getCalendarDate()Lsun/util/calendar/Gregorian$Date;
std::shared_ptr<sun::util::calendar::Gregorian_S_Date> sun::util::calendar::Gregorian::getCalendarDate()
{
	
	return this->getCalendarDate(java::lang::System::currentTimeMillis({const[class].FS-Param}), this->newCalendarDate());

}
// .method public getCalendarDate(J)Lsun/util/calendar/Gregorian$Date;
std::shared_ptr<sun::util::calendar::Gregorian_S_Date> sun::util::calendar::Gregorian::getCalendarDate(long long millis)
{
	
	//    .param p1, "millis"    # J
	return this->getCalendarDate(millis, this->newCalendarDate());

}
// .method public getCalendarDate(JLjava/util/TimeZone;)Lsun/util/calendar/Gregorian$Date;
std::shared_ptr<sun::util::calendar::Gregorian_S_Date> sun::util::calendar::Gregorian::getCalendarDate(long long millis,std::shared_ptr<java::util::TimeZone> zone)
{
	
	//    .param p1, "millis"    # J
	//    .param p3, "zone"    # Ljava/util/TimeZone;
	return this->getCalendarDate(millis, this->newCalendarDate(zone));

}
// .method public getCalendarDate(JLsun/util/calendar/CalendarDate;)Lsun/util/calendar/Gregorian$Date;
std::shared_ptr<sun::util::calendar::Gregorian_S_Date> sun::util::calendar::Gregorian::getCalendarDate(long long millis,std::shared_ptr<sun::util::calendar::CalendarDate> date)
{
	
	std::shared_ptr<sun::util::calendar::Gregorian_S_Date> cVar0;
	
	//    .param p1, "millis"    # J
	//    .param p3, "date"    # Lsun/util/calendar/CalendarDate;
	cVar0 = this->getCalendarDate(millis, date);
	cVar0->checkCast("sun::util::calendar::Gregorian_S_Date");
	return cVar0;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::calendar::Gregorian::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"));

}
// .method public newCalendarDate()Lsun/util/calendar/Gregorian$Date;
std::shared_ptr<sun::util::calendar::Gregorian_S_Date> sun::util::calendar::Gregorian::newCalendarDate()
{
	
	std::shared_ptr<sun::util::calendar::Gregorian_S_Date> cVar0;
	
	cVar0 = std::make_shared<sun::util::calendar::Gregorian_S_Date>();
	return cVar0;

}
// .method public newCalendarDate(Ljava/util/TimeZone;)Lsun/util/calendar/Gregorian$Date;
std::shared_ptr<sun::util::calendar::Gregorian_S_Date> sun::util::calendar::Gregorian::newCalendarDate(std::shared_ptr<java::util::TimeZone> zone)
{
	
	std::shared_ptr<sun::util::calendar::Gregorian_S_Date> cVar0;
	
	//    .param p1, "zone"    # Ljava/util/TimeZone;
	cVar0 = std::make_shared<sun::util::calendar::Gregorian_S_Date>(zone);
	return cVar0;

}


