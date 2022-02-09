#ifndef __android_icu_impl_CacheValue_S_NullValue__
#define __android_icu_impl_CacheValue_S_NullValue__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CacheValue$NullValue.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheValue.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
template <typename V>
class CacheValue_S_NullValue : public android::icu::impl::CacheValue<V> {
protected:
private:
	CacheValue_S_NullValue();
public:
	CacheValue_S_NullValue(std::shared_ptr<android::icu::impl::CacheValue_S_NullValue<V>> _this0);
	std::shared_ptr<V> get();
	bool isNull();
	std::shared_ptr<V> resetIfCleared(std::shared_ptr<V> value);
public:
	virtual ~CacheValue_S_NullValue(){
	}

}; // class CacheValue_S_NullValue
}; // namespace android::icu::impl
// .method private constructor <init>()V
template <typename V>
android::icu::impl::CacheValue_S_NullValue<V>::CacheValue_S_NullValue()
{
	
	//    .local p0, "this":Landroid/icu/impl/CacheValue$NullValue;, "Landroid/icu/impl/CacheValue$NullValue<TV;>;"
	// 034    invoke-direct {p0}, Landroid/icu/impl/CacheValue;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/CacheValue$NullValue;)V
template <typename V>
android::icu::impl::CacheValue_S_NullValue<V>::CacheValue_S_NullValue(std::shared_ptr<android::icu::impl::CacheValue_S_NullValue<V>> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/CacheValue$NullValue;
	//    .local p0, "this":Landroid/icu/impl/CacheValue$NullValue;, "Landroid/icu/impl/CacheValue$NullValue<TV;>;"
	// 045    invoke-direct {p0}, Landroid/icu/impl/CacheValue$NullValue;-><init>()V
	return;

}
// .method public get()Ljava/lang/Object;
template <typename V>
std::shared_ptr<V> android::icu::impl::CacheValue_S_NullValue<V>::get()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 055        value = {
	// 056            "()TV;"
	// 057        }
	// 058    .end annotation
	//    .local p0, "this":Landroid/icu/impl/CacheValue$NullValue;, "Landroid/icu/impl/CacheValue$NullValue<TV;>;"
	return 0x0;

}
// .method public isNull()Z
template <typename V>
bool android::icu::impl::CacheValue_S_NullValue<V>::isNull()
{
	
	//    .local p0, "this":Landroid/icu/impl/CacheValue$NullValue;, "Landroid/icu/impl/CacheValue$NullValue<TV;>;"
	return 0x1;

}
// .method public resetIfCleared(Ljava/lang/Object;)Ljava/lang/Object;
template <typename V>
std::shared_ptr<V> android::icu::impl::CacheValue_S_NullValue<V>::resetIfCleared(std::shared_ptr<V> value)
{
	
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 082        value = {
	// 083            "(TV;)TV;"
	// 084        }
	// 085    .end annotation
	//    .local p0, "this":Landroid/icu/impl/CacheValue$NullValue;, "Landroid/icu/impl/CacheValue$NullValue<TV;>;"
	//    .local p1, "value":Ljava/lang/Object;, "TV;"
	if ( !(value) )  
		goto label_cond_c;
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("resetting a null value to a non-null value")));
	// throw
	throw cVar0;
	// 104    .line 115
	label_cond_c:
	return 0x0;

}

#endif //__android_icu_impl_CacheValue_S_NullValue__

