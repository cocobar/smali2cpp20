#ifndef __sun_util_calendar_LocalGregorianCalendar_S_Date__
#define __sun_util_calendar_LocalGregorianCalendar_S_Date__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\LocalGregorianCalendar$Date.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.BaseCalendar_S_Date.h"
#include "sun.util.calendar.Era.h"

namespace sun::util::calendar{
class LocalGregorianCalendar_S_Date : public sun::util::calendar::BaseCalendar_S_Date {
protected:
	LocalGregorianCalendar_S_Date();
	LocalGregorianCalendar_S_Date(std::shared_ptr<java::util::TimeZone> zone);
private:
	int gregorianYear;
public:
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual addYear(int localYear);
	int virtual getNormalizedYear();
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual setEra(std::shared_ptr<sun::util::calendar::Era> era);
	void virtual setLocalEra(std::shared_ptr<sun::util::calendar::Era> era);
	void virtual setLocalYear(int year);
	void virtual setNormalizedYear(int normalizedYear);
	std::shared_ptr<sun::util::calendar::LocalGregorianCalendar_S_Date> virtual setYear(int localYear);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~LocalGregorianCalendar_S_Date(){
	}

}; // class LocalGregorianCalendar_S_Date
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_LocalGregorianCalendar_S_Date__

