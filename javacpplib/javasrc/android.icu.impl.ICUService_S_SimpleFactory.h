#ifndef __android_icu_impl_ICUService_S_SimpleFactory__
#define __android_icu_impl_ICUService_S_SimpleFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService$SimpleFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class ICUService_S_SimpleFactory : public android::icu::impl::ICUService_S_Factory {
protected:
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::lang::Object> instance;
	bool visible;
private:
public:
	ICUService_S_SimpleFactory(std::shared_ptr<java::lang::Object> instance,std::shared_ptr<java::lang::String> id);
	ICUService_S_SimpleFactory(std::shared_ptr<java::lang::Object> instance,std::shared_ptr<java::lang::String> id,bool visible);
	std::shared_ptr<java::lang::Object> virtual create(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<android::icu::impl::ICUService> service);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::lang::String> identifier,std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual updateVisibleIDs(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> result);
public:
	virtual ~ICUService_S_SimpleFactory(){
	}

}; // class ICUService_S_SimpleFactory
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUService_S_SimpleFactory__

