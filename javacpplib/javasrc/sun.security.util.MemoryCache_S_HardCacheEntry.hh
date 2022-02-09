#ifndef __sun_security_util_MemoryCache_S_HardCacheEntry__
#define __sun_security_util_MemoryCache_S_HardCacheEntry__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\MemoryCache$HardCacheEntry.smali
#include "java2ctype.h"
#include "sun.security.util.MemoryCache_S_CacheEntry.h"

namespace sun::security::util{
template <typename K,typename V>
class MemoryCache_S_HardCacheEntry : public sun::security::util::MemoryCache_S_CacheEntry<K,V> {
public:
	MemoryCache_S_HardCacheEntry();
	virtual ~MemoryCache_S_HardCacheEntry();

}; // class MemoryCache_S_HardCacheEntry
}; // namespace sun::security::util

#endif //__sun_security_util_MemoryCache_S_HardCacheEntry__

