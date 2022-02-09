#ifndef __android_icu_impl_CacheBase__
#define __android_icu_impl_CacheBase__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CacheBase.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
template <typename D,typename K,typename V>
class CacheBase : public java::lang::Object {
protected:
	std::shared_ptr<V> createInstance(std::shared_ptr<K> var0,std::shared_ptr<D> var1);
private:
public:
	CacheBase();
	std::shared_ptr<V> getInstance(std::shared_ptr<K> var0,std::shared_ptr<D> var1);
public:
	virtual ~CacheBase(){
	}

}; // class CacheBase
}; // namespace android::icu::impl
// .method public constructor <init>()V
template <typename D,typename K,typename V>
android::icu::impl::CacheBase<D,K,V>::CacheBase()
{
	
	//    .local p0, "this":Landroid/icu/impl/CacheBase;, "Landroid/icu/impl/CacheBase<TK;TV;TD;>;"
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method protected abstract createInstance(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
template <typename D,typename K,typename V>
std::shared_ptr<V> android::icu::impl::CacheBase<D,K,V>::createInstance(std::shared_ptr<K> var0,std::shared_ptr<D> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 037        value = {
	// 038            "(TK;TD;)TV;"
	// 039        }
	// 040    .end annotation

}
// .method public abstract getInstance(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
template <typename D,typename K,typename V>
std::shared_ptr<V> android::icu::impl::CacheBase<D,K,V>::getInstance(std::shared_ptr<K> var0,std::shared_ptr<D> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 045        value = {
	// 046            "(TK;TD;)TV;"
	// 047        }
	// 048    .end annotation

}

#endif //__android_icu_impl_CacheBase__

