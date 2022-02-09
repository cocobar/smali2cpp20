#ifndef __android_icu_util_TimeZone_S_ConstantZone__
#define __android_icu_util_TimeZone_S_ConstantZone__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZone$ConstantZone.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZone.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::util{
class TimeZone_S_ConstantZone : public android::icu::util::TimeZone {
protected:
private:
	static long long serialVersionUID;
	bool isFrozen;
	int rawOffset;
	TimeZone_S_ConstantZone(int rawOffset,std::shared_ptr<java::lang::String> ID);
public:
	TimeZone_S_ConstantZone(int rawOffset,std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::util::TimeZone_S_ConstantZone> _this2);
	std::shared_ptr<android::icu::util::TimeZone> virtual cloneAsThawed();
	std::shared_ptr<android::icu::util::TimeZone> virtual freeze();
	int virtual getOffset(int era,int year,int month,int day,int dayOfWeek,int milliseconds);
	int virtual getRawOffset();
	bool virtual inDaylightTime(std::shared_ptr<java::util::Date> date);
	bool virtual isFrozen();
	void virtual setRawOffset(int offsetMillis);
	bool virtual useDaylightTime();
public:
	virtual ~TimeZone_S_ConstantZone(){
	}

}; // class TimeZone_S_ConstantZone
}; // namespace android::icu::util

#endif //__android_icu_util_TimeZone_S_ConstantZone__

