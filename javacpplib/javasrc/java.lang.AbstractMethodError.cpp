// CPP L:\smali2cpp20\x64\Release\out\java\lang\AbstractMethodError.smali
#include "java2ctype.h"
#include "java.lang.AbstractMethodError.h"
#include "java.lang.IncompatibleClassChangeError.h"
#include "java.lang.String.h"

static java::lang::AbstractMethodError::serialVersionUID = -0x16f593ecb5225d5eL;
// .method public constructor <init>()V
java::lang::AbstractMethodError::AbstractMethodError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/IncompatibleClassChangeError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::AbstractMethodError::AbstractMethodError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::IncompatibleClassChangeError::(s);
	return;

}


