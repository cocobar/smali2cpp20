// CPP L:\smali2cpp20\x64\Release\out\java\lang\IllegalMonitorStateException.smali
#include "java2ctype.h"
#include "java.lang.IllegalMonitorStateException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

static java::lang::IllegalMonitorStateException::serialVersionUID = 0x33885078182ced4dL;
// .method public constructor <init>()V
java::lang::IllegalMonitorStateException::IllegalMonitorStateException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::IllegalMonitorStateException::IllegalMonitorStateException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::RuntimeException::(s);
	return;

}


