#ifndef __android_icu_impl_Relation_S_SimpleEntry__
#define __android_icu_impl_Relation_S_SimpleEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Relation$SimpleEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.util.Map_S_Entry.h"

namespace android::icu::impl{
template <typename K,typename V>
class Relation_S_SimpleEntry : public java::util::Map_S_Entry<K,V> {
protected:
private:
public:
	std::shared_ptr<K> key;
	std::shared_ptr<V> value;
	Relation_S_SimpleEntry(std::shared_ptr<K> key,std::shared_ptr<V> value);
	Relation_S_SimpleEntry(std::shared_ptr<java::util::Map_S_Entry<K,V>> e);
	std::shared_ptr<K> getKey();
	std::shared_ptr<V> getValue();
	std::shared_ptr<V> setValue(std::shared_ptr<V> value);
public:
	virtual ~Relation_S_SimpleEntry(){
	}

}; // class Relation_S_SimpleEntry
}; // namespace android::icu::impl
// .method public constructor <init>(Ljava/lang/Object;Ljava/lang/Object;)V
template <typename K,typename V>
android::icu::impl::Relation_S_SimpleEntry<K,V>::Relation_S_SimpleEntry(std::shared_ptr<K> key,std::shared_ptr<V> value)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 055        value = {
	// 056            "(TK;TV;)V"
	// 057        }
	// 058    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation$SimpleEntry;, "Landroid/icu/impl/Relation$SimpleEntry<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	// 065    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->key = key;
	this->value = value;
	return;

}
// .method public constructor <init>(Ljava/util/Map$Entry;)V
template <typename K,typename V>
android::icu::impl::Relation_S_SimpleEntry<K,V>::Relation_S_SimpleEntry(std::shared_ptr<java::util::Map_S_Entry<K,V>> e)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 080        value = {
	// 081            "(",
	// 082            "Ljava/util/Map$Entry",
	// 083            "<TK;TV;>;)V"
	// 084        }
	// 085    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation$SimpleEntry;, "Landroid/icu/impl/Relation$SimpleEntry<TK;TV;>;"
	//    .local p1, "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<TK;TV;>;"
	// 091    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->key = e->getKey();
	this->value = e->getValue();
	return;

}
// .method public getKey()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<K> android::icu::impl::Relation_S_SimpleEntry<K,V>::getKey()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 116        value = {
	// 117            "()TK;"
	// 118        }
	// 119    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation$SimpleEntry;, "Landroid/icu/impl/Relation$SimpleEntry<TK;TV;>;"
	return this->key;

}
// .method public getValue()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> android::icu::impl::Relation_S_SimpleEntry<K,V>::getValue()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 132        value = {
	// 133            "()TV;"
	// 134        }
	// 135    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation$SimpleEntry;, "Landroid/icu/impl/Relation$SimpleEntry<TK;TV;>;"
	return this->value;

}
// .method public setValue(Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> android::icu::impl::Relation_S_SimpleEntry<K,V>::setValue(std::shared_ptr<V> value)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 148        value = {
	// 149            "(TV;)TV;"
	// 150        }
	// 151    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation$SimpleEntry;, "Landroid/icu/impl/Relation$SimpleEntry<TK;TV;>;"
	//    .local p1, "value":Ljava/lang/Object;, "TV;"
	//    .local v0, "oldValue":Ljava/lang/Object;, "TV;"
	this->value = value;
	return this->value;

}

#endif //__android_icu_impl_Relation_S_SimpleEntry__

