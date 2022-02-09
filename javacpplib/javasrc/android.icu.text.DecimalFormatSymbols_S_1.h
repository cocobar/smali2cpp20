#ifndef __android_icu_text_DecimalFormatSymbols_S_1__
#define __android_icu_text_DecimalFormatSymbols_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormatSymbols$1.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.text.DecimalFormatSymbols_S_CacheData.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Void.h"

namespace android::icu::text{
class DecimalFormatSymbols_S_1 : public android::icu::impl::SoftCache<android::icu::util::ULocale,android::icu::text::DecimalFormatSymbols_S_CacheData,java::lang::Void> {
protected:
	std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_CacheData> virtual createInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::Void> unused);
private:
public:
	DecimalFormatSymbols_S_1();
public:
	virtual ~DecimalFormatSymbols_S_1(){
	}

}; // class DecimalFormatSymbols_S_1
}; // namespace android::icu::text

#endif //__android_icu_text_DecimalFormatSymbols_S_1__

