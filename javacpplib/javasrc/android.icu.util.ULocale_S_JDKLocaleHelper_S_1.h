#ifndef __android_icu_util_ULocale_S_JDKLocaleHelper_S_1__
#define __android_icu_util_ULocale_S_JDKLocaleHelper_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$JDKLocaleHelper$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace android::icu::util{
class ULocale_S_JDKLocaleHelper_S_1 : public java::security::PrivilegedAction<java::lang::String> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_fkey;
	ULocale_S_JDKLocaleHelper_S_1(std::shared_ptr<java::lang::String> var0);
	std::shared_ptr<java::lang::String> virtual run();
public:
	virtual ~ULocale_S_JDKLocaleHelper_S_1(){
	}

}; // class ULocale_S_JDKLocaleHelper_S_1
}; // namespace android::icu::util

#endif //__android_icu_util_ULocale_S_JDKLocaleHelper_S_1__

