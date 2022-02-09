#ifndef __android_icu_text_CollatorServiceShim_S_1CFactory__
#define __android_icu_text_CollatorServiceShim_S_1CFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CollatorServiceShim$1CFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKeyFactory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.Collator_S_CollatorFactory.h"
#include "android.icu.text.CollatorServiceShim.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

namespace android::icu::text{
class CollatorServiceShim_S_1CFactory : public android::icu::impl::ICULocaleService_S_LocaleKeyFactory {
protected:
private:
public:
	std::shared_ptr<android::icu::text::Collator_S_CollatorFactory> delegate;
	std::shared_ptr<android::icu::text::CollatorServiceShim> this_S_0;
	CollatorServiceShim_S_1CFactory(std::shared_ptr<android::icu::text::CollatorServiceShim> this_S_0,std::shared_ptr<android::icu::text::Collator_S_CollatorFactory> fctry);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedIDs();
	std::shared_ptr<java::lang::Object> virtual handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc);
public:
	virtual ~CollatorServiceShim_S_1CFactory(){
	}

}; // class CollatorServiceShim_S_1CFactory
}; // namespace android::icu::text

#endif //__android_icu_text_CollatorServiceShim_S_1CFactory__

