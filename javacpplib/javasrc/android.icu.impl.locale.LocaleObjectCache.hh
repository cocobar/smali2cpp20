#ifndef __android_icu_impl_locale_LocaleObjectCache__
#define __android_icu_impl_locale_LocaleObjectCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleObjectCache.smali
#include "java2ctype.h"
#include "java.lang.Object.hh"

namespace android::icu::impl::locale{
template <typename K,typename V>
class LocaleObjectCache : public java::lang::Object {
public:
	LocaleObjectCache();
	virtual ~LocaleObjectCache();

}; // class LocaleObjectCache
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_LocaleObjectCache__

