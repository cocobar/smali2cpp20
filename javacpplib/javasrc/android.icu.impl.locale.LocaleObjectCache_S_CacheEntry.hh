#ifndef __android_icu_impl_locale_LocaleObjectCache_S_CacheEntry__
#define __android_icu_impl_locale_LocaleObjectCache_S_CacheEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleObjectCache$CacheEntry.smali
#include "java2ctype.h"
#include "java.lang.ref.SoftReference.hhh"

namespace android::icu::impl::locale{
template <typename K,typename V>
class LocaleObjectCache_S_CacheEntry : public java::lang::ref::SoftReference<V> {
public:
	LocaleObjectCache_S_CacheEntry();
	virtual ~LocaleObjectCache_S_CacheEntry();

}; // class LocaleObjectCache_S_CacheEntry
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_LocaleObjectCache_S_CacheEntry__

