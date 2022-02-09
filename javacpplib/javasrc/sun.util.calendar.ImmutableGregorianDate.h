#ifndef __sun_util_calendar_ImmutableGregorianDate__
#define __sun_util_calendar_ImmutableGregorianDate__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\ImmutableGregorianDate.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.Era.h"

namespace sun::util::calendar{
class ImmutableGregorianDate : public sun::util::calendar::BaseCalendar_S_Date {
protected:
	void virtual setDayOfWeek(int dayOfWeek);
	void virtual setDaylightSaving(int daylightSaving);
	void virtual setLocale(std::shared_ptr<java::util::Locale> loc);
	void virtual setNormalized(bool normalized);
	void virtual setTimeOfDay(long long fraction);
	void virtual setZoneOffset(int offset);
private:
	std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> date;
	void virtual unsupported();
public:
	ImmutableGregorianDate(std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> date);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual addDate(int year,int month,int dayOfMonth);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual addDayOfMonth(int n);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual addHours(int n);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual addMillis(int n);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual addMinutes(int n);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual addMonth(int n);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual addSeconds(int n);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual addTimeOfDay(int hours,int minutes,int seconds,int millis);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual addYear(int n);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual getDayOfMonth();
	int virtual getDayOfWeek();
	int virtual getDaylightSaving();
	std::shared_ptr<sun::util::calendar::Era> virtual getEra();
	int virtual getHours();
	int virtual getMillis();
	int virtual getMinutes();
	int virtual getMonth();
	int virtual getNormalizedYear();
	int virtual getSeconds();
	long long virtual getTimeOfDay();
	int virtual getYear();
	std::shared_ptr<java::util::TimeZone> virtual getZone();
	int virtual getZoneOffset();
	int virtual hashCode();
	bool virtual isDaylightTime();
	bool virtual isLeapYear();
	bool virtual isNormalized();
	bool virtual isSameDate(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	bool virtual isStandardTime();
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setDate(int year,int month,int dayOfMonth);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setDayOfMonth(int date);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setEra(std::shared_ptr<sun::util::calendar::Era> era);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setHours(int hours);
	void virtual setLeapYear(bool leapYear);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setMillis(int millis);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setMinutes(int minutes);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setMonth(int month);
	void virtual setNormalizedYear(int normalizedYear);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setSeconds(int seconds);
	void virtual setStandardTime(bool standardTime);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setTimeOfDay(int hours,int minutes,int seconds,int millis);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setYear(int year);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual setZone(std::shared_ptr<java::util::TimeZone> zoneinfo);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~ImmutableGregorianDate(){
	}

}; // class ImmutableGregorianDate
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_ImmutableGregorianDate__

