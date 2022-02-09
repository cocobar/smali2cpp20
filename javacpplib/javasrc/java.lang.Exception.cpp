// CPP L:\smali2cpp20\x64\Release\out\java\lang\Exception.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::Exception::serialVersionUID = -0x2f02e0c1e5c4e33cL;
// .method public constructor <init>()V
java::lang::Exception::Exception()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Throwable;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::Exception::Exception(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	java::lang::Throwable::(message);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::Exception::Exception(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::Throwable::(message, cause);
	return;

}
// .method protected constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V
java::lang::Exception::Exception(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause,bool enableSuppression,bool writableStackTrace)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	//    .param p3, "enableSuppression"    # Z
	//    .param p4, "writableStackTrace"    # Z
	java::lang::Throwable::(message, cause, enableSuppression, writableStackTrace);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::lang::Exception::Exception(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::Throwable::(cause);
	return;

}


