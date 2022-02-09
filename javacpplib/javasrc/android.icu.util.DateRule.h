#ifndef __android_icu_util_DateRule__
#define __android_icu_util_DateRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\DateRule.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.Date.h"

namespace android::icu::util{
class DateRule : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::util::Date> firstAfter(std::shared_ptr<java::util::Date> var0) = 0;
	std::shared_ptr<java::util::Date> firstBetween(std::shared_ptr<java::util::Date> var0,std::shared_ptr<java::util::Date> var1) = 0;
	bool isBetween(std::shared_ptr<java::util::Date> var0,std::shared_ptr<java::util::Date> var1) = 0;
	bool isOn(std::shared_ptr<java::util::Date> var0) = 0;
	DateRule(){ };
	virtual ~DateRule(){ };

}; // class DateRule
}; // namespace android::icu::util

#endif //__android_icu_util_DateRule__

