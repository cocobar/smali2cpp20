#ifndef __android_icu_util_RuleBasedTimeZone__
#define __android_icu_util_RuleBasedTimeZone__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\RuleBasedTimeZone.smali
#include "java2ctype.h"
#include "android.icu.util.AnnualTimeZoneRule.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.List.h"

namespace android::icu::util{
class RuleBasedTimeZone : public android::icu::util::BasicTimeZone {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<std::vector<android::icu::util::AnnualTimeZoneRule>> finalRules;
	std::shared_ptr<java::util::List<android::icu::util::TimeZoneRule>> historicRules;
	std::shared_ptr<java::util::List<android::icu::util::TimeZoneTransition>> historicTransitions;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> initialRule;
	bool isFrozen;
	bool upToDate;
	void virtual complete();
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual findRuleInFinal(long long time,bool local,int NonExistingTimeOpt,int DuplicatedTimeOpt);
	static int getLocalDelta(int rawBefore,int dstBefore,int rawAfter,int dstAfter,int NonExistingTimeOpt,int DuplicatedTimeOpt);
	void virtual getOffset(long long time,bool local,int NonExistingTimeOpt,int DuplicatedTimeOpt,std::shared_ptr<int[]> offsets);
	static long long getTransitionTime(std::shared_ptr<android::icu::util::TimeZoneTransition> tzt,bool local,int NonExistingTimeOpt,int DuplicatedTimeOpt);
public:
	RuleBasedTimeZone(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::InitialTimeZoneRule> initialRule);
	void virtual addTransitionRule(std::shared_ptr<android::icu::util::TimeZoneRule> rule);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::util::TimeZone> virtual cloneAsThawed();
	std::shared_ptr<android::icu::util::TimeZone> virtual freeze();
	std::shared_ptr<android::icu::util::TimeZoneTransition> virtual getNextTransition(long long base,bool inclusive);
	int virtual getOffset(int era,int cVar0,int month,int day,int dayOfWeek,int milliseconds);
	void virtual getOffset(long long time,bool local,std::shared_ptr<int[]> offsets);
	void virtual getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets);
	std::shared_ptr<android::icu::util::TimeZoneTransition> virtual getPreviousTransition(long long base,bool inclusive);
	int virtual getRawOffset();
	std::shared_ptr<android::icu::util::TimeZoneRule> virtual getTimeZoneRules();
	bool virtual hasSameRules(std::shared_ptr<android::icu::util::TimeZone> other);
	bool virtual inDaylightTime(std::shared_ptr<java::util::Date> date);
	bool virtual isFrozen();
	bool virtual observesDaylightTime();
	void virtual setRawOffset(int offsetMillis);
	bool virtual useDaylightTime();
public:
	virtual ~RuleBasedTimeZone(){
	}

}; // class RuleBasedTimeZone
}; // namespace android::icu::util

#endif //__android_icu_util_RuleBasedTimeZone__

