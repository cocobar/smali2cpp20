// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\ZygoteHooks.smali
#include "java2ctype.h"
#include "dalvik.system.ZygoteHooks.h"
#include "java.io.File.h"
#include "java.lang.Daemons.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Thread.h"

// .method public constructor <init>()V
dalvik::system::ZygoteHooks::ZygoteHooks()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static waitUntilAllThreadsStopped()V
void dalvik::system::ZygoteHooks::waitUntilAllThreadsStopped()
{
	
	std::shared_ptr<java::io::File> tasks;
	
	tasks = std::make_shared<java::io::File>(std::make_shared<java::lang::String>(std::make_shared<char[]>("/proc/self/task")));
	//    .local v0, "tasks":Ljava/io/File;
label_goto_8:
	if ( tasks->list()->size() <= 0x1 )
		goto label_cond_14;
	java::lang::Thread::yield({const[class].FS-Param});
	goto label_goto_8;
	// 062    .line 90
label_cond_14:
	return;

}
// .method public postForkChild(IZLjava/lang/String;)V
void dalvik::system::ZygoteHooks::postForkChild(int debugFlags,bool isSystemServer,std::shared_ptr<java::lang::String> instructionSet)
{
	
	//    .param p1, "debugFlags"    # I
	//    .param p2, "isSystemServer"    # Z
	//    .param p3, "instructionSet"    # Ljava/lang/String;
	dalvik::system::ZygoteHooks::nativePostForkChild(this->token, debugFlags, isSystemServer, instructionSet);
	java::lang::Math::setRandomSeedInternal(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	return;

}
// .method public postForkCommon()V
void dalvik::system::ZygoteHooks::postForkCommon()
{
	
	java::lang::Daemons::startPostZygoteFork({const[class].FS-Param});
	return;

}
// .method public preFork()V
void dalvik::system::ZygoteHooks::preFork()
{
	
	java::lang::Daemons::stop({const[class].FS-Param});
	dalvik::system::ZygoteHooks::waitUntilAllThreadsStopped({const[class].FS-Param});
	this->token = dalvik::system::ZygoteHooks::nativePreFork({const[class].FS-Param});
	return;

}


