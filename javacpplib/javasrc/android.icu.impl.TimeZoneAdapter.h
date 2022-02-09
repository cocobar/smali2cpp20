#ifndef __android_icu_impl_TimeZoneAdapter__
#define __android_icu_impl_TimeZoneAdapter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneAdapter.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZone.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl{
class TimeZoneAdapter : public java::util::TimeZone {
protected:
private:
	std::shared_ptr<android::icu::util::TimeZone> zone;
public:
	static long long serialVersionUID;
	TimeZoneAdapter(std::shared_ptr<android::icu::util::TimeZone> zone);
	static std::shared_ptr<java::util::TimeZone> wrap(std::shared_ptr<android::icu::util::TimeZone> tz);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual getOffset(int era,int year,int month,int day,int dayOfWeek,int millis);
	int virtual getRawOffset();
	bool virtual hasSameRules(std::shared_ptr<java::util::TimeZone> other);
	int virtual hashCode();
	bool virtual inDaylightTime(std::shared_ptr<java::util::Date> date);
	void virtual setID(std::shared_ptr<java::lang::String> ID);
	void virtual setRawOffset(int offsetMillis);
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<android::icu::util::TimeZone> virtual unwrap();
	bool virtual useDaylightTime();
public:
	virtual ~TimeZoneAdapter(){
	}

}; // class TimeZoneAdapter
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneAdapter__

