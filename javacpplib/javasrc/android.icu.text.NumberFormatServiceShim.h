#ifndef __android_icu_text_NumberFormatServiceShim__
#define __android_icu_text_NumberFormatServiceShim__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormatServiceShim.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.text.NumberFormat_S_NumberFormatFactory.h"
#include "android.icu.text.NumberFormat_S_NumberFormatShim.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class NumberFormatServiceShim : public android::icu::text::NumberFormat_S_NumberFormatShim {
protected:
private:
	static std::shared_ptr<android::icu::impl::ICULocaleService> service;
public:
	static void static_cinit();
	NumberFormatServiceShim();
	std::shared_ptr<android::icu::text::NumberFormat> virtual createInstance(std::shared_ptr<android::icu::util::ULocale> desiredLocale,int choice);
	std::shared_ptr<java::util::Locale> virtual getAvailableLocales();
	std::shared_ptr<android::icu::util::ULocale> virtual getAvailableULocales();
	std::shared_ptr<java::lang::Object> virtual registerFactory(std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatFactory> factory);
	bool virtual unregister(std::shared_ptr<java::lang::Object> registryKey);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::NumberFormatServiceShim::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~NumberFormatServiceShim(){
	}

}; // class NumberFormatServiceShim
}; // namespace android::icu::text

#endif //__android_icu_text_NumberFormatServiceShim__

