#ifndef __android_icu_impl_duration_FixedUnitBuilder__
#define __android_icu_impl_duration_FixedUnitBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\FixedUnitBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderImpl.h"
#include "android.icu.impl.duration.TimeUnit.h"

namespace android::icu::impl::duration{
class FixedUnitBuilder : public android::icu::impl::duration::PeriodBuilderImpl {
protected:
	std::shared_ptr<android::icu::impl::duration::Period> virtual handleCreate(long long duration,long long referenceDate,bool inPast);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> virtual withSettings(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settingsToUse);
private:
	std::shared_ptr<android::icu::impl::duration::TimeUnit> unit;
public:
	FixedUnitBuilder(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings);
	static std::shared_ptr<android::icu::impl::duration::FixedUnitBuilder> get(std::shared_ptr<android::icu::impl::duration::TimeUnit> unit,std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settingsToUse);
public:
	virtual ~FixedUnitBuilder(){
	}

}; // class FixedUnitBuilder
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_FixedUnitBuilder__

