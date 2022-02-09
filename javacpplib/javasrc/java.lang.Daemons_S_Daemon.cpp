// CPP L:\smali2cpp20\x64\Release\out\java\lang\Daemons$Daemon.smali
#include "java2ctype.h"
#include "dalvik.system.VMRuntime.h"
#include "java.lang.Daemons_S_Daemon.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.OutOfMemoryError.h"
#include "java.lang.StackTraceElement.h"
#include "java.lang.String.h"
#include "java.lang.Thread.h"
#include "java.lang.ThreadGroup.h"
#include "libcore.util.EmptyArray.h"

// .method protected constructor <init>(Ljava/lang/String;)V
java::lang::Daemons_S_Daemon::Daemons_S_Daemon(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = name;
	return;

}
// .method public declared-synchronized getStackTrace()[Ljava/lang/StackTraceElement;
std::shared_ptr<java::lang::StackTraceElement> java::lang::Daemons_S_Daemon::getStackTrace()
{
	
	std::shared_ptr<std::vector<java::lang::StackTraceElement>> cVar0;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( !(this->thread) )  
		goto label_cond_d;
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_1 .. :try_end_a} :catchall_10
	cVar0 = this->thread->getStackTrace();
label_goto_b:
	this->monitor_exit();
	return cVar0;
label_cond_d:
	try {
	//label_try_start_d:
	cVar0 = libcore::util::EmptyArray::STACK_TRACE_ELEMENT;
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_d .. :try_end_f} :catchall_10
	goto label_goto_b;
label_catchall_10:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized interrupt()V
void java::lang::Daemons_S_Daemon::interrupt()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->interrupt(this->thread);
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_8;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_8
	this->monitor_exit();
	return;
label_catchall_8:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized interrupt(Ljava/lang/Thread;)V
void java::lang::Daemons_S_Daemon::interrupt(std::shared_ptr<java::lang::Thread> thread)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "thread"    # Ljava/lang/Thread;
	this->monitor_enter();
	if ( thread )     
		goto label_cond_f;
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not running")));
	// throw
	throw cVar0;
	// 133    :try_end_c
	// 134    .catchall {:try_start_3 .. :try_end_c} :catchall_c
label_catchall_c:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 143    .line 124
label_cond_f:
	try {
	//label_try_start_f:
	thread->interrupt();
	//label_try_end_12:
	}
	catch (...){
		goto label_catchall_c;
	}
	//    .catchall {:try_start_f .. :try_end_12} :catchall_c
	this->monitor_exit();
	return;

}
// .method protected declared-synchronized isRunning()Z
bool java::lang::Daemons_S_Daemon::isRunning()
{
	
	bool cVar0;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_a
	if ( !(this->thread) )  
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_6:
	this->monitor_exit();
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_6;
label_catchall_a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public run()V
void java::lang::Daemons_S_Daemon::run()
{
	
	if ( !(this->postZygoteFork) )  
		goto label_cond_a;
	dalvik::system::VMRuntime::getRuntime({const[class].FS-Param});
	dalvik::system::VMRuntime::setSystemDaemonThreadPriority({const[class].FS-Param});
label_cond_a:
	this->runInternal();
	return;

}
// .method public declared-synchronized start()V
void java::lang::Daemons_S_Daemon::start()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->startInternal();
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_6;
	}
	//    .catchall {:try_start_1 .. :try_end_4} :catchall_6
	this->monitor_exit();
	return;
label_catchall_6:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public startInternal()V
void java::lang::Daemons_S_Daemon::startInternal()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::Thread> cVar1;
	
	if ( !(this->thread) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("already running")));
	// throw
	throw cVar0;
	// 258    .line 90
label_cond_d:
	cVar1 = std::make_shared<java::lang::Thread>(java::lang::ThreadGroup::systemThreadGroup, this, this->name);
	this->thread = cVar1;
	this->thread->setDaemon(0x1);
	this->thread->start();
	return;

}
// .method public declared-synchronized startPostZygoteFork()V
void java::lang::Daemons_S_Daemon::startPostZygoteFork()
{
	
	this->monitor_enter();
	try {
	//label_try_start_2:
	this->postZygoteFork = 0x1;
	this->startInternal();
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
// .method public stop()V
void java::lang::Daemons_S_Daemon::stop()
{
	
	std::shared_ptr<java::lang::Thread> threadToStop;
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	threadToStop = this->thread;
	//    .local v2, "threadToStop":Ljava/lang/Thread;
	this->thread = 0x0;
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_1 .. :try_end_6} :catchall_12
	this->monitor_exit();
	if ( threadToStop )     
		goto label_cond_15;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not running")));
	// throw
	throw cVar0;
	// 349    .line 133
	// 350    .end local v2    # "threadToStop":Ljava/lang/Thread;
label_catchall_12:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 358    .line 140
	// 359    .restart local v2    # "threadToStop":Ljava/lang/Thread;
label_cond_15:
	this->interrupt(threadToStop);
label_goto_18:
	try {
	//label_try_start_18:
	threadToStop->join();
	//label_try_end_1b:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e;
	}
	catch (java::lang::OutOfMemoryError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_18 .. :try_end_1b} :catch_1e
	//    .catch Ljava/lang/OutOfMemoryError; {:try_start_18 .. :try_end_1b} :catch_1c
	return;
	// 374    .line 146
label_catch_1c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ignored":Ljava/lang/OutOfMemoryError;
	goto label_goto_18;
	// 381    .line 145
	// 382    .end local v1    # "ignored":Ljava/lang/OutOfMemoryError;
label_catch_1e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ignored":Ljava/lang/InterruptedException;
	goto label_goto_18;

}


