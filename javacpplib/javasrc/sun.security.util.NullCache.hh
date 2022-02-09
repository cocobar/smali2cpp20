#ifndef __sun_security_util_NullCache__
#define __sun_security_util_NullCache__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\NullCache.smali
#include "java2ctype.h"
#include "sun.security.util.Cache.hhh"

namespace sun::security::util{
template <typename K,typename V>
class NullCache : public sun::security::util::Cache<K,V> {
public:
	NullCache();
	virtual ~NullCache();

}; // class NullCache
}; // namespace sun::security::util

#endif //__sun_security_util_NullCache__

