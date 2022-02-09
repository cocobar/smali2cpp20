#ifndef __android_icu_impl_locale_LocaleValidityChecker_S_SpecialCase__
#define __android_icu_impl_locale_LocaleValidityChecker_S_SpecialCase__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleValidityChecker$SpecialCase.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class LocaleValidityChecker_S_SpecialCase : public java::lang::Enum<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase>> _S_VALUES;
	LocaleValidityChecker_S_SpecialCase(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> anything;
	static std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> codepoints;
	static std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> normal;
	static std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> reorder;
	static std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> rgKey;
	static std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> subdivision;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> get(std::shared_ptr<java::lang::String> key);
	static std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::LocaleValidityChecker_S_SpecialCase::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleValidityChecker_S_SpecialCase(){
	}

}; // class LocaleValidityChecker_S_SpecialCase
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_LocaleValidityChecker_S_SpecialCase__

