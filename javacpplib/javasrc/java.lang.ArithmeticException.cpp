// CPP L:\smali2cpp20\x64\Release\out\java\lang\ArithmeticException.smali
#include "java2ctype.h"
#include "java.lang.ArithmeticException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

static java::lang::ArithmeticException::serialVersionUID = 0x1f509e624af9f007L;
// .method public constructor <init>()V
java::lang::ArithmeticException::ArithmeticException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::ArithmeticException::ArithmeticException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::RuntimeException::(s);
	return;

}


