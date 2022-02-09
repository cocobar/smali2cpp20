#ifndef __android_icu_util_Currency_S_ServiceShim__
#define __android_icu_util_Currency_S_ServiceShim__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$ServiceShim.smali
#include "java2ctype.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class Currency_S_ServiceShim : public java::lang::Object {
protected:
private:
public:
	Currency_S_ServiceShim();
	std::shared_ptr<android::icu::util::Currency> createInstance(std::shared_ptr<android::icu::util::ULocale> var0) = 0;
	std::shared_ptr<java::util::Locale> getAvailableLocales() = 0;
	std::shared_ptr<android::icu::util::ULocale> getAvailableULocales() = 0;
	std::shared_ptr<java::lang::Object> registerInstance(std::shared_ptr<android::icu::util::Currency> var0,std::shared_ptr<android::icu::util::ULocale> var1) = 0;
	bool unregister(std::shared_ptr<java::lang::Object> var0) = 0;
public:
	virtual ~Currency_S_ServiceShim(){
	}

}; // class Currency_S_ServiceShim
}; // namespace android::icu::util

#endif //__android_icu_util_Currency_S_ServiceShim__

