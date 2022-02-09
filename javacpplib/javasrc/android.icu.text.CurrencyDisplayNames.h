#ifndef __android_icu_text_CurrencyDisplayNames__
#define __android_icu_text_CurrencyDisplayNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyDisplayNames.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

namespace android::icu::text{
class CurrencyDisplayNames : public java::lang::Object {
protected:
	CurrencyDisplayNames();
private:
public:
	static std::shared_ptr<android::icu::text::CurrencyDisplayNames> getInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	static std::shared_ptr<android::icu::text::CurrencyDisplayNames> getInstance(std::shared_ptr<android::icu::util::ULocale> locale,bool noSubstitute);
	static std::shared_ptr<android::icu::text::CurrencyDisplayNames> getInstance(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<android::icu::text::CurrencyDisplayNames> getInstance(std::shared_ptr<java::util::Locale> locale,bool noSubstitute);
	static bool hasData();
	std::shared_ptr<java::lang::String> getName(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<java::lang::String> getPluralName(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1) = 0;
	std::shared_ptr<java::lang::String> getSymbol(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<android::icu::util::ULocale> getULocale() = 0;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> nameMap();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> symbolMap();
public:
	virtual ~CurrencyDisplayNames(){
	}

}; // class CurrencyDisplayNames
}; // namespace android::icu::text

#endif //__android_icu_text_CurrencyDisplayNames__

