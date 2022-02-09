#ifndef __android_icu_text_CurrencyMetaInfo_S_CurrencyDigits__
#define __android_icu_text_CurrencyMetaInfo_S_CurrencyDigits__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyMetaInfo$CurrencyDigits.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CurrencyMetaInfo_S_CurrencyDigits : public java::lang::Object {
protected:
private:
public:
	int fractionDigits;
	int roundingIncrement;
	CurrencyMetaInfo_S_CurrencyDigits(int fractionDigits,int roundingIncrement);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~CurrencyMetaInfo_S_CurrencyDigits(){
	}

}; // class CurrencyMetaInfo_S_CurrencyDigits
}; // namespace android::icu::text

#endif //__android_icu_text_CurrencyMetaInfo_S_CurrencyDigits__

