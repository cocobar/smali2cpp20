#ifndef __sun_security_util_MemoryCache_S_SoftCacheEntry__
#define __sun_security_util_MemoryCache_S_SoftCacheEntry__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\MemoryCache$SoftCacheEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.lang.ref.SoftReference.h"
#include "sun.security.util.MemoryCache_S_CacheEntry.h"

namespace sun::security::util{
template <typename K,typename V>
class MemoryCache_S_SoftCacheEntry : public java::lang::ref::SoftReference<V>, public sun::security::util::MemoryCache_S_CacheEntry<K,V> {
protected:
private:
	long long expirationTime;
	std::shared_ptr<K> key;
public:
	MemoryCache_S_SoftCacheEntry(std::shared_ptr<K> key,std::shared_ptr<V> value,long long expirationTime,std::shared_ptr<java::lang::ref::ReferenceQueue<V>> queue);
	std::shared_ptr<K> getKey();
	std::shared_ptr<V> getValue();
	void invalidate();
	bool isValid(long long currentTime);
public:
	virtual ~MemoryCache_S_SoftCacheEntry(){
	}

}; // class MemoryCache_S_SoftCacheEntry
}; // namespace sun::security::util
// .method constructor <init>(Ljava/lang/Object;Ljava/lang/Object;JLjava/lang/ref/ReferenceQueue;)V
template <typename K,typename V>
sun::security::util::MemoryCache_S_SoftCacheEntry<K,V>::MemoryCache_S_SoftCacheEntry(std::shared_ptr<K> key,std::shared_ptr<V> value,long long expirationTime,std::shared_ptr<java::lang::ref::ReferenceQueue<V>> queue)
{
	
	//    .param p3, "expirationTime"    # J
	//    .annotation system Ldalvik/annotation/Signature;
	// 051        value = {
	// 052            "(TK;TV;J",
	// 053            "Ljava/lang/ref/ReferenceQueue",
	// 054            "<TV;>;)V"
	// 055        }
	// 056    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache$SoftCacheEntry;, "Lsun/security/util/MemoryCache$SoftCacheEntry<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	//    .local p5, "queue":Ljava/lang/ref/ReferenceQueue;, "Ljava/lang/ref/ReferenceQueue<TV;>;"
	java::lang::ref::SoftReference::(value, queue);
	this->key = key;
	this->expirationTime = expirationTime;
	return;

}
// .method public getKey()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<K> sun::security::util::MemoryCache_S_SoftCacheEntry<K,V>::getKey()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 081        value = {
	// 082            "()TK;"
	// 083        }
	// 084    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache$SoftCacheEntry;, "Lsun/security/util/MemoryCache$SoftCacheEntry<TK;TV;>;"
	return this->key;

}
// .method public getValue()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::security::util::MemoryCache_S_SoftCacheEntry<K,V>::getValue()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 097        value = {
	// 098            "()TV;"
	// 099        }
	// 100    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache$SoftCacheEntry;, "Lsun/security/util/MemoryCache$SoftCacheEntry<TK;TV;>;"
	return this->get();

}
// .method public invalidate()V
template <typename K,typename V>
void sun::security::util::MemoryCache_S_SoftCacheEntry<K,V>::invalidate()
{
	
	//    .local p0, "this":Lsun/security/util/MemoryCache$SoftCacheEntry;, "Lsun/security/util/MemoryCache$SoftCacheEntry<TK;TV;>;"
	this->clear();
	this->key = 0x0;
	this->expirationTime = -0x1;
	return;

}
// .method public isValid(J)Z
template <typename K,typename V>
bool sun::security::util::MemoryCache_S_SoftCacheEntry<K,V>::isValid(long long currentTime)
{
	
	bool valid;
	
	//    .param p1, "currentTime"    # J
	//    .local p0, "this":Lsun/security/util/MemoryCache$SoftCacheEntry;, "Lsun/security/util/MemoryCache$SoftCacheEntry<TK;TV;>;"
	if ( (currentTime > this->expirationTime) > 0 ) 
		goto label_cond_13;
	if ( !(this->get()) )  
		goto label_cond_13;
	valid = 0x1;
	//    .local v0, "valid":Z
	label_goto_d:
	if ( valid )     
		goto label_cond_12;
	this->invalidate();
	label_cond_12:
	return valid;
	// 167    .line 538
	// 168    .end local v0    # "valid":Z
	label_cond_13:
	valid = 0x0;
	//    .restart local v0    # "valid":Z
	goto label_goto_d;

}

#endif //__sun_security_util_MemoryCache_S_SoftCacheEntry__

