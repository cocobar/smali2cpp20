#ifndef __android_icu_text_NumberFormat_S_NumberFormatShim__
#define __android_icu_text_NumberFormat_S_NumberFormatShim__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormat$NumberFormatShim.smali
#include "java2ctype.h"
#include "android.icu.text.NumberFormat_S_NumberFormatFactory.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class NumberFormat_S_NumberFormatShim : public java::lang::Object {
protected:
private:
public:
	NumberFormat_S_NumberFormatShim();
	std::shared_ptr<android::icu::text::NumberFormat> createInstance(std::shared_ptr<android::icu::util::ULocale> var0,int var1) = 0;
	std::shared_ptr<java::util::Locale> getAvailableLocales() = 0;
	std::shared_ptr<android::icu::util::ULocale> getAvailableULocales() = 0;
	std::shared_ptr<java::lang::Object> registerFactory(std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatFactory> var0) = 0;
	bool unregister(std::shared_ptr<java::lang::Object> var0) = 0;
public:
	virtual ~NumberFormat_S_NumberFormatShim(){
	}

}; // class NumberFormat_S_NumberFormatShim
}; // namespace android::icu::text

#endif //__android_icu_text_NumberFormat_S_NumberFormatShim__

