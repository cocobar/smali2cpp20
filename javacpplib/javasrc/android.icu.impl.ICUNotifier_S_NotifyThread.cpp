// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUNotifier$NotifyThread.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUNotifier_S_NotifyThread.h"
#include "android.icu.impl.ICUNotifier.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.Object.h"
#include "java.util.ArrayList.h"
#include "java.util.EventListener.h"
#include "java.util.List.h"

// .method constructor <init>(Landroid/icu/impl/ICUNotifier;)V
android::icu::impl::ICUNotifier_S_NotifyThread::ICUNotifier_S_NotifyThread(std::shared_ptr<android::icu::impl::ICUNotifier> notifier)
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .param p1, "notifier"    # Landroid/icu/impl/ICUNotifier;
	// 039    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->queue = cVar0;
	this->notifier = notifier;
	return;

}
// .method public queue([Ljava/util/EventListener;)V
void android::icu::impl::ICUNotifier_S_NotifyThread::queue(std::shared_ptr<std::vector<java::util::EventListener>> list)
{
	
	//    .param p1, "list"    # [Ljava/util/EventListener;
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->queue->add(list);
	this->notify();
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_1 .. :try_end_9} :catchall_b
	this->monitor_exit();
	return;
	// 081    .line 132
label_catchall_b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public run()V
void android::icu::impl::ICUNotifier_S_NotifyThread::run()
{
	
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<std::vector<java::util::EventListener>> list;
	int i;
	
label_cond_0:
label_goto_0:
	try {
	//label_try_start_0:
	this->monitor_enter();
	//label_try_end_1:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_1} :catch_10
label_goto_1:
	try {
	//label_try_start_1:
	if ( !(this->queue->isEmpty()) )  
		goto label_cond_12;
	this->wait();
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_1 .. :try_end_c} :catchall_d
	goto label_goto_1;
	// 120    .line 147
label_catchall_d:
	// move-exception
	
	try {
	//label_try_start_e:
	this->monitor_exit();
	// throw
	throw;
	// 128    :try_end_10
	// 129    .catch Ljava/lang/InterruptedException; {:try_start_e .. :try_end_10} :catch_10
	// 131    .line 158
label_catch_10:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/InterruptedException;
	goto label_goto_0;
	// 138    .line 151
	// 139    .end local v0    # "e":Ljava/lang/InterruptedException;
label_cond_12:
	try {
	//label_try_start_12:
	list = this->queue->remove(0x0);
	list->checkCast("std::vector<java::util::EventListener>");
	//label_try_end_1b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_12 .. :try_end_1b} :catchall_d
	//    .local v2, "list":[Ljava/util/EventListener;
	try {
	//label_try_start_1b:
	this->monitor_exit();
	i = 0x0;
	//    .local v1, "i":I
label_goto_1d:
	if ( i >= list->size() )
		goto label_cond_0;
	this->notifier->notifyListener(list[i]);
	//label_try_end_27:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_1b .. :try_end_27} :catch_10
	i = ( i + 0x1);
	goto label_goto_1d;

}


