#ifndef __android_icu_impl_ICULocaleService_S_LocaleKeyFactory__
#define __android_icu_impl_ICULocaleService_S_LocaleKeyFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService$LocaleKeyFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICULocaleService_S_LocaleKeyFactory : public android::icu::impl::ICUService_S_Factory {
protected:
	std::shared_ptr<java::lang::String> name;
	bool visible;
	ICULocaleService_S_LocaleKeyFactory(bool visible);
	ICULocaleService_S_LocaleKeyFactory(bool visible,std::shared_ptr<java::lang::String> name);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedIDs();
	std::shared_ptr<java::lang::Object> virtual handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> service);
	bool virtual handlesKey(std::shared_ptr<android::icu::impl::ICUService_S_Key> key);
	bool virtual isSupportedID(std::shared_ptr<java::lang::String> id);
private:
public:
	static bool INVISIBLE;
	static bool VISIBLE;
	std::shared_ptr<java::lang::Object> virtual create(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<android::icu::impl::ICUService> service);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual updateVisibleIDs(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> result);
public:
	virtual ~ICULocaleService_S_LocaleKeyFactory(){
	}

}; // class ICULocaleService_S_LocaleKeyFactory
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICULocaleService_S_LocaleKeyFactory__

