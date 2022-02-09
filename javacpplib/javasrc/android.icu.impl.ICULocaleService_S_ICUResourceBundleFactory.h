#ifndef __android_icu_impl_ICULocaleService_S_ICUResourceBundleFactory__
#define __android_icu_impl_ICULocaleService_S_ICUResourceBundleFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService$ICUResourceBundleFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKeyFactory.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICULocaleService_S_ICUResourceBundleFactory : public android::icu::impl::ICULocaleService_S_LocaleKeyFactory {
protected:
	std::shared_ptr<java::lang::String> bundleName;
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedIDs();
	std::shared_ptr<java::lang::Object> virtual handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> service);
	std::shared_ptr<java::lang::ClassLoader> virtual loader();
private:
public:
	ICULocaleService_S_ICUResourceBundleFactory();
	ICULocaleService_S_ICUResourceBundleFactory(std::shared_ptr<java::lang::String> bundleName);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual updateVisibleIDs(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> result);
public:
	virtual ~ICULocaleService_S_ICUResourceBundleFactory(){
	}

}; // class ICULocaleService_S_ICUResourceBundleFactory
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICULocaleService_S_ICUResourceBundleFactory__

