#ifndef __android_icu_text_NumberFormat_S_SimpleNumberFormatFactory__
#define __android_icu_text_NumberFormat_S_SimpleNumberFormatFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormat$SimpleNumberFormatFactory.smali
#include "java2ctype.h"
#include "android.icu.text.NumberFormat_S_NumberFormatFactory.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::text{
class NumberFormat_S_SimpleNumberFormatFactory : public android::icu::text::NumberFormat_S_NumberFormatFactory {
protected:
private:
public:
	std::shared_ptr<java::util::Set<java::lang::String>> localeNames;
	bool visible;
	NumberFormat_S_SimpleNumberFormatFactory(std::shared_ptr<android::icu::util::ULocale> locale);
	NumberFormat_S_SimpleNumberFormatFactory(std::shared_ptr<android::icu::util::ULocale> locale,bool visible);
	NumberFormat_S_SimpleNumberFormatFactory(std::shared_ptr<java::util::Locale> locale);
	NumberFormat_S_SimpleNumberFormatFactory(std::shared_ptr<java::util::Locale> locale,bool visible);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedLocaleNames();
	bool virtual visible();
public:
	virtual ~NumberFormat_S_SimpleNumberFormatFactory(){
	}

}; // class NumberFormat_S_SimpleNumberFormatFactory
}; // namespace android::icu::text

#endif //__android_icu_text_NumberFormat_S_SimpleNumberFormatFactory__

