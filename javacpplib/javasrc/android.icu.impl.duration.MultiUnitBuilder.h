#ifndef __android_icu_impl_duration_MultiUnitBuilder__
#define __android_icu_impl_duration_MultiUnitBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\MultiUnitBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicPeriodBuilderFactory_S_Settings.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodBuilderImpl.h"

namespace android::icu::impl::duration{
class MultiUnitBuilder : public android::icu::impl::duration::PeriodBuilderImpl {
protected:
	std::shared_ptr<android::icu::impl::duration::Period> virtual handleCreate(long long duration,long long referenceDate,bool inPast);
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> virtual withSettings(std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settingsToUse);
private:
	int nPeriods;
public:
	MultiUnitBuilder(int nPeriods,std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings);
	static std::shared_ptr<android::icu::impl::duration::MultiUnitBuilder> get(int nPeriods,std::shared_ptr<android::icu::impl::duration::BasicPeriodBuilderFactory_S_Settings> settings);
public:
	virtual ~MultiUnitBuilder(){
	}

}; // class MultiUnitBuilder
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_MultiUnitBuilder__

