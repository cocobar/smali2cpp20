#ifndef __sun_util_locale_LocaleObjectCache__
#define __sun_util_locale_LocaleObjectCache__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleObjectCache.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.ref.Reference.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.util.concurrent.ConcurrentHashMap.h"
#include "java.util.concurrent.ConcurrentMap.h"
#include "sun.util.locale.LocaleObjectCache_S_CacheEntry.h"

namespace sun::util::locale{
template <typename K,typename V>
class LocaleObjectCache : public java::lang::Object {
protected:
	std::shared_ptr<V> createObject(std::shared_ptr<K> var0);
	std::shared_ptr<K> normalizeKey(std::shared_ptr<K> key);
	std::shared_ptr<V> put(std::shared_ptr<K> key,std::shared_ptr<V> value);
private:
	std::shared_ptr<java::util::concurrent::ConcurrentMap<K,sun::util::locale::LocaleObjectCache_S_CacheEntry<K,V>>> map;
	std::shared_ptr<java::lang::ref::ReferenceQueue<V>> queue;
	void cleanStaleEntries();
public:
	LocaleObjectCache();
	LocaleObjectCache(int initialCapacity,float loadFactor,int concurrencyLevel);
	std::shared_ptr<V> get(std::shared_ptr<K> key);
public:
	virtual ~LocaleObjectCache(){
	}

}; // class LocaleObjectCache
}; // namespace sun::util::locale
// .method public constructor <init>()V
template <typename K,typename V>
sun::util::locale::LocaleObjectCache<K,V>::LocaleObjectCache()
{
	
	int cVar0;
	
	//    .local p0, "this":Lsun/util/locale/LocaleObjectCache;, "Lsun/util/locale/LocaleObjectCache<TK;TV;>;"
	cVar0 = 0x10;
	sun::util::locale::LocaleObjectCache<K,V>::(cVar0, 0x3f400000, cVar0);
	return;

}
// .method public constructor <init>(IFI)V
template <typename K,typename V>
sun::util::locale::LocaleObjectCache<K,V>::LocaleObjectCache(int initialCapacity,float loadFactor,int concurrencyLevel)
{
	
	std::shared_ptr<java::lang::ref::ReferenceQueue> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	
	//    .param p1, "initialCapacity"    # I
	//    .param p2, "loadFactor"    # F
	//    .param p3, "concurrencyLevel"    # I
	//    .local p0, "this":Lsun/util/locale/LocaleObjectCache;, "Lsun/util/locale/LocaleObjectCache<TK;TV;>;"
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::ref::ReferenceQueue>();
	this->queue = cVar0;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>(initialCapacity, loadFactor, concurrencyLevel);
	this->map = cVar1;
	return;

}
// .method private cleanStaleEntries()V
template <typename K,typename V>
void sun::util::locale::LocaleObjectCache<K,V>::cleanStaleEntries()
{
	
	std::shared_ptr<sun::util::locale::LocaleObjectCache_S_CacheEntry> entry;
	
	//    .local p0, "this":Lsun/util/locale/LocaleObjectCache;, "Lsun/util/locale/LocaleObjectCache<TK;TV;>;"
	label_goto_0:
	entry = this->queue->poll();
	entry->checkCast("sun::util::locale::LocaleObjectCache_S_CacheEntry");
	//    .local v0, "entry":Lsun/util/locale/LocaleObjectCache$CacheEntry;, "Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	if ( !(entry) )  
		goto label_cond_14;
	this->map->remove(entry->getKey());
	goto label_goto_0;
	// 122    .line 97
	label_cond_14:
	return;

}
// .method protected abstract createObject(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::util::locale::LocaleObjectCache<K,V>::createObject(std::shared_ptr<K> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 131        value = {
	// 132            "(TK;)TV;"
	// 133        }
	// 134    .end annotation

}
// .method public get(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::util::locale::LocaleObjectCache<K,V>::get(std::shared_ptr<K> key)
{
	
	std::shared_ptr<java::lang::Object> value;
	std::shared_ptr<sun::util::locale::LocaleObjectCache_S_CacheEntry> entry;
	std::shared_ptr<java::lang::Object> newVal;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<sun::util::locale::LocaleObjectCache_S_CacheEntry> newEntry;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 140        value = {
	// 141            "(TK;)TV;"
	// 142        }
	// 143    .end annotation
	//    .local p0, "this":Lsun/util/locale/LocaleObjectCache;, "Lsun/util/locale/LocaleObjectCache<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	value = 0x0;
	//    .local v3, "value":Ljava/lang/Object;, "TV;"
	this->cleanStaleEntries();
	entry = this->map->get(key);
	entry->checkCast("sun::util::locale::LocaleObjectCache_S_CacheEntry");
	//    .local v0, "entry":Lsun/util/locale/LocaleObjectCache$CacheEntry;, "Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	if ( !(entry) )  
		goto label_cond_13;
	value = entry->get();
	//    .end local v3    # "value":Ljava/lang/Object;, "TV;"
	label_cond_13:
	if ( value )     
		goto label_cond_34;
	newVal = this->createObject(key);
	//    .local v2, "newVal":Ljava/lang/Object;, "TV;"
	key = this->normalizeKey(key);
	if ( !(key) )  
		goto label_cond_21;
	if ( newVal )     
		goto label_cond_22;
	label_cond_21:
	return 0x0;
	// 200    .line 69
	label_cond_22:
	newEntry = std::make_shared<sun::util::locale::LocaleObjectCache_S_CacheEntry>(key, newVal, this->queue);
	//    .local v1, "newEntry":Lsun/util/locale/LocaleObjectCache$CacheEntry;, "Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	entry = this->map->putIfAbsent(key, newEntry);
	//    .end local v0    # "entry":Lsun/util/locale/LocaleObjectCache$CacheEntry;, "Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	entry->checkCast("sun::util::locale::LocaleObjectCache_S_CacheEntry");
	//    .restart local v0    # "entry":Lsun/util/locale/LocaleObjectCache$CacheEntry;, "Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	if ( entry )     
		goto label_cond_35;
	value = newVal;
	//    .end local v1    # "newEntry":Lsun/util/locale/LocaleObjectCache$CacheEntry;, "Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	//    .end local v2    # "newVal":Ljava/lang/Object;, "TV;"
	label_cond_34:
	label_goto_34:
	return value;
	// 233    .line 75
	// 234    .restart local v1    # "newEntry":Lsun/util/locale/LocaleObjectCache$CacheEntry;, "Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	// 235    .restart local v2    # "newVal":Ljava/lang/Object;, "TV;"
	label_cond_35:
	value = entry->get();
	//    .restart local v3    # "value":Ljava/lang/Object;, "TV;"
	if ( value )     
		goto label_cond_34;
	this->map->put(key, newEntry);
	value = newVal;
	goto label_goto_34;

}
// .method protected normalizeKey(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<K> sun::util::locale::LocaleObjectCache<K,V>::normalizeKey(std::shared_ptr<K> key)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 259        value = {
	// 260            "(TK;)TK;"
	// 261        }
	// 262    .end annotation
	//    .local p0, "this":Lsun/util/locale/LocaleObjectCache;, "Lsun/util/locale/LocaleObjectCache<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	return key;

}
// .method protected put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> sun::util::locale::LocaleObjectCache<K,V>::put(std::shared_ptr<K> key,std::shared_ptr<V> value)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<sun::util::locale::LocaleObjectCache_S_CacheEntry> entry;
	std::shared_ptr<sun::util::locale::LocaleObjectCache_S_CacheEntry> oldEntry;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 274        value = {
	// 275            "(TK;TV;)TV;"
	// 276        }
	// 277    .end annotation
	//    .local p0, "this":Lsun/util/locale/LocaleObjectCache;, "Lsun/util/locale/LocaleObjectCache<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	cVar0 = 0x0;
	entry = std::make_shared<sun::util::locale::LocaleObjectCache_S_CacheEntry>(key, value, this->queue);
	//    .local v0, "entry":Lsun/util/locale/LocaleObjectCache$CacheEntry;, "Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	oldEntry = this->map->put(key, entry);
	oldEntry->checkCast("sun::util::locale::LocaleObjectCache_S_CacheEntry");
	//    .local v1, "oldEntry":Lsun/util/locale/LocaleObjectCache$CacheEntry;, "Lsun/util/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	if ( oldEntry )     
		goto label_cond_13;
	label_goto_12:
	return cVar0;
	label_cond_13:
	cVar0 = oldEntry->get();
	goto label_goto_12;

}

#endif //__sun_util_locale_LocaleObjectCache__

