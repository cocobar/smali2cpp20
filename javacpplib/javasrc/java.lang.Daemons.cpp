// CPP L:\smali2cpp20\x64\Release\out\java\lang\Daemons.smali
#include "java2ctype.h"
#include "dalvik.system.VMRuntime.h"
#include "java.lang.Daemons_S_FinalizerDaemon.h"
#include "java.lang.Daemons_S_FinalizerWatchdogDaemon.h"
#include "java.lang.Daemons_S_HeapTaskDaemon.h"
#include "java.lang.Daemons_S_ReferenceQueueDaemon.h"
#include "java.lang.Daemons.h"

static java::lang::Daemons::MAX_FINALIZE_NANOS = 0x2540be400L;
static java::lang::Daemons::NANOS_PER_MILLI = 0xf4240;
static java::lang::Daemons::NANOS_PER_SECOND = 0x3b9aca00;
// .method public constructor <init>()V
java::lang::Daemons::Daemons()
{
	
	// 032    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static requestGC()V
void java::lang::Daemons::requestGC()
{
	
	dalvik::system::VMRuntime::getRuntime({const[class].FS-Param})->requestConcurrentGC();
	return;

}
// .method public static requestHeapTrim()V
void java::lang::Daemons::requestHeapTrim()
{
	
	dalvik::system::VMRuntime::getRuntime({const[class].FS-Param})->requestHeapTrim();
	return;

}
// .method public static start()V
void java::lang::Daemons::start()
{
	
	java::lang::Daemons_S_ReferenceQueueDaemon::-get0({const[class].FS-Param})->start();
	java::lang::Daemons_S_FinalizerDaemon::-get0({const[class].FS-Param})->start();
	java::lang::Daemons_S_FinalizerWatchdogDaemon::-get0({const[class].FS-Param})->start();
	java::lang::Daemons_S_HeapTaskDaemon::-get0({const[class].FS-Param})->start();
	return;

}
// .method public static startPostZygoteFork()V
void java::lang::Daemons::startPostZygoteFork()
{
	
	java::lang::Daemons_S_ReferenceQueueDaemon::-get0({const[class].FS-Param})->startPostZygoteFork();
	java::lang::Daemons_S_FinalizerDaemon::-get0({const[class].FS-Param})->startPostZygoteFork();
	java::lang::Daemons_S_FinalizerWatchdogDaemon::-get0({const[class].FS-Param})->startPostZygoteFork();
	java::lang::Daemons_S_HeapTaskDaemon::-get0({const[class].FS-Param})->startPostZygoteFork();
	return;

}
// .method public static stop()V
void java::lang::Daemons::stop()
{
	
	java::lang::Daemons_S_HeapTaskDaemon::-get0({const[class].FS-Param})->stop();
	java::lang::Daemons_S_ReferenceQueueDaemon::-get0({const[class].FS-Param})->stop();
	java::lang::Daemons_S_FinalizerDaemon::-get0({const[class].FS-Param})->stop();
	java::lang::Daemons_S_FinalizerWatchdogDaemon::-get0({const[class].FS-Param})->stop();
	return;

}


