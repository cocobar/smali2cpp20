#ifndef __android_icu_util_ULocale_S_1ULocaleAcceptLanguageQ__
#define __android_icu_util_ULocale_S_1ULocaleAcceptLanguageQ__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$1ULocaleAcceptLanguageQ.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"

namespace android::icu::util{
class ULocale_S_1ULocaleAcceptLanguageQ : public java::lang::Comparable<android::icu::util::ULocale_S_1ULocaleAcceptLanguageQ> {
protected:
private:
	double q;
	double serial;
public:
	ULocale_S_1ULocaleAcceptLanguageQ(double theq,int theserial);
	int virtual compareTo(std::shared_ptr<android::icu::util::ULocale_S_1ULocaleAcceptLanguageQ> other);
public:
	virtual ~ULocale_S_1ULocaleAcceptLanguageQ(){
	}

}; // class ULocale_S_1ULocaleAcceptLanguageQ
}; // namespace android::icu::util

#endif //__android_icu_util_ULocale_S_1ULocaleAcceptLanguageQ__

