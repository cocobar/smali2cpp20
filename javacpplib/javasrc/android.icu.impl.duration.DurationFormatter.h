#ifndef __android_icu_impl_duration_DurationFormatter__
#define __android_icu_impl_duration_DurationFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\DurationFormatter.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl::duration{
class DurationFormatter : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> formatDurationFrom(long long var0,long long var1) = 0;
	std::shared_ptr<java::lang::String> formatDurationFromNow(long long var0) = 0;
	std::shared_ptr<java::lang::String> formatDurationFromNowTo(std::shared_ptr<java::util::Date> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::DurationFormatter> withLocale(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::DurationFormatter> withTimeZone(std::shared_ptr<java::util::TimeZone> var0) = 0;
	DurationFormatter(){ };
	virtual ~DurationFormatter(){ };

}; // class DurationFormatter
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_DurationFormatter__

