#ifndef __android_icu_impl_duration_PeriodFormatterService__
#define __android_icu_impl_duration_PeriodFormatterService__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\PeriodFormatterService.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.DurationFormatterFactory.h"
#include "android.icu.impl.duration.PeriodBuilderFactory.h"
#include "android.icu.impl.duration.PeriodFormatterFactory.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"

namespace android::icu::impl::duration{
class PeriodFormatterService : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::util::Collection<java::lang::String>> getAvailableLocaleNames();
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> newDurationFormatterFactory() = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilderFactory> newPeriodBuilderFactory() = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> newPeriodFormatterFactory() = 0;
	PeriodFormatterService(){ };
	virtual ~PeriodFormatterService(){ };

}; // class PeriodFormatterService
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_PeriodFormatterService__

