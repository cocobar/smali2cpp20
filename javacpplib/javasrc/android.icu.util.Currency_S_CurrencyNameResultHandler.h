#ifndef __android_icu_util_Currency_S_CurrencyNameResultHandler__
#define __android_icu_util_Currency_S_CurrencyNameResultHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$CurrencyNameResultHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap_S_ResultHandler.h"
#include "android.icu.util.Currency_S_CurrencyStringInfo.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"

namespace android::icu::util{
class Currency_S_CurrencyNameResultHandler : public android::icu::impl::TextTrieMap_S_ResultHandler<android::icu::util::Currency_S_CurrencyStringInfo> {
protected:
private:
	std::shared_ptr<java::lang::String> bestCurrencyISOCode;
	int bestMatchLength;
	Currency_S_CurrencyNameResultHandler();
public:
	Currency_S_CurrencyNameResultHandler(std::shared_ptr<android::icu::util::Currency_S_CurrencyNameResultHandler> _this0);
	std::shared_ptr<java::lang::String> virtual getBestCurrencyISOCode();
	int virtual getBestMatchLength();
	bool virtual handlePrefixMatch(int matchLength,std::shared_ptr<java::util::Iterator<android::icu::util::Currency_S_CurrencyStringInfo>> values);
public:
	virtual ~Currency_S_CurrencyNameResultHandler(){
	}

}; // class Currency_S_CurrencyNameResultHandler
}; // namespace android::icu::util

#endif //__android_icu_util_Currency_S_CurrencyNameResultHandler__
