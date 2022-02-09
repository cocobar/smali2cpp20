// CPP L:\smali2cpp20\x64\Release\out\java\lang\Daemons$FinalizerWatchdogDaemon.smali
#include "java2ctype.h"
#include "android.system.Os.h"
#include "android.system.OsConstants.h"
#include "dalvik.system.VMRuntime.h"
#include "java.lang.Class.h"
#include "java.lang.Daemons_S_Daemon.h"
#include "java.lang.Daemons_S_FinalizerDaemon.h"
#include "java.lang.Daemons_S_FinalizerWatchdogDaemon.h"
#include "java.lang.Exception.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.Object.h"
#include "java.lang.OutOfMemoryError.h"
#include "java.lang.StackTraceElement.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Thread_S_UncaughtExceptionHandler.h"
#include "java.lang.Thread.h"
#include "java.lang.Throwable.h"
#include "java.util.concurrent.TimeoutException.h"
#include "java.util.concurrent.atomic.AtomicInteger.h"

static java::lang::Daemons_S_FinalizerWatchdogDaemon::INSTANCE;
// .method static synthetic -get0()Ljava/lang/Daemons$FinalizerWatchdogDaemon;
std::shared_ptr<java::lang::Daemons_S_FinalizerWatchdogDaemon> java::lang::Daemons_S_FinalizerWatchdogDaemon::_get0()
{
	
	return java::lang::Daemons_S_FinalizerWatchdogDaemon::INSTANCE;

}
// .method static synthetic -wrap0(Ljava/lang/Daemons$FinalizerWatchdogDaemon;)V
void java::lang::Daemons_S_FinalizerWatchdogDaemon::_wrap0(std::shared_ptr<java::lang::Daemons_S_FinalizerWatchdogDaemon> _this)
{
	
	//    .param p0, "-this"    # Ljava/lang/Daemons$FinalizerWatchdogDaemon;
	_this->goToSleep();
	return;

}
// .method static synthetic -wrap1(Ljava/lang/Daemons$FinalizerWatchdogDaemon;)V
void java::lang::Daemons_S_FinalizerWatchdogDaemon::_wrap1(std::shared_ptr<java::lang::Daemons_S_FinalizerWatchdogDaemon> _this)
{
	
	//    .param p0, "-this"    # Ljava/lang/Daemons$FinalizerWatchdogDaemon;
	_this->wakeUp();
	return;

}
// .method static constructor <clinit>()V
void java::lang::Daemons_S_FinalizerWatchdogDaemon::static_cinit()
{
	
	std::shared_ptr<java::lang::Daemons_S_FinalizerWatchdogDaemon> cVar0;
	
	cVar0 = std::make_shared<java::lang::Daemons_S_FinalizerWatchdogDaemon>();
	java::lang::Daemons_S_FinalizerWatchdogDaemon::INSTANCE = cVar0;
	return;

}
// .method constructor <init>()V
java::lang::Daemons_S_FinalizerWatchdogDaemon::Daemons_S_FinalizerWatchdogDaemon()
{
	
	java::lang::Daemons_S_Daemon::(std::make_shared<java::lang::String>(std::make_shared<char[]>("FinalizerWatchdogDaemon")));
	this->needToWork = 0x1;
	return;

}
// .method private static finalizerTimedOut(Ljava/lang/Object;)V
void java::lang::Daemons_S_FinalizerWatchdogDaemon::finalizerTimedOut(std::shared_ptr<java::lang::Object> object)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> message;
	std::shared_ptr<java::util::concurrent::TimeoutException> syntheticException;
	std::shared_ptr<java::lang::Thread_S_UncaughtExceptionHandler> h;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "object"    # Ljava/lang/Object;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	message = cVar0->append(object->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".finalize() timed out after ")))->append(0xa)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" seconds")))->toString();
	//    .local v3, "message":Ljava/lang/String;
	syntheticException = std::make_shared<java::util::concurrent::TimeoutException>(message);
	//    .local v4, "syntheticException":Ljava/lang/Exception;
	syntheticException->setStackTrace(java::lang::Daemons_S_FinalizerDaemon::-get0({const[class].FS-Param})->getStackTrace());
	h = java::lang::Thread::getDefaultUncaughtExceptionHandler({const[class].FS-Param});
	//    .local v1, "h":Ljava/lang/Thread$UncaughtExceptionHandler;
	try {
	//label_try_start_3d:
	android::system::Os::kill(android::system::Os::getpid(android::system::Os::getpid({const[class].FS-Param}), android::system::OsConstants::SIGQUIT), android::system::OsConstants::SIGQUIT);
	java::lang::Thread::sleep(0x1388);
	//label_try_end_4b:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5c;
	}
	catch (java::lang::OutOfMemoryError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_64;
	}
	//    .catch Ljava/lang/Exception; {:try_start_3d .. :try_end_4b} :catch_5c
	//    .catch Ljava/lang/OutOfMemoryError; {:try_start_3d .. :try_end_4b} :catch_64
