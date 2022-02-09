#ifndef __android_icu_impl_CacheValue_S_StrongValue__
#define __android_icu_impl_CacheValue_S_StrongValue__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CacheValue$StrongValue.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheValue.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
template <typename V>
class CacheValue_S_StrongValue : public android::icu::impl::CacheValue<V> {
protected:
private:
	std::shared_ptr<V> value;
public:
	CacheValue_S_StrongValue(std::shared_ptr<V> value);
	std::shared_ptr<V> get();
	std::shared_ptr<V> resetIfCleared(std::shared_ptr<V> value);
public:
	virtual ~CacheValue_S_StrongValue(){
	}

}; // class CacheValue_S_StrongValue
}; // namespace android::icu::impl
// .method constructor <init>(Ljava/lang/Object;)V
template <typename V>
android::icu::impl::CacheValue_S_StrongValue<V>::CacheValue_S_StrongValue(std::shared_ptr<V> value)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 041        value = {
	// 042            "(TV;)V"
	// 043        }
	// 044    .end annotation
	//    .local p0, "this":Landroid/icu/impl/CacheValue$StrongValue;, "Landroid/icu/impl/CacheValue$StrongValue<TV;>;"
	//    .local p1, "value":Ljava/lang/Object;, "TV;"
	// 050    invoke-direct {p0}, Landroid/icu/impl/CacheValue;-><init>()V
	this->value = value;
	return;

}
// .method public get()Ljava/lang/Object;
template <typename V>
std::shared_ptr<V> android::icu::impl::CacheValue_S_StrongValue<V>::get()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 062        value = {
	// 063            "()TV;"
	// 064        }
	// 065    .end annotation
	//    .local p0, "this":Landroid/icu/impl/CacheValue$StrongValue;, "Landroid/icu/impl/CacheValue$StrongValue<TV;>;"
	return this->value;

}
// .method public resetIfCleared(Ljava/lang/Object;)Ljava/lang/Object;
template <typename V>
std::shared_ptr<V> android::icu::impl::CacheValue_S_StrongValue<V>::resetIfCleared(std::shared_ptr<V> value)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 078        value = {
	// 079            "(TV;)TV;"
	// 080        }
	// 081    .end annotation
	//    .local p0, "this":Landroid/icu/impl/CacheValue$StrongValue;, "Landroid/icu/impl/CacheValue$StrongValue<TV;>;"
	//    .local p1, "value":Ljava/lang/Object;, "TV;"
	return this->value;

}

#endif //__android_icu_impl_CacheValue_S_StrongValue__

