#ifndef __android_icu_util_RangeDateRule__
#define __android_icu_util_RangeDateRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\RangeDateRule.smali
#include "java2ctype.h"
#include "android.icu.util.DateRule.h"
#include "android.icu.util.Range.h"
#include "java.util.Date.h"
#include "java.util.List.h"

namespace android::icu::util{
class RangeDateRule : public android::icu::util::DateRule {
protected:
private:
	std::shared_ptr<android::icu::util::Range> virtual rangeAt(int index);
	int virtual startIndex(std::shared_ptr<java::util::Date> start);
public:
	std::shared_ptr<java::util::List<android::icu::util::Range>> ranges;
	RangeDateRule();
	void virtual add(std::shared_ptr<android::icu::util::DateRule> rule);
	void virtual add(std::shared_ptr<java::util::Date> start,std::shared_ptr<android::icu::util::DateRule> rule);
	std::shared_ptr<java::util::Date> virtual firstAfter(std::shared_ptr<java::util::Date> start);
	std::shared_ptr<java::util::Date> virtual firstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
	bool virtual isBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end);
	bool virtual isOn(std::shared_ptr<java::util::Date> date);
public:
	virtual ~RangeDateRule(){
	}

}; // class RangeDateRule
}; // namespace android::icu::util

#endif //__android_icu_util_RangeDateRule__

