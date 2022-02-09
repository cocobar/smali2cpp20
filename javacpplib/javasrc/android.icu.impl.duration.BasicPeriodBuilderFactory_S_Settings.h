#ifndef __android_icu_impl_duration_BasicPeriodBuilderFactory_S_Settings__
#define __android_icu_impl_duration_BasicPeriodBuilderFactory_S_Settings__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodBuilderFactory$Settings.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration{
class BasicPeriodBuilderFactory_S_Settings : public java::lang::Object {
protected:
private:
public:
	bool allowMillis;
	bool allowZero;
	bool inUse;
	int maxLimit;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> maxUnit;
	int minLimit;
	std::shared_ptr<android::icu::impl::duration::TimeUnit> minUnit;
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory> this_S_0;
	short uset;
	bool weeksAloneOnly;
	BasicPeriodBuilderFactory_S_Settings(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory> this_S_0);
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual copy();
	std::shared_ptr<android::icu::impl::duration::Period> virtual createLimited(long long duration,bool inPast);
	std::shared_ptr<android::icu::impl::duration::TimeUnit> virtual effectiveMinUnit();
	short virtual effectiveSet();
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual setAllowMilliseconds(bool allowMillis);
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual setAllowZero(bool allow);
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual setInUse();
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual setLocale(std::shared_ptr<java::lang::String> localeName);
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual setMaxLimit(float maxLimit);
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual setMinLimit(float minLimit);
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual setUnits(int uset);
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual setWeeksAloneOnly(bool weeksAlone);
public:
	virtual ~BasicPeriodBuilderFactory_S_Settings(){
	}

}; // class BasicPeriodBuilderFactory_S_Settings
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_BasicPeriodBuilderFactory_S_Settings__

