#ifndef __android_icu_util_Currency_S_CurrencyStringInfo__
#define __android_icu_util_Currency_S_CurrencyStringInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$CurrencyStringInfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class Currency_S_CurrencyStringInfo : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> currencyString;
	std::shared_ptr<java::lang::String> isoCode;
public:
	Currency_S_CurrencyStringInfo(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<java::lang::String> currencyString);
	std::shared_ptr<java::lang::String> virtual getCurrencyString();
	std::shared_ptr<java::lang::String> virtual getISOCode();
public:
	virtual ~Currency_S_CurrencyStringInfo(){
	}

}; // class Currency_S_CurrencyStringInfo
}; // namespace android::icu::util

#endif //__android_icu_util_Currency_S_CurrencyStringInfo__

