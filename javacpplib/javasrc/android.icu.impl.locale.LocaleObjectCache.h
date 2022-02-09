#ifndef __android_icu_impl_locale_LocaleObjectCache__
#define __android_icu_impl_locale_LocaleObjectCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleObjectCache.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.LocaleObjectCache_S_CacheEntry.h"
#include "java.lang.Object.h"
#include "java.lang.ref.Reference.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

namespace android::icu::impl::locale{
template <typename K,typename V>
class LocaleObjectCache : public java::lang::Object {
protected:
	std::shared_ptr<V> createObject(std::shared_ptr<K> var0);
	std::shared_ptr<K> normalizeKey(std::shared_ptr<K> key);
private:
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap<K,android::icu::impl::locale::LocaleObjectCache_S_CacheEntry<K,V>>> _map;
	std::shared_ptr<java::lang::ref::ReferenceQueue<V>> _queue;
	void cleanStaleEntries();
public:
	LocaleObjectCache();
	LocaleObjectCache(int initialCapacity,float loadFactor,int concurrencyLevel);
	std::shared_ptr<V> get(std::shared_ptr<K> key);
public:
	virtual ~LocaleObjectCache(){
	}

}; // class LocaleObjectCache
}; // namespace android::icu::impl::locale
// .method public constructor <init>()V
template <typename K,typename V>
android::icu::impl::locale::LocaleObjectCache<K,V>::LocaleObjectCache()
{
	
	int cVar0;
	
	//    .local p0, "this":Landroid/icu/impl/locale/LocaleObjectCache;, "Landroid/icu/impl/locale/LocaleObjectCache<TK;TV;>;"
	cVar0 = 0x10;
	android::icu::impl::locale::LocaleObjectCache<K,V>::(cVar0, 0x3f400000, cVar0);
	return;

}
// .method public constructor <init>(IFI)V
template <typename K,typename V>
android::icu::impl::locale::LocaleObjectCache<K,V>::LocaleObjectCache(int initialCapacity,float loadFactor,int concurrencyLevel)
{
	
	std::shared_ptr<java::lang::ref::ReferenceQueue> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	
	//    .param p1, "initialCapacity"    # I
	//    .param p2, "loadFactor"    # F
	//    .param p3, "concurrencyLevel"    # I
	//    .local p0, "this":Landroid/icu/impl/locale/LocaleObjectCache;, "Landroid/icu/impl/locale/LocaleObjectCache<TK;TV;>;"
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::ref::ReferenceQueue>();
	this->_queue = cVar0;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>(initialCapacity, loadFactor, concurrencyLevel);
	this->_map = cVar1;
	return;

}
// .method private cleanStaleEntries()V
template <typename K,typename V>
void android::icu::impl::locale::LocaleObjectCache<K,V>::cleanStaleEntries()
{
	
	std::shared_ptr<android::icu::impl::locale::LocaleObjectCache_S_CacheEntry> entry;
	
	//    .local p0, "this":Landroid/icu/impl/locale/LocaleObjectCache;, "Landroid/icu/impl/locale/LocaleObjectCache<TK;TV;>;"
	label_goto_0:
	entry = this->_queue->poll();
	entry->checkCast("android::icu::impl::locale::LocaleObjectCache_S_CacheEntry");
	//    .local v0, "entry":Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry;, "Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	if ( !(entry) )  
		goto label_cond_14;
	this->_map->remove(entry->getKey());
	goto label_goto_0;
	// 122    .line 69
	label_cond_14:
	return;

}
// .method protected abstract createObject(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> android::icu::impl::locale::LocaleObjectCache<K,V>::createObject(std::shared_ptr<K> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 131        value = {
	// 132            "(TK;)TV;"
	// 133        }
	// 134    .end annotation

}
// .method public get(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> android::icu::impl::locale::LocaleObjectCache<K,V>::get(std::shared_ptr<K> key)
{
	
	std::shared_ptr<java::lang::Object> value;
	std::shared_ptr<android::icu::impl::locale::LocaleObjectCache_S_CacheEntry> entry;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::lang::Object> newVal;
	std::shared_ptr<android::icu::impl::locale::LocaleObjectCache_S_CacheEntry> newEntry;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 140        value = {
	// 141            "(TK;)TV;"
	// 142        }
	// 143    .end annotation
	//    .local p0, "this":Landroid/icu/impl/locale/LocaleObjectCache;, "Landroid/icu/impl/locale/LocaleObjectCache<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	value = 0x0;
	//    .local v3, "value":Ljava/lang/Object;, "TV;"
	this->cleanStaleEntries();
	entry = this->_map->get(key);
	entry->checkCast("android::icu::impl::locale::LocaleObjectCache_S_CacheEntry");
	//    .local v0, "entry":Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry;, "Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	if ( !(entry) )  
		goto label_cond_13;
	value = entry->get();
	//    .end local v3    # "value":Ljava/lang/Object;, "TV;"
	label_cond_13:
	if ( value )     
		goto label_cond_39;
	key = this->normalizeKey(key);
	newVal = this->createObject(key);
	//    .local v2, "newVal":Ljava/lang/Object;, "TV;"
	if ( !(key) )  
		goto label_cond_21;
	if ( newVal )     
		goto label_cond_22;
	label_cond_21:
	return 0x0;
	// 200    .line 47
	label_cond_22:
	newEntry = std::make_shared<android::icu::impl::locale::LocaleObjectCache_S_CacheEntry>(key, newVal, this->_queue);
	//    .local v1, "newEntry":Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry;, "Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	label_goto_29:
	if ( value )     
		goto label_cond_39;
	this->cleanStaleEntries();
	entry = this->_map->putIfAbsent(key, newEntry);
	//    .end local v0    # "entry":Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry;, "Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	entry->checkCast("android::icu::impl::locale::LocaleObjectCache_S_CacheEntry");
	//    .restart local v0    # "entry":Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry;, "Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	if ( entry )     
		goto label_cond_3a;
	//    .end local v1    # "newEntry":Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry;, "Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	//    .end local v2    # "newVal":Ljava/lang/Object;, "TV;"
	label_cond_39:
	return value;
	// 239    .line 56
	// 240    .restart local v1    # "newEntry":Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry;, "Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	// 241    .restart local v2    # "newVal":Ljava/lang/Object;, "TV;"
	label_cond_3a:
	//    .restart local v3    # "value":Ljava/lang/Object;, "TV;"
	goto label_goto_29;

}
// .method protected normalizeKey(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<K> android::icu::impl::locale::LocaleObjectCache<K,V>::normalizeKey(std::shared_ptr<K> key)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 254        value = {
	// 255            "(TK;)TK;"
	// 256        }
	// 257    .end annotation
	//    .local p0, "this":Landroid/icu/impl/locale/LocaleObjectCache;, "Landroid/icu/impl/locale/LocaleObjectCache<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	return key;

}

#endif //__android_icu_impl_locale_LocaleObjectCache__

