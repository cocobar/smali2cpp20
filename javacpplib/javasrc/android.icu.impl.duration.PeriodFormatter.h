#ifndef __android_icu_impl_duration_PeriodFormatter__
#define __android_icu_impl_duration_PeriodFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\PeriodFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.Period.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration{
class PeriodFormatter : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> format(std::shared_ptr<android::icu::impl::duration::Period> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatter> withLocale(std::shared_ptr<java::lang::String> var0) = 0;
	PeriodFormatter(){ };
	virtual ~PeriodFormatter(){ };

}; // class PeriodFormatter
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_PeriodFormatter__

