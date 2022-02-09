#ifndef __android_icu_text_NumberFormatServiceShim_S_NFFactory__
#define __android_icu_text_NumberFormatServiceShim_S_NFFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormatServiceShim$NFFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKeyFactory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.NumberFormat_S_NumberFormatFactory.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

namespace android::icu::text{
class NumberFormatServiceShim_S_NFFactory : public android::icu::impl::ICULocaleService_S_LocaleKeyFactory {
protected:
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedIDs();
private:
	std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatFactory> delegate;
public:
	NumberFormatServiceShim_S_NFFactory(std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatFactory> delegate);
	std::shared_ptr<java::lang::Object> virtual create(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<android::icu::impl::ICUService> srvc);
public:
	virtual ~NumberFormatServiceShim_S_NFFactory(){
	}

}; // class NumberFormatServiceShim_S_NFFactory
}; // namespace android::icu::text

#endif //__android_icu_text_NumberFormatServiceShim_S_NFFactory__

