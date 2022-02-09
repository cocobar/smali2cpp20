#ifndef __android_icu_util_Currency_S_EquivalenceRelation__
#define __android_icu_util_Currency_S_EquivalenceRelation__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$EquivalenceRelation.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::util{
template <typename T>
class Currency_S_EquivalenceRelation : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Map<T,java::util::Set<T>>> data;
	Currency_S_EquivalenceRelation();
public:
	Currency_S_EquivalenceRelation(std::shared_ptr<android::icu::util::Currency_S_EquivalenceRelation<T>> _this0);
	std::shared_ptr<android::icu::util::Currency_S_EquivalenceRelation<T>> add(std::shared_ptr<std::vector<T>> items);
	std::shared_ptr<java::util::Set<T>> get(std::shared_ptr<T> item);
public:
	virtual ~Currency_S_EquivalenceRelation(){
	}

}; // class Currency_S_EquivalenceRelation
}; // namespace android::icu::util
// .method private constructor <init>()V
template <typename T>
android::icu::util::Currency_S_EquivalenceRelation<T>::Currency_S_EquivalenceRelation()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	//    .local p0, "this":Landroid/icu/util/Currency$EquivalenceRelation;, "Landroid/icu/util/Currency$EquivalenceRelation<TT;>;"
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::HashMap>();
	this->data = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/Currency$EquivalenceRelation;)V
template <typename T>
android::icu::util::Currency_S_EquivalenceRelation<T>::Currency_S_EquivalenceRelation(std::shared_ptr<android::icu::util::Currency_S_EquivalenceRelation<T>> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/util/Currency$EquivalenceRelation;
	//    .local p0, "this":Landroid/icu/util/Currency$EquivalenceRelation;, "Landroid/icu/util/Currency$EquivalenceRelation<TT;>;"
	// 065    invoke-direct {p0}, Landroid/icu/util/Currency$EquivalenceRelation;-><init>()V
	return;

}
// .method public varargs add([Ljava/lang/Object;)Landroid/icu/util/Currency$EquivalenceRelation;
template <typename T>
std::shared_ptr<android::icu::util::Currency_S_EquivalenceRelation<T>> android::icu::util::Currency_S_EquivalenceRelation<T>::add(std::shared_ptr<std::vector<T>> items)
{
	
	int cVar0;
	std::shared_ptr<java::util::HashSet> group;
	int cVar1;
	std::shared_ptr<java::lang::Object> item;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 075        value = {
	// 076            "([TT;)",
	// 077            "Landroid/icu/util/Currency$EquivalenceRelation",
	// 078            "<TT;>;"
	// 079        }
	// 080    .end annotation
	//    .local p0, "this":Landroid/icu/util/Currency$EquivalenceRelation;, "Landroid/icu/util/Currency$EquivalenceRelation<TT;>;"
	//    .local p1, "items":[Ljava/lang/Object;, "[TT;"
	cVar0 = 0x0;
	group = std::make_shared<java::util::HashSet>();
	//    .local v0, "group":Ljava/util/Set;, "Ljava/util/Set<TT;>;"
	cVar1 = cVar0;
	label_goto_8:
	if ( cVar1 >= items->size() )
		goto label_cond_23;
	item = items[cVar1];
	//    .local v1, "item":Ljava/lang/Object;, "TT;"
	if ( !(this->data->containsKey(item)) )  
		goto label_cond_1d;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("All groups passed to add must be disjoint.")));
	// throw
	throw cVar2;
	// 122    .line 944
	label_cond_1d:
	group->add(item);
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_8;
	// 131    .line 946
	// 132    .end local v1    # "item":Ljava/lang/Object;, "TT;"
	label_cond_23:
	label_goto_24:
	if ( cVar0 >= items->size() )
		goto label_cond_30;
	//    .restart local v1    # "item":Ljava/lang/Object;, "TT;"
	this->data->put(items[cVar0], group);
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_24;
	// 152    .line 949
	// 153    .end local v1    # "item":Ljava/lang/Object;, "TT;"
	label_cond_30:
	return this;

}
// .method public get(Ljava/lang/Object;)Ljava/util/Set;
template <typename T>
std::shared_ptr<java::util::Set<T>> android::icu::util::Currency_S_EquivalenceRelation<T>::get(std::shared_ptr<T> item)
{
	
	std::shared_ptr<java::util::Set> result;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 161        value = {
	// 162            "(TT;)",
	// 163            "Ljava/util/Set",
	// 164            "<TT;>;"
	// 165        }
	// 166    .end annotation
	//    .local p0, "this":Landroid/icu/util/Currency$EquivalenceRelation;, "Landroid/icu/util/Currency$EquivalenceRelation<TT;>;"
	//    .local p1, "item":Ljava/lang/Object;, "TT;"
	result = this->data->get(item);
	result->checkCast("java::util::Set");
	//    .local v0, "result":Ljava/util/Set;, "Ljava/util/Set<TT;>;"
	if ( result )     
		goto label_cond_f;
	return java::util::Collections::singleton(item);
	// 191    .line 957
	label_cond_f:
	return java::util::Collections::unmodifiableSet(result);

}

#endif //__android_icu_util_Currency_S_EquivalenceRelation__

