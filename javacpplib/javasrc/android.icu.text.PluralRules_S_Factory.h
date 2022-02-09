#ifndef __android_icu_text_PluralRules_S_Factory__
#define __android_icu_text_PluralRules_S_Factory__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRules$Factory.smali
#include "java2ctype.h"
#include "android.icu.impl.PluralRulesLoader.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class PluralRules_S_Factory : public java::lang::Object {
protected:
	PluralRules_S_Factory();
private:
public:
	static std::shared_ptr<android::icu::impl::PluralRulesLoader> getDefaultFactory();
	std::shared_ptr<android::icu::text::PluralRules> virtual forLocale(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::text::PluralRules> forLocale(std::shared_ptr<android::icu::util::ULocale> var0,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> var1);
	std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	std::shared_ptr<android::icu::util::ULocale> getFunctionalEquivalent(std::shared_ptr<android::icu::util::ULocale> var0,std::shared_ptr<bool[]> var1);
	bool hasOverride(std::shared_ptr<android::icu::util::ULocale> var0);
public:
	virtual ~PluralRules_S_Factory(){
	}

}; // class PluralRules_S_Factory
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRules_S_Factory__

