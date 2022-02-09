// CPP L:\smali2cpp20\x64\Release\out\java\lang\Error.smali
#include "java2ctype.h"
#include "java.lang.Error.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::Error::serialVersionUID = 0x451d36568b820e56L;
// .method public constructor <init>()V
java::lang::Error::Error()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Throwable;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::Error::Error(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	java::lang::Throwable::(message);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::Error::Error(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::Throwable::(message, cause);
	return;

}
// .method protected constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V
java::lang::Error::Error(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause,bool enableSuppression,bool writableStackTrace)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	//    .param p3, "enableSuppression"    # Z
	//    .param p4, "writableStackTrace"    # Z
	java::lang::Throwable::(message, cause, enableSuppression, writableStackTrace);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::lang::Error::Error(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::Throwable::(cause);
	return;

}


