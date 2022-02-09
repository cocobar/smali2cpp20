#ifndef __android_icu_impl_CurrencyData_S_CurrencyDisplayInfoProvider__
#define __android_icu_impl_CurrencyData_S_CurrencyDisplayInfoProvider__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencyDisplayInfoProvider.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class CurrencyData_S_CurrencyDisplayInfoProvider : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> getInstance(std::shared_ptr<android::icu::util::ULocale> var0,bool var1) = 0;
	bool hasData() = 0;
	CurrencyData_S_CurrencyDisplayInfoProvider(){ };
	virtual ~CurrencyData_S_CurrencyDisplayInfoProvider(){ };

}; // class CurrencyData_S_CurrencyDisplayInfoProvider
}; // namespace android::icu::impl

#endif //__android_icu_impl_CurrencyData_S_CurrencyDisplayInfoProvider__