label_goto_4b:
	if ( h )     
		goto label_cond_54;
	java::lang::System::logE(message, syntheticException);
	java::lang::System::exit(0x2);
label_cond_54:
	h->uncaughtException(java::lang::Thread::currentThread({const[class].FS-Param}), syntheticException);
	return;
	// 200    .line 409
label_catch_5c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	java::lang::System::logE(std::make_shared<java::lang::String>(std::make_shared<char[]>("failed to send SIGQUIT")), getCatchExcetionFromList);
	goto label_goto_4b;
	// 212    .line 411
	// 213    .end local v0    # "e":Ljava/lang/Exception;
label_catch_64:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ignored":Ljava/lang/OutOfMemoryError;
	goto label_goto_4b;

}
// .method private declared-synchronized getNeedToWork()Z
bool java::lang::Daemons_S_FinalizerWatchdogDaemon::getNeedToWork()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_5;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_5
	this->monitor_exit();
	return this->needToWork;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private declared-synchronized goToSleep()V
void java::lang::Daemons_S_FinalizerWatchdogDaemon::goToSleep()
{
	
	this->monitor_enter();
	try {
	//label_try_start_2:
	this->needToWork = 0x0;
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_6;
	}
	//    .catchall {:try_start_2 .. :try_end_4} :catchall_6
	this->monitor_exit();
	return;
label_catchall_6:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private sleepFor(J)Z
bool java::lang::Daemons_S_FinalizerWatchdogDaemon::sleepFor(long long durationNanos)
{
	
	bool cVar0;
	long long sleepMills;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "durationNanos"    # J
	cVar0 = 0x0;
	//    .local v8, "startNanos":J
label_cond_5:
label_goto_5:
	//    .local v2, "elapsedNanos":J
	//    .local v6, "sleepNanos":J
	sleepMills = ((durationNanos - (java::lang::System::nanoTime({const[class].FS-Param}) - java::lang::System::nanoTime({const[class].FS-Param}))) / 0xf4240);
	//    .local v4, "sleepMills":J
	if ( (sleepMills > 0x0) > 0 ) 
		goto label_cond_1a;
	return 0x1;
	// 317    .line 342
label_cond_1a:
	try {
	//label_try_start_1a:
	java::lang::Thread::sleep(sleepMills);
	//label_try_end_1d:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e;
	}
	catch (java::lang::OutOfMemoryError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_26;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_1a .. :try_end_1d} :catch_1e
	//    .catch Ljava/lang/OutOfMemoryError; {:try_start_1a .. :try_end_1d} :catch_26
	goto label_goto_5;
	// 327    .line 343
label_catch_1e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/InterruptedException;
	if ( this->isRunning() )     
		goto label_cond_5;
	return cVar0;
	// 342    .line 347
	// 343    .end local v0    # "e":Ljava/lang/InterruptedException;
label_catch_26:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ignored":Ljava/lang/OutOfMemoryError;
	if ( this->isRunning() )     
		goto label_cond_5;
	return cVar0;

}
// .method private declared-synchronized sleepUntilNeeded()Z
bool java::lang::Daemons_S_FinalizerWatchdogDaemon::sleepUntilNeeded()
{
	
	bool cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	this->monitor_enter();
label_goto_2:
	try {
	//label_try_start_2:
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_2 .. :try_end_4} :catchall_13
	if ( this->needToWork )     
		goto label_cond_10;
	try {
	//label_try_start_6:
	this->wait();
	//label_try_end_9:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a;
	}
	catch (java::lang::OutOfMemoryError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_6 .. :try_end_9} :catch_a
	//    .catch Ljava/lang/OutOfMemoryError; {:try_start_6 .. :try_end_9} :catch_d
	//    .catchall {:try_start_6 .. :try_end_9} :catchall_13
	goto label_goto_2;
	// 386    .line 298
label_catch_a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/InterruptedException;
	this->monitor_exit();
	return cVar0;
	// 396    .line 301
	// 397    .end local v0    # "e":Ljava/lang/InterruptedException;
label_catch_d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/OutOfMemoryError;
	this->monitor_exit();
	return cVar0;
	// 407    .line 305
	// 408    .end local v1    # "e":Ljava/lang/OutOfMemoryError;
label_cond_10:
	this->monitor_exit();
	return 0x1;
label_catchall_13:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private waitForFinalization()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::lang::Daemons_S_FinalizerWatchdogDaemon::waitForFinalization()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	long long startCount;
	
	cVar0 = 0x0;
	startCount = (long long)(java::lang::Daemons_S_FinalizerDaemon::-get2(java::lang::Daemons_S_FinalizerDaemon::-get0({const[class].FS-Param}))->get());
	//    .local v2, "startCount":J
	if ( this->sleepFor(0x2540be400L) )     
		goto label_cond_1a;
	return cVar0;
	// 458    .line 368
label_cond_1a:
	if ( !(this->getNeedToWork()) )  
		goto label_cond_57;
	if ( ((long long)(java::lang::Daemons_S_FinalizerDaemon::-get2(java::lang::Daemons_S_FinalizerDaemon::-get0({const[class].FS-Param}))->get()) > startCount) )     
		goto label_cond_57;
	//    .local v0, "finalizing":Ljava/lang/Object;
	this->sleepFor(0x1dcd6500);
	if ( !(this->getNeedToWork()) )  
		goto label_cond_57;
	if ( ((long long)(java::lang::Daemons_S_FinalizerDaemon::-get2(java::lang::Daemons_S_FinalizerDaemon::-get0({const[class].FS-Param}))->get()) > startCount) )     
		goto label_cond_57;
	return java::lang::Daemons_S_FinalizerDaemon::-get1(java::lang::Daemons_S_FinalizerDaemon::-get0({const[class].FS-Param}));
	// 528    .line 393
	// 529    .end local v0    # "finalizing":Ljava/lang/Object;
label_cond_57:
	return cVar0;

}
// .method private declared-synchronized wakeUp()V
void java::lang::Daemons_S_FinalizerWatchdogDaemon::wakeUp()
{
	
	this->monitor_enter();
	try {
	//label_try_start_2:
	this->needToWork = 0x1;
	this->notify();
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_2 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return;
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public runInternal()V
void java::lang::Daemons_S_FinalizerWatchdogDaemon::runInternal()
{
	
	std::shared_ptr<java::lang::Object> finalizing;
	
label_cond_0:
	if ( !(this->isRunning()) )  
		goto label_cond_21;
	if ( !(this->sleepUntilNeeded()) )  
		goto label_cond_0;
	finalizing = this->waitForFinalization();
	//    .local v0, "finalizing":Ljava/lang/Object;
	if ( !(finalizing) )  
		goto label_cond_0;
	if ( !(( dalvik::system::VMRuntime::getRuntime({const[class].FS-Param})->isDebuggerActive() ^ 0x1)) )  
		goto label_cond_0;
	java::lang::Daemons_S_FinalizerWatchdogDaemon::finalizerTimedOut(finalizing);
	//    .end local v0    # "finalizing":Ljava/lang/Object;
label_cond_21:
	return;

}


