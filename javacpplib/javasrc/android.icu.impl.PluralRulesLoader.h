#ifndef __android_icu_impl_PluralRulesLoader__
#define __android_icu_impl_PluralRulesLoader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\PluralRulesLoader.smali
#include "java2ctype.h"
#include "android.icu.text.PluralRanges.h"
#include "android.icu.text.PluralRules_S_Factory.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class PluralRulesLoader : public android::icu::text::PluralRules_S_Factory {
protected:
private:
	static std::shared_ptr<android::icu::text::PluralRanges> UNKNOWN_RANGE;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::PluralRanges>> localeIdToPluralRanges;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> localeIdToCardinalRulesId;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> localeIdToOrdinalRulesId;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::util::ULocale>> rulesIdToEquivalentULocale;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::PluralRules>> rulesIdToRules;
	PluralRulesLoader();
	void virtual checkBuildRulesIdMaps();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual getLocaleIdToRulesIdMap(std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type);
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::util::ULocale>> virtual getRulesIdToEquivalentULocaleMap();
public:
	static std::shared_ptr<android::icu::impl::PluralRulesLoader> loader;
	static void static_cinit();
	std::shared_ptr<android::icu::text::PluralRules> virtual forLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type);
	std::shared_ptr<android::icu::util::ULocale> virtual getAvailableULocales();
	std::shared_ptr<android::icu::util::ULocale> virtual getFunctionalEquivalent(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<bool[]> isAvailable);
	std::shared_ptr<android::icu::util::UResourceBundle> virtual getPluralBundle();
	std::shared_ptr<android::icu::text::PluralRanges> virtual getPluralRanges(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::text::PluralRules> virtual getRulesForRulesId(std::shared_ptr<java::lang::String> rulesId);
	std::shared_ptr<java::lang::String> virtual getRulesIdForLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type);
	bool virtual hasOverride(std::shared_ptr<android::icu::util::ULocale> locale);
	bool virtual isPluralRangesAvailable(std::shared_ptr<android::icu::util::ULocale> locale);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::PluralRulesLoader::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralRulesLoader(){
	}

}; // class PluralRulesLoader
}; // namespace android::icu::impl

#endif //__android_icu_impl_PluralRulesLoader__

