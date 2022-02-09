#ifndef __android_icu_impl_CacheValue_S_SoftValue__
#define __android_icu_impl_CacheValue_S_SoftValue__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CacheValue$SoftValue.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheValue.h"
#include "java.lang.Object.h"
#include "java.lang.ref.Reference.h"
#include "java.lang.ref.SoftReference.h"

namespace android::icu::impl{
template <typename V>
class CacheValue_S_SoftValue : public android::icu::impl::CacheValue<V> {
protected:
private:
	std::shared_ptr<java::lang::ref::Reference<V>> ref;
public:
	CacheValue_S_SoftValue(std::shared_ptr<V> value);
	std::shared_ptr<V> get();
	std::shared_ptr<V> resetIfCleared(std::shared_ptr<V> value);
public:
	virtual ~CacheValue_S_SoftValue(){
	}

}; // class CacheValue_S_SoftValue
}; // namespace android::icu::impl
// .method constructor <init>(Ljava/lang/Object;)V
template <typename V>
android::icu::impl::CacheValue_S_SoftValue<V>::CacheValue_S_SoftValue(std::shared_ptr<V> value)
{
	
	std::shared_ptr<java::lang::ref::SoftReference> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 042        value = {
	// 043            "(TV;)V"
	// 044        }
	// 045    .end annotation
	//    .local p0, "this":Landroid/icu/impl/CacheValue$SoftValue;, "Landroid/icu/impl/CacheValue$SoftValue<TV;>;"
	//    .local p1, "value":Ljava/lang/Object;, "TV;"
	// 051    invoke-direct {p0}, Landroid/icu/impl/CacheValue;-><init>()V
	cVar0 = std::make_shared<java::lang::ref::SoftReference>(value);
	this->ref = cVar0;
	return;

}
// .method public get()Ljava/lang/Object;
template <typename V>
std::shared_ptr<V> android::icu::impl::CacheValue_S_SoftValue<V>::get()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 067        value = {
	// 068            "()TV;"
	// 069        }
	// 070    .end annotation
	//    .local p0, "this":Landroid/icu/impl/CacheValue$SoftValue;, "Landroid/icu/impl/CacheValue$SoftValue<TV;>;"
	return this->ref->get();

}
// .method public declared-synchronized resetIfCleared(Ljava/lang/Object;)Ljava/lang/Object;
template <typename V>
std::shared_ptr<V> android::icu::impl::CacheValue_S_SoftValue<V>::resetIfCleared(std::shared_ptr<V> value)
{
	
	std::shared_ptr<java::lang::Object> oldValue;
	std::shared_ptr<java::lang::ref::SoftReference> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 087        value = {
	// 088            "(TV;)TV;"
	// 089        }
	// 090    .end annotation
	//    .local p0, "this":Landroid/icu/impl/CacheValue$SoftValue;, "Landroid/icu/impl/CacheValue$SoftValue<TV;>;"
	//    .local p1, "value":Ljava/lang/Object;, "TV;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	oldValue = this->ref->get();
	//    .local v0, "oldValue":Ljava/lang/Object;, "TV;"
	if ( oldValue )     
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::ref::SoftReference>(value);
	this->ref = cVar0;
	//label_try_end_10:
	}
	catch (...){
		goto label_catchall_14;
	}
	//    .catchall {:try_start_1 .. :try_end_10} :catchall_14
	this->monitor_exit();
	return value;
	label_cond_12:
	this->monitor_exit();
	return oldValue;
	// 129    .end local v0    # "oldValue":Ljava/lang/Object;, "TV;"
	label_catchall_14:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}

#endif //__android_icu_impl_CacheValue_S_SoftValue__

