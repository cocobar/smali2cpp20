// CPP L:\smali2cpp20\x64\Release\out\java\lang\NegativeArraySizeException.smali
#include "java2ctype.h"
#include "java.lang.NegativeArraySizeException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

static java::lang::NegativeArraySizeException::serialVersionUID = -0x7c58bbe6cc3c8375L;
// .method public constructor <init>()V
java::lang::NegativeArraySizeException::NegativeArraySizeException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::NegativeArraySizeException::NegativeArraySizeException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::RuntimeException::(s);
	return;

}


