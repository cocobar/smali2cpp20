#ifndef __android_icu_util_CurrencyAmount__
#define __android_icu_util_CurrencyAmount__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\CurrencyAmount.smali
#include "java2ctype.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.Measure.h"
#include "java.lang.Number.h"

namespace android::icu::util{
class CurrencyAmount : public android::icu::util::Measure {
protected:
private:
public:
	CurrencyAmount(double number,std::shared_ptr<android::icu::util::Currency> currency);
	CurrencyAmount(std::shared_ptr<java::lang::Number> number,std::shared_ptr<android::icu::util::Currency> currency);
	std::shared_ptr<android::icu::util::Currency> virtual getCurrency();
public:
	virtual ~CurrencyAmount(){
	}

}; // class CurrencyAmount
}; // namespace android::icu::util

#endif //__android_icu_util_CurrencyAmount__

