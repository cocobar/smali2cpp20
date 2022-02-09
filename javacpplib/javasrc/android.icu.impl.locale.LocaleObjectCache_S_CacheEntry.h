#ifndef __android_icu_impl_locale_LocaleObjectCache_S_CacheEntry__
#define __android_icu_impl_locale_LocaleObjectCache_S_CacheEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleObjectCache$CacheEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.lang.ref.SoftReference.h"

namespace android::icu::impl::locale{
template <typename K,typename V>
class LocaleObjectCache_S_CacheEntry : public java::lang::ref::SoftReference<V> {
protected:
private:
	std::shared_ptr<K> _key;
public:
	LocaleObjectCache_S_CacheEntry(std::shared_ptr<K> key,std::shared_ptr<V> value,std::shared_ptr<java::lang::ref::ReferenceQueue<V>> queue);
	std::shared_ptr<K> getKey();
public:
	virtual ~LocaleObjectCache_S_CacheEntry(){
	}

}; // class LocaleObjectCache_S_CacheEntry
}; // namespace android::icu::impl::locale
// .method constructor <init>(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V
template <typename K,typename V>
android::icu::impl::locale::LocaleObjectCache_S_CacheEntry<K,V>::LocaleObjectCache_S_CacheEntry(std::shared_ptr<K> key,std::shared_ptr<V> value,std::shared_ptr<java::lang::ref::ReferenceQueue<V>> queue)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 043        value = {
	// 044            "(TK;TV;",
	// 045            "Ljava/lang/ref/ReferenceQueue",
	// 046            "<TV;>;)V"
	// 047        }
	// 048    .end annotation
	//    .local p0, "this":Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry;, "Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	//    .local p3, "queue":Ljava/lang/ref/ReferenceQueue;, "Ljava/lang/ref/ReferenceQueue<TV;>;"
	java::lang::ref::SoftReference::(value, queue);
	this->_key = key;
	return;

}
// .method getKey()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<K> android::icu::impl::locale::LocaleObjectCache_S_CacheEntry<K,V>::getKey()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 070        value = {
	// 071            "()TK;"
	// 072        }
	// 073    .end annotation
	//    .local p0, "this":Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry;, "Landroid/icu/impl/locale/LocaleObjectCache$CacheEntry<TK;TV;>;"
	return this->_key;

}

#endif //__android_icu_impl_locale_LocaleObjectCache_S_CacheEntry__

