#ifndef __android_icu_util_TimeArrayTimeZoneRule__
#define __android_icu_util_TimeArrayTimeZoneRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TimeArrayTimeZoneRule.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZoneRule.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::util{
class TimeArrayTimeZoneRule : public android::icu::util::TimeZoneRule {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<long long[]> startTimes;
	int timeType;
	long long virtual getUTC(long long cVar1,int raw,int dst);
public:
	TimeArrayTimeZoneRule(std::shared_ptr<java::lang::String> name,int rawOffset,int dstSavings,std::shared_ptr<long long[]> startTimes,int timeType);
	std::shared_ptr<java::util::Date> virtual getFinalStart(int prevRawOffset,int prevDSTSavings);
	std::shared_ptr<java::util::Date> virtual getFirstStart(int prevRawOffset,int prevDSTSavings);
	std::shared_ptr<java::util::Date> virtual getNextStart(long long base,int prevOffset,int prevDSTSavings,bool inclusive);
	std::shared_ptr<java::util::Date> virtual getPreviousStart(long long base,int prevOffset,int prevDSTSavings,bool inclusive);
	long long virtual getStartTimes();
	int virtual getTimeType();
	bool virtual isEquivalentTo(std::shared_ptr<android::icu::util::TimeZoneRule> other);
	bool virtual isTransitionRule();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~TimeArrayTimeZoneRule(){
	}

}; // class TimeArrayTimeZoneRule
}; // namespace android::icu::util

#endif //__android_icu_util_TimeArrayTimeZoneRule__

