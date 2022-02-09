#ifndef __android_icu_util_TimeZoneTransition__
#define __android_icu_util_TimeZoneTransition__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZoneTransition.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZoneRule.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class TimeZoneTransition : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::util::TimeZoneRule> from;
	long long time;
	std::shared_ptr<android::icu::util::TimeZoneRule> to;
public:
	TimeZoneTransition(long long time,std::shared_ptr<android::icu::util::TimeZoneRule> from,std::shared_ptr<android::icu::util::TimeZoneRule> to);
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual getFrom();
	long long virtual getTime();
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual getTo();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~TimeZoneTransition(){
	}

}; // class TimeZoneTransition
}; // namespace android::icu::util

#endif //__android_icu_util_TimeZoneTransition__

