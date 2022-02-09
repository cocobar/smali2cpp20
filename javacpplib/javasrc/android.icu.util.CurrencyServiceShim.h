#ifndef __android_icu_util_CurrencyServiceShim__
#define __android_icu_util_CurrencyServiceShim__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CurrencyServiceShim.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.util.Currency_S_ServiceShim.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class CurrencyServiceShim : public android::icu::util::Currency_S_ServiceShim {
protected:
private:
public:
	static std::shared_ptr<android::icu::impl::ICULocaleService> service;
	static void static_cinit();
	CurrencyServiceShim();
	std::shared_ptr<android::icu::util::Currency> virtual createInstance(std::shared_ptr<android::icu::util::ULocale> loc);
	std::shared_ptr<java::util::Locale> virtual getAvailableLocales();
	std::shared_ptr<android::icu::util::ULocale> virtual getAvailableULocales();
	std::shared_ptr<java::lang::Object> virtual registerInstance(std::shared_ptr<android::icu::util::Currency> currency,std::shared_ptr<android::icu::util::ULocale> locale);
	bool virtual unregister(std::shared_ptr<java::lang::Object> registryKey);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::CurrencyServiceShim::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CurrencyServiceShim(){
	}

}; // class CurrencyServiceShim
}; // namespace android::icu::util

#endif //__android_icu_util_CurrencyServiceShim__

