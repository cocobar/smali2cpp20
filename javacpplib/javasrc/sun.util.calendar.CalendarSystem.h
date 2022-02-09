#ifndef __sun_util_calendar_CalendarSystem__
#define __sun_util_calendar_CalendarSystem__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\CalendarSystem.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Properties.h"
#include "java.util.TimeZone.h"
#include "java.util.concurrent.ConcurrentMap.h"
#include "sun.util.calendar.CalendarDate.h"
#include "sun.util.calendar.Era.h"
#include "sun.util.calendar.Gregorian.h"

namespace sun::util::calendar{
class CalendarSystem : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::util::calendar::Gregorian> GREGORIAN_INSTANCE;
	static std::shared_ptr<java::util::concurrent::ConcurrentMap<java::lang::String,sun::util::calendar::CalendarSystem>> calendars;
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::Class<java::lang::Object>>> names;
public:
	static void static_cinit();
	CalendarSystem();
	static std::shared_ptr<sun::util::calendar::CalendarSystem> forName(std::shared_ptr<java::lang::String> calendarName);
	static std::shared_ptr<java::util::Properties> getCalendarProperties();
	static std::shared_ptr<sun::util::calendar::Gregorian> getGregorianCalendar();
	std::shared_ptr<sun::util::calendar::CalendarDate> getCalendarDate() = 0;
	std::shared_ptr<sun::util::calendar::CalendarDate> getCalendarDate(long long var0) = 0;
	std::shared_ptr<sun::util::calendar::CalendarDate> getCalendarDate(long long var0,std::shared_ptr<java::util::TimeZone> var1) = 0;
	std::shared_ptr<sun::util::calendar::CalendarDate> getCalendarDate(long long var0,std::shared_ptr<sun::util::calendar::CalendarDate> var1) = 0;
	std::shared_ptr<sun::util::calendar::Era> getEra(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<sun::util::calendar::Era> getEras() = 0;
	int getMonthLength(std::shared_ptr<sun::util::calendar::CalendarDate> var0) = 0;
	std::shared_ptr<java::lang::String> getName() = 0;
	std::shared_ptr<sun::util::calendar::CalendarDate> getNthDayOfWeek(int var0,int var1,std::shared_ptr<sun::util::calendar::CalendarDate> var2) = 0;
	long long getTime(std::shared_ptr<sun::util::calendar::CalendarDate> var0) = 0;
	int getWeekLength() = 0;
	int getYearLength(std::shared_ptr<sun::util::calendar::CalendarDate> var0) = 0;
	int getYearLengthInMonths(std::shared_ptr<sun::util::calendar::CalendarDate> var0) = 0;
	std::shared_ptr<sun::util::calendar::CalendarDate> newCalendarDate() = 0;
	std::shared_ptr<sun::util::calendar::CalendarDate> newCalendarDate(std::shared_ptr<java::util::TimeZone> var0) = 0;
	bool normalize(std::shared_ptr<sun::util::calendar::CalendarDate> var0) = 0;
	void setEra(std::shared_ptr<sun::util::calendar::CalendarDate> var0,std::shared_ptr<java::lang::String> var1) = 0;
	std::shared_ptr<sun::util::calendar::CalendarDate> setTimeOfDay(std::shared_ptr<sun::util::calendar::CalendarDate> var0,int var1) = 0;
	bool validate(std::shared_ptr<sun::util::calendar::CalendarDate> var0) = 0;
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::calendar::CalendarSystem::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CalendarSystem(){
	}

}; // class CalendarSystem
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_CalendarSystem__

