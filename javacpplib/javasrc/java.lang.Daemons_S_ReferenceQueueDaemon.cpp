// CPP L:\smali2cpp20\x64\Release\out\java\lang\Daemons$ReferenceQueueDaemon.smali
#include "java2ctype.h"
#include "java.lang.Daemons_S_Daemon.h"
#include "java.lang.Daemons_S_ReferenceQueueDaemon.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.OutOfMemoryError.h"
#include "java.lang.String.h"
#include "java.lang.ref.Reference.h"
#include "java.lang.ref.ReferenceQueue.h"

static java::lang::Daemons_S_ReferenceQueueDaemon::INSTANCE;
// .method static synthetic -get0()Ljava/lang/Daemons$ReferenceQueueDaemon;
std::shared_ptr<java::lang::Daemons_S_ReferenceQueueDaemon> java::lang::Daemons_S_ReferenceQueueDaemon::_get0()
{
	
	return java::lang::Daemons_S_ReferenceQueueDaemon::INSTANCE;

}
// .method static constructor <clinit>()V
void java::lang::Daemons_S_ReferenceQueueDaemon::static_cinit()
{
	
	std::shared_ptr<java::lang::Daemons_S_ReferenceQueueDaemon> cVar0;
	
	cVar0 = std::make_shared<java::lang::Daemons_S_ReferenceQueueDaemon>();
	java::lang::Daemons_S_ReferenceQueueDaemon::INSTANCE = cVar0;
	return;

}
// .method constructor <init>()V
java::lang::Daemons_S_ReferenceQueueDaemon::Daemons_S_ReferenceQueueDaemon()
{
	
	java::lang::Daemons_S_Daemon::(std::make_shared<java::lang::String>(std::make_shared<char[]>("ReferenceQueueDaemon")));
	return;

}
// .method public runInternal()V
void java::lang::Daemons_S_ReferenceQueueDaemon::runInternal()
{
	
	std::shared_ptr<java::lang::ref::ReferenceQueue> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
label_goto_0:
	if ( !(this->isRunning()) )  
		goto label_cond_22;
	try {
	//label_try_start_6:
	cVar0 = java::lang::ref::ReferenceQueue();
	cVar0->monitor_enter();
	//label_try_end_9:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	catch (java::lang::OutOfMemoryError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_6 .. :try_end_9} :catch_16
	//    .catch Ljava/lang/OutOfMemoryError; {:try_start_6 .. :try_end_9} :catch_23
label_goto_9:
	try {
	//label_try_start_9:
	if ( java::lang::ref::ReferenceQueue::unenqueued )     
		goto label_cond_18;
	java::lang::ref::ReferenceQueue()->wait();
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_9 .. :try_end_12} :catchall_13
	goto label_goto_9;
	// 097    .line 176
label_catchall_13:
	// move-exception
	
	try {
	//label_try_start_14:
	cVar0->monitor_exit();
	// throw
	throw;
	// 105    :try_end_16
	// 106    .catch Ljava/lang/InterruptedException; {:try_start_14 .. :try_end_16} :catch_16
	// 107    .catch Ljava/lang/OutOfMemoryError; {:try_start_14 .. :try_end_16} :catch_23
	// 109    .line 183
label_catch_16:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/InterruptedException;
	goto label_goto_0;
	// 116    .line 180
	// 117    .end local v0    # "e":Ljava/lang/InterruptedException;
label_cond_18:
	try {
	//label_try_start_18:
	//    .local v2, "list":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
	java::lang::ref::ReferenceQueue::unenqueued = 0x0;
	//label_try_end_1d:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_18 .. :try_end_1d} :catchall_13
	try {
	//label_try_start_1d:
	cVar0->monitor_exit();
	//label_try_end_1e:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	catch (java::lang::OutOfMemoryError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_1d .. :try_end_1e} :catch_16
	//    .catch Ljava/lang/OutOfMemoryError; {:try_start_1d .. :try_end_1e} :catch_23
	java::lang::ref::ReferenceQueue::enqueuePending(java::lang::ref::ReferenceQueue::unenqueued);
	goto label_goto_0;
	// 141    .line 190
	// 142    .end local v2    # "list":Ljava/lang/ref/Reference;, "Ljava/lang/ref/Reference<*>;"
label_cond_22:
	return;
	// 146    .line 185
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/OutOfMemoryError;
	goto label_goto_0;

}


