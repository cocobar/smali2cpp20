#ifndef __android_icu_impl_CacheValue__
#define __android_icu_impl_CacheValue__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CacheValue.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheValue_S_NullValue.h"
#include "android.icu.impl.CacheValue_S_SoftValue.h"
#include "android.icu.impl.CacheValue_S_Strength.h"
#include "android.icu.impl.CacheValue_S_StrongValue.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
template <typename V>
class CacheValue : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::impl::CacheValue<V>> NULL_VALUE;
	static std::shared_ptr<android::icu::impl::CacheValue_S_Strength> strength;
public:
	static void static_cinit();
	CacheValue();
	static bool futureInstancesWillBeStrong();
	static std::shared_ptr<android::icu::impl::CacheValue<V>> getInstance(std::shared_ptr<V> value);
	static void setStrength(std::shared_ptr<android::icu::impl::CacheValue_S_Strength> strength);
	std::shared_ptr<V> get();
	bool isNull();
	std::shared_ptr<V> resetIfCleared(std::shared_ptr<V> var0);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CacheValue<V>::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CacheValue(){
	}

}; // class CacheValue
}; // namespace android::icu::impl
// .method static constructor <clinit>()V
template <typename V>
static void static_cinit()
{
	
	std::shared_ptr<android::icu::impl::CacheValue_S_NullValue> cVar0;
	
	android::icu::impl::CacheValue<V>::strength = android::icu::impl::CacheValue_S_Strength::SOFT;
	cVar0 = std::make_shared<android::icu::impl::CacheValue_S_NullValue>(0x0);
	android::icu::impl::CacheValue<V>::NULL_VALUE = cVar0;
	return;

}
// .method public constructor <init>()V
template <typename V>
android::icu::impl::CacheValue<V>::CacheValue()
{
	
	//    .local p0, "this":Landroid/icu/impl/CacheValue;, "Landroid/icu/impl/CacheValue<TV;>;"
	// 067    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static futureInstancesWillBeStrong()Z
template <typename V>
bool android::icu::impl::CacheValue<V>::futureInstancesWillBeStrong()
{
	
	bool cVar0;
	
	if ( android::icu::impl::CacheValue<V>::strength != android::icu::impl::CacheValue_S_Strength::STRONG )
		goto label_cond_8;
	cVar0 = 0x1;
	label_goto_7:
	return cVar0;
	label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public static getInstance(Ljava/lang/Object;)Landroid/icu/impl/CacheValue;
template <typename V>
std::shared_ptr<android::icu::impl::CacheValue<V>> android::icu::impl::CacheValue<V>::getInstance(std::shared_ptr<V> value)
{
	
	std::shared_ptr<android::icu::impl::CacheValue_S_StrongValue> cVar0;
	std::shared_ptr<android::icu::impl::CacheValue_S_SoftValue> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 097        value = {
	// 098            "<V:",
	// 099            "Ljava/lang/Object;",
	// 100            ">(TV;)",
	// 101            "Landroid/icu/impl/CacheValue",
	// 102            "<TV;>;"
	// 103        }
	// 104    .end annotation
	//    .local p0, "value":Ljava/lang/Object;, "TV;"
	if ( value )     
		goto label_cond_5;
	return android::icu::impl::CacheValue<V>::NULL_VALUE;
	// 116    .line 78
	label_cond_5:
	if ( android::icu::impl::CacheValue<V>::strength != android::icu::impl::CacheValue_S_Strength::STRONG )
		goto label_cond_11;
	cVar0 = std::make_shared<android::icu::impl::CacheValue_S_StrongValue>(value);
	label_goto_10:
	return cVar0;
	label_cond_11:
	cVar0 = std::make_shared<android::icu::impl::CacheValue_S_SoftValue>(value);
	goto label_goto_10;

}
// .method public static setStrength(Landroid/icu/impl/CacheValue$Strength;)V
template <typename V>
void android::icu::impl::CacheValue<V>::setStrength(std::shared_ptr<android::icu::impl::CacheValue_S_Strength> strength)
{
	
	//    .param p0, "strength"    # Landroid/icu/impl/CacheValue$Strength;
	//    .annotation system Ldalvik/annotation/Signature;
	// 143        value = {
	// 144            "(",
	// 145            "Landroid/icu/impl/CacheValue$Strength;",
	// 146            ")V"
	// 147        }
	// 148    .end annotation
	android::icu::impl::CacheValue<V>::strength = strength;
	return;

}
// .method public abstract get()Ljava/lang/Object;
template <typename V>
std::shared_ptr<V> android::icu::impl::CacheValue<V>::get()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 161        value = {
	// 162            "()TV;"
	// 163        }
	// 164    .end annotation

}
// .method public isNull()Z
template <typename V>
bool android::icu::impl::CacheValue<V>::isNull()
{
	
	//    .local p0, "this":Landroid/icu/impl/CacheValue;, "Landroid/icu/impl/CacheValue<TV;>;"
	return 0x0;

}
// .method public abstract resetIfCleared(Ljava/lang/Object;)Ljava/lang/Object;
template <typename V>
std::shared_ptr<V> android::icu::impl::CacheValue<V>::resetIfCleared(std::shared_ptr<V> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 180        value = {
	// 181            "(TV;)TV;"
	// 182        }
	// 183    .end annotation

}

#endif //__android_icu_impl_CacheValue__

