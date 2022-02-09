#ifndef __android_icu_impl_locale_BaseLocale_S_Cache__
#define __android_icu_impl_locale_BaseLocale_S_Cache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\BaseLocale$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.BaseLocale_S_Key.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "android.icu.impl.locale.LocaleObjectCache.h"

namespace android::icu::impl::locale{
class BaseLocale_S_Cache : public android::icu::impl::locale::LocaleObjectCache<android::icu::impl::locale::BaseLocale_S_Key,android::icu::impl::locale::BaseLocale> {
protected:
	std::shared_ptr<android::icu::impl::locale::BaseLocale> virtual createObject(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> key);
	std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> virtual normalizeKey(std::shared_ptr<android::icu::impl::locale::BaseLocale_S_Key> key);
private:
public:
	BaseLocale_S_Cache();
public:
	virtual ~BaseLocale_S_Cache(){
	}

}; // class BaseLocale_S_Cache
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_BaseLocale_S_Cache__

