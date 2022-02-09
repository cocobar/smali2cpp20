#ifndef __android_icu_impl_ICULocaleService__
#define __android_icu_impl_ICULocaleService__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

namespace android::icu::impl{
class ICULocaleService : public android::icu::impl::ICUService {
protected:
private:
	std::shared_ptr<android::icu::util::ULocale> fallbackLocale;
	std::shared_ptr<java::lang::String> fallbackLocaleName;
public:
	ICULocaleService();
	ICULocaleService(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<android::icu::impl::ICUService_S_Key> virtual createKey(std::shared_ptr<android::icu::util::ULocale> l,int kind);
	std::shared_ptr<android::icu::impl::ICUService_S_Key> virtual createKey(std::shared_ptr<java::lang::String> id);
	std::shared_ptr<android::icu::impl::ICUService_S_Key> virtual createKey(std::shared_ptr<java::lang::String> id,int kind);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<android::icu::util::ULocale> locale,int kind);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<android::icu::util::ULocale> locale,int kind,std::shared_ptr<std::vector<android::icu::util::ULocale>> actualReturn);
	std::shared_ptr<java::lang::Object> virtual get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::util::ULocale>> actualReturn);
	std::shared_ptr<java::util::Locale> virtual getAvailableLocales();
	std::shared_ptr<android::icu::util::ULocale> virtual getAvailableULocales();
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> virtual registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> virtual registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,int kind);
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> virtual registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,int kind,bool visible);
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> virtual registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,bool visible);
	std::shared_ptr<java::lang::String> virtual validateFallbackLocale();
public:
	virtual ~ICULocaleService(){
	}

}; // class ICULocaleService
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICULocaleService__

