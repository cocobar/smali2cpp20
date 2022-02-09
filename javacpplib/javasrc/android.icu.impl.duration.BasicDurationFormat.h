#ifndef __android_icu_impl_duration_BasicDurationFormat__
#define __android_icu_impl_duration_BasicDurationFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicDurationFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.DurationFormatter.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "android.icu.impl.duration.PeriodFormatterService.h"
#include "android.icu.text.DurationFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"
#include "java.util.Date.h"

namespace android::icu::impl::duration{
class BasicDurationFormat : public android::icu::text::DurationFormat {
protected:
private:
	static long long serialVersionUID;
public:
	std::shared_ptr<android::icu::impl::duration::DurationFormatter> formatter;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatter> pformatter;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterService> pfs;
	BasicDurationFormat();
	BasicDurationFormat(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::impl::duration::BasicDurationFormat> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> object,std::shared_ptr<java::lang::StringBuffer> toAppend,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::String> virtual formatDuration(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual formatDurationFrom(long long duration,long long referenceDate);
	std::shared_ptr<java::lang::String> virtual formatDurationFromNow(long long duration);
	std::shared_ptr<java::lang::String> virtual formatDurationFromNowTo(std::shared_ptr<java::util::Date> targetDate);
public:
	virtual ~BasicDurationFormat(){
	}

}; // class BasicDurationFormat
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_BasicDurationFormat__

