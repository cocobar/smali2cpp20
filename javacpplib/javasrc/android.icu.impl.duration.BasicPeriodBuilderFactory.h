#ifndef __android_icu_impl_duration_BasicPeriodBuilderFactory__
#define __android_icu_impl_duration_BasicPeriodBuilderFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodBuilderFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderFactory.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "android.icu.impl.duration.impl.PeriodFormatterDataService.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl::duration{
class BasicPeriodBuilderFactory : public android::icu::impl::duration::PeriodBuilderFactory {
protected:
private:
	static short allBits;
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> ds;
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings;
	std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> virtual getSettings();
public:
	static std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> _get0(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory> _this);
	BasicPeriodBuilderFactory(std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> ds);
	static long long approximateDurationOf(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> virtual getFixedUnitBuilder(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> virtual getMultiUnitBuilder(int periodCount);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> virtual getOneOrTwoUnitBuilder();
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> virtual getSingleUnitBuilder();
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual setAllowMilliseconds(bool allow);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual setAllowZero(bool allow);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual setAvailableUnitRange(std::shared_ptr<android::icu::impl::duration::TimeUnit> minUnit,std::shared_ptr<android::icu::impl::duration::TimeUnit> maxUnit);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual setLocale(std::shared_ptr<java::lang::String> localeName);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual setMaxLimit(float maxLimit);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual setMinLimit(float minLimit);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual setTimeZone(std::shared_ptr<java::util::TimeZone> timeZone);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual setUnitIsAvailable(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,bool available);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual setWeeksAloneOnly(bool aloneOnly);
public:
	virtual ~BasicPeriodBuilderFactory(){
	}

}; // class BasicPeriodBuilderFactory
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_BasicPeriodBuilderFactory__

