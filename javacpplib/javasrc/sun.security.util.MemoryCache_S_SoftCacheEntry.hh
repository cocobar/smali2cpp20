#ifndef __sun_security_util_MemoryCache_S_SoftCacheEntry__
#define __sun_security_util_MemoryCache_S_SoftCacheEntry__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\MemoryCache$SoftCacheEntry.smali
#include "java2ctype.h"
#include "java.lang.ref.SoftReference.h"
#include "sun.security.util.MemoryCache_S_CacheEntry.h"

namespace sun::security::util{
template <typename K,typename V>
class MemoryCache_S_SoftCacheEntry : public java::lang::ref::SoftReference<V>, public sun::security::util::MemoryCache_S_CacheEntry<K,V> {
public:
	MemoryCache_S_SoftCacheEntry();
	virtual ~MemoryCache_S_SoftCacheEntry();

}; // class MemoryCache_S_SoftCacheEntry
}; // namespace sun::security::util

#endif //__sun_security_util_MemoryCache_S_SoftCacheEntry__

