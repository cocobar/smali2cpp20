#ifndef __android_icu_impl_ICUCurrencyDisplayInfoProvider__
#define __android_icu_impl_ICUCurrencyDisplayInfoProvider__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyDisplayInfoProvider.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfoProvider.h"
#include "android.icu.util.ULocale.h"

namespace android::icu::impl{
class ICUCurrencyDisplayInfoProvider : public android::icu::impl::CurrencyData_S_CurrencyDisplayInfoProvider {
protected:
private:
public:
	ICUCurrencyDisplayInfoProvider();
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> virtual getInstance(std::shared_ptr<android::icu::util::ULocale> locale,bool withFallback);
	bool virtual hasData();
public:
	virtual ~ICUCurrencyDisplayInfoProvider(){
	}

}; // class ICUCurrencyDisplayInfoProvider
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUCurrencyDisplayInfoProvider__

