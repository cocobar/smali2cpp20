#ifndef __sun_util_calendar_LocalGregorianCalendar__
#define __sun_util_calendar_LocalGregorianCalendar__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\LocalGregorianCalendar.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.Era.h"
#include "sun.util.calendar.LocalGregorianCalendar_S_Date.h"

namespace sun::util::calendar{
class LocalGregorianCalendar : public sun::util::calendar::BaseCalendar {
protected:
private:
	std::shared_ptr<std::vector<sun::util::calendar::Era>> eras;
	std::shared_ptr<java::lang::String> name;
	LocalGregorianCalendar(std::shared_ptr<java::lang::String> name,std::shared_ptr<std::vector<sun::util::calendar::Era>> eras);
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual adjustYear(std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> ldate,long long millis,int zoneOffset);
	bool virtual validateEra(std::shared_ptr<sun::util::calendar::Era> era);
public:
	static std::shared_ptr<sun::util::calendar::LocalGregorianCalendar> getLocalGregorianCalendar(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual getCalendarDate();
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual getCalendarDate(long long millis);
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual getCalendarDate(long long millis,std::shared_ptr<java::util::TimeZone> zone);
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual getCalendarDate(long long millis,std::shared_ptr<sun::util::calendar::CalendarDate> date);
	void virtual getCalendarDateFromFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> date,long long fixedDate);
	std::shared_ptr<java::lang::String> virtual getName();
	bool virtual isLeapYear(int gregorianYear);
	bool virtual isLeapYear(std::shared_ptr<sun::util::calendar::Era> era,int year);
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual newCalendarDate();
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual newCalendarDate(std::shared_ptr<java::util::TimeZone> zone);
	bool virtual normalize(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	void virtual normalizeMonth(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	void virtual normalizeYear(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	bool virtual validate(std::shared_ptr<sun::util::calendar::CalendarDate> date);
public:
	virtual ~LocalGregorianCalendar(){
	}

}; // class LocalGregorianCalendar
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_LocalGregorianCalendar__

