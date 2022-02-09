// CPP L:\smali2cpp20\x64\Release\out\java\lang\Daemons$HeapTaskDaemon.smali
#include "java2ctype.h"
#include "dalvik.system.VMRuntime.h"
#include "java.lang.Daemons_S_Daemon.h"
#include "java.lang.Daemons_S_HeapTaskDaemon.h"
#include "java.lang.String.h"
#include "java.lang.Thread.h"

static java::lang::Daemons_S_HeapTaskDaemon::INSTANCE;
// .method static synthetic -get0()Ljava/lang/Daemons$HeapTaskDaemon;
std::shared_ptr<java::lang::Daemons_S_HeapTaskDaemon> java::lang::Daemons_S_HeapTaskDaemon::_get0()
{
	
	return java::lang::Daemons_S_HeapTaskDaemon::INSTANCE;

}
// .method static constructor <clinit>()V
void java::lang::Daemons_S_HeapTaskDaemon::static_cinit()
{
	
	std::shared_ptr<java::lang::Daemons_S_HeapTaskDaemon> cVar0;
	
	cVar0 = std::make_shared<java::lang::Daemons_S_HeapTaskDaemon>();
	java::lang::Daemons_S_HeapTaskDaemon::INSTANCE = cVar0;
	return;

}
// .method constructor <init>()V
java::lang::Daemons_S_HeapTaskDaemon::Daemons_S_HeapTaskDaemon()
{
	
	java::lang::Daemons_S_Daemon::(std::make_shared<java::lang::String>(std::make_shared<char[]>("HeapTaskDaemon")));
	return;

}
// .method public declared-synchronized interrupt(Ljava/lang/Thread;)V
void java::lang::Daemons_S_HeapTaskDaemon::interrupt(std::shared_ptr<java::lang::Thread> thread)
{
	
	//    .param p1, "thread"    # Ljava/lang/Thread;
	this->monitor_enter();
	try {
	//label_try_start_1:
	dalvik::system::VMRuntime::getRuntime({const[class].FS-Param})->stopHeapTaskProcessor();
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_1 .. :try_end_8} :catchall_a
	this->monitor_exit();
	return;
label_catchall_a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public runInternal()V
void java::lang::Daemons_S_HeapTaskDaemon::runInternal()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( !(this->isRunning()) )  
		goto label_cond_e;
	dalvik::system::VMRuntime::getRuntime({const[class].FS-Param})->startHeapTaskProcessor();
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_1 .. :try_end_e} :catchall_17
label_cond_e:
	this->monitor_exit();
	dalvik::system::VMRuntime::getRuntime({const[class].FS-Param})->runHeapTasks();
	return;
	// 127    .line 451
label_catchall_17:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


