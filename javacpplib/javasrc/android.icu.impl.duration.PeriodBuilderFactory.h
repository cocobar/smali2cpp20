#ifndef __android_icu_impl_duration_PeriodBuilderFactory__
#define __android_icu_impl_duration_PeriodBuilderFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\PeriodBuilderFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.TimeUnit.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl::duration{
class PeriodBuilderFactory : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> getFixedUnitBuilder(std::shared_ptr<android::icu::impl::duration::TimeUnit> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> getMultiUnitBuilder(int var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> getOneOrTwoUnitBuilder() = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> getSingleUnitBuilder() = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> setAllowMilliseconds(bool var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> setAllowZero(bool var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> setAvailableUnitRange(std::shared_ptr<android::icu::impl::duration::TimeUnit> var0,std::shared_ptr<android::icu::impl::duration::TimeUnit> var1) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> setLocale(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> setMaxLimit(float var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> setMinLimit(float var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> setTimeZone(std::shared_ptr<java::util::TimeZone> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> setUnitIsAvailable(std::shared_ptr<android::icu::impl::duration::TimeUnit> var0,bool var1) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> setWeeksAloneOnly(bool var0) = 0;
	PeriodBuilderFactory(){ };
	virtual ~PeriodBuilderFactory(){ };

}; // class PeriodBuilderFactory
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_PeriodBuilderFactory__

