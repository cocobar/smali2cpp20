#ifndef __android_icu_impl_coll_SharedObject_S_Reference__
#define __android_icu_impl_coll_SharedObject_S_Reference__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\SharedObject$Reference.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.Throwable.h"

namespace android::icu::impl::coll{
template <typename T>
class SharedObject_S_Reference : public java::lang::Cloneable {
protected:
	void finalize();
private:
	std::shared_ptr<T> ref;
public:
	SharedObject_S_Reference(std::shared_ptr<T> r);
	void clear();
	std::shared_ptr<android::icu::impl::coll::SharedObject_S_Reference<T>> clone();
	std::shared_ptr<T> copyOnWrite();
	std::shared_ptr<T> readOnly();
public:
	virtual ~SharedObject_S_Reference(){
	}

}; // class SharedObject_S_Reference
}; // namespace android::icu::impl::coll
// .method public constructor <init>(Landroid/icu/impl/coll/SharedObject;)V
template <typename T>
android::icu::impl::coll::SharedObject_S_Reference<T>::SharedObject_S_Reference(std::shared_ptr<T> r)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 044        value = {
	// 045            "(TT;)V"
	// 046        }
	// 047    .end annotation
	//    .local p0, "this":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<TT;>;"
	//    .local p1, "r":Landroid/icu/impl/coll/SharedObject;, "TT;"
	// 053    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ref = r;
	if ( !(r) )  
		goto label_cond_a;
	r->addRef();
	label_cond_a:
	return;

}
// .method public clear()V
template <typename T>
void android::icu::impl::coll::SharedObject_S_Reference<T>::clear()
{
	
	//    .local p0, "this":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<TT;>;"
	if ( !(this->ref) )  
		goto label_cond_c;
	this->ref->removeRef();
	this->ref = 0x0;
	label_cond_c:
	return;

}
// .method public clone()Landroid/icu/impl/coll/SharedObject$Reference;
template <typename T>
std::shared_ptr<android::icu::impl::coll::SharedObject_S_Reference<T>> android::icu::impl::coll::SharedObject_S_Reference<T>::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar0;
	std::shared_ptr<android::icu::impl::coll::SharedObject_S_Reference<T>> c;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 099        value = {
	// 100            "()",
	// 101            "Landroid/icu/impl/coll/SharedObject$Reference",
	// 102            "<TT;>;"
	// 103        }
	// 104    .end annotation
	//    .local p0, "this":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<TT;>;"
	try {
	//label_try_start_0:
	c = this->clone();
	c->checkCast("android::icu::impl::coll::SharedObject_S_Reference<T>");
	//label_try_end_6:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_6} :catch_10
	//    .local v0, "c":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<TT;>;"
	if ( !(this->ref) )  
		goto label_cond_f;
	this->ref->addRef();
	label_cond_f:
	return c;
	// 133    .line 117
	// 134    .end local v0    # "c":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<TT;>;"
	label_catch_10:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public bridge synthetic clone()Ljava/lang/Object;
template <typename T>
std::shared_ptr<java::lang::Object> android::icu::impl::coll::SharedObject_S_Reference<T>::clone()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 150        value = {
	// 151            Ljava/lang/CloneNotSupportedException;
	// 152        }
	// 153    .end annotation
	//    .local p0, "this":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<TT;>;"
	return this->clone();

}
// .method public copyOnWrite()Landroid/icu/impl/coll/SharedObject;
template <typename T>
std::shared_ptr<T> android::icu::impl::coll::SharedObject_S_Reference<T>::copyOnWrite()
{
	
	std::shared_ptr<android::icu::impl::coll::SharedObject> r;
	std::shared_ptr<android::icu::impl::coll::SharedObject> r2;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 168        value = {
	// 169            "()TT;"
	// 170        }
	// 171    .end annotation
	//    .local p0, "this":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<TT;>;"
	r = this->ref;
	//    .local v0, "r":Landroid/icu/impl/coll/SharedObject;, "TT;"
	if ( r->getRefCount() >  0x1 )
		goto label_cond_a;
	return r;
	// 190    .line 139
	label_cond_a:
	r2 = r->clone();
	//    .local v1, "r2":Landroid/icu/impl/coll/SharedObject;, "TT;"
	r->removeRef();
	this->ref = r2;
	r2->addRef();
	return r2;

}
// .method protected finalize()V
template <typename T>
void android::icu::impl::coll::SharedObject_S_Reference<T>::finalize()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 213        value = {
	// 214            Ljava/lang/Throwable;
	// 215        }
	// 216    .end annotation
	//    .local p0, "this":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<TT;>;"
	this->finalize();
	this->clear();
	return;

}
// .method public readOnly()Landroid/icu/impl/coll/SharedObject;
template <typename T>
std::shared_ptr<T> android::icu::impl::coll::SharedObject_S_Reference<T>::readOnly()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 233        value = {
	// 234            "()TT;"
	// 235        }
	// 236    .end annotation
	//    .local p0, "this":Landroid/icu/impl/coll/SharedObject$Reference;, "Landroid/icu/impl/coll/SharedObject$Reference<TT;>;"
	return this->ref;

}

#endif //__android_icu_impl_coll_SharedObject_S_Reference__

