#ifndef __android_icu_impl_locale_BaseLocale_S_Cache__
#define __android_icu_impl_locale_BaseLocale_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\BaseLocale$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.BaseLocale_S_Key.hhh"
#include "android.icu.impl.locale.BaseLocale.hhh"
#include "android.icu.impl.locale.LocaleObjectCache.hhh"

namespace android::icu::impl::locale{
class BaseLocale_S_Cache : public android::icu::impl::locale::LocaleObjectCache<android::icu::impl::locale::BaseLocale_S_Key,android::icu::impl::locale::BaseLocale> {
public:
	BaseLocale_S_Cache();
	virtual ~BaseLocale_S_Cache();

}; // class BaseLocale_S_Cache
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_BaseLocale_S_Cache__

