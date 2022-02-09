#ifndef __android_icu_text_NumberFormat_S_NumberFormatFactory__
#define __android_icu_text_NumberFormat_S_NumberFormatFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormat$NumberFormatFactory.smali
#include "java2ctype.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::text{
class NumberFormat_S_NumberFormatFactory : public java::lang::Object {
protected:
	NumberFormat_S_NumberFormatFactory();
private:
public:
	static int FORMAT_CURRENCY;
	static int FORMAT_INTEGER;
	static int FORMAT_NUMBER;
	static int FORMAT_PERCENT;
	static int FORMAT_SCIENTIFIC;
	std::shared_ptr<android::icu::text::NumberFormat> virtual createFormat(std::shared_ptr<android::icu::util::ULocale> loc,int formatType);
	std::shared_ptr<android::icu::text::NumberFormat> virtual createFormat(std::shared_ptr<java::util::Locale> loc,int formatType);
	std::shared_ptr<java::util::Set<java::lang::String>> getSupportedLocaleNames();
	bool virtual visible();
public:
	virtual ~NumberFormat_S_NumberFormatFactory(){
	}

}; // class NumberFormat_S_NumberFormatFactory
}; // namespace android::icu::text

#endif //__android_icu_text_NumberFormat_S_NumberFormatFactory__

