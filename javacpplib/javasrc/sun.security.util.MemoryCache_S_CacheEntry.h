#ifndef __sun_security_util_MemoryCache_S_CacheEntry__
#define __sun_security_util_MemoryCache_S_CacheEntry__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\MemoryCache$CacheEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace sun::security::util{
template <typename K,typename V>
class MemoryCache_S_CacheEntry : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<K> getKey();
	std::shared_ptr<V> getValue();
	void invalidate() = 0;
	bool isValid(long long var0) = 0;
	MemoryCache_S_CacheEntry(){ };
	virtual ~MemoryCache_S_CacheEntry(){ };

}; // class MemoryCache_S_CacheEntry
}; // namespace sun::security::util
// .method public abstract getKey()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<K> sun::security::util::MemoryCache_S_CacheEntry<K,V>::getKey()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 031        value = {
	// 032            "()TK;"
	// 033        }
	// 034    .end annotation

}
// .method public abstract getValue()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::security::util::MemoryCache_S_CacheEntry<K,V>::getValue()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 039        value = {
	// 040            "()TV;"
	// 041        }
	// 042    .end annotation

}

#endif //__sun_security_util_MemoryCache_S_CacheEntry__

