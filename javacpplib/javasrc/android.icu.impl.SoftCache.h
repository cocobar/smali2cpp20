#ifndef __android_icu_impl_SoftCache__
#define __android_icu_impl_SoftCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\SoftCache.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.CacheValue.h"
#include "java.lang.Object.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

namespace android::icu::impl{
template <typename D,typename K,typename V>
class SoftCache : public android::icu::impl::CacheBase<K,V,D> {
protected:
private:
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap<K,java::lang::Object>> map;
public:
	SoftCache();
	std::shared_ptr<V> getInstance(std::shared_ptr<K> key,std::shared_ptr<D> data);
public:
	virtual ~SoftCache(){
	}

}; // class SoftCache
}; // namespace android::icu::impl
// .method public constructor <init>()V
template <typename D,typename K,typename V>
android::icu::impl::SoftCache<D,K,V>::SoftCache()
{
	
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar0;
	
	//    .local p0, "this":Landroid/icu/impl/SoftCache;, "Landroid/icu/impl/SoftCache<TK;TV;TD;>;"
	// 042    invoke-direct {p0}, Landroid/icu/impl/CacheBase;-><init>()V
	cVar0 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	this->map = cVar0;
	return;

}
// .method public final getInstance(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
template <typename D,typename K,typename V>
std::shared_ptr<V> android::icu::impl::SoftCache<D,K,V>::getInstance(std::shared_ptr<K> key,std::shared_ptr<D> data)
{
	
	std::shared_ptr<android::icu::impl::CacheValue> mapValue;
	std::shared_ptr<android::icu::impl::CacheValue> cv;
	std::shared_ptr<java::lang::Object> value;
	std::shared_ptr<java::lang::Object> mapValue;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 060        value = {
	// 061            "(TK;TD;)TV;"
	// 062        }
	// 063    .end annotation
	//    .local p0, "this":Landroid/icu/impl/SoftCache;, "Landroid/icu/impl/SoftCache<TK;TV;TD;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "data":Ljava/lang/Object;, "TD;"
	mapValue = this->map->get(key);
	//    .local v1, "mapValue":Ljava/lang/Object;
	if ( !(mapValue) )  
		goto label_cond_28;
	if ( mapValue->instanceOf("android::icu::impl::CacheValue") )     
		goto label_cond_e;
	return mapValue;
	label_cond_e:
	cv = mapValue;
	cv->checkCast("android::icu::impl::CacheValue");
	//    .local v0, "cv":Landroid/icu/impl/CacheValue;, "Landroid/icu/impl/CacheValue<TV;>;"
	if ( !(cv->isNull()) )  
		goto label_cond_18;
	return 0x0;
	// 107    .line 61
	label_cond_18:
	value = cv->get();
	//    .local v2, "value":Ljava/lang/Object;, "TV;"
	if ( !(value) )  
		goto label_cond_1f;
	return value;
	// 120    .line 67
	label_cond_1f:
	return cv->resetIfCleared(this->createInstance(key, data));
	// 133    .line 71
	// 134    .end local v0    # "cv":Landroid/icu/impl/CacheValue;, "Landroid/icu/impl/CacheValue<TV;>;"
	// 135    .end local v2    # "value":Ljava/lang/Object;, "TV;"
	label_cond_28:
	value = this->createInstance(key, data);
	//    .restart local v2    # "value":Ljava/lang/Object;, "TV;"
	if ( !(value) )  
		goto label_cond_3e;
	if ( !(android::icu::impl::CacheValue::futureInstancesWillBeStrong({const[class].FS-Param})) )  
		goto label_cond_3e;
	mapValue = value;
	label_goto_35:
	mapValue = this->map->putIfAbsent(key, mapValue);
	if ( mapValue )     
		goto label_cond_43;
	return value;
	// 168    .line 73
	label_cond_3e:
	mapValue = android::icu::impl::CacheValue::getInstance(value);
	goto label_goto_35;
	// 176    .line 82
	label_cond_43:
	if ( mapValue->instanceOf("android::icu::impl::CacheValue") )     
		goto label_cond_48;
	return mapValue;
	label_cond_48:
	cv = mapValue;
	cv->checkCast("android::icu::impl::CacheValue");
	//    .restart local v0    # "cv":Landroid/icu/impl/CacheValue;, "Landroid/icu/impl/CacheValue<TV;>;"
	return cv->resetIfCleared(value);

}

#endif //__android_icu_impl_SoftCache__

