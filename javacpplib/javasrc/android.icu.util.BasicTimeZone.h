#ifndef __android_icu_util_BasicTimeZone__
#define __android_icu_util_BasicTimeZone__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\BasicTimeZone.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "java.lang.String.h"

namespace android::icu::util{
class BasicTimeZone : public android::icu::util::TimeZone {
protected:
	static int FORMER_LATTER_MASK;
	static int STD_DST_MASK;
	BasicTimeZone();
	BasicTimeZone(std::shared_ptr<java::lang::String> ID);
private:
	static long long MILLIS_PER_YEAR;
	static long long serialVersionUID;
public:
	static int LOCAL_DST;
	static int LOCAL_FORMER;
	static int LOCAL_LATTER;
	static int LOCAL_STD;
	std::shared_ptr<android::icu::util::TimeZoneTransition> getNextTransition(long long var0,bool var1) = 0;
	void virtual getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets);
	std::shared_ptr<android::icu::util::TimeZoneTransition> getPreviousTransition(long long var0,bool var1) = 0;
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual getSimpleTimeZoneRulesNear(long long date);
	std::shared_ptr<android::icu::util::TimeZoneRule> getTimeZoneRules() = 0;
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual getTimeZoneRules(long long start);
	bool virtual hasEquivalentTransitions(std::shared_ptr<android::icu::util::TimeZone> tz,long long start,long long end);
	bool virtual hasEquivalentTransitions(std::shared_ptr<android::icu::util::TimeZone> tz,long long start,long long end,bool ignoreDstAmount);
public:
	virtual ~BasicTimeZone(){
	}

}; // class BasicTimeZone
}; // namespace android::icu::util

#endif //__android_icu_util_BasicTimeZone__

