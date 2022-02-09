#ifndef __android_icu_impl_duration_PeriodFormatterFactory__
#define __android_icu_impl_duration_PeriodFormatterFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\PeriodFormatterFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.PeriodFormatter.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::duration{
class PeriodFormatterFactory : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::duration::PeriodFormatter> getFormatter() = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> setCountVariant(int var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> setDisplayLimit(bool var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> setDisplayPastFuture(bool var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> setLocale(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> setSeparatorVariant(int var0) = 0;
	std::shared_ptr<android::icu::impl::duration::PeriodFormatterFactory> setUnitVariant(int var0) = 0;
	PeriodFormatterFactory(){ };
	virtual ~PeriodFormatterFactory(){ };

}; // class PeriodFormatterFactory
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_PeriodFormatterFactory__

