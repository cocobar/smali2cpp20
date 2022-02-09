#ifndef __sun_security_util_MemoryCache_S_HardCacheEntry__
#define __sun_security_util_MemoryCache_S_HardCacheEntry__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\MemoryCache$HardCacheEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "sun.security.util.MemoryCache_S_CacheEntry.h"

namespace sun::security::util{
template <typename K,typename V>
class MemoryCache_S_HardCacheEntry : public sun::security::util::MemoryCache_S_CacheEntry<K,V> {
protected:
private:
	long long expirationTime;
	std::shared_ptr<K> key;
	std::shared_ptr<V> value;
public:
	MemoryCache_S_HardCacheEntry(std::shared_ptr<K> key,std::shared_ptr<V> value,long long expirationTime);
	std::shared_ptr<K> getKey();
	std::shared_ptr<V> getValue();
	void invalidate();
	bool isValid(long long currentTime);
public:
	virtual ~MemoryCache_S_HardCacheEntry(){
	}

}; // class MemoryCache_S_HardCacheEntry
}; // namespace sun::security::util
// .method constructor <init>(Ljava/lang/Object;Ljava/lang/Object;J)V
template <typename K,typename V>
sun::security::util::MemoryCache_S_HardCacheEntry<K,V>::MemoryCache_S_HardCacheEntry(std::shared_ptr<K> key,std::shared_ptr<V> value,long long expirationTime)
{
	
	//    .param p3, "expirationTime"    # J
	//    .annotation system Ldalvik/annotation/Signature;
	// 058        value = {
	// 059            "(TK;TV;J)V"
	// 060        }
	// 061    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache$HardCacheEntry;, "Lsun/security/util/MemoryCache$HardCacheEntry<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	// 068    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->key = key;
	this->value = value;
	this->expirationTime = expirationTime;
	return;

}
// .method public getKey()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<K> sun::security::util::MemoryCache_S_HardCacheEntry<K,V>::getKey()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 088        value = {
	// 089            "()TK;"
	// 090        }
	// 091    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache$HardCacheEntry;, "Lsun/security/util/MemoryCache$HardCacheEntry<TK;TV;>;"
	return this->key;

}
// .method public getValue()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::security::util::MemoryCache_S_HardCacheEntry<K,V>::getValue()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 104        value = {
	// 105            "()TV;"
	// 106        }
	// 107    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache$HardCacheEntry;, "Lsun/security/util/MemoryCache$HardCacheEntry<TK;TV;>;"
	return this->value;

}
// .method public invalidate()V
template <typename K,typename V>
void sun::security::util::MemoryCache_S_HardCacheEntry<K,V>::invalidate()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .local p0, "this":Lsun/security/util/MemoryCache$HardCacheEntry;, "Lsun/security/util/MemoryCache$HardCacheEntry<TK;TV;>;"
	cVar0 = 0x0;
	this->key = cVar0;
	this->value = cVar0;
	this->expirationTime = -0x1;
	return;

}
// .method public isValid(J)Z
template <typename K,typename V>
bool sun::security::util::MemoryCache_S_HardCacheEntry<K,V>::isValid(long long currentTime)
{
	
	bool valid;
	
	//    .param p1, "currentTime"    # J
	//    .local p0, "this":Lsun/security/util/MemoryCache$HardCacheEntry;, "Lsun/security/util/MemoryCache$HardCacheEntry<TK;TV;>;"
	if ( (currentTime > this->expirationTime) > 0 ) 
		goto label_cond_d;
	valid = 0x1;
	//    .local v0, "valid":Z
	label_goto_7:
	if ( valid )     
		goto label_cond_c;
	this->invalidate();
	label_cond_c:
	return valid;
	// 166    .line 501
	// 167    .end local v0    # "valid":Z
	label_cond_d:
	valid = 0x0;
	//    .restart local v0    # "valid":Z
	goto label_goto_7;

}

#endif //__sun_security_util_MemoryCache_S_HardCacheEntry__

