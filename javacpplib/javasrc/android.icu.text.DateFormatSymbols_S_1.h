#ifndef __android_icu_text_DateFormatSymbols_S_1__
#define __android_icu_text_DateFormatSymbols_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols$1.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateFormatSymbols_S_1 : public android::icu::impl::SoftCache<java::lang::String,android::icu::text::DateFormatSymbols,android::icu::util::ULocale> {
protected:
	std::shared_ptr<android::icu::text::DateFormatSymbols> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale);
private:
public:
	DateFormatSymbols_S_1();
public:
	virtual ~DateFormatSymbols_S_1(){
	}

}; // class DateFormatSymbols_S_1
}; // namespace android::icu::text

#endif //__android_icu_text_DateFormatSymbols_S_1__

