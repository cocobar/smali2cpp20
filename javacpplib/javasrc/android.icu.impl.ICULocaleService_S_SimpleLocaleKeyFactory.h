#ifndef __android_icu_impl_ICULocaleService_S_SimpleLocaleKeyFactory__
#define __android_icu_impl_ICULocaleService_S_SimpleLocaleKeyFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService$SimpleLocaleKeyFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKeyFactory.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class ICULocaleService_S_SimpleLocaleKeyFactory : public android::icu::impl::ICULocaleService_S_LocaleKeyFactory {
protected:
	bool virtual isSupportedID(std::shared_ptr<java::lang::String> idToCheck);
private:
	std::shared_ptr<java::lang::String> id;
	int kind;
	std::shared_ptr<java::lang::Object> obj;
public:
	ICULocaleService_S_SimpleLocaleKeyFactory(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,int kind,bool visible);
	ICULocaleService_S_SimpleLocaleKeyFactory(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,int kind,bool visible,std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::lang::Object> virtual create(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<android::icu::impl::ICUService> service);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual updateVisibleIDs(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> result);
public:
	virtual ~ICULocaleService_S_SimpleLocaleKeyFactory(){
	}

}; // class ICULocaleService_S_SimpleLocaleKeyFactory
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICULocaleService_S_SimpleLocaleKeyFactory__

