// CPP L:\smali2cpp20\x64\Release\out\java\lang\LinkageError.smali
#include "java2ctype.h"
#include "java.lang.Error.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::LinkageError::serialVersionUID = 0x31ad4b5534a84abaL;
// .method public constructor <init>()V
java::lang::LinkageError::LinkageError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Error;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::LinkageError::LinkageError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::Error::(s);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::LinkageError::LinkageError(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::Error::(s, cause);
	return;

}


