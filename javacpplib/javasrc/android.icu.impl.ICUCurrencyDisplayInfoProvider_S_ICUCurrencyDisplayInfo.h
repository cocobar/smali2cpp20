#ifndef __android_icu_impl_ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo__
#define __android_icu_impl_ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencyFormatInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.ref.SoftReference.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo : public android::icu::impl::CurrencyData_S_CurrencyDisplayInfo {
protected:
private:
	std::shared_ptr<java::lang::ref::SoftReference<java::util::Map<java::lang::String,java::lang::String>>> _nameMapRef;
	std::shared_ptr<java::lang::ref::SoftReference<java::util::Map<java::lang::String,java::lang::String>>> _symbolMapRef;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> currencies;
	bool fallback;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> plurals;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual _createNameMap();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual _createSymbolMap();
	std::shared_ptr<java::lang::String> virtual getName(std::shared_ptr<java::lang::String> isoCode,bool symbolName);
public:
	ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo(std::shared_ptr<android::icu::impl::ICUResourceBundle> rb,bool fallback);
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyFormatInfo> virtual getFormatInfo(std::shared_ptr<java::lang::String> isoCode);
	std::shared_ptr<java::lang::String> virtual getName(std::shared_ptr<java::lang::String> isoCode);
	std::shared_ptr<java::lang::String> virtual getPluralName(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<java::lang::String> pluralKey);
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> virtual getSpacingInfo();
	std::shared_ptr<java::lang::String> virtual getSymbol(std::shared_ptr<java::lang::String> isoCode);
	std::shared_ptr<android::icu::util::ULocale> virtual getULocale();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual getUnitPatterns();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual nameMap();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual symbolMap();
public:
	virtual ~ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo(){
	}

}; // class ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo__

