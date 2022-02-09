#ifndef __sun_util_calendar_JulianCalendar_S_Date__
#define __sun_util_calendar_JulianCalendar_S_Date__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\JulianCalendar$Date.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.Era.h"

namespace sun::util::calendar{
class JulianCalendar_S_Date : public sun::util::calendar::BaseCalendar_S_Date {
protected:
	JulianCalendar_S_Date();
	JulianCalendar_S_Date(std::shared_ptr<java::util::TimeZone> zone);
	void virtual setKnownEra(std::shared_ptr<sun::util::calendar::Era> era);
private:
public:
	int virtual getNormalizedYear();
	std::shared_ptr<sun::util::calendar::JulianCalendar_S_Date> virtual setEra(std::shared_ptr<sun::util::calendar::Era> era);
	void virtual setNormalizedYear(int year);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~JulianCalendar_S_Date(){
	}

}; // class JulianCalendar_S_Date
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_JulianCalendar_S_Date__

