#ifndef __android_icu_impl_CurrencyData_S_CurrencyFormatInfo__
#define __android_icu_impl_CurrencyData_S_CurrencyFormatInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencyFormatInfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class CurrencyData_S_CurrencyFormatInfo : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> currencyPattern;
	std::shared_ptr<java::lang::String> monetaryGroupingSeparator;
	std::shared_ptr<java::lang::String> monetarySeparator;
	CurrencyData_S_CurrencyFormatInfo(std::shared_ptr<java::lang::String> currencyPattern,std::shared_ptr<java::lang::String> monetarySeparator,std::shared_ptr<java::lang::String> monetaryGroupingSeparator);
public:
	virtual ~CurrencyData_S_CurrencyFormatInfo(){
	}

}; // class CurrencyData_S_CurrencyFormatInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_CurrencyData_S_CurrencyFormatInfo__

