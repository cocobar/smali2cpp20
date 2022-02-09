#ifndef __android_icu_impl_duration_DateFormatter__
#define __android_icu_impl_duration_DateFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\DateFormatter.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl::duration{
class DateFormatter : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> format(long long var0) = 0;
	std::shared_ptr<java::lang::String> format(std::shared_ptr<java::util::Date> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::DateFormatter> withLocale(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::DateFormatter> withTimeZone(std::shared_ptr<java::util::TimeZone> var0) = 0;
	DateFormatter(){ };
	virtual ~DateFormatter(){ };

}; // class DateFormatter
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_DateFormatter__

