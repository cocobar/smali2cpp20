#ifndef __android_icu_text_BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory__
#define __android_icu_text_BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIteratorFactory$BFService$1RBBreakIteratorFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_ICUResourceBundleFactory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.text.BreakIteratorFactory_S_BFService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory : public android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory {
protected:
	std::shared_ptr<java::lang::Object> virtual handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> srvc);
private:
public:
	std::shared_ptr<android::icu::text::BreakIteratorFactory_S_BFService> this_S_1;
	BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory(std::shared_ptr<android::icu::text::BreakIteratorFactory_S_BFService> this_S_1);
public:
	virtual ~BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory(){
	}

}; // class BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory
}; // namespace android::icu::text

#endif //__android_icu_text_BreakIteratorFactory_S_BFService_S_1RBBreakIteratorFactory__

