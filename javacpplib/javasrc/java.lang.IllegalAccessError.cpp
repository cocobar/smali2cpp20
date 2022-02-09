// CPP L:\smali2cpp20\x64\Release\out\java\lang\IllegalAccessError.smali
#include "java2ctype.h"
#include "java.lang.IllegalAccessError.h"
#include "java.lang.IncompatibleClassChangeError.h"
#include "java.lang.String.h"

static java::lang::IllegalAccessError::serialVersionUID = -0x7cbf00a185fbfc63L;
// .method public constructor <init>()V
java::lang::IllegalAccessError::IllegalAccessError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/IncompatibleClassChangeError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::IllegalAccessError::IllegalAccessError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::IncompatibleClassChangeError::(s);
	return;

}


