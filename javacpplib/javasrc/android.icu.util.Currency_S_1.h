#ifndef __android_icu_util_Currency_S_1__
#define __android_icu_util_Currency_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$1.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.util.Currency.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"

namespace android::icu::util{
class Currency_S_1 : public android::icu::impl::SoftCache<java::lang::String,android::icu::util::Currency,java::lang::Void> {
protected:
	std::shared_ptr<android::icu::util::Currency> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::Void> unused);
private:
public:
	Currency_S_1();
public:
	virtual ~Currency_S_1(){
	}

}; // class Currency_S_1
}; // namespace android::icu::util

#endif //__android_icu_util_Currency_S_1__

