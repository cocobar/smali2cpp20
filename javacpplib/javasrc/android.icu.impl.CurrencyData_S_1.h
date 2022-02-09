#ifndef __android_icu_impl_CurrencyData_S_1__
#define __android_icu_impl_CurrencyData_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$1.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfoProvider.h"
#include "android.icu.util.ULocale.h"

namespace android::icu::impl{
class CurrencyData_S_1 : public android::icu::impl::CurrencyData_S_CurrencyDisplayInfoProvider {
protected:
private:
public:
	CurrencyData_S_1();
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> virtual getInstance(std::shared_ptr<android::icu::util::ULocale> locale,bool withFallback);
	bool virtual hasData();
public:
	virtual ~CurrencyData_S_1(){
	}

}; // class CurrencyData_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_CurrencyData_S_1__

