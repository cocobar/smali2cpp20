#ifndef __sun_util_calendar_BaseCalendar__
#define __sun_util_calendar_BaseCalendar__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\BaseCalendar.smali
#include "java2ctype.h"
#include "sun.util.calendar.AbstractCalendar.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.CalendarDate.h"

namespace sun::util::calendar{
class BaseCalendar : public sun::util::calendar::AbstractCalendar {
protected:
	bool virtual isLeapYear(std::shared_ptr<sun::util::calendar::CalendarDate> date);
private:
	static int BASE_YEAR;
	static std::shared_ptr<int[]> FIXED_DATES;
	int virtual getMonthLength(int year,int month);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<int[]> ACCUMULATED_DAYS_IN_MONTH;
	static std::shared_ptr<int[]> ACCUMULATED_DAYS_IN_MONTH_LEAP;
	static int APRIL;
	static int AUGUST;
	static std::shared_ptr<int[]> DAYS_IN_MONTH;
	static int DECEMBER;
	static int FEBRUARY;
	static int FRIDAY;
	static int JANUARY;
	static int JULY;
	static int JUNE;
	static int MARCH;
	static int MAY;
	static int MONDAY;
	static int NOVEMBER;
	static int OCTOBER;
	static int SATURDAY;
	static int SEPTEMBER;
	static int SUNDAY;
	static int THURSDAY;
	static int TUESDAY;
	static int WEDNESDAY;
	static void static_cinit();
	BaseCalendar();
	static int getDayOfWeekFromFixedDate(long long fixedDate);
	void virtual getCalendarDateFromFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> date,long long fixedDate);
	int virtual getDayOfWeek(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	long long virtual getDayOfYear(int year,int month,int dayOfMonth);
	long long virtual getDayOfYear(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	long long virtual getFixedDate(int year,int month,int dayOfMonth,std::shared_ptr<sun::util::calendar::BaseCalendar_S_Date> cache);
	long long virtual getFixedDate(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	int virtual getGregorianYearFromFixedDate(long long fixedDate);
	int virtual getMonthLength(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	int virtual getYearFromFixedDate(long long fixedDate);
	int virtual getYearLength(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	int virtual getYearLengthInMonths(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	bool virtual isLeapYear(int normalizedYear);
	bool virtual normalize(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	void virtual normalizeMonth(std::shared_ptr<sun::util::calendar::CalendarDate> date);
	bool virtual validate(std::shared_ptr<sun::util::calendar::CalendarDate> date);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::calendar::BaseCalendar::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BaseCalendar(){
	}

}; // class BaseCalendar
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_BaseCalendar__

