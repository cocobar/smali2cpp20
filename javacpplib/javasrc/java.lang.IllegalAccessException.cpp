// CPP L:\smali2cpp20\x64\Release\out\java\lang\IllegalAccessException.smali
#include "java2ctype.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.ReflectiveOperationException.h"
#include "java.lang.String.h"

static java::lang::IllegalAccessException::serialVersionUID = 0x5bd42871f9297b32L;
// .method public constructor <init>()V
java::lang::IllegalAccessException::IllegalAccessException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/ReflectiveOperationException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::IllegalAccessException::IllegalAccessException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::ReflectiveOperationException::(s);
	return;

}


