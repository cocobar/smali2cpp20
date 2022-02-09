#ifndef __android_icu_util_ULocale_S_2__
#define __android_icu_util_ULocale_S_2__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$2.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Void.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class ULocale_S_2 : public android::icu::impl::SoftCache<java::util::Locale,android::icu::util::ULocale,java::lang::Void> {
protected:
	std::shared_ptr<android::icu::util::ULocale> virtual createInstance(std::shared_ptr<java::util::Locale> key,std::shared_ptr<java::lang::Void> unused);
private:
public:
	ULocale_S_2();
public:
	virtual ~ULocale_S_2(){
	}

}; // class ULocale_S_2
}; // namespace android::icu::util

#endif //__android_icu_util_ULocale_S_2__

