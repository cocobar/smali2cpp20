#ifndef __android_icu_impl_locale_LocaleValidityChecker__
#define __android_icu_impl_locale_LocaleValidityChecker__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleValidityChecker.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datasubtype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datatype.h"
#include "android.icu.impl.locale.LocaleValidityChecker_S_Where.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::impl::locale{
class LocaleValidityChecker : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_impl_ValidIdentifiers_S_DatatypeSwitchesValues;
	static std::shared_ptr<int[]> _android_icu_impl_locale_KeyTypeData_S_ValueTypeSwitchesValues;
	static std::shared_ptr<int[]> _android_icu_impl_locale_LocaleValidityChecker_S_SpecialCaseSwitchesValues;
	static std::shared_ptr<java::util::regex::Pattern> VALID_X;
	bool allowsDeprecated;
	std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> datasubtypes;
	static int _getandroid_icu_impl_ValidIdentifiers_S_DatatypeSwitchesValues();
	static int _getandroid_icu_impl_locale_KeyTypeData_S_ValueTypeSwitchesValues();
	static int _getandroid_icu_impl_locale_LocaleValidityChecker_S_SpecialCaseSwitchesValues();
	bool virtual isScriptReorder(std::shared_ptr<java::lang::String> subtag);
	bool virtual isSubdivision(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> subtag);
	bool virtual isValid(std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::lang::String> code,std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_Where> where);
	bool virtual isValidLocale(std::shared_ptr<java::lang::String> extensionString,std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_Where> where);
	bool virtual isValidU(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::lang::String> extensionString,std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_Where> where);
public:
	static std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> REGULAR_ONLY;
	static std::shared_ptr<java::util::Set<java::lang::String>> REORDERING_EXCLUDE;
	static std::shared_ptr<java::util::Set<java::lang::String>> REORDERING_INCLUDE;
	static std::shared_ptr<java::util::regex::Pattern> SEPARATOR;
	static void static_cinit();
	LocaleValidityChecker(std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> datasubtypes);
	LocaleValidityChecker(std::shared_ptr<std::vector<android::icu::impl::ValidIdentifiers_S_Datasubtype>> datasubtypes);
	std::shared_ptr<java::util::Set<android::icu::impl::ValidIdentifiers_S_Datasubtype>> virtual getDatasubtypes();
	bool virtual isValid(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_Where> where);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::LocaleValidityChecker::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleValidityChecker(){
	}

}; // class LocaleValidityChecker
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_LocaleValidityChecker__

