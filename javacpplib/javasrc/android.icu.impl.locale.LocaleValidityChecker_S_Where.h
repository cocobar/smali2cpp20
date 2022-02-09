#ifndef __android_icu_impl_locale_LocaleValidityChecker_S_Where__
#define __android_icu_impl_locale_LocaleValidityChecker_S_Where__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleValidityChecker$Where.smali
#include "java2ctype.h"
#include "android.icu.impl.ValidIdentifiers_S_Datatype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class LocaleValidityChecker_S_Where : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> codeFailure;
	std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> fieldFailure;
	LocaleValidityChecker_S_Where();
	bool virtual set(std::shared_ptr<android::icu::impl::ValidIdentifiers_S_Datatype> datatype,std::shared_ptr<java::lang::String> code);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~LocaleValidityChecker_S_Where(){
	}

}; // class LocaleValidityChecker_S_Where
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_LocaleValidityChecker_S_Where__

