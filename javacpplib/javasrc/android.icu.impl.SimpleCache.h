#ifndef __android_icu_impl_SimpleCache__
#define __android_icu_impl_SimpleCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\SimpleCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "java.lang.Object.h"
#include "java.lang.ref.Reference.h"
#include "java.lang.ref.SoftReference.h"
#include "java.lang.ref.WeakReference.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"

namespace android::icu::impl{
template <typename K,typename V>
class SimpleCache : public android::icu::impl::ICUCache<K,V> {
protected:
private:
	static int DEFAULT_CAPACITY;
	std::shared_ptr<java::lang::ref::Reference<java::util::Map<K,V>>> cacheRef;
	int capacity;
	int type;
public:
	SimpleCache();
	SimpleCache(int cacheType);
	SimpleCache(int cacheType,int initialCapacity);
	void clear();
	std::shared_ptr<V> get(std::shared_ptr<java::lang::Object> key);
	void put(std::shared_ptr<K> key,std::shared_ptr<V> value);
public:
	virtual ~SimpleCache(){
	}

}; // class SimpleCache
}; // namespace android::icu::impl
// .method public constructor <init>()V
template <typename K,typename V>
android::icu::impl::SimpleCache<K,V>::SimpleCache()
{
	
	//    .local p0, "this":Landroid/icu/impl/SimpleCache;, "Landroid/icu/impl/SimpleCache<TK;TV;>;"
	// 052    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->cacheRef = 0x0;
	this->type = 0x0;
	this->capacity = 0x10;
	return;

}
// .method public constructor <init>(I)V
template <typename K,typename V>
android::icu::impl::SimpleCache<K,V>::SimpleCache(int cacheType)
{
	
	//    .param p1, "cacheType"    # I
	//    .local p0, "this":Landroid/icu/impl/SimpleCache;, "Landroid/icu/impl/SimpleCache<TK;TV;>;"
	android::icu::impl::SimpleCache<K,V>::(cacheType, 0x10);
	return;

}
// .method public constructor <init>(II)V
template <typename K,typename V>
android::icu::impl::SimpleCache<K,V>::SimpleCache(int cacheType,int initialCapacity)
{
	
	//    .param p1, "cacheType"    # I
	//    .param p2, "initialCapacity"    # I
	//    .local p0, "this":Landroid/icu/impl/SimpleCache;, "Landroid/icu/impl/SimpleCache<TK;TV;>;"
	// 098    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->cacheRef = 0x0;
	this->type = 0x0;
	this->capacity = 0x10;
	if ( cacheType != 0x1 )
		goto label_cond_12;
	this->type = cacheType;
	label_cond_12:
	if ( initialCapacity <= 0 )
		goto label_cond_16;
	this->capacity = initialCapacity;
	label_cond_16:
	return;

}
// .method public clear()V
template <typename K,typename V>
void android::icu::impl::SimpleCache<K,V>::clear()
{
	
	//    .local p0, "this":Landroid/icu/impl/SimpleCache;, "Landroid/icu/impl/SimpleCache<TK;TV;>;"
	this->cacheRef = 0x0;
	return;

}
// .method public get(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> android::icu::impl::SimpleCache<K,V>::get(std::shared_ptr<java::lang::Object> key)
{
	
	std::shared_ptr<java::lang::ref::Reference> ref;
	std::shared_ptr<java::util::Map> map;
	
	//    .param p1, "key"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 153        value = {
	// 154            "(",
	// 155            "Ljava/lang/Object;",
	// 156            ")TV;"
	// 157        }
	// 158    .end annotation
	//    .local p0, "this":Landroid/icu/impl/SimpleCache;, "Landroid/icu/impl/SimpleCache<TK;TV;>;"
	ref = this->cacheRef;
	//    .local v1, "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<Ljava/util/Map<TK;TV;>;>;"
	if ( !(ref) )  
		goto label_cond_12;
	map = ref->get();
	map->checkCast("java::util::Map");
	//    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	if ( !(map) )  
		goto label_cond_12;
	return map->get(key);
	// 189    .line 55
	// 190    .end local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	label_cond_12:
	return 0x0;

}
// .method public put(Ljava/lang/Object;Ljava/lang/Object;)V
template <typename K,typename V>
void android::icu::impl::SimpleCache<K,V>::put(std::shared_ptr<K> key,std::shared_ptr<V> value)
{
	
	std::shared_ptr<java::lang::ref::Reference> ref;
	std::shared_ptr<java::util::Map> map;
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::lang::Object> map;
	std::shared_ptr<java::lang::ref::WeakReference> ref;
	std::shared_ptr<java::lang::ref::SoftReference> ref;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 198        value = {
	// 199            "(TK;TV;)V"
	// 200        }
	// 201    .end annotation
	//    .local p0, "this":Landroid/icu/impl/SimpleCache;, "Landroid/icu/impl/SimpleCache<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	ref = this->cacheRef;
	//    .local v1, "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<Ljava/util/Map<TK;TV;>;>;"
	map = 0x0;
	//    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	if ( !(ref) )  
		goto label_cond_b;
	map = ref->get();
	//    .end local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	map->checkCast("java::util::Map");
	label_cond_b:
	if ( map )     
		goto label_cond_24;
	cVar0 = std::make_shared<java::util::HashMap>(this->capacity);
	map = java::util::Collections::synchronizedMap(cVar0);
	//    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	if ( this->type != 0x1 )
		goto label_cond_28;
	//    .end local v1    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<Ljava/util/Map<TK;TV;>;>;"
	ref = std::make_shared<java::lang::ref::WeakReference>(map);
	//    .restart local v1    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<Ljava/util/Map<TK;TV;>;>;"
	label_goto_22:
	this->cacheRef = ref;
	//    .end local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	label_cond_24:
	map->put(key, value);
	return;
	// 268    .line 70
	// 269    .restart local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<TK;TV;>;"
	label_cond_28:
	//    .end local v1    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<Ljava/util/Map<TK;TV;>;>;"
	ref = std::make_shared<java::lang::ref::SoftReference>(map);
	//    .restart local v1    # "ref":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<Ljava/util/Map<TK;TV;>;>;"
	goto label_goto_22;

}

#endif //__android_icu_impl_SimpleCache__

