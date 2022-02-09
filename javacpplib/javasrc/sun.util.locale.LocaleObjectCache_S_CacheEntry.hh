#ifndef __sun_util_locale_LocaleObjectCache_S_CacheEntry__
#define __sun_util_locale_LocaleObjectCache_S_CacheEntry__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleObjectCache$CacheEntry.smali
#include "java2ctype.h"
#include "java.lang.ref.SoftReference.hhh"

namespace sun::util::locale{
template <typename K,typename V>
class LocaleObjectCache_S_CacheEntry : public java::lang::ref::SoftReference<V> {
public:
	LocaleObjectCache_S_CacheEntry();
	virtual ~LocaleObjectCache_S_CacheEntry();

}; // class LocaleObjectCache_S_CacheEntry
}; // namespace sun::util::locale

#endif //__sun_util_locale_LocaleObjectCache_S_CacheEntry__

