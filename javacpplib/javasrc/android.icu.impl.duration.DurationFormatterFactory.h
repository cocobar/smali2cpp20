#ifndef __android_icu_impl_duration_DurationFormatterFactory__
#define __android_icu_impl_duration_DurationFormatterFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\DurationFormatterFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.DateFormatter.h"
#include "android.icu.impl.duration.DurationFormatter.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl::duration{
class DurationFormatterFactory : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::duration::DurationFormatter> getFormatter() = 0;
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> setFallback(std::shared_ptr<android::icu::impl::duration::DateFormatter> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> setFallbackLimit(long long var0) = 0;
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> setLocale(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> setPeriodBuilder(std::shared_ptr<android::icu::impl::duration::PeriodBuilder> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> setPeriodFormatter(std::shared_ptr<android::icu::impl::duration::PeriodFormatter> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> setTimeZone(std::shared_ptr<java::util::TimeZone> var0) = 0;
	DurationFormatterFactory(){ };
	virtual ~DurationFormatterFactory(){ };

}; // class DurationFormatterFactory
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_DurationFormatterFactory__

