#ifndef __android_icu_impl_Relation__
#define __android_icu_impl_Relation__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Relation.smali
#include "java2ctype.h"
#include "android.icu.impl.Relation_S_SimpleEntry.h"
#include "android.icu.util.Freezable.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.lang.reflect.Constructor.h"
#include "java.util.Arrays.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.List.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::impl{
template <typename K,typename V>
class Relation : public android::icu::util::Freezable<android::icu::impl::Relation<K,V>> {
protected:
private:
	std::shared_ptr<java::util::Map<K,java::util::Set<V>>> data;
	std::shared_ptr<java::util::Set<V>> newSet();
public:
	bool frozen;
	std::shared_ptr<std::vector<java::lang::Object>> setComparatorParam;
	std::shared_ptr<java::lang::reflect::Constructor<java::util::Set<V>>> setCreator;
	Relation(std::shared_ptr<java::util::Map<K,java::util::Set<V>>> map,std::shared_ptr<java::lang::Class<java::lang::Object>> setCreator);
	Relation(std::shared_ptr<java::util::Map<K,java::util::Set<V>>> map,std::shared_ptr<java::lang::Class<java::lang::Object>> setCreator,std::shared_ptr<java::util::Comparator<V>> setComparator);
	static std::shared_ptr<android::icu::impl::Relation<K,V>> of(std::shared_ptr<java::util::Map<K,java::util::Set<V>>> map,std::shared_ptr<java::lang::Class<java::lang::Object>> setCreator);
	static std::shared_ptr<android::icu::impl::Relation<K,V>> of(std::shared_ptr<java::util::Map<K,java::util::Set<V>>> map,std::shared_ptr<java::lang::Class<java::lang::Object>> setCreator,std::shared_ptr<java::util::Comparator<V>> setComparator);
	std::shared_ptr<android::icu::impl::Relation<K,V>> addAllInverted(std::shared_ptr<android::icu::impl::Relation<V,K>> source);
	std::shared_ptr<android::icu::impl::Relation<K,V>> addAllInverted(std::shared_ptr<java::util::Map<V,K>> source);
	void clear();
	std::shared_ptr<android::icu::impl::Relation<K,V>> cloneAsThawed();
	bool containsKey(std::shared_ptr<java::lang::Object> key);
	bool containsValue(std::shared_ptr<java::lang::Object> value);
	std::shared_ptr<java::util::Set<java::util::Map_S_Entry<K,V>>> entrySet();
	bool equals(std::shared_ptr<java::lang::Object> o);
	std::shared_ptr<android::icu::impl::Relation<K,V>> freeze();
	std::shared_ptr<java::util::Set<V>> get(std::shared_ptr<java::lang::Object> key);
	std::shared_ptr<java::util::Set<V>> getAll(std::shared_ptr<java::lang::Object> key);
	int hashCode();
	bool isEmpty();
	bool isFrozen();
	std::shared_ptr<java::util::Set<K>> keySet();
	std::shared_ptr<java::util::Set<java::util::Map_S_Entry<K,V>>> keyValueSet();
	std::shared_ptr<java::util::Set<java::util::Map_S_Entry<K,java::util::Set<V>>>> keyValuesSet();
	std::shared_ptr<V> put(std::shared_ptr<K> key,std::shared_ptr<V> value);
	std::shared_ptr<V> putAll(std::shared_ptr<K> key,std::shared_ptr<java::util::Collection<V>> values);
	std::shared_ptr<V> putAll(std::shared_ptr<java::util::Collection<K>> keys,std::shared_ptr<V> value);
	void putAll(std::shared_ptr<android::icu::impl::Relation<K,V>> t);
	void putAll(std::shared_ptr<java::util::Map<K,V>> t);
	bool remove(std::shared_ptr<K> key,std::shared_ptr<V> value);
	std::shared_ptr<java::util::Set<V>> removeAll(std::shared_ptr<K> key);
	std::shared_ptr<java::util::Set<V>> removeAll(std::shared_ptr<java::util::Collection<K>> toBeRemoved);
	std::shared_ptr<java::util::Set<V>> removeAll(std::shared_ptr<std::vector<K>> keys);
	bool removeAll(std::shared_ptr<android::icu::impl::Relation<K,V>> toBeRemoved);
	bool removeAll(std::shared_ptr<K> key,std::shared_ptr<java::lang::Iterable<V>> toBeRemoved);
	int size();
	std::shared_ptr<java::lang::String> toString();
	std::shared_ptr<java::util::Collection<V>> values(std::shared_ptr<java::util::Collection<V>> result);
	std::shared_ptr<java::util::Set<V>> values();
public:
	virtual ~Relation(){
	}

}; // class Relation
}; // namespace android::icu::impl
// .method public constructor <init>(Ljava/util/Map;Ljava/lang/Class;)V
template <typename K,typename V>
android::icu::impl::Relation<K,V>::Relation(std::shared_ptr<java::util::Map<K,java::util::Set<V>>> map,std::shared_ptr<java::lang::Class<java::lang::Object>> setCreator)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 064        value = {
	// 065            "(",
	// 066            "Ljava/util/Map",
	// 067            "<TK;",
	// 068            "Ljava/util/Set",
	// 069            "<TV;>;>;",
	// 070            "Ljava/lang/Class",
	// 071            "<*>;)V"
	// 072        }
	// 073    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "map":Ljava/util/Map;, "Ljava/util/Map<TK;Ljava/util/Set<TV;>;>;"
	//    .local p2, "setCreator":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	android::icu::impl::Relation<K,V>::(map, setCreator, 0x0);
	return;

}
// .method public constructor <init>(Ljava/util/Map;Ljava/lang/Class;Ljava/util/Comparator;)V
template <typename K,typename V>
android::icu::impl::Relation<K,V>::Relation(std::shared_ptr<java::util::Map<K,java::util::Set<V>>> map,std::shared_ptr<java::lang::Class<java::lang::Object>> setCreator,std::shared_ptr<java::util::Comparator<V>> setComparator)
{
	
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::RuntimeException> cVar3;
	std::shared_ptr<java::util::HashMap> map;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 091        value = {
	// 092            "(",
	// 093            "Ljava/util/Map",
	// 094            "<TK;",
	// 095            "Ljava/util/Set",
	// 096            "<TV;>;>;",
	// 097            "Ljava/lang/Class",
	// 098            "<*>;",
	// 099            "Ljava/util/Comparator",
	// 100            "<TV;>;)V"
	// 101        }
	// 102    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "map":Ljava/util/Map;, "Ljava/util/Map<TK;Ljava/util/Set<TV;>;>;"
	//    .local p2, "setCreator":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p3, "setComparator":Ljava/util/Comparator;, "Ljava/util/Comparator<TV;>;"
	cVar0 = 0x0;
	// 114    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->frozen = 0x0;
	if ( setComparator )     
		goto label_cond_27;
	label_goto_9:
	try {
	//label_try_start_9:
	this->setComparatorParam = cVar0;
	if ( setComparator )     
		goto label_cond_3e;
	this->setCreator = setCreator->getConstructor(std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x0));
	this->setCreator->newInstance(this->setComparatorParam);
	label_goto_1d:
	if ( map )     
		goto label_cond_24;
	//    .end local p1    # "map":Ljava/util/Map;, "Ljava/util/Map<TK;Ljava/util/Set<TV;>;>;"
	map = std::make_shared<java::util::HashMap>();
	label_cond_24:
	this->data = map;
	return;
	// 162    .line 56
	// 163    .restart local p1    # "map":Ljava/util/Map;, "Ljava/util/Map<TK;Ljava/util/Set<TV;>;>;"
	label_cond_27:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	cVar0[0x0] = setComparator;
	//label_try_end_2d:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_2d} :catch_2e
	goto label_goto_9;
	// 177    .line 65
	// 178    .end local p1    # "map":Ljava/util/Map;, "Ljava/util/Map<TK;Ljava/util/Set<TV;>;>;"
	label_catch_2e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t create new set")));
	cVar3 = cVar2->initCause(getCatchExcetionFromList);
	cVar3->checkCast("java::lang::RuntimeException");
	// throw
	throw cVar3;
	// 198    .line 61
	// 199    .end local v0    # "e":Ljava/lang/Exception;
	// 200    .restart local p1    # "map":Ljava/util/Map;, "Ljava/util/Map<TK;Ljava/util/Set<TV;>;>;"
	label_cond_3e:
	try {
	//label_try_start_3f:
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	cVar4[0x0] = java::util::Comparator();
	this->setCreator = setCreator->getConstructor(cVar4);
	this->setCreator->newInstance(this->setComparatorParam);
	//label_try_end_53:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/lang/Exception; {:try_start_3f .. :try_end_53} :catch_2e
	goto label_goto_1d;

}
// .method private newSet()Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<V>> android::icu::impl::Relation<K,V>::newSet()
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	std::shared_ptr<java::util::Set> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 234        value = {
	// 235            "()",
	// 236            "Ljava/util/Set",
	// 237            "<TV;>;"
	// 238        }
	// 239    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	try {
	//label_try_start_0:
	cVar0 = this->setCreator->newInstance(this->setComparatorParam);
	cVar0->checkCast("java::util::Set");
	//label_try_end_a:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_a} :catch_b
	return cVar0;
	// 259    .line 171
	label_catch_b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t create new set")));
	cVar2 = cVar1->initCause(getCatchExcetionFromList);
	cVar2->checkCast("java::lang::RuntimeException");
	// throw
	throw cVar2;

}
// .method public static of(Ljava/util/Map;Ljava/lang/Class;)Landroid/icu/impl/Relation;
template <typename K,typename V>
std::shared_ptr<android::icu::impl::Relation<K,V>> android::icu::impl::Relation<K,V>::of(std::shared_ptr<java::util::Map<K,java::util::Set<V>>> map,std::shared_ptr<java::lang::Class<java::lang::Object>> setCreator)
{
	
	std::shared_ptr<android::icu::impl::Relation<K,V>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 283        value = {
	// 284            "<K:",
	// 285            "Ljava/lang/Object;",
	// 286            "V:",
	// 287            "Ljava/lang/Object;",
	// 288            ">(",
	// 289            "Ljava/util/Map",
	// 290            "<TK;",
	// 291            "Ljava/util/Set",
	// 292            "<TV;>;>;",
	// 293            "Ljava/lang/Class",
	// 294            "<*>;)",
	// 295            "Landroid/icu/impl/Relation",
	// 296            "<TK;TV;>;"
	// 297        }
	// 298    .end annotation
	//    .local p0, "map":Ljava/util/Map;, "Ljava/util/Map<TK;Ljava/util/Set<TV;>;>;"
	//    .local p1, "setCreator":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = std::make_shared<android::icu::impl::Relation<K,V>>(map, setCreator);
	return cVar0;

}
// .method public static of(Ljava/util/Map;Ljava/lang/Class;Ljava/util/Comparator;)Landroid/icu/impl/Relation;
template <typename K,typename V>
std::shared_ptr<android::icu::impl::Relation<K,V>> android::icu::impl::Relation<K,V>::of(std::shared_ptr<java::util::Map<K,java::util::Set<V>>> map,std::shared_ptr<java::lang::Class<java::lang::Object>> setCreator,std::shared_ptr<java::util::Comparator<V>> setComparator)
{
	
	std::shared_ptr<android::icu::impl::Relation<K,V>> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 314        value = {
	// 315            "<K:",
	// 316            "Ljava/lang/Object;",
	// 317            "V:",
	// 318            "Ljava/lang/Object;",
	// 319            ">(",
	// 320            "Ljava/util/Map",
	// 321            "<TK;",
	// 322            "Ljava/util/Set",
	// 323            "<TV;>;>;",
	// 324            "Ljava/lang/Class",
	// 325            "<*>;",
	// 326            "Ljava/util/Comparator",
	// 327            "<TV;>;)",
	// 328            "Landroid/icu/impl/Relation",
	// 329            "<TK;TV;>;"
	// 330        }
	// 331    .end annotation
	//    .local p0, "map":Ljava/util/Map;, "Ljava/util/Map<TK;Ljava/util/Set<TV;>;>;"
	//    .local p1, "setCreator":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p2, "setComparator":Ljava/util/Comparator;, "Ljava/util/Comparator<TV;>;"
	cVar0 = std::make_shared<android::icu::impl::Relation<K,V>>(map, setCreator, setComparator);
	return cVar0;

}
// .method public addAllInverted(Landroid/icu/impl/Relation;)Landroid/icu/impl/Relation;
template <typename K,typename V>
std::shared_ptr<android::icu::impl::Relation<K,V>> android::icu::impl::Relation<K,V>::addAllInverted(std::shared_ptr<android::icu::impl::Relation<V,K>> source)
{
	
	std::shared_ptr<java::util::Iterator> value_S_iterator;
	std::shared_ptr<java::lang::Object> value;
	std::shared_ptr<java::util::Set> cVar0;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 350        value = {
	// 351            "(",
	// 352            "Landroid/icu/impl/Relation",
	// 353            "<TV;TK;>;)",
	// 354            "Landroid/icu/impl/Relation",
	// 355            "<TK;TV;>;"
	// 356        }
	// 357    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "source":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TV;TK;>;"
	value_S_iterator = source->data->keySet()->iterator();
	//    .local v3, "value$iterator":Ljava/util/Iterator;
	label_cond_a:
	if ( !(value_S_iterator->hasNext()) )  
		goto label_cond_2e;
	value = value_S_iterator->next();
	//    .local v2, "value":Ljava/lang/Object;, "TV;"
	cVar0 = source->data->get(value);
	cVar0->checkCast("java::util::Set");
	key_S_iterator = cVar0->iterator();
	//    .local v1, "key$iterator":Ljava/util/Iterator;
	label_goto_20:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_a;
	//    .local v0, "key":Ljava/lang/Object;, "TK;"
	this->put(key_S_iterator->next(), value);
	goto label_goto_20;
	// 417    .line 273
	// 418    .end local v0    # "key":Ljava/lang/Object;, "TK;"
	// 419    .end local v1    # "key$iterator":Ljava/util/Iterator;
	// 420    .end local v2    # "value":Ljava/lang/Object;, "TV;"
	label_cond_2e:
	return this;

}
// .method public addAllInverted(Ljava/util/Map;)Landroid/icu/impl/Relation;
template <typename K,typename V>
std::shared_ptr<android::icu::impl::Relation<K,V>> android::icu::impl::Relation<K,V>::addAllInverted(std::shared_ptr<java::util::Map<V,K>> source)
{
	
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 428        value = {
	// 429            "(",
	// 430            "Ljava/util/Map",
	// 431            "<TV;TK;>;)",
	// 432            "Landroid/icu/impl/Relation",
	// 433            "<TK;TV;>;"
	// 434        }
	// 435    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "source":Ljava/util/Map;, "Ljava/util/Map<TV;TK;>;"
	entry_S_iterator = source->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
	label_goto_8:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_20;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<TV;TK;>;"
	this->put(entry->getValue(), entry->getKey());
	goto label_goto_8;
	// 477    .line 280
	// 478    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<TV;TK;>;"
	label_cond_20:
	return this;

}
// .method public clear()V
template <typename K,typename V>
void android::icu::impl::Relation<K,V>::clear()
{
	
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	this->data->clear();
	return;

}
// .method public cloneAsThawed()Landroid/icu/impl/Relation;
template <typename K,typename V>
std::shared_ptr<android::icu::impl::Relation<K,V>> android::icu::impl::Relation<K,V>::cloneAsThawed()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 500        value = {
	// 501            "()",
	// 502            "Landroid/icu/impl/Relation",
	// 503            "<TK;TV;>;"
	// 504        }
	// 505    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method public bridge synthetic cloneAsThawed()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<java::lang::Object> android::icu::impl::Relation<K,V>::cloneAsThawed()
{
	
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->cloneAsThawed();

}
// .method public containsKey(Ljava/lang/Object;)Z
template <typename K,typename V>
bool android::icu::impl::Relation<K,V>::containsKey(std::shared_ptr<java::lang::Object> key)
{
	
	//    .param p1, "key"    # Ljava/lang/Object;
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->data->containsKey(key);

}
// .method public containsValue(Ljava/lang/Object;)Z
template <typename K,typename V>
bool android::icu::impl::Relation<K,V>::containsValue(std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<java::util::Iterator> values_S_iterator;
	std::shared_ptr<java::util::Set> values;
	
	//    .param p1, "value"    # Ljava/lang/Object;
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	values_S_iterator = this->data->values()->iterator();
	//    .local v1, "values$iterator":Ljava/util/Iterator;
	label_cond_a:
	if ( !(values_S_iterator->hasNext()) )  
		goto label_cond_1e;
	values = values_S_iterator->next();
	values->checkCast("java::util::Set");
	//    .local v0, "values":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	if ( !(values->contains(value)) )  
		goto label_cond_a;
	return 0x1;
	// 590    .line 84
	// 591    .end local v0    # "values":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	label_cond_1e:
	return 0x0;

}
// .method public final entrySet()Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<java::util::Map_S_Entry<K,V>>> android::icu::impl::Relation<K,V>::entrySet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 601        value = {
	// 602            "()",
	// 603            "Ljava/util/Set",
	// 604            "<",
	// 605            "Ljava/util/Map$Entry",
	// 606            "<TK;TV;>;>;"
	// 607        }
	// 608    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->keyValueSet();

}
// .method public equals(Ljava/lang/Object;)Z
template <typename K,typename V>
bool android::icu::impl::Relation<K,V>::equals(std::shared_ptr<java::lang::Object> o)
{
	
	bool cVar0;
	
	//    .param p1, "o"    # Ljava/lang/Object;
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	cVar0 = 0x0;
	if ( o )     
		goto label_cond_4;
	return cVar0;
	// 634    .line 109
	label_cond_4:
	if ( o->getClass() == this->getClass() )
		goto label_cond_f;
	return cVar0;
	// 649    .line 111
	label_cond_f:
	o->checkCast("android::icu::impl::Relation<K,V>");
	//    .end local p1    # "o":Ljava/lang/Object;
	return this->data->equals(o->data);

}
// .method public freeze()Landroid/icu/impl/Relation;
template <typename K,typename V>
std::shared_ptr<android::icu::impl::Relation<K,V>> android::icu::impl::Relation<K,V>::freeze()
{
	
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::util::Set> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 668        value = {
	// 669            "()",
	// 670            "Landroid/icu/impl/Relation",
	// 671            "<TK;TV;>;"
	// 672        }
	// 673    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	if ( this->frozen )     
		goto label_cond_35;
	key_S_iterator = this->data->keySet()->iterator();
	//    .local v1, "key$iterator":Ljava/util/Iterator;
	label_goto_e:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_2a;
	key = key_S_iterator->next();
	//    .local v0, "key":Ljava/lang/Object;, "TK;"
	cVar0 = this->data->get(key);
	cVar0->checkCast("java::util::Set");
	this->data->put(key, java::util::Collections::unmodifiableSet(cVar0));
	goto label_goto_e;
	// 725    .line 298
	// 726    .end local v0    # "key":Ljava/lang/Object;, "TK;"
	label_cond_2a:
	this->data = java::util::Collections::unmodifiableMap(this->data);
	this->frozen = 0x1;
	//    .end local v1    # "key$iterator":Ljava/util/Iterator;
	label_cond_35:
	return this;

}
// .method public bridge synthetic freeze()Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<java::lang::Object> android::icu::impl::Relation<K,V>::freeze()
{
	
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->freeze();

}
// .method public get(Ljava/lang/Object;)Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<V>> android::icu::impl::Relation<K,V>::get(std::shared_ptr<java::lang::Object> key)
{
	
	std::shared_ptr<java::util::Set> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 764        value = {
	// 765            "(",
	// 766            "Ljava/lang/Object;",
	// 767            ")",
	// 768            "Ljava/util/Set",
	// 769            "<TV;>;"
	// 770        }
	// 771    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	cVar0 = this->data->get(key);
	cVar0->checkCast("java::util::Set");
	return cVar0;

}
// .method public getAll(Ljava/lang/Object;)Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<V>> android::icu::impl::Relation<K,V>::getAll(std::shared_ptr<java::lang::Object> key)
{
	
	std::shared_ptr<java::util::Set> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 791        value = {
	// 792            "(",
	// 793            "Ljava/lang/Object;",
	// 794            ")",
	// 795            "Ljava/util/Set",
	// 796            "<TV;>;"
	// 797        }
	// 798    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	cVar0 = this->data->get(key);
	cVar0->checkCast("java::util::Set");
	return cVar0;

}
// .method public hashCode()I
template <typename K,typename V>
int android::icu::impl::Relation<K,V>::hashCode()
{
	
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->data->hashCode();

}
// .method public isEmpty()Z
template <typename K,typename V>
bool android::icu::impl::Relation<K,V>::isEmpty()
{
	
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->data->isEmpty();

}
// .method public isFrozen()Z
template <typename K,typename V>
bool android::icu::impl::Relation<K,V>::isFrozen()
{
	
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->frozen;

}
// .method public keySet()Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<K>> android::icu::impl::Relation<K,V>::keySet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 858        value = {
	// 859            "()",
	// 860            "Ljava/util/Set",
	// 861            "<TK;>;"
	// 862        }
	// 863    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->data->keySet();

}
// .method public keyValueSet()Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<java::util::Map_S_Entry<K,V>>> android::icu::impl::Relation<K,V>::keyValueSet()
{
	
	std::shared_ptr<java::util::LinkedHashSet> result;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::util::Set> cVar0;
	std::shared_ptr<java::util::Iterator> value_S_iterator;
	std::shared_ptr<android::icu::impl::Relation_S_SimpleEntry> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 880        value = {
	// 881            "()",
	// 882            "Ljava/util/Set",
	// 883            "<",
	// 884            "Ljava/util/Map$Entry",
	// 885            "<TK;TV;>;>;"
	// 886        }
	// 887    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	result = std::make_shared<java::util::LinkedHashSet>();
	//    .local v2, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/util/Map$Entry<TK;TV;>;>;"
	key_S_iterator = this->data->keySet()->iterator();
	//    .local v1, "key$iterator":Ljava/util/Iterator;
	label_cond_f:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_38;
	key = key_S_iterator->next();
	//    .local v0, "key":Ljava/lang/Object;, "TK;"
	cVar0 = this->data->get(key);
	cVar0->checkCast("java::util::Set");
	value_S_iterator = cVar0->iterator();
	//    .local v4, "value$iterator":Ljava/util/Iterator;
	label_goto_25:
	if ( !(value_S_iterator->hasNext()) )  
		goto label_cond_f;
	//    .local v3, "value":Ljava/lang/Object;, "TV;"
	cVar1 = std::make_shared<android::icu::impl::Relation_S_SimpleEntry>(key, value_S_iterator->next());
	result->add(cVar1);
	goto label_goto_25;
	// 956    .line 102
	// 957    .end local v0    # "key":Ljava/lang/Object;, "TK;"
	// 958    .end local v3    # "value":Ljava/lang/Object;, "TV;"
	// 959    .end local v4    # "value$iterator":Ljava/util/Iterator;
	label_cond_38:
	return result;

}
// .method public keyValuesSet()Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<java::util::Map_S_Entry<K,java::util::Set<V>>>> android::icu::impl::Relation<K,V>::keyValuesSet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 967        value = {
	// 968            "()",
	// 969            "Ljava/util/Set",
	// 970            "<",
	// 971            "Ljava/util/Map$Entry",
	// 972            "<TK;",
	// 973            "Ljava/util/Set",
	// 974            "<TV;>;>;>;"
	// 975        }
	// 976    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->data->entrySet();

}
// .method public put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> android::icu::impl::Relation<K,V>::put(std::shared_ptr<K> key,std::shared_ptr<V> value)
{
	
	std::shared_ptr<java::util::Set> set;
	std::shared_ptr<java::lang::Object> set;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 993        value = {
	// 994            "(TK;TV;)TV;"
	// 995        }
	// 996    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	set = this->data->get(key);
	set->checkCast("java::util::Set");
	//    .local v0, "set":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	if ( set )     
		goto label_cond_13;
	set = this->newSet();
	this->data->put(key, set);
	label_cond_13:
	set->add(value);
	return value;

}
// .method public putAll(Ljava/lang/Object;Ljava/util/Collection;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> android::icu::impl::Relation<K,V>::putAll(std::shared_ptr<K> key,std::shared_ptr<java::util::Collection<V>> values)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::util::Set> set;
	std::shared_ptr<java::lang::Object> set;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1035        value = {
	// 1036            "(TK;",
	// 1037            "Ljava/util/Collection",
	// 1038            "<+TV;>;)TV;"
	// 1039        }
	// 1040    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "values":Ljava/util/Collection;, "Ljava/util/Collection<+TV;>;"
	cVar0 = 0x0;
	set = this->data->get(key);
	set->checkCast("java::util::Set");
	//    .local v0, "set":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	if ( set )     
		goto label_cond_14;
	set = this->newSet();
	this->data->put(key, set);
	label_cond_14:
	set->addAll(values);
	if ( values->size() )     
		goto label_cond_1e;
	label_goto_1d:
	return cVar0;
	label_cond_1e:
	cVar0 = values->iterator()->next();
	goto label_goto_1d;

}
// .method public putAll(Ljava/util/Collection;Ljava/lang/Object;)Ljava/lang/Object;
template <typename K,typename V>
std::shared_ptr<V> android::icu::impl::Relation<K,V>::putAll(std::shared_ptr<java::util::Collection<K>> keys,std::shared_ptr<V> value)
{
	
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1099        value = {
	// 1100            "(",
	// 1101            "Ljava/util/Collection",
	// 1102            "<TK;>;TV;)TV;"
	// 1103        }
	// 1104    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "keys":Ljava/util/Collection;, "Ljava/util/Collection<TK;>;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	//    .local v2, "result":Ljava/lang/Object;, "TV;"
	key_S_iterator = keys->iterator();
	//    .end local v2    # "result":Ljava/lang/Object;, "TV;"
	//    .local v1, "key$iterator":Ljava/util/Iterator;
	label_goto_5:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_14;
	//    .local v0, "key":Ljava/lang/Object;, "TK;"
	this->put(key_S_iterator->next(), value);
	//    .restart local v2    # "result":Ljava/lang/Object;, "TV;"
	goto label_goto_5;
	// 1141    .line 165
	// 1142    .end local v0    # "key":Ljava/lang/Object;, "TK;"
	// 1143    .end local v2    # "result":Ljava/lang/Object;, "TV;"
	label_cond_14:
	return 0x0;

}
// .method public putAll(Landroid/icu/impl/Relation;)V
template <typename K,typename V>
void android::icu::impl::Relation<K,V>::putAll(std::shared_ptr<android::icu::impl::Relation<K,V>> t)
{
	
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::util::Iterator> value_S_iterator;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1151        value = {
	// 1152            "(",
	// 1153            "Landroid/icu/impl/Relation",
	// 1154            "<+TK;+TV;>;)V"
	// 1155        }
	// 1156    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "t":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<+TK;+TV;>;"
	key_S_iterator = t->keySet()->iterator();
	//    .local v1, "key$iterator":Ljava/util/Iterator;
	label_cond_8:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_28;
	key = key_S_iterator->next();
	//    .local v0, "key":Ljava/lang/Object;, "TK;"
	value_S_iterator = t->getAll(key)->iterator();
	//    .local v3, "value$iterator":Ljava/util/Iterator;
	label_goto_1a:
	if ( !(value_S_iterator->hasNext()) )  
		goto label_cond_8;
	//    .local v2, "value":Ljava/lang/Object;, "TV;"
	this->put(key, value_S_iterator->next());
	goto label_goto_1a;
	// 1210    .line 188
	// 1211    .end local v0    # "key":Ljava/lang/Object;, "TK;"
	// 1212    .end local v2    # "value":Ljava/lang/Object;, "TV;"
	// 1213    .end local v3    # "value$iterator":Ljava/util/Iterator;
	label_cond_28:
	return;

}
// .method public putAll(Ljava/util/Map;)V
template <typename K,typename V>
void android::icu::impl::Relation<K,V>::putAll(std::shared_ptr<java::util::Map<K,V>> t)
{
	
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1221        value = {
	// 1222            "(",
	// 1223            "Ljava/util/Map",
	// 1224            "<+TK;+TV;>;)V"
	// 1225        }
	// 1226    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "t":Ljava/util/Map;, "Ljava/util/Map<+TK;+TV;>;"
	entry_S_iterator = t->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
	label_goto_8:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_20;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<+TK;+TV;>;"
	this->put(entry->getKey(), entry->getValue());
	goto label_goto_8;
	// 1268    .line 180
	// 1269    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<+TK;+TV;>;"
	label_cond_20:
	return;

}
// .method public remove(Ljava/lang/Object;Ljava/lang/Object;)Z
template <typename K,typename V>
bool android::icu::impl::Relation<K,V>::remove(std::shared_ptr<K> key,std::shared_ptr<V> value)
{
	
	bool cVar0;
	std::shared_ptr<java::util::Set> set;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1277        value = {
	// 1278            "(TK;TV;)Z"
	// 1279        }
	// 1280    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "value":Ljava/lang/Object;, "TV;"
	cVar0 = 0x0;
	try {
	//label_try_start_1:
	set = this->data->get(key);
	set->checkCast("java::util::Set");
	//    .local v2, "set":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	if ( set )     
		goto label_cond_c;
	return cVar0;
	// 1305    .line 204
	label_cond_c:
	//    .local v1, "result":Z
	if ( set->size() )     
		goto label_cond_1b;
	this->data->remove(key);
	//label_try_end_1b:
	}
	catch (java::lang::NullPointerException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	//    .catch Ljava/lang/NullPointerException; {:try_start_1 .. :try_end_1b} :catch_1c
	label_cond_1b:
	return set->remove(value);
	// 1330    .line 209
	// 1331    .end local v1    # "result":Z
	// 1332    .end local v2    # "set":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	label_catch_1c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/NullPointerException;
	return cVar0;

}
// .method public removeAll(Ljava/lang/Object;)Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<V>> android::icu::impl::Relation<K,V>::removeAll(std::shared_ptr<K> key)
{
	
	std::shared_ptr<java::util::Set> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1344        value = {
	// 1345            "(TK;)",
	// 1346            "Ljava/util/Set",
	// 1347            "<TV;>;"
	// 1348        }
	// 1349    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	try {
	//label_try_start_0:
	cVar0 = this->data->remove(key);
	cVar0->checkCast("java::util::Set");
	//label_try_end_8:
	}
	catch (java::lang::NullPointerException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_9;
	}
	//    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_8} :catch_9
	return cVar0;
	// 1368    .line 193
	label_catch_9:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/NullPointerException;
	return 0x0;

}
// .method public removeAll(Ljava/util/Collection;)Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<V>> android::icu::impl::Relation<K,V>::removeAll(std::shared_ptr<java::util::Collection<K>> toBeRemoved)
{
	
	std::shared_ptr<java::util::LinkedHashSet> result;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::util::Set> removals;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1382        value = {
	// 1383            "(",
	// 1384            "Ljava/util/Collection",
	// 1385            "<TK;>;)",
	// 1386            "Ljava/util/Set",
	// 1387            "<TV;>;"
	// 1388        }
	// 1389    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "toBeRemoved":Ljava/util/Collection;, "Ljava/util/Collection<TK;>;"
	result = std::make_shared<java::util::LinkedHashSet>();
	//    .local v4, "result":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	key_S_iterator = toBeRemoved->iterator();
	//    .local v2, "key$iterator":Ljava/util/Iterator;
	label_cond_9:
	label_goto_9:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_23;
	//    .local v1, "key":Ljava/lang/Object;, "TK;"
	try {
	//label_try_start_13:
	removals = this->data->remove(key_S_iterator->next());
	removals->checkCast("java::util::Set");
	//    .local v3, "removals":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	if ( !(removals) )  
		goto label_cond_9;
	result->addAll(removals);
	//label_try_end_20:
	}
	catch (java::lang::NullPointerException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_21;
	}
	//    .catch Ljava/lang/NullPointerException; {:try_start_13 .. :try_end_20} :catch_21
	goto label_goto_9;
	// 1440    .line 345
	// 1441    .end local v3    # "removals":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	label_catch_21:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/NullPointerException;
	goto label_goto_9;
	// 1448    .line 349
	// 1449    .end local v0    # "e":Ljava/lang/NullPointerException;
	// 1450    .end local v1    # "key":Ljava/lang/Object;, "TK;"
	label_cond_23:
	return result;

}
// .method public varargs removeAll([Ljava/lang/Object;)Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<V>> android::icu::impl::Relation<K,V>::removeAll(std::shared_ptr<std::vector<K>> keys)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1458        value = {
	// 1459            "([TK;)",
	// 1460            "Ljava/util/Set",
	// 1461            "<TV;>;"
	// 1462        }
	// 1463    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "keys":[Ljava/lang/Object;, "[TK;"
	return this->removeAll(java::util::Arrays::asList(keys));

}
// .method public removeAll(Landroid/icu/impl/Relation;)Z
template <typename K,typename V>
bool android::icu::impl::Relation<K,V>::removeAll(std::shared_ptr<android::icu::impl::Relation<K,V>> toBeRemoved)
{
	
	bool result;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::lang::Iterable> values;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1483        value = {
	// 1484            "(",
	// 1485            "Landroid/icu/impl/Relation",
	// 1486            "<TK;TV;>;)Z"
	// 1487        }
	// 1488    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "toBeRemoved":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	result = 0x0;
	//    .local v3, "result":Z
	key_S_iterator = toBeRemoved->keySet()->iterator();
	//    .end local v3    # "result":Z
	//    .local v2, "key$iterator":Ljava/util/Iterator;
	label_cond_9:
	label_goto_9:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_1f;
	key = key_S_iterator->next();
	//    .local v1, "key":Ljava/lang/Object;, "TK;"
	try {
	//label_try_start_13:
	values = toBeRemoved->getAll(key);
	//    .local v4, "values":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	if ( !(values) )  
		goto label_cond_9;
	//label_try_end_1c:
	}
	catch (java::lang::NullPointerException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/lang/NullPointerException; {:try_start_13 .. :try_end_1c} :catch_20
	//    .local v3, "result":Z
	goto label_goto_9;
	// 1543    .line 322
	// 1544    .end local v1    # "key":Ljava/lang/Object;, "TK;"
	// 1545    .end local v3    # "result":Z
	// 1546    .end local v4    # "values":Ljava/util/Set;, "Ljava/util/Set<TV;>;"
	label_cond_1f:
	return result;
	// 1550    .line 318
	// 1551    .restart local v1    # "key":Ljava/lang/Object;, "TK;"
	label_catch_20:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/NullPointerException;
	goto label_goto_9;

}
// .method public removeAll(Ljava/lang/Object;Ljava/lang/Iterable;)Z
template <typename K,typename V>
bool android::icu::impl::Relation<K,V>::removeAll(std::shared_ptr<K> key,std::shared_ptr<java::lang::Iterable<V>> toBeRemoved)
{
	
	bool result;
	std::shared_ptr<java::util::Iterator> value_S_iterator;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1562        value = {
	// 1563            "(TK;",
	// 1564            "Ljava/lang/Iterable",
	// 1565            "<TV;>;)Z"
	// 1566        }
	// 1567    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "key":Ljava/lang/Object;, "TK;"
	//    .local p2, "toBeRemoved":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TV;>;"
	result = 0x0;
	//    .local v0, "result":Z
	value_S_iterator = toBeRemoved->iterator();
	//    .end local v0    # "result":Z
	//    .local v2, "value$iterator":Ljava/util/Iterator;
	label_goto_5:
	if ( !(value_S_iterator->hasNext()) )  
		goto label_cond_15;
	//    .local v1, "value":Ljava/lang/Object;, "TV;"
	//    .local v0, "result":Z
	goto label_goto_5;
	// 1606    .line 334
	// 1607    .end local v0    # "result":Z
	// 1608    .end local v1    # "value":Ljava/lang/Object;, "TV;"
	label_cond_15:
	return result;

}
// .method public size()I
template <typename K,typename V>
int android::icu::impl::Relation<K,V>::size()
{
	
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->data->size();

}
// .method public toString()Ljava/lang/String;
template <typename K,typename V>
std::shared_ptr<java::lang::String> android::icu::impl::Relation<K,V>::toString()
{
	
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	return this->data->toString();

}
// .method public values(Ljava/util/Collection;)Ljava/util/Collection;
template <typename K,typename V>
std::shared_ptr<java::util::Collection<V>> android::icu::impl::Relation<K,V>::values(std::shared_ptr<java::util::Collection<V>> result)
{
	
	std::shared_ptr<java::util::Iterator> keyValue_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> keyValue;
	std::shared_ptr<java::util::Collection> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1646        value = {
	// 1647            "<C::",
	// 1648            "Ljava/util/Collection",
	// 1649            "<TV;>;>(TC;)TC;"
	// 1650        }
	// 1651    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	//    .local p1, "result":Ljava/util/Collection;, "TC;"
	keyValue_S_iterator = this->data->entrySet()->iterator();
	//    .local v1, "keyValue$iterator":Ljava/util/Iterator;
	label_goto_a:
	if ( !(keyValue_S_iterator->hasNext()) )  
		goto label_cond_20;
	keyValue = keyValue_S_iterator->next();
	keyValue->checkCast("java::util::Map_S_Entry");
	//    .local v0, "keyValue":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<TK;Ljava/util/Set<TV;>;>;"
	cVar0 = keyValue->getValue();
	cVar0->checkCast("java::util::Collection");
	result->addAll(cVar0);
	goto label_goto_a;
	// 1693    .line 226
	// 1694    .end local v0    # "keyValue":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<TK;Ljava/util/Set<TV;>;>;"
	label_cond_20:
	return result;

}
// .method public values()Ljava/util/Set;
template <typename K,typename V>
std::shared_ptr<java::util::Set<V>> android::icu::impl::Relation<K,V>::values()
{
	
	std::shared_ptr<java::util::LinkedHashSet> cVar0;
	std::shared_ptr<java::util::Set> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1702        value = {
	// 1703            "()",
	// 1704            "Ljava/util/Set",
	// 1705            "<TV;>;"
	// 1706        }
	// 1707    .end annotation
	//    .local p0, "this":Landroid/icu/impl/Relation;, "Landroid/icu/impl/Relation<TK;TV;>;"
	cVar0 = std::make_shared<java::util::LinkedHashSet>();
	cVar1 = this->values(cVar0);
	cVar1->checkCast("java::util::Set");
	return cVar1;

}

#endif //__android_icu_impl_Relation__

