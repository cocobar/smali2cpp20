#ifndef __sun_util_calendar_JulianCalendar__
#define __sun_util_calendar_JulianCalendar__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\JulianCalendar.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.BaseCalendar.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.Era.h"
#include "sun.util.calendar.JulianCalendar_S_Date.h"

namespace sun::util::calendar{
class JulianCalendar : public sun::util::calendar::BaseCalendar {
protected:
private:
	static int BCE;
	static int CE;
	static int JULIAN_EPOCH;
	static std::shared_ptr<std::vector<sun::util::calendar::Era>> eras;
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<sun::util::calendar::Era> _get0();
	static void static_cinit();
	JulianCalendar();
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> virtual getCalendarDate();
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> virtual getCalendarDate(long long millis);
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> virtual getCalendarDate(long long millis,std::shared_ptr<java::util::TimeZone> zone);
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> virtual getCalendarDate(long long millis,std::shared_ptr<sun::util::calendar::CalendarDate> date);
	void virtual getCalendarDateFromFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> date,long long fixedDate);
	int virtual getDayOfWeek(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	long long virtual getFixedDate(int jyear,int month,int dayOfMonth,std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> cache);
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual getYearFromFixedDate(long long fixedDate);
	bool virtual isLeapYear(int jyear);
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> virtual newCalendarDate();
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> virtual newCalendarDate(std::shared_ptr<java::util::TimeZone> zone);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::calendar::JulianCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~JulianCalendar(){
	}

}; // class JulianCalendar
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_JulianCalendar__

