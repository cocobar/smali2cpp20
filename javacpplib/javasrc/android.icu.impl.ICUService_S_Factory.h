#ifndef __android_icu_impl_ICUService_S_Factory__
#define __android_icu_impl_ICUService_S_Factory__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService$Factory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class ICUService_S_Factory : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::Object> create(std::shared_ptr<android::icu::impl::ICUService_S_Key> var0,std::shared_ptr<android::icu::impl::ICUService> var1) = 0;
	std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<java::lang::String> var0,std::shared_ptr<android::icu::util::ULocale> var1) = 0;
	void updateVisibleIDs(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> var0);
	ICUService_S_Factory(){ };
	virtual ~ICUService_S_Factory(){ };

}; // class ICUService_S_Factory
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUService_S_Factory__

