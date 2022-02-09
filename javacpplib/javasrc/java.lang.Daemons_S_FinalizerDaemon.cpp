// CPP L:\smali2cpp20\x64\Release\out\java\lang\Daemons$FinalizerDaemon.smali
#include "java2ctype.h"
#include "java.lang.Daemons_S_Daemon.h"
#include "java.lang.Daemons_S_FinalizerDaemon.h"
#include "java.lang.Daemons_S_FinalizerWatchdogDaemon.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.Object.h"
#include "java.lang.OutOfMemoryError.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.lang.ref.FinalizerReference.h"
#include "java.lang.ref.Reference.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.util.concurrent.atomic.AtomicInteger.h"

static java::lang::Daemons_S_FinalizerDaemon::INSTANCE;
// .method static synthetic -get0()Ljava/lang/Daemons$FinalizerDaemon;
std::shared_ptr<java::lang::Daemons_S_FinalizerDaemon> java::lang::Daemons_S_FinalizerDaemon::_get0()
{
	
	return java::lang::Daemons_S_FinalizerDaemon::INSTANCE;

}
// .method static synthetic -get1(Ljava/lang/Daemons$FinalizerDaemon;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::lang::Daemons_S_FinalizerDaemon::_get1(std::shared_ptr<java::lang::Daemons_S_FinalizerDaemon> _this)
{
	
	//    .param p0, "-this"    # Ljava/lang/Daemons$FinalizerDaemon;
	return _this->finalizingObject;

}
// .method static synthetic -get2(Ljava/lang/Daemons$FinalizerDaemon;)Ljava/util/concurrent/atomic/AtomicInteger;
std::shared_ptr<java::util::concurrent::atomic::AtomicInteger> java::lang::Daemons_S_FinalizerDaemon::_get2(std::shared_ptr<java::lang::Daemons_S_FinalizerDaemon> _this)
{
	
	//    .param p0, "-this"    # Ljava/lang/Daemons$FinalizerDaemon;
	return _this->progressCounter;

}
// .method static constructor <clinit>()V
void java::lang::Daemons_S_FinalizerDaemon::static_cinit()
{
	
	std::shared_ptr<java::lang::Daemons_S_FinalizerDaemon> cVar0;
	
	cVar0 = std::make_shared<java::lang::Daemons_S_FinalizerDaemon>();
	java::lang::Daemons_S_FinalizerDaemon::INSTANCE = cVar0;
	return;

}
// .method constructor <init>()V
java::lang::Daemons_S_FinalizerDaemon::Daemons_S_FinalizerDaemon()
{
	
	std::shared_ptr<java::util::concurrent::atomic::AtomicInteger> cVar0;
	
	java::lang::Daemons_S_Daemon::(std::make_shared<java::lang::String>(std::make_shared<char[]>("FinalizerDaemon")));
	this->queue = java::lang::ref::FinalizerReference::queue;
	cVar0 = std::make_shared<java::util::concurrent::atomic::AtomicInteger>(0x0);
	this->progressCounter = cVar0;
	this->finalizingObject = 0x0;
	return;

}
// .method private doFinalize(Ljava/lang/ref/FinalizerReference;)V
void java::lang::Daemons_S_FinalizerDaemon::doFinalize(std::shared_ptr<java::lang::ref::FinalizerReference<java::lang::Object>> reference)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 117        value = {
	// 118            "(",
	// 119            "Ljava/lang/ref/FinalizerReference",
	// 120            "<*>;)V"
	// 121        }
	// 122    .end annotation
	//    .annotation build Ljava/lang/FindBugsSuppressWarnings;
	// 125        value = {
	// 126            "FI_EXPLICIT_INVOCATION"
	// 127        }
	// 128    .end annotation
	//    .local p1, "reference":Ljava/lang/ref/FinalizerReference;, "Ljava/lang/ref/FinalizerReference<*>;"
	cVar0 = 0x0;
	java::lang::ref::FinalizerReference::remove(reference);
	//    .local v1, "object":Ljava/lang/Object;
	reference->clear();
	try {
	//label_try_start_b:
	reference->get()->finalize();
	//label_try_end_e:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	catch (...){
		goto label_catchall_19;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_b .. :try_end_e} :catch_11
	//    .catchall {:try_start_b .. :try_end_e} :catchall_19
label_goto_e:
	this->finalizingObject = cVar0;
	return;
	// 160    .line 251
label_catch_11:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/Throwable;
	try {
	//label_try_start_12:
	// throw
	
	java::lang::System::logE(std::make_shared<java::lang::String>(std::make_shared<char[]>("Uncaught exception thrown by finalizer")), getCatchExcetionFromList);
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_19;
	}
	//    .catchall {:try_start_12 .. :try_end_18} :catchall_19
	goto label_goto_e;
	// 175    .line 254
	// 176    .end local v0    # "ex":Ljava/lang/Throwable;
label_catchall_19:
	// move-exception
	
	this->finalizingObject = cVar0;
	// throw
	throw;

}
// .method public runInternal()V
void java::lang::Daemons_S_FinalizerDaemon::runInternal()
{
	
	int localProgressCounter;
	std::shared_ptr<java::lang::ref::FinalizerReference> finalizingReference;
	std::vector<std::any> tryCatchExcetionList;
	
	localProgressCounter = this->progressCounter->get();
	//    .local v3, "localProgressCounter":I
label_goto_6:
	if ( !(this->isRunning()) )  
		goto label_cond_59;
	try {
	//label_try_start_c:
	finalizingReference = this->queue->poll();
	finalizingReference->checkCast("java::lang::ref::FinalizerReference");
	//    .local v0, "finalizingReference":Ljava/lang/ref/FinalizerReference;, "Ljava/lang/ref/FinalizerReference<*>;"
	if ( !(finalizingReference) )  
		goto label_cond_29;
	this->finalizingObject = finalizingReference->get();
	localProgressCounter = ( localProgressCounter + 0x1);
	this->progressCounter->lazySet(localProgressCounter);
label_goto_23:
	this->doFinalize(finalizingReference);
	goto label_goto_6;
	// 243    .line 238
	// 244    .end local v0    # "finalizingReference":Ljava/lang/ref/FinalizerReference;, "Ljava/lang/ref/FinalizerReference<*>;"
label_catch_27:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ignored":Ljava/lang/InterruptedException;
	goto label_goto_6;
	// 251    .line 228
	// 252    .end local v1    # "ignored":Ljava/lang/InterruptedException;
	// 253    .restart local v0    # "finalizingReference":Ljava/lang/ref/FinalizerReference;, "Ljava/lang/ref/FinalizerReference<*>;"
label_cond_29:
	this->finalizingObject = 0x0;
	localProgressCounter = ( localProgressCounter + 0x1);
	this->progressCounter->lazySet(localProgressCounter);
	java::lang::Daemons_S_FinalizerWatchdogDaemon::-wrap0(java::lang::Daemons_S_FinalizerWatchdogDaemon::-get0({const[class].FS-Param}));
	finalizingReference = this->queue->remove();
	//    .end local v0    # "finalizingReference":Ljava/lang/ref/FinalizerReference;, "Ljava/lang/ref/FinalizerReference<*>;"
	finalizingReference->checkCast("java::lang::ref::FinalizerReference");
	//    .restart local v0    # "finalizingReference":Ljava/lang/ref/FinalizerReference;, "Ljava/lang/ref/FinalizerReference<*>;"
	this->finalizingObject = finalizingReference->get();
	localProgressCounter = ( localProgressCounter + 0x1);
	this->progressCounter->set(localProgressCounter);
	java::lang::Daemons_S_FinalizerWatchdogDaemon::-wrap1(java::lang::Daemons_S_FinalizerWatchdogDaemon::-get0({const[class].FS-Param}));
	//label_try_end_56:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27;
	}
	catch (java::lang::OutOfMemoryError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_57;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_c .. :try_end_56} :catch_27
	//    .catch Ljava/lang/OutOfMemoryError; {:try_start_c .. :try_end_56} :catch_57
	goto label_goto_23;
	// 310    .line 239
	// 311    .end local v0    # "finalizingReference":Ljava/lang/ref/FinalizerReference;, "Ljava/lang/ref/FinalizerReference<*>;"
label_catch_57:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ignored":Ljava/lang/OutOfMemoryError;
	goto label_goto_6;
	// 318    .line 242
	// 319    .end local v2    # "ignored":Ljava/lang/OutOfMemoryError;
label_cond_59:
	return;

}


