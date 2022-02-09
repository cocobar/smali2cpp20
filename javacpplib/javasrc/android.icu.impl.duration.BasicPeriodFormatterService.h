#ifndef __android_icu_impl_duration_BasicPeriodFormatterService__
#define __android_icu_impl_duration_BasicPeriodFormatterService__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodFormatterService.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.DurationFormatterFactory.h"
#include "android.icu.impl.duration.PeriodBuilderFactory.h"
#include "android.icu.impl.duration.PeriodFormatterFactory.h"
#include "android.icu.impl.duration.PeriodFormatterService.h"
#include "android.icu.impl.duration.impl.PeriodFormatterDataService.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"

namespace android::icu::impl::duration{
class BasicPeriodFormatterService : public android::icu::impl::duration::PeriodFormatterService {
protected:
private:
	static std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterService> instance;
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> ds;
public:
	BasicPeriodFormatterService(std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterDataService> ds);
	static std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterService> getInstance();
	std::shared_ptr<java::util::Collection<java::lang::String>> virtual getAvailableLocaleNames();
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> virtual newDurationFormatterFactory();
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> virtual newPeriodBuilderFactory();
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> virtual newPeriodFormatterFactory();
public:
	virtual ~BasicPeriodFormatterService(){
	}

}; // class BasicPeriodFormatterService
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_BasicPeriodFormatterService__

