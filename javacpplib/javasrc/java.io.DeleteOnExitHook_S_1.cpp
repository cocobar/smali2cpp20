// CPP L:\smali2cpp20\x64\Release\out\java\io\DeleteOnExitHook$1.smali
#include "java2ctype.h"
#include "java.io.DeleteOnExitHook_S_1.h"
#include "java.io.DeleteOnExitHook.h"

// .method constructor <init>()V
java::io::DeleteOnExitHook_S_1::DeleteOnExitHook_S_1()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V
	return;

}
// .method public run()V
void java::io::DeleteOnExitHook_S_1::run()
{
	
	java::io::DeleteOnExitHook::runHooks({const[class].FS-Param});
	return;

}


