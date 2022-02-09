// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$EntryFuture$1.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_EntryFuture_S_1.h"
#include "java.io.ObjectStreamClass_S_EntryFuture.h"
#include "java.lang.Thread.h"
#include "java.lang.Void.h"

// .method constructor <init>(Ljava/io/ObjectStreamClass$EntryFuture;)V
java::io::ObjectStreamClass_S_EntryFuture_S_1::ObjectStreamClass_S_EntryFuture_S_1(std::shared_ptr<java::io::ObjectStreamClass_S_EntryFuture> this_S_1)
{
	
	//    .param p1, "this$1"    # Ljava/io/ObjectStreamClass$EntryFuture;
	this->this_S_1 = this_S_1;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Void;
std::shared_ptr<java::lang::Void> java::io::ObjectStreamClass_S_EntryFuture_S_1::run()
{
	
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	return 0x0;

}


