#ifndef __android_icu_text_CollatorServiceShim__
#define __android_icu_text_CollatorServiceShim__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CollatorServiceShim.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.text.Collator_S_CollatorFactory.h"
#include "android.icu.text.Collator_S_ServiceShim.h"
#include "android.icu.text.Collator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class CollatorServiceShim : public android::icu::text::Collator_S_ServiceShim {
protected:
private:
	static std::shared_ptr<android::icu::impl::ICULocaleService> service;
	static std::shared_ptr<android::icu::text::Collator> makeInstance(std::shared_ptr<android::icu::util::ULocale> desiredLocale);
public:
	static std::shared_ptr<android::icu::text::Collator> _wrap0(std::shared_ptr<android::icu::util::ULocale> desiredLocale);
	static void static_cinit();
	CollatorServiceShim();
	std::shared_ptr<java::util::Locale> virtual getAvailableLocales();
	std::shared_ptr<android::icu::util::ULocale> virtual getAvailableULocales();
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<android::icu::util::ULocale> objectLocale,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<android::icu::text::Collator> virtual getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::Object> virtual registerFactory(std::shared_ptr<android::icu::text::Collator_S_CollatorFactory> f);
	std::shared_ptr<java::lang::Object> virtual registerInstance(std::shared_ptr<android::icu::text::Collator> collator,std::shared_ptr<android::icu::util::ULocale> locale);
	bool virtual unregister(std::shared_ptr<java::lang::Object> registryKey);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CollatorServiceShim::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollatorServiceShim(){
	}

}; // class CollatorServiceShim
}; // namespace android::icu::text

#endif //__android_icu_text_CollatorServiceShim__

