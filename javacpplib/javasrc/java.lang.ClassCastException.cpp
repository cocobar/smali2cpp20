// CPP L:\smali2cpp20\x64\Release\out\java\lang\ClassCastException.smali
#include "java2ctype.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

static java::lang::ClassCastException::serialVersionUID = -0x7ffffa3131981aa4L;
// .method public constructor <init>()V
java::lang::ClassCastException::ClassCastException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::ClassCastException::ClassCastException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::RuntimeException::(s);
	return;

}


