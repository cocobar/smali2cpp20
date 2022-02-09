#ifndef __sun_util_calendar_Gregorian_S_Date__
#define __sun_util_calendar_Gregorian_S_Date__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\Gregorian$Date.smali
#include "java2ctype.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"

namespace sun::util::calendar{
class Gregorian_S_Date : public sun::util::calendar::BaseCalendar_S_Date {
protected:
	Gregorian_S_Date();
	Gregorian_S_Date(std::shared_ptr<java::util::TimeZone> zone);
private:
public:
	int virtual getNormalizedYear();
	void virtual setNormalizedYear(int normalizedYear);
public:
	virtual ~Gregorian_S_Date(){
	}

}; // class Gregorian_S_Date
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_Gregorian_S_Date__

