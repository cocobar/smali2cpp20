#ifndef __android_icu_text_Collator_S_CollatorFactory__
#define __android_icu_text_Collator_S_CollatorFactory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Collator$CollatorFactory.smali
#include "java2ctype.h"
#include "android.icu.text.Collator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::text{
class Collator_S_CollatorFactory : public java::lang::Object {
protected:
	Collator_S_CollatorFactory();
private:
public:
	std::shared_ptr<android::icu::text::Collator> virtual createCollator(std::shared_ptr<android::icu::util::ULocale> loc);
	std::shared_ptr<android::icu::text::Collator> virtual createCollator(std::shared_ptr<java::util::Locale> loc);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<android::icu::util::ULocale> objectLocale,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<java::util::Locale> objectLocale,std::shared_ptr<java::util::Locale> displayLocale);
	std::shared_ptr<java::util::Set<java::lang::String>> getSupportedLocaleIDs();
	bool virtual visible();
public:
	virtual ~Collator_S_CollatorFactory(){
	}

}; // class Collator_S_CollatorFactory
}; // namespace android::icu::text

#endif //__android_icu_text_Collator_S_CollatorFactory__

