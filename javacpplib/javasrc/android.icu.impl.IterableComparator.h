#ifndef __android_icu_impl_IterableComparator__
#define __android_icu_impl_IterableComparator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\IterableComparator.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.util.Comparator.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
template <typename T>
class IterableComparator : public java::util::Comparator<java::lang::Iterable<T>> {
protected:
private:
	static std::shared_ptr<android::icu::impl::IterableComparator<T>> NOCOMPARATOR;
	std::shared_ptr<java::util::Comparator<T>> comparator;
	int shorterFirst;
public:
	static void static_cinit();
	IterableComparator();
	IterableComparator(std::shared_ptr<java::util::Comparator<T>> comparator);
	IterableComparator(std::shared_ptr<java::util::Comparator<T>> comparator,bool shorterFirst);
	static int compareIterables(std::shared_ptr<java::lang::Iterable<T>> a,std::shared_ptr<java::lang::Iterable<T>> b);
	int compare(std::shared_ptr<java::lang::Iterable<T>> a,std::shared_ptr<java::lang::Iterable<T>> b);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::IterableComparator<T>::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~IterableComparator(){
	}

}; // class IterableComparator
}; // namespace android::icu::impl
// .method static constructor <clinit>()V
template <typename T>
static void static_cinit()
{
	
	std::shared_ptr<android::icu::impl::IterableComparator<T>> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::IterableComparator<T>>();
	android::icu::impl::IterableComparator<T>::NOCOMPARATOR = cVar0;
	return;

}
// .method public constructor <init>()V
template <typename T>
android::icu::impl::IterableComparator<T>::IterableComparator()
{
	
	//    .local p0, "this":Landroid/icu/impl/IterableComparator;, "Landroid/icu/impl/IterableComparator<TT;>;"
	android::icu::impl::IterableComparator<T>::(0x0, 0x1);
	return;

}
// .method public constructor <init>(Ljava/util/Comparator;)V
template <typename T>
android::icu::impl::IterableComparator<T>::IterableComparator(std::shared_ptr<java::util::Comparator<T>> comparator)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 076        value = {
	// 077            "(",
	// 078            "Ljava/util/Comparator",
	// 079            "<TT;>;)V"
	// 080        }
	// 081    .end annotation
	//    .local p0, "this":Landroid/icu/impl/IterableComparator;, "Landroid/icu/impl/IterableComparator<TT;>;"
	//    .local p1, "comparator":Ljava/util/Comparator;, "Ljava/util/Comparator<TT;>;"
	android::icu::impl::IterableComparator<T>::(comparator, 0x1);
	return;

}
// .method public constructor <init>(Ljava/util/Comparator;Z)V
template <typename T>
android::icu::impl::IterableComparator<T>::IterableComparator(std::shared_ptr<java::util::Comparator<T>> comparator,bool shorterFirst)
{
	
	int cVar0;
	
	//    .param p2, "shorterFirst"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 099        value = {
	// 100            "(",
	// 101            "Ljava/util/Comparator",
	// 102            "<TT;>;Z)V"
	// 103        }
	// 104    .end annotation
	//    .local p0, "this":Landroid/icu/impl/IterableComparator;, "Landroid/icu/impl/IterableComparator<TT;>;"
	//    .local p1, "comparator":Ljava/util/Comparator;, "Ljava/util/Comparator<TT;>;"
	// 110    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->comparator = comparator;
	if ( !(shorterFirst) )  
		goto label_cond_b;
	cVar0 = 0x1;
	label_goto_8:
	this->shorterFirst = cVar0;
	return;
	// 126    .line 34
	label_cond_b:
	cVar0 = -0x1;
	goto label_goto_8;

}
// .method public static compareIterables(Ljava/lang/Iterable;Ljava/lang/Iterable;)I
template <typename T>
int android::icu::impl::IterableComparator<T>::compareIterables(std::shared_ptr<java::lang::Iterable<T>> a,std::shared_ptr<java::lang::Iterable<T>> b)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 136        value = {
	// 137            "<T:",
	// 138            "Ljava/lang/Object;",
	// 139            ">(",
	// 140            "Ljava/lang/Iterable",
	// 141            "<TT;>;",
	// 142            "Ljava/lang/Iterable",
	// 143            "<TT;>;)I"
	// 144        }
	// 145    .end annotation
	//    .local p0, "a":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	//    .local p1, "b":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	return android::icu::impl::IterableComparator<T>::NOCOMPARATOR->compare(a, b);

}
// .method public compare(Ljava/lang/Iterable;Ljava/lang/Iterable;)I
template <typename T>
int android::icu::impl::IterableComparator<T>::compare(std::shared_ptr<java::lang::Iterable<T>> a,std::shared_ptr<java::lang::Iterable<T>> b)
{
	
	int cVar0;
	std::shared_ptr<java::util::Iterator> ai;
	std::shared_ptr<java::util::Iterator> bi;
	std::shared_ptr<java::lang::Object> aItem;
	std::shared_ptr<java::lang::Object> bItem;
	int result;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 165        value = {
	// 166            "(",
	// 167            "Ljava/lang/Iterable",
	// 168            "<TT;>;",
	// 169            "Ljava/lang/Iterable",
	// 170            "<TT;>;)I"
	// 171        }
	// 172    .end annotation
	//    .local p0, "this":Landroid/icu/impl/IterableComparator;, "Landroid/icu/impl/IterableComparator<TT;>;"
	//    .local p1, "a":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	//    .local p2, "b":Ljava/lang/Iterable;, "Ljava/lang/Iterable<TT;>;"
	cVar0 = 0x0;
	if ( a )     
		goto label_cond_a;
	if ( b )     
		goto label_cond_6;
	label_goto_5:
	return cVar0;
	label_cond_6:
	cVar0 = (0 - this->shorterFirst);
	goto label_goto_5;
	// 196    .line 41
	label_cond_a:
	if ( b )     
		goto label_cond_f;
	return this->shorterFirst;
	// 205    .line 44
	label_cond_f:
	ai = a->iterator();
	//    .local v1, "ai":Ljava/util/Iterator;, "Ljava/util/Iterator<TT;>;"
	bi = b->iterator();
	//    .local v3, "bi":Ljava/util/Iterator;, "Ljava/util/Iterator<TT;>;"
	label_cond_17:
	if ( ai->hasNext() )     
		goto label_cond_27;
	if ( !(bi->hasNext()) )  
		goto label_cond_26;
	cVar0 = (0 - this->shorterFirst);
	label_cond_26:
	return cVar0;
	// 240    .line 50
	label_cond_27:
	if ( bi->hasNext() )     
		goto label_cond_30;
	return this->shorterFirst;
	// 253    .line 53
	label_cond_30:
	aItem = ai->next();
	//    .local v0, "aItem":Ljava/lang/Object;, "TT;"
	bItem = bi->next();
	//    .local v2, "bItem":Ljava/lang/Object;, "TT;"
	if ( !(this->comparator) )  
		goto label_cond_45;
	result = this->comparator->compare(aItem, bItem);
	//    .end local v0    # "aItem":Ljava/lang/Object;, "TT;"
	//    .local v4, "result":I
	label_goto_42:
	if ( !(result) )  
		goto label_cond_17;
	return result;
	// 286    .line 56
	// 287    .end local v4    # "result":I
	// 288    .restart local v0    # "aItem":Ljava/lang/Object;, "TT;"
	label_cond_45:
	aItem->checkCast("java::lang::Comparable");
	//    .end local v0    # "aItem":Ljava/lang/Object;, "TT;"
	//    .restart local v4    # "result":I
	goto label_goto_42;

}
// .method public bridge synthetic compare(Ljava/lang/Object;Ljava/lang/Object;)I
template <typename T>
int android::icu::impl::IterableComparator<T>::compare(std::shared_ptr<java::lang::Object> cVar0,std::shared_ptr<java::lang::Object> cVar1)
{
	
	//    .local p0, "this":Landroid/icu/impl/IterableComparator;, "Landroid/icu/impl/IterableComparator<TT;>;"
	cVar0->checkCast("java::lang::Iterable");
	cVar1->checkCast("java::lang::Iterable");
	return this->compare(cVar0, cVar1);

}

#endif //__android_icu_impl_IterableComparator__

