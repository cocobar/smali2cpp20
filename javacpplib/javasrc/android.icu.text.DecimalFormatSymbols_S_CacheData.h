#ifndef __android_icu_text_DecimalFormatSymbols_S_CacheData__
#define __android_icu_text_DecimalFormatSymbols_S_CacheData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormatSymbols$CacheData.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DecimalFormatSymbols_S_CacheData : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<std::vector<java::lang::String>> digits;
	std::shared_ptr<std::vector<java::lang::String>> numberElements;
	std::shared_ptr<android::icu::util::ULocale> validLocale;
	DecimalFormatSymbols_S_CacheData(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<std::vector<java::lang::String>> digits,std::shared_ptr<std::vector<java::lang::String>> numberElements);
public:
	virtual ~DecimalFormatSymbols_S_CacheData(){
	}

}; // class DecimalFormatSymbols_S_CacheData
}; // namespace android::icu::text

#endif //__android_icu_text_DecimalFormatSymbols_S_CacheData__

