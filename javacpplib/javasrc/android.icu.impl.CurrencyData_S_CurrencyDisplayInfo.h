#ifndef __android_icu_impl_CurrencyData_S_CurrencyDisplayInfo__
#define __android_icu_impl_CurrencyData_S_CurrencyDisplayInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencyDisplayInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyFormatInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "android.icu.text.CurrencyDisplayNames.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class CurrencyData_S_CurrencyDisplayInfo : public android::icu::text::CurrencyDisplayNames {
protected:
private:
public:
	CurrencyData_S_CurrencyDisplayInfo();
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyFormatInfo> getFormatInfo(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> getSpacingInfo() = 0;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> getUnitPatterns();
public:
	virtual ~CurrencyData_S_CurrencyDisplayInfo(){
	}

}; // class CurrencyData_S_CurrencyDisplayInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_CurrencyData_S_CurrencyDisplayInfo__

