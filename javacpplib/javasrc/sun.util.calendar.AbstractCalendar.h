#ifndef __sun_util_calendar_AbstractCalendar__
#define __sun_util_calendar_AbstractCalendar__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\AbstractCalendar.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.CalendarSystem.h"
#include "sun.util.calendar.Era.h"

namespace sun::util::calendar{
class AbstractCalendar : public sun::util::calendar::CalendarSystem {
protected:
	AbstractCalendar();
	void getCalendarDateFromFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> var0,long long var1) = 0;
	long long getFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> var0) = 0;
	long long virtual getTimeOfDay(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	bool isLeapYear(std::shared_ptr<sun::util::calendar::CalendarDate> var0) = 0;
	void virtual setEras(std::shared_ptr<std::vector<sun::util::calendar::Era>> eras);
private:
	std::shared_ptr<std::vector<sun::util::calendar::Era>> eras;
public:
	static int DAY_IN_MILLIS;
	static int EPOCH_OFFSET;
	static int HOUR_IN_MILLIS;
	static int MINUTE_IN_MILLIS;
	static int SECOND_IN_MILLIS;
	static long long getDayOfWeekDateAfter(long long fixedDate,int dayOfWeek);
	static long long getDayOfWeekDateBefore(long long fixedDate,int dayOfWeek);
	static long long getDayOfWeekDateOnOrBefore(long long fixedDate,int dayOfWeek);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual getCalendarDate();
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual getCalendarDate(long long millis);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual getCalendarDate(long long millis,std::shared_ptr<java::util::TimeZone> zone);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual getCalendarDate(long long millis,std::shared_ptr<sun::util::calendar::CalendarDate> date);
	std::shared_ptr<sun::util::calendar::Era> virtual getEra(std::shared_ptr<java::lang::String> eraName);
	std::shared_ptr<sun::util::calendar::Era> virtual getEras();
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual getNthDayOfWeek(int nth,int dayOfWeek,std::shared_ptr<sun::util::calendar::CalendarDate> date);
	long long virtual getTime(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	long long virtual getTimeOfDayValue(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	int virtual getWeekLength();
	int virtual normalizeTime(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	void virtual setEra(std::shared_ptr<sun::util::calendar::CalendarDate> date,std::shared_ptr<java::lang::String> eraName);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setTimeOfDay(std::shared_ptr<sun::util::calendar::CalendarDate> cdate,int fraction);
	bool virtual validateTime(std::shared_ptr<sun::util::calendar::CalendarDate> date);
public:
	virtual ~AbstractCalendar(){
	}

}; // class AbstractCalendar
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_AbstractCalendar__

