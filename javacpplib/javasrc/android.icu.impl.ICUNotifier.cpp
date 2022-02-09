// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUNotifier.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUNotifier_S_NotifyThread.h"
#include "android.icu.impl.ICUNotifier.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.ArrayList.h"
#include "java.util.EventListener.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

// .method public constructor <init>()V
android::icu::impl::ICUNotifier::ICUNotifier()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::lang::Object>();
	this->notifyLock = cVar0;
	return;

}
// .method public addListener(Ljava/util/EventListener;)V
void android::icu::impl::ICUNotifier::addListener(std::shared_ptr<java::util::EventListener> l)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	std::shared_ptr<java::util::Iterator> ll_S_iterator;
	std::shared_ptr<java::util::EventListener> ll;
	std::shared_ptr<java::lang::IllegalStateException> cVar3;
	
	//    .param p1, "l"    # Ljava/util/EventListener;
	if ( l )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 070    .line 51
label_cond_8:
	if ( !(this->acceptsListener(l)) )  
		goto label_cond_3c;
	cVar1 = this->notifyLock;
	cVar1->monitor_enter();
	try {
	//label_try_start_11:
	if ( this->listeners )     
		goto label_cond_23;
	cVar2 = std::make_shared<java::util::ArrayList>();
	this->listeners = cVar2;
label_cond_1c:
	this->listeners->add(l);
	//label_try_end_21:
	}
	catch (...){
		goto label_catchall_39;
	}
	//    .catchall {:try_start_11 .. :try_end_21} :catchall_39
	cVar1->monitor_exit();
	return;
	// 109    .line 57
label_cond_23:
	try {
	//label_try_start_23:
	ll_S_iterator = this->listeners->iterator();
	//    .local v1, "ll$iterator":Ljava/util/Iterator;
label_cond_29:
	if ( !(ll_S_iterator->hasNext()) )  
		goto label_cond_1c;
	ll = ll_S_iterator->next();
	ll->checkCast("java::util::EventListener");
	//label_try_end_35:
	}
	catch (...){
		goto label_catchall_39;
	}
	//    .catchall {:try_start_23 .. :try_end_35} :catchall_39
	//    .local v0, "ll":Ljava/util/EventListener;
	if ( ll != l )
		goto label_cond_29;
	cVar1->monitor_exit();
	return;
	// 143    .line 52
	// 144    .end local v0    # "ll":Ljava/util/EventListener;
	// 145    .end local v1    # "ll$iterator":Ljava/util/Iterator;
label_catchall_39:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;
	// 153    .line 67
label_cond_3c:
	cVar3 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Listener invalid for this notifier.")));
	// throw
	throw cVar3;

}
// .method public notifyChanged()V
void android::icu::impl::ICUNotifier::notifyChanged()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<android::icu::impl::ICUNotifier_S_NotifyThread> cVar1;
	std::shared_ptr<std::vector<java::util::EventListener>> cVar2;
	
	if ( !(this->listeners) )  
		goto label_cond_37;
	cVar0 = this->notifyLock;
	cVar0->monitor_enter();
	try {
	//label_try_start_7:
	if ( !(this->listeners) )  
		goto label_cond_36;
	if ( this->notifyThread )     
		goto label_cond_21;
	cVar1 = std::make_shared<android::icu::impl::ICUNotifier_S_NotifyThread>(this);
	this->notifyThread = cVar1;
	this->notifyThread->setDaemon(0x1);
	this->notifyThread->start();
label_cond_21:
	cVar2 = this->listeners->toArray(std::make_shared<std::vector<std::vector<java::util::EventListener>>>(this->listeners->size()));
	cVar2->checkCast("std::vector<java::util::EventListener>");
	this->notifyThread->queue(cVar2);
	//label_try_end_36:
	}
	catch (...){
		goto label_catchall_38;
	}
	//    .catchall {:try_start_7 .. :try_end_36} :catchall_38
label_cond_36:
	cVar0->monitor_exit();
label_cond_37:
	return;
	// 239    .line 104
label_catchall_38:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public removeListener(Ljava/util/EventListener;)V
void android::icu::impl::ICUNotifier::removeListener(std::shared_ptr<java::util::EventListener> l)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::util::Iterator> iter;
	
	//    .param p1, "l"    # Ljava/util/EventListener;
	if ( l )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 266    .line 80
label_cond_8:
	cVar1 = this->notifyLock;
	cVar1->monitor_enter();
	try {
	//label_try_start_b:
	if ( !(this->listeners) )  
		goto label_cond_31;
	iter = this->listeners->iterator();
	//    .local v0, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/EventListener;>;"
label_cond_15:
	if ( !(iter->hasNext()) )  
		goto label_cond_31;
	if ( iter->next() != l )
		goto label_cond_15;
	iter->remove();
	if ( this->listeners->size() )     
		goto label_cond_2f;
	this->listeners = 0x0;
	//label_try_end_2f:
	}
	catch (...){
		goto label_catchall_33;
	}
	//    .catchall {:try_start_b .. :try_end_2f} :catchall_33
label_cond_2f:
	cVar1->monitor_exit();
	return;
	// 326    .end local v0    # "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/EventListener;>;"
label_cond_31:
	cVar1->monitor_exit();
	return;
	// 333    .line 80
label_catchall_33:
	// move-exception
	
	cVar1->monitor_exit();
	// throw
	throw;

}


