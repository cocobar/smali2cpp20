#ifndef __android_icu_util_CurrencyServiceShim_S_CFService_S_1CurrencyFactory__
#define __android_icu_util_CurrencyServiceShim_S_CFService_S_1CurrencyFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CurrencyServiceShim$CFService$1CurrencyFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_ICUResourceBundleFactory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.CurrencyServiceShim_S_CFService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class CurrencyServiceShim_S_CFService_S_1CurrencyFactory : public android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory {
protected:
	std::shared_ptr<java::lang::Object> virtual handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc);
private:
public:
	std::shared_ptr<android::icu::util::CurrencyServiceShim_S_CFService> this_S_1;
	CurrencyServiceShim_S_CFService_S_1CurrencyFactory(std::shared_ptr<android::icu::util::CurrencyServiceShim_S_CFService> this_S_1);
public:
	virtual ~CurrencyServiceShim_S_CFService_S_1CurrencyFactory(){
	}

}; // class CurrencyServiceShim_S_CFService_S_1CurrencyFactory
}; // namespace android::icu::util

#endif //__android_icu_util_CurrencyServiceShim_S_CFService_S_1CurrencyFactory__

