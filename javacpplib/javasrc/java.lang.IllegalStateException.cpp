// CPP L:\smali2cpp20\x64\Release\out\java\lang\IllegalStateException.smali
#include "java2ctype.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::IllegalStateException::serialVersionUID = -0x19a8aa1965b90db8L;
// .method public constructor <init>()V
java::lang::IllegalStateException::IllegalStateException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::IllegalStateException::IllegalStateException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::RuntimeException::(s);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::IllegalStateException::IllegalStateException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::RuntimeException::(message, cause);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::lang::IllegalStateException::IllegalStateException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::RuntimeException::(cause);
	return;

}


