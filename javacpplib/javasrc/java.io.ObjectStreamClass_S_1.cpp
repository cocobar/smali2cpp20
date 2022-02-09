// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$1.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_1.h"
#include "java.io.ObjectStreamClass.h"
#include "java.lang.Class.h"
#include "java.lang.Long.h"

// .method constructor <init>(Ljava/io/ObjectStreamClass;)V
java::io::ObjectStreamClass_S_1::ObjectStreamClass_S_1(std::shared_ptr<java::io::ObjectStreamClass> this_S_0)
{
	
	//    .param p1, "this$0"    # Ljava/io/ObjectStreamClass;
	this->this_S_0 = this_S_0;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Long;
std::shared_ptr<java::lang::Long> java::io::ObjectStreamClass_S_1::run()
{
	
	return java::lang::Long::valueOf(java::io::ObjectStreamClass::-wrap8(java::io::ObjectStreamClass::-get0(this->this_S_0)));

}


