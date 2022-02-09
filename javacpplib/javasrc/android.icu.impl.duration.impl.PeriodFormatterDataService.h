#ifndef __android_icu_impl_duration_impl_PeriodFormatterDataService__
#define __android_icu_impl_duration_impl_PeriodFormatterDataService__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\PeriodFormatterDataService.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.PeriodFormatterData.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"

namespace android::icu::impl::duration::impl{
class PeriodFormatterDataService : public java::lang::Object {
protected:
private:
public:
	PeriodFormatterDataService();
	std::shared_ptr<android::icu::impl::duration::impl::PeriodFormatterData> get(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::util::Collection<java::lang::String>> getAvailableLocales();
public:
	virtual ~PeriodFormatterDataService(){
	}

}; // class PeriodFormatterDataService
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_PeriodFormatterDataService__

