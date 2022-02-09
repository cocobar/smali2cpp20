#ifndef __android_icu_text_Collator_S_ServiceShim__
#define __android_icu_text_Collator_S_ServiceShim__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Collator$ServiceShim.smali
#include "java2ctype.h"
#include "android.icu.text.Collator_S_CollatorFactory.h"
#include "android.icu.text.Collator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class Collator_S_ServiceShim : public java::lang::Object {
protected:
private:
public:
	Collator_S_ServiceShim();
	std::shared_ptr<java::util::Locale> getAvailableLocales() = 0;
	std::shared_ptr<android::icu::util::ULocale> getAvailableULocales() = 0;
	std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<android::icu::util::ULocale> var0,std::shared_ptr<android::icu::util::ULocale> var1) = 0;
	std::shared_ptr<android::icu::text::Collator> getInstance(std::shared_ptr<android::icu::util::ULocale> var0) = 0;
	std::shared_ptr<java::lang::Object> registerFactory(std::shared_ptr<android::icu::text::Collator_S_CollatorFactory> var0) = 0;
	std::shared_ptr<java::lang::Object> registerInstance(std::shared_ptr<android::icu::text::Collator> var0,std::shared_ptr<android::icu::util::ULocale> var1) = 0;
	bool unregister(std::shared_ptr<java::lang::Object> var0) = 0;
public:
	virtual ~Collator_S_ServiceShim(){
	}

}; // class Collator_S_ServiceShim
}; // namespace android::icu::text

#endif //__android_icu_text_Collator_S_ServiceShim__

