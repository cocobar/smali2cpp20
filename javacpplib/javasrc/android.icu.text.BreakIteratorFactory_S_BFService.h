#ifndef __android_icu_text_BreakIteratorFactory_S_BFService__
#define __android_icu_text_BreakIteratorFactory_S_BFService__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIteratorFactory$BFService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "java.lang.String.h"

namespace android::icu::text{
class BreakIteratorFactory_S_BFService : public android::icu::impl::ICULocaleService {
protected:
private:
public:
	BreakIteratorFactory_S_BFService();
	std::shared_ptr<java::lang::String> virtual validateFallbackLocale();
public:
	virtual ~BreakIteratorFactory_S_BFService(){
	}

}; // class BreakIteratorFactory_S_BFService
}; // namespace android::icu::text

#endif //__android_icu_text_BreakIteratorFactory_S_BFService__

