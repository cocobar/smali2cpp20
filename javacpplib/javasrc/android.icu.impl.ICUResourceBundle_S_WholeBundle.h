#ifndef __android_icu_impl_ICUResourceBundle_S_WholeBundle__
#define __android_icu_impl_ICUResourceBundle_S_WholeBundle__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$WholeBundle.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUResourceBundle_S_WholeBundle : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> baseName;
	std::shared_ptr<java::lang::ClassLoader> loader;
	std::shared_ptr<java::lang::String> localeID;
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader;
	std::shared_ptr<java::util::Set<java::lang::String>> topLevelKeys;
	std::shared_ptr<android::icu::util::ULocale> ulocale;
	ICUResourceBundle_S_WholeBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader);
public:
	virtual ~ICUResourceBundle_S_WholeBundle(){
	}

}; // class ICUResourceBundle_S_WholeBundle
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundle_S_WholeBundle__

