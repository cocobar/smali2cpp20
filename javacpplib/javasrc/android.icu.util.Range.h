#ifndef __android_icu_util_Range__
#define __android_icu_util_Range__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Range.smali
#include "java2ctype.h"
#include "android.icu.util.DateRule.h"
#include "java.lang.Object.h"
#include "java.util.Date.h"

namespace android::icu::util{
class Range : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::util::DateRule> rule;
	std::shared_ptr<java::util::Date> start;
	Range(std::shared_ptr<java::util::Date> start,std::shared_ptr<android::icu::util::DateRule> rule);
public:
	virtual ~Range(){
	}

}; // class Range
}; // namespace android::icu::util

#endif //__android_icu_util_Range__

