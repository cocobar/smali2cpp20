#ifndef __android_icu_text_CollatorServiceShim_S_CService_S_1CollatorFactory__
#define __android_icu_text_CollatorServiceShim_S_CService_S_1CollatorFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CollatorServiceShim$CService$1CollatorFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_ICUResourceBundleFactory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.CollatorServiceShim_S_CService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class CollatorServiceShim_S_CService_S_1CollatorFactory : public android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory {
protected:
	std::shared_ptr<java::lang::Object> virtual handleCreate(std::shared_ptr<android::icu::util::ULocale> uloc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc);
private:
public:
	std::shared_ptr<android::icu::text::CollatorServiceShim_S_CService> this_S_1;
	CollatorServiceShim_S_CService_S_1CollatorFactory(std::shared_ptr<android::icu::text::CollatorServiceShim_S_CService> this_S_1);
public:
	virtual ~CollatorServiceShim_S_CService_S_1CollatorFactory(){
	}

}; // class CollatorServiceShim_S_CService_S_1CollatorFactory
}; // namespace android::icu::text

#endif //__android_icu_text_CollatorServiceShim_S_CService_S_1CollatorFactory__

