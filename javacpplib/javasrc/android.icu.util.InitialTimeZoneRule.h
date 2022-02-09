#ifndef __android_icu_util_InitialTimeZoneRule__
#define __android_icu_util_InitialTimeZoneRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\InitialTimeZoneRule.smali
#include "java2ctype.h"
#include "android.icu.util.TimeZoneRule.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::util{
class InitialTimeZoneRule : public android::icu::util::TimeZoneRule {
protected:
private:
	static long long serialVersionUID;
public:
	InitialTimeZoneRule(std::shared_ptr<java::lang::String> name,int rawOffset,int dstSavings);
	std::shared_ptr<java::util::Date> virtual getFinalStart(int prevRawOffset,int prevDSTSavings);
	std::shared_ptr<java::util::Date> virtual getFirstStart(int prevRawOffset,int prevDSTSavings);
	std::shared_ptr<java::util::Date> virtual getNextStart(long long base,int prevRawOffset,int prevDSTSavings,bool inclusive);
	std::shared_ptr<java::util::Date> virtual getPreviousStart(long long base,int prevRawOffset,int prevDSTSavings,bool inclusive);
	bool virtual isEquivalentTo(std::shared_ptr<android::icu::util::TimeZoneRule> other);
	bool virtual isTransitionRule();
public:
	virtual ~InitialTimeZoneRule(){
	}

}; // class InitialTimeZoneRule
}; // namespace android::icu::util

#endif //__android_icu_util_InitialTimeZoneRule__

