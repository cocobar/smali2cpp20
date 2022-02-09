#ifndef __sun_security_util_MemoryCache__
#define __sun_security_util_MemoryCache__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\MemoryCache.smali
#include "java2ctype.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.System.h"
#include "java.lang.ref.Reference.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.util.Collection.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashMap.h"
#include "java.util.Map.h"
#include "sun.security.util.Cache_S_CacheVisitor.h"
#include "sun.security.util.Cache.h"
#include "sun.security.util.MemoryCache_S_CacheEntry.h"
#include "sun.security.util.MemoryCache_S_HardCacheEntry.h"
#include "sun.security.util.MemoryCache_S_SoftCacheEntry.h"

namespace sun::security::util{
template <typename K,typename V>
class MemoryCache : public sun::security::util::Cache<K,V> {
protected:
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry<K,V>> newEntry(std::shared_ptr<K> key,std::shared_ptr<V> value,long long expirationTime,std::shared_ptr<java::lang::ref::ReferenceQueue<V>> queue);
private:
	static bool DEBUG;
	static float LOAD_FACTOR;
	std::shared_ptr<java::util::Map<K,sun::security::util::MemoryCache_S_CacheEntry<K,V>>> cacheMap;
	long long lifetime;
	int maxSize;
	std::shared_ptr<java::lang::ref::ReferenceQueue<V>> queue;
	void emptyQueue();
	void expungeExpiredEntries();
	std::shared_ptr<java::util::Map<K,V>> getCachedEntries();
public:
	MemoryCache(bool soft,int maxSize);
	MemoryCache(bool soft,int maxSize,int lifetime);
	void accept(std::shared_ptr<sun::security::util::Cache_S_CacheVisitor<K,V>> visitor);
	void clear();
	std::shared_ptr<V> get(std::shared_ptr<java::lang::Object> key);
	void put(std::shared_ptr<K> key,std::shared_ptr<V> value);
	void remove(std::shared_ptr<java::lang::Object> key);
	void setCapacity(int size);
	void setTimeout(int timeout);
	int size();
public:
	virtual ~MemoryCache(){
	}

}; // class MemoryCache
}; // namespace sun::security::util
// .method public constructor <init>(ZI)V
template <typename K,typename V>
sun::security::util::MemoryCache<K,V>::MemoryCache(bool soft,int maxSize)
{
	
	//    .param p1, "soft"    # Z
	//    .param p2, "maxSize"    # I
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	sun::security::util::MemoryCache<K,V>::(soft, maxSize, 0x0);
	return;

}
// .method public constructor <init>(ZII)V
template <typename K,typename V>
sun::security::util::MemoryCache<K,V>::MemoryCache(bool soft,int maxSize,int lifetime)
{
	
	float cVar0;
	std::shared_ptr<java::lang::ref::ReferenceQueue> cVar1;
	std::shared_ptr<java::util::LinkedHashMap> cVar2;
	
	//    .param p1, "soft"    # Z
	//    .param p2, "maxSize"    # I
	//    .param p3, "lifetime"    # I
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	cVar0 = 0x3f400000;
	// 088    invoke-direct {p0}, Lsun/security/util/Cache;-><init>()V
	this->maxSize = maxSize;
	this->lifetime = (long long)(( lifetime * 0x3e8));
	if ( !(soft) )  
		goto label_cond_23;
	cVar1 = std::make_shared<java::lang::ref::ReferenceQueue>();
	this->queue = cVar1;
	label_goto_15:
	//    .local v0, "buckets":I
	cVar2 = std::make_shared<java::util::LinkedHashMap>(( (int)(( (float)(maxSize) / cVar0)) + 0x1), cVar0, 0x1);
	this->cacheMap = cVar2;
	return;
	// 133    .line 270
	// 134    .end local v0    # "buckets":I
	label_cond_23:
	this->queue = 0x0;
	goto label_goto_15;

}
// .method private emptyQueue()V
template <typename K,typename V>
void sun::security::util::MemoryCache<K,V>::emptyQueue()
{
	
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> entry;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> currentEntry;
	
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	if ( this->queue )     
		goto label_cond_5;
	return;
	// 156    .line 287
	label_cond_5:
	this->cacheMap->size();
	//    .local v3, "startSize":I
	label_cond_b:
	label_goto_b:
	entry = this->queue->poll();
	entry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//    .local v1, "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	if ( entry )     
		goto label_cond_16;
	return;
	// 183    .line 294
	label_cond_16:
	key = entry->getKey();
	//    .local v2, "key":Ljava/lang/Object;, "TK;"
	if ( !(key) )  
		goto label_cond_b;
	currentEntry = this->cacheMap->remove(key);
	currentEntry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//    .local v0, "currentEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	if ( !(currentEntry) )  
		goto label_cond_b;
	if ( entry == currentEntry )
		goto label_cond_b;
	this->cacheMap->put(key, currentEntry);
	goto label_goto_b;

}
// .method private expungeExpiredEntries()V
template <typename K,typename V>
void sun::security::util::MemoryCache<K,V>::expungeExpiredEntries()
{
	
	int cnt;
	std::shared_ptr<java::util::Iterator> t;
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> entry;
	
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	this->emptyQueue();
	if ( (this->lifetime > 0x0) )     
		goto label_cond_c;
	return;
	// 236    .line 323
	label_cond_c:
	cnt = 0x0;
	//    .local v0, "cnt":I
	//    .local v4, "time":J
	t = this->cacheMap->values()->iterator();
	//    .local v2, "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;>;"
	label_cond_1b:
	label_goto_1b:
	if ( !(t->hasNext()) )  
		goto label_cond_33;
	entry = t->next();
	entry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//    .local v1, "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	if ( entry->isValid(java::lang::System::currentTimeMillis({const[class].FS-Param})) )     
		goto label_cond_1b;
	t->remove();
	cnt = ( cnt + 0x1);
	goto label_goto_1b;
	// 292    .line 339
	// 293    .end local v1    # "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	label_cond_33:
	return;

}
// .method private getCachedEntries()Ljava/util/Map;
template <typename K,typename V>
std::shared_ptr<java::util::Map<K,V>> sun::security::util::MemoryCache<K,V>::getCachedEntries()
{
	
	std::shared_ptr<java::util::HashMap> kvmap;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> entry;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 301        value = {
	// 302            "()",
	// 303            "Ljava/util/Map",
	// 304            "<TK;TV;>;"
	// 305        }
	// 306    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	kvmap = std::make_shared<java::util::HashMap>(this->cacheMap->size());
	//    .local v2, "kvmap":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	entry_S_iterator = this->cacheMap->values()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
	label_goto_15:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_2d;
	entry = entry_S_iterator->next();
	entry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//    .local v0, "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	kvmap->put(entry->getKey(), entry->getValue());
	goto label_goto_15;
	// 361    .line 456
	// 362    .end local v0    # "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	label_cond_2d:
	return kvmap;

}
// .method public declared-synchronized accept(Lsun/security/util/Cache$CacheVisitor;)V
template <typename K,typename V>
void sun::security::util::MemoryCache<K,V>::accept(std::shared_ptr<sun::security::util::Cache_S_CacheVisitor<K,V>> visitor)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 372        value = {
	// 373            "(",
	// 374            "Lsun/security/util/Cache$CacheVisitor",
	// 375            "<TK;TV;>;)V"
	// 376        }
	// 377    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	//    .local p1, "visitor":Lsun/security/util/Cache$CacheVisitor;, "Lsun/security/util/Cache$CacheVisitor<TK;TV;>;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->expungeExpiredEntries();
	//    .local v0, "cached":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	visitor->visit(this->getCachedEntries());
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_1 .. :try_end_b} :catchall_d
	this->monitor_exit();
	return;
	// 404    .end local v0    # "cached":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	label_catchall_d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized clear()V
template <typename K,typename V>
void sun::security::util::MemoryCache<K,V>::clear()
{
	
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> entry;
	
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( !(this->queue) )  
		goto label_cond_2a;
	entry_S_iterator = this->cacheMap->values()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
	label_goto_f:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_22;
	entry = entry_S_iterator->next();
	entry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//    .local v0, "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	entry->invalidate();
	//label_try_end_1e:
	}
	catch (...){
		goto label_catchall_1f;
	}
	//    .catchall {:try_start_1 .. :try_end_1e} :catchall_1f
	goto label_goto_f;
	// 459    .end local v0    # "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	// 460    .end local v1    # "entry$iterator":Ljava/util/Iterator;
	label_catchall_1f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 468    .line 353
	// 469    .restart local v1    # "entry$iterator":Ljava/util/Iterator;
	label_cond_22:
	try {
	//label_try_start_22:
	if ( this->queue->poll() )     
		goto label_cond_22;
	//    .end local v1    # "entry$iterator":Ljava/util/Iterator;
	label_cond_2a:
	this->cacheMap->clear();
	//label_try_end_2f:
	}
	catch (...){
		goto label_catchall_1f;
	}
	//    .catchall {:try_start_22 .. :try_end_2f} :catchall_1f
	this->monitor_exit();
	return;

}
// .method public declared-synchronized get(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::security::util::MemoryCache<K,V>::get(std::shared_ptr<java::lang::Object> key)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> entry;
	
	//    .param p1, "key"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 499        value = {
	// 500            "(",
	// 501            "Ljava/lang/Object;",
	// 502            ")TV;"
	// 503        }
	// 504    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	cVar0 = 0x0;
	this->monitor_enter();
	try {
	//label_try_start_2:
	this->emptyQueue();
	entry = this->cacheMap->get(key);
	entry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//label_try_end_d:
	}
	catch (...){
		goto label_catchall_33;
	}
	//    .catchall {:try_start_2 .. :try_end_d} :catchall_33
	//    .local v0, "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	if ( entry )     
		goto label_cond_11;
	this->monitor_exit();
	return cVar0;
	// 536    .line 391
	label_cond_11:
	try {
	//label_try_start_11:
	if ( (this->lifetime > 0x0) )     
		goto label_cond_28;
	//    .local v2, "time":J
	label_goto_1b:
	if ( entry->isValid(time) )     
		goto label_cond_2d;
	this->cacheMap->remove(key);
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_33;
	}
	//    .catchall {:try_start_11 .. :try_end_26} :catchall_33
	this->monitor_exit();
	return cVar0;
	// 570    .line 391
	// 571    .end local v2    # "time":J
	label_cond_28:
	try {
	//label_try_start_28:
	//    .restart local v2    # "time":J
	goto label_goto_1b;
	// 581    .line 399
	label_cond_2d:
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_33;
	}
	//    .catchall {:try_start_28 .. :try_end_30} :catchall_33
	this->monitor_exit();
	return entry->getValue();
	// 593    .end local v0    # "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	// 594    .end local v2    # "time":J
	label_catchall_33:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method protected newEntry(Ljava/lang/Object;Ljava/lang/Object;JLjava/lang/ref/ReferenceQueue;)Lsun/security/util/MemoryCache$CacheEntry;
