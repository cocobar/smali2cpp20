#ifndef __android_icu_impl_duration_BasicDurationFormatterFactory__
#define __android_icu_impl_duration_BasicDurationFormatterFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicDurationFormatterFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.BasicDurationFormatter.h"
#include "android.icu.impl.duration.BasicPeriodFormatterService.h"
#include "android.icu.impl.duration.DateFormatter.h"
#include "android.icu.impl.duration.DurationFormatter.h"
#include "android.icu.impl.duration.DurationFormatterFactory.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl::duration{
class BasicDurationFormatterFactory : public android::icu::impl::duration::DurationFormatterFactory {
protected:
	std::shared_ptr<android::icu::impl::duration::BasicDurationFormatter> virtual createFormatter();
	void virtual reset();
private:
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> builder;
	std::shared_ptr<android::icu::impl::duration::BasicDurationFormatter> f;
	std::shared_ptr<android::icu::impl::duration::DateFormatter> fallback;
	long long fallbackLimit;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatter> formatter;
	std::shared_ptr<java::lang::String> localeName;
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterService> ps;
	std::shared_ptr<java::util::TimeZone> timeZone;
public:
	BasicDurationFormatterFactory(std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterService> ps);
	std::shared_ptr<android::icu::impl::duration::DateFormatter> virtual getFallback();
	long long virtual getFallbackLimit();
	std::shared_ptr<android::icu::impl::duration::DurationFormatter> virtual getFormatter();
	std::shared_ptr<java::lang::String> virtual getLocaleName();
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> virtual getPeriodBuilder();
	std::shared_ptr<android::icu::impl::duration::PeriodFormatter> virtual getPeriodFormatter();
	std::shared_ptr<java::util::TimeZone> virtual getTimeZone();
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> virtual setFallback(std::shared_ptr<android::icu::impl::duration::DateFormatter> fallback);
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> virtual setFallbackLimit(long long cVar0);
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> virtual setLocale(std::shared_ptr<java::lang::String> localeName);
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> virtual setPeriodBuilder(std::shared_ptr<android::icu::impl::duration::PeriodBuilder> builder);
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> virtual setPeriodFormatter(std::shared_ptr<android::icu::impl::duration::PeriodFormatter> formatter);
	std::shared_ptr<android::icu::impl::duration::DurationFormatterFactory> virtual setTimeZone(std::shared_ptr<java::util::TimeZone> timeZone);
public:
	virtual ~BasicDurationFormatterFactory(){
	}

}; // class BasicDurationFormatterFactory
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_BasicDurationFormatterFactory__

