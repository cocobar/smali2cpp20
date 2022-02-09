// CPP L:\smali2cpp20\x64\Release\out\java\lang\InstantiationException.smali
#include "java2ctype.h"
#include "java.lang.InstantiationException.h"
#include "java.lang.ReflectiveOperationException.h"
#include "java.lang.String.h"

static java::lang::InstantiationException::serialVersionUID = -0x7527c1d8b22a7a76L;
// .method public constructor <init>()V
java::lang::InstantiationException::InstantiationException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/ReflectiveOperationException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::InstantiationException::InstantiationException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::ReflectiveOperationException::(s);
	return;

}


