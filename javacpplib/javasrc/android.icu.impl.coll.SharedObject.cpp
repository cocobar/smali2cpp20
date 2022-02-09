// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\SharedObject.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.SharedObject.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Object.h"
#include "java.lang.Throwable.h"
#include "java.util.concurrent.atomic.AtomicInteger.h"

// .method public constructor <init>()V
android::icu::impl::coll::SharedObject::SharedObject()
{
	
	std::shared_ptr<java::util::concurrent::atomic::AtomicInteger> cVar0;
	
	// 027    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::concurrent::atomic::AtomicInteger>();
	this->refCount = cVar0;
	return;

}
// .method public final addRef()V
void android::icu::impl::coll::SharedObject::addRef()
{
	
	this->refCount->incrementAndGet();
	return;

}
// .method public clone()Landroid/icu/impl/coll/SharedObject;
std::shared_ptr<android::icu::impl::coll::SharedObject> android::icu::impl::coll::SharedObject::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar1;
	std::shared_ptr<android::icu::impl::coll::SharedObject> c;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::concurrent::atomic::AtomicInteger> cVar0;
	
	try {
	//label_try_start_0:
	c = this->clone();
	c->checkCast("android::icu::impl::coll::SharedObject");
	//label_try_end_6:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_e;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_6} :catch_e
	//    .local v0, "c":Landroid/icu/impl/coll/SharedObject;
	cVar0 = std::make_shared<java::util::concurrent::atomic::AtomicInteger>();
	c->refCount = cVar0;
	return c;
	// 079    .line 169
	// 080    .end local v0    # "c":Landroid/icu/impl/coll/SharedObject;
label_catch_e:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/CloneNotSupportedException;
	cVar1 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method public final deleteIfZeroRefCount()V
void android::icu::impl::coll::SharedObject::deleteIfZeroRefCount()
{
	
	return;

}
// .method public final getRefCount()I
int android::icu::impl::coll::SharedObject::getRefCount()
{
	
	return this->refCount->get();

}
// .method public final removeRef()V
void android::icu::impl::coll::SharedObject::removeRef()
{
	
	this->refCount->decrementAndGet();
	return;

}