template <typename K,typename V>
std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry<K,V>> sun::security::util::MemoryCache<K,V>::newEntry(std::shared_ptr<K> key,std::shared_ptr<V> value,long long expirationTime,std::shared_ptr<java::lang::ref::ReferenceQueue<V>> queue)
{
	
	std::shared_ptr<sun::security::util::MemoryCache_S_SoftCacheEntry> cVar0;
	std::shared_ptr<sun::security::util::MemoryCache_S_HardCacheEntry> cVar1;
	
	//    .param p3, "expirationTime"    # J
	//    .annotation system Ldalvik/annotation/Signature;
	// 607        value = {
	// 608            "(TK;TV;J",
	// 609            "Ljava/lang/ref/ReferenceQueue",
	// 610            "<TV;>;)",
	// 611            "Lsun/security/util/MemoryCache$CacheEntry",
	// 612            "<TK;TV;>;"
	// 613        }
	// 614    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	//    .local p5, "queue":Ljava/lang/ref/ReferenceQueue;, "Ljava/lang/ref/ReferenceQueue<TV;>;"
	if ( !(queue) )  
		goto label_cond_c;
	cVar0 = std::make_shared<sun::security::util::MemoryCache_S_SoftCacheEntry>(key, value, expirationTime, queue);
	return cVar0;
	// 639    .line 464
	label_cond_c:
	cVar1 = std::make_shared<sun::security::util::MemoryCache_S_HardCacheEntry>(key, value, expirationTime);
	return cVar1;

}
// .method public declared-synchronized put(Ljava/lang/Object;Ljava/lang/Object;)V
template <typename K,typename V>
void sun::security::util::MemoryCache<K,V>::put(std::shared_ptr<K> key,std::shared_ptr<V> value)
{
	
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> oldEntry;
	std::shared_ptr<java::util::Iterator> t;
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> lruEntry;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 651        value = {
	// 652            "(TK;TV;)V"
	// 653        }
	// 654    .end annotation
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->emptyQueue();
	if ( (this->lifetime > 0x0) )     
		goto label_cond_26;
	//    .local v4, "expirationTime":J
	label_goto_e:
	//    .local v7, "newEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	oldEntry = this->cacheMap->put(key, this->newEntry(key, value, expirationTime, this->queue));
	oldEntry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//    .local v8, "oldEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	if ( !(oldEntry) )  
		goto label_cond_2f;
	oldEntry->invalidate();
	//label_try_end_24:
	}
	catch (...){
		goto label_catchall_62;
	}
	//    .catchall {:try_start_1 .. :try_end_24} :catchall_62
	this->monitor_exit();
	return;
	// 716    .line 363
	// 717    .end local v4    # "expirationTime":J
	// 718    .end local v7    # "newEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	// 719    .end local v8    # "oldEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	label_cond_26:
	try {
	//label_try_start_26:
	//    .restart local v4    # "expirationTime":J
	goto label_goto_e;
	// 733    .line 370
	// 734    .restart local v7    # "newEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	// 735    .restart local v8    # "oldEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	label_cond_2f:
	if ( this->maxSize <= 0 )
		goto label_cond_60;
	if ( this->cacheMap->size() <= this->maxSize )
		goto label_cond_60;
	this->expungeExpiredEntries();
	if ( this->cacheMap->size() <= this->maxSize )
		goto label_cond_60;
	t = this->cacheMap->values()->iterator();
	//    .local v9, "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;>;"
	lruEntry = t->next();
	lruEntry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//    .local v0, "lruEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	t->remove();
	lruEntry->invalidate();
	//label_try_end_60:
	}
	catch (...){
		goto label_catchall_62;
	}
	//    .catchall {:try_start_26 .. :try_end_60} :catchall_62
	//    .end local v0    # "lruEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	//    .end local v9    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;>;"
	label_cond_60:
	this->monitor_exit();
	return;
	// 801    .end local v4    # "expirationTime":J
	// 802    .end local v7    # "newEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	// 803    .end local v8    # "oldEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	label_catchall_62:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized remove(Ljava/lang/Object;)V
template <typename K,typename V>
void sun::security::util::MemoryCache<K,V>::remove(std::shared_ptr<java::lang::Object> key)
{
	
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> entry;
	
	//    .param p1, "key"    # Ljava/lang/Object;
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->emptyQueue();
	entry = this->cacheMap->remove(key);
	entry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//    .local v0, "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	if ( !(entry) )  
		goto label_cond_11;
	entry->invalidate();
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_1 .. :try_end_11} :catchall_13
	label_cond_11:
	this->monitor_exit();
	return;
	// 848    .end local v0    # "entry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	label_catchall_13:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized setCapacity(I)V
template <typename K,typename V>
void sun::security::util::MemoryCache<K,V>::setCapacity(int size)
{
	
	std::shared_ptr<java::util::Iterator> t;
	int i;
	std::shared_ptr<sun::security::util::MemoryCache_S_CacheEntry> lruEntry;
	int size;
	
	//    .param p1, "size"    # I
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	this->monitor_enter();
	try {
	//label_try_start_2:
	this->expungeExpiredEntries();
	if ( size <= 0 )
		goto label_cond_32;
	if ( this->cacheMap->size() <= size )
		goto label_cond_32;
	t = this->cacheMap->values()->iterator();
	//    .local v2, "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;>;"
	i = (this->cacheMap->size() - size);
	//    .local v0, "i":I
	label_goto_21:
	if ( i <= 0 )
		goto label_cond_32;
	lruEntry = t->next();
	lruEntry->checkCast("sun::security::util::MemoryCache_S_CacheEntry");
	//    .local v1, "lruEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	t->remove();
	lruEntry->invalidate();
	i = ( i + -0x1);
	goto label_goto_21;
	// 926    .line 425
	// 927    .end local v0    # "i":I
	// 928    .end local v1    # "lruEntry":Lsun/security/util/MemoryCache$CacheEntry;, "Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;"
	// 929    .end local v2    # "t":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/util/MemoryCache$CacheEntry<TK;TV;>;>;"
	label_cond_32:
	if ( size <= 0 )
		goto label_cond_38;
	//    .end local p1    # "size":I
	label_goto_34:
	this->maxSize = size;
	//label_try_end_36:
	}
	catch (...){
		goto label_catchall_3a;
	}
	//    .catchall {:try_start_2 .. :try_end_36} :catchall_3a
	this->monitor_exit();
	return;
	// 944    .restart local p1    # "size":I
	label_cond_38:
	size = 0x0;
	goto label_goto_34;
	// 951    .end local p1    # "size":I
	label_catchall_3a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized setTimeout(I)V
template <typename K,typename V>
void sun::security::util::MemoryCache<K,V>::setTimeout(int timeout)
{
	
	long long cVar0;
	
	//    .param p1, "timeout"    # I
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->emptyQueue();
	if ( timeout <= 0 )
		goto label_cond_e;
	cVar0 = ((long long)(timeout) *  0x3e8);
	label_goto_a:
	this->lifetime = cVar0;
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_1 .. :try_end_c} :catchall_11
	this->monitor_exit();
	return;
	// 991    .line 434
	label_cond_e:
	cVar0 = 0x0;
	goto label_goto_a;
	label_catchall_11:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized size()I
template <typename K,typename V>
int sun::security::util::MemoryCache<K,V>::size()
{
	
	//    .local p0, "this":Lsun/security/util/MemoryCache;, "Lsun/security/util/MemoryCache<TK;TV;>;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->expungeExpiredEntries();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_c;
	}
	//    .catchall {:try_start_1 .. :try_end_9} :catchall_c
	this->monitor_exit();
	return this->cacheMap->size();
	label_catchall_c:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}

#endif //__sun_security_util_MemoryCache__

