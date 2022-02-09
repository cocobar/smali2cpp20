#ifndef __android_icu_impl_ICUResourceBundle_S_AvailEntry__
#define __android_icu_impl_ICUResourceBundle_S_AvailEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$AvailEntry.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUResourceBundle_S_AvailEntry : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Set<java::lang::String>> fullNameSet;
	std::shared_ptr<java::lang::ClassLoader> loader;
	std::shared_ptr<std::vector<java::util::Locale>> locales;
	std::shared_ptr<java::util::Set<java::lang::String>> nameSet;
	std::shared_ptr<java::lang::String> prefix;
	std::shared_ptr<std::vector<android::icu::util::ULocale>> ulocales;
public:
	ICUResourceBundle_S_AvailEntry(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::ClassLoader> loader);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getFullLocaleNameSet();
	std::shared_ptr<java::util::Locale> virtual getLocaleList();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getLocaleNameSet();
	std::shared_ptr<android::icu::util::ULocale> virtual getULocaleList();
public:
	virtual ~ICUResourceBundle_S_AvailEntry(){
	}

}; // class ICUResourceBundle_S_AvailEntry
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundle_S_AvailEntry__

