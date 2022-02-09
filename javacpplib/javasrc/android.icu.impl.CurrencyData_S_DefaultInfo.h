#ifndef __android_icu_impl_CurrencyData_S_DefaultInfo__
#define __android_icu_impl_CurrencyData_S_DefaultInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$DefaultInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencyFormatInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class CurrencyData_S_DefaultInfo : public android::icu::impl::CurrencyData_S_CurrencyDisplayInfo {
protected:
private:
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> FALLBACK_INSTANCE;
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> NO_FALLBACK_INSTANCE;
	bool fallback;
	CurrencyData_S_DefaultInfo(bool fallback);
public:
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> getWithFallback(bool fallback);
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyFormatInfo> virtual getFormatInfo(std::shared_ptr<java::lang::String> isoCode);
	std::shared_ptr<java::lang::String> virtual getName(std::shared_ptr<java::lang::String> isoCode);
	std::shared_ptr<java::lang::String> virtual getPluralName(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<java::lang::String> pluralType);
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> virtual getSpacingInfo();
	std::shared_ptr<java::lang::String> virtual getSymbol(std::shared_ptr<java::lang::String> isoCode);
	std::shared_ptr<android::icu::util::ULocale> virtual getULocale();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual getUnitPatterns();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual nameMap();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual symbolMap();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CurrencyData_S_DefaultInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CurrencyData_S_DefaultInfo(){
	}

}; // class CurrencyData_S_DefaultInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_CurrencyData_S_DefaultInfo__

