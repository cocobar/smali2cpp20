// CPP L:\smali2cpp20\x64\Release\out\java\lang\IllegalArgumentException.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::IllegalArgumentException::serialVersionUID = -0x4a768c2c82997044L;
// .method public constructor <init>()V
java::lang::IllegalArgumentException::IllegalArgumentException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::IllegalArgumentException::IllegalArgumentException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::RuntimeException::(s);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::IllegalArgumentException::IllegalArgumentException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::RuntimeException::(message, cause);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::lang::IllegalArgumentException::IllegalArgumentException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::RuntimeException::(cause);
	return;

}


