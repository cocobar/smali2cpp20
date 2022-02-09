#ifndef __sun_util_calendar_BaseCalendar_S_Date__
#define __sun_util_calendar_BaseCalendar_S_Date__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\BaseCalendar$Date.smali
#include "java2ctype.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.CalendarDate.h"

namespace sun::util::calendar{
class BaseCalendar_S_Date : public sun::util::calendar::CalendarDate {
protected:
	BaseCalendar_S_Date();
	BaseCalendar_S_Date(std::shared_ptr<java::util::TimeZone> zone);
	long long virtual getCachedJan1();
	int virtual getCachedYear();
	bool virtual hit(int year);
	bool virtual hit(long long fixedDate);
	void virtual setCache(int year,long long jan1,int len);
private:
public:
	long long cachedFixedDateJan1;
	long long cachedFixedDateNextJan1;
	int cachedYear;
	int getNormalizedYear() = 0;
	std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> virtual setNormalizedDate(int normalizedYear,int month,int dayOfMonth);
	void setNormalizedYear(int var0) = 0;
public:
	virtual ~BaseCalendar_S_Date(){
	}

}; // class BaseCalendar_S_Date
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_BaseCalendar_S_Date__

