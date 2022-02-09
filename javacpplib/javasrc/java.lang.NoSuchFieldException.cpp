// CPP L:\smali2cpp20\x64\Release\out\java\lang\NoSuchFieldException.smali
#include "java2ctype.h"
#include "java.lang.NoSuchFieldException.h"
#include "java.lang.ReflectiveOperationException.h"
#include "java.lang.String.h"

static java::lang::NoSuchFieldException::serialVersionUID = -0x5542dc108a04d6d4L;
// .method public constructor <init>()V
java::lang::NoSuchFieldException::NoSuchFieldException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/ReflectiveOperationException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::NoSuchFieldException::NoSuchFieldException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::ReflectiveOperationException::(s);
	return;

}


