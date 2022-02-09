#ifndef __android_icu_impl_LocaleIDs__
#define __android_icu_impl_LocaleIDs__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleIDs.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class LocaleIDs : public java::lang::Object {
protected:
private:
	static std::shared_ptr<std::vector<java::lang::String>> _countries;
	static std::shared_ptr<std::vector<java::lang::String>> _countries3;
	static std::shared_ptr<std::vector<java::lang::String>> _deprecatedCountries;
	static std::shared_ptr<std::vector<java::lang::String>> _languages;
	static std::shared_ptr<std::vector<java::lang::String>> _languages3;
	static std::shared_ptr<std::vector<java::lang::String>> _obsoleteCountries;
	static std::shared_ptr<std::vector<java::lang::String>> _obsoleteCountries3;
	static std::shared_ptr<std::vector<java::lang::String>> _obsoleteLanguages;
	static std::shared_ptr<std::vector<java::lang::String>> _obsoleteLanguages3;
	static std::shared_ptr<std::vector<java::lang::String>> _replacementCountries;
	static std::shared_ptr<std::vector<java::lang::String>> _replacementLanguages;
	static int findIndex(std::shared_ptr<std::vector<java::lang::String>> array,std::shared_ptr<java::lang::String> target);
public:
	static void static_cinit();
	LocaleIDs();
	static std::shared_ptr<java::lang::String> getCurrentCountryID(std::shared_ptr<java::lang::String> oldID);
	static std::shared_ptr<java::lang::String> getCurrentLanguageID(std::shared_ptr<java::lang::String> oldID);
	static std::shared_ptr<java::lang::String> getISO3Country(std::shared_ptr<java::lang::String> country);
	static std::shared_ptr<java::lang::String> getISO3Language(std::shared_ptr<java::lang::String> language);
	static std::shared_ptr<java::lang::String> getISOCountries();
	static std::shared_ptr<java::lang::String> getISOLanguages();
	static std::shared_ptr<java::lang::String> threeToTwoLetterLanguage(std::shared_ptr<java::lang::String> lang);
	static std::shared_ptr<java::lang::String> threeToTwoLetterRegion(std::shared_ptr<java::lang::String> region);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::LocaleIDs::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleIDs(){
	}

}; // class LocaleIDs
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleIDs__

