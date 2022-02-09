#ifndef __android_icu_text_NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory__
#define __android_icu_text_NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormatServiceShim$NFService$1RBNumberFormatFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_ICUResourceBundleFactory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.NumberFormatServiceShim_S_NFService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory : public android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory {
protected:
	std::shared_ptr<java::lang::Object> virtual handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc);
private:
public:
	std::shared_ptr<android::icu::text::NumberFormatServiceShim_S_NFService> this_S_1;
	NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory(std::shared_ptr<android::icu::text::NumberFormatServiceShim_S_NFService> this_S_1);
public:
	virtual ~NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory(){
	}

}; // class NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory
}; // namespace android::icu::text

#endif //__android_icu_text_NumberFormatServiceShim_S_NFService_S_1RBNumberFormatFactory__

