// CPP L:\smali2cpp20\x64\Release\out\java\lang\IllegalThreadStateException.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalThreadStateException.h"
#include "java.lang.String.h"

static java::lang::IllegalThreadStateException::serialVersionUID = -0x69d5dea93850c6ceL;
// .method public constructor <init>()V
java::lang::IllegalThreadStateException::IllegalThreadStateException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/IllegalArgumentException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::IllegalThreadStateException::IllegalThreadStateException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::IllegalArgumentException::(s);
	return;

}


