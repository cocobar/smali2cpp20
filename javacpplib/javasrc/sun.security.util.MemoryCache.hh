#ifndef __sun_security_util_MemoryCache__
#define __sun_security_util_MemoryCache__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\MemoryCache.smali
#include "java2ctype.h"
#include "sun.security.util.Cache.hhh"

namespace sun::security::util{
template <typename K,typename V>
class MemoryCache : public sun::security::util::Cache<K,V> {
public:
	MemoryCache();
	virtual ~MemoryCache();

}; // class MemoryCache
}; // namespace sun::security::util

#endif //__sun_security_util_MemoryCache__

