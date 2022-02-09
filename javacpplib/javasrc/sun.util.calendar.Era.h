#ifndef __sun_util_calendar_Era__
#define __sun_util_calendar_Era__
// H L:\smali2cpp20\x64\Release\out\sun\util\calendar\Era.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.TimeZone.h"
#include "sun.util.calendar.CalendarDate.h"

namespace sun::util::calendar{
class Era : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> abbr;
	int hash;
	bool localTime;
	std::shared_ptr<java::lang::String> name;
	long long since;
	std::shared_ptr<sun::util::calendar::CalendarDate> sinceDate;
public:
	Era(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> abbr,long long since,bool localTime);
	bool virtual equals(std::shared_ptr<java::lang::Object> o);
	std::shared_ptr<java::lang::String> virtual getAbbreviation();
	std::shared_ptr<java::lang::String> virtual getDiaplayAbbreviation(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::String> virtual getName();
	long long virtual getSince(std::shared_ptr<java::util::TimeZone> zone);
	std::shared_ptr<sun::util::calendar::CalendarDate> virtual getSinceDate();
	int virtual hashCode();
	bool virtual isLocalTime();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~Era(){
	}

}; // class Era
}; // namespace sun::util::calendar

#endif //__sun_util_calendar_Era__

