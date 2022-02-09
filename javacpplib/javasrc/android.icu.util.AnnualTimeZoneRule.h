#ifndef __android_icu_util_AnnualTimeZoneRule__
#define __android_icu_util_AnnualTimeZoneRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\AnnualTimeZoneRule.smali
#include "java2ctype.h"
#include "android.icu.util.DateTimeRule.h"
#include "android.icu.util.TimeZoneRule.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::util{
class AnnualTimeZoneRule : public android::icu::util::TimeZoneRule {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<android::icu::util::DateTimeRule> dateTimeRule;
	int endYear;
	int startYear;
public:
	static int MAX_YEAR;
	AnnualTimeZoneRule(std::shared_ptr<java::lang::String> name,int rawOffset,int dstSavings,std::shared_ptr<android::icu::util::DateTimeRule> dateTimeRule,int startYear,int endYear);
	int virtual getEndYear();
	std::shared_ptr<java::util::Date> virtual getFinalStart(int prevRawOffset,int prevDSTSavings);
	std::shared_ptr<java::util::Date> virtual getFirstStart(int prevRawOffset,int prevDSTSavings);
	std::shared_ptr<java::util::Date> virtual getNextStart(long long base,int prevRawOffset,int prevDSTSavings,bool inclusive);
	std::shared_ptr<java::util::Date> virtual getPreviousStart(long long base,int prevRawOffset,int prevDSTSavings,bool inclusive);
	std::shared_ptr<android::icu::util::DateTimeRule> virtual getRule();
	std::shared_ptr<java::util::Date> virtual getStartInYear(int year,int prevRawOffset,int prevDSTSavings);
	int virtual getStartYear();
	bool virtual isEquivalentTo(std::shared_ptr<android::icu::util::TimeZoneRule> other);
	bool virtual isTransitionRule();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~AnnualTimeZoneRule(){
	}

}; // class AnnualTimeZoneRule
}; // namespace android::icu::util

#endif //__android_icu_util_AnnualTimeZoneRule__

