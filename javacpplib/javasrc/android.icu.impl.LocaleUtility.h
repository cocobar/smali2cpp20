#ifndef __android_icu_impl_LocaleUtility__
#define __android_icu_impl_LocaleUtility__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleUtility.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

namespace android::icu::impl{
class LocaleUtility : public java::lang::Object {
protected:
private:
public:
	LocaleUtility();
	static std::shared_ptr<java::util::Locale> fallback(std::shared_ptr<java::util::Locale> loc);
	static std::shared_ptr<java::util::Locale> getLocaleFromName(std::shared_ptr<java::lang::String> name);
	static bool isFallbackOf(std::shared_ptr<java::lang::String> parent,std::shared_ptr<java::lang::String> child);
	static bool isFallbackOf(std::shared_ptr<java::util::Locale> parent,std::shared_ptr<java::util::Locale> child);
public:
	virtual ~LocaleUtility(){
	}

}; // class LocaleUtility
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleUtility__

