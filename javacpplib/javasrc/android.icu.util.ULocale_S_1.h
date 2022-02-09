#ifndef __android_icu_util_ULocale_S_1__
#define __android_icu_util_ULocale_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$1.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"

namespace android::icu::util{
class ULocale_S_1 : public android::icu::impl::SoftCache<java::lang::String,java::lang::String,java::lang::Void> {
protected:
	std::shared_ptr<java::lang::String> virtual createInstance(std::shared_ptr<java::lang::String> tmpLocaleID,std::shared_ptr<java::lang::Void> unused);
private:
public:
	ULocale_S_1();
public:
	virtual ~ULocale_S_1(){
	}

}; // class ULocale_S_1
}; // namespace android::icu::util

#endif //__android_icu_util_ULocale_S_1__

