#ifndef __android_icu_impl_duration_PeriodBuilder__
#define __android_icu_impl_duration_PeriodBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\PeriodBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.Period.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.TimeZone.h"

namespace android::icu::impl::duration{
class PeriodBuilder : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::duration::Period> create(long long var0) = 0;
	std::shared_ptr<android::icu::impl::duration::Period> createWithReferenceDate(long long var0,long long var1) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> withLocale(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodBuilder> withTimeZone(std::shared_ptr<java::util::TimeZone> var0) = 0;
	PeriodBuilder(){ };
	virtual ~PeriodBuilder(){ };

}; // class PeriodBuilder
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_PeriodBuilder__

