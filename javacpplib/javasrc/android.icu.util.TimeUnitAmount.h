#ifndef __android_icu_util_TimeUnitAmount__
#define __android_icu_util_TimeUnitAmount__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TimeUnitAmount.smali
#include "java2ctype.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.TimeUnit.h"
#include "java.lang.Number.h"

namespace android::icu::util{
class TimeUnitAmount : public android::icu::util::Measure {
protected:
private:
public:
	TimeUnitAmount(double number,std::shared_ptr<android::icu::util::TimeUnit> unit);
	TimeUnitAmount(std::shared_ptr<java::lang::Number> number,std::shared_ptr<android::icu::util::TimeUnit> unit);
	std::shared_ptr<android::icu::util::TimeUnit> virtual getTimeUnit();
public:
	virtual ~TimeUnitAmount(){
	}

}; // class TimeUnitAmount
}; // namespace android::icu::util

#endif //__android_icu_util_TimeUnitAmount__

