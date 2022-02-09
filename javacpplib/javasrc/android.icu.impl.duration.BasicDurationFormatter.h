#ifndef __android_icu_impl_duration_BasicDurationFormatter__
#define __android_icu_impl_duration_BasicDurationFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicDurationFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.DateFormatter.h"
#include "android.icu.impl.duration.DurationFormatter.h"
#include "android.icu.impl.duration.Period.h"
#include "android.icu.impl.duration.PeriodBuilder.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl::duration{
class BasicDurationFormatter : public android::icu::impl::duration::DurationFormatter {
protected:
	BasicDurationFormatter(std::shared_ptr<android::icu::impl::duration::PeriodFormatter> formatter,std::shared_ptr<android::icu::impl::duration::PeriodBuilder> builder,std::shared_ptr<android::icu::impl::duration::DateFormatter> fallback,long long fallbackLimit,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<java::util::TimeZone> timeZone);
	std::shared_ptr<android::icu::impl::duration::Period> virtual doBuild(long long duration,long long referenceDate);
	std::shared_ptr<java::lang::String> virtual doFallback(long long duration,long long referenceDate);
	std::shared_ptr<java::lang::String> virtual doFormat(std::shared_ptr<android::icu::impl::duration::Period> period);
private:
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> builder;
	std::shared_ptr<android::icu::impl::duration::DateFormatter> fallback;
	long long fallbackLimit;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatter> formatter;
	std::shared_ptr<java::lang::String> localeName;
	std::shared_ptr<java::util::TimeZone> timeZone;
public:
	BasicDurationFormatter(std::shared_ptr<android::icu::impl::duration::PeriodFormatter> formatter,std::shared_ptr<android::icu::impl::duration::PeriodBuilder> builder,std::shared_ptr<android::icu::impl::duration::DateFormatter> fallback,long long cVar1);
	std::shared_ptr<java::lang::String> virtual formatDurationFrom(long long duration,long long referenceDate);
	std::shared_ptr<java::lang::String> virtual formatDurationFromNow(long long duration);
	std::shared_ptr<java::lang::String> virtual formatDurationFromNowTo(std::shared_ptr<java::util::Date> targetDate);
	std::shared_ptr<android::icu::impl::duration::DurationFormatter> virtual withLocale(std::shared_ptr<java::lang::String> locName);
	std::shared_ptr<android::icu::impl::duration::DurationFormatter> virtual withTimeZone(std::shared_ptr<java::util::TimeZone> tz);
public:
	virtual ~BasicDurationFormatter(){
	}

}; // class BasicDurationFormatter
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_BasicDurationFormatter__

