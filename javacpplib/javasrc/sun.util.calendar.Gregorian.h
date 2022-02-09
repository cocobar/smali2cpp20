#ifndef __sun_util_calendar_Gregorian__
#define __sun_util_calendar_Gregorian__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\Gregorian.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.Gregorian_S_Date.h"

namespace sun::util::calendar{
class Gregorian : public sun::util::calendar::BaseCalendar {
protected:
private:
public:
	Gregorian();
	std::shared_ptr<sun::util::calendar::Gregorian_S_Date> virtual getCalendarDate();
	std::shared_ptr<sun::util::calendar::Gregorian_S_Date> virtual getCalendarDate(long long millis);
	std::shared_ptr<sun::util::calendar::Gregorian_S_Date> virtual getCalendarDate(long long millis,std::shared_ptr<java::util::TimeZone> zone);
	std::shared_ptr<sun::util::calendar::Gregorian_S_Date> virtual getCalendarDate(long long millis,std::shared_ptr<sun::util::calendar::CalendarDate> date);
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<sun::util::calendar::Gregorian_S_Date> virtual newCalendarDate();
	std::shared_ptr<sun::util::calendar::Gregorian_S_Date> virtual newCalendarDate(std::shared_ptr<java::util::TimeZone> zone);
public:
	virtual ~Gregorian(){
	}

}; // class Gregorian
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_Gregorian__

