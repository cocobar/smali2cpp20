// CPP L:\smali2cpp20\x64\Release\out\java\lang\IncompatibleClassChangeError.smali
#include "java2ctype.h"
#include "java.lang.IncompatibleClassChangeError.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"

static java::lang::IncompatibleClassChangeError::serialVersionUID = -0x4435802e0e6037c7L;
// .method public constructor <init>()V
java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/LinkageError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::IncompatibleClassChangeError::IncompatibleClassChangeError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::LinkageError::(s);
	return;

}


