#ifndef __android_icu_impl_ICUCache__
#define __android_icu_impl_ICUCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCache.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
template <typename K,typename V>
class ICUCache : public java::lang::Object {
protected:
private:
public:
	static std::shared_ptr<java::lang::Object> NULL;
	static int SOFT;
	static int WEAK;
	static void static_cinit();
	void clear() = 0;
	std::shared_ptr<V> get(std::shared_ptr<java::lang::Object> var0);
	void put(std::shared_ptr<K> var0,std::shared_ptr<V> var1);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUCache<K,V>::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
	ICUCache(){ };
	virtual ~ICUCache(){ };

}; // class ICUCache
}; // namespace android::icu::impl
// .method static constructor <clinit>()V
template <typename K,typename V>
static void static_cinit()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	cVar0 = std::make_shared<java::lang::Object>();
	android::icu::impl::ICUCache<K,V>::NULL = cVar0;
	return;

}
// .method public abstract get(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> android::icu::impl::ICUCache<K,V>::get(std::shared_ptr<java::lang::Object> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 050        value = {
	// 051            "(",
	// 052            "Ljava/lang/Object;",
	// 053            ")TV;"
	// 054        }
	// 055    .end annotation

}
// .method public abstract put(Ljava/lang/Object;Ljava/lang/Object;)V
template <typename K,typename V>
void android::icu::impl::ICUCache<K,V>::put(std::shared_ptr<K> var0,std::shared_ptr<V> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 060        value = {
	// 061            "(TK;TV;)V"
	// 062        }
	// 063    .end annotation

}

#endif //__android_icu_impl_ICUCache__

