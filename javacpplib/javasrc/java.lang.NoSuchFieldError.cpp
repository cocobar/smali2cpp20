// CPP L:\smali2cpp20\x64\Release\out\java\lang\NoSuchFieldError.smali
#include "java2ctype.h"
#include "java.lang.IncompatibleClassChangeError.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.String.h"

static java::lang::NoSuchFieldError::serialVersionUID = -0x2ff7b4f340b9ff8bL;
// .method public constructor <init>()V
java::lang::NoSuchFieldError::NoSuchFieldError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/IncompatibleClassChangeError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::NoSuchFieldError::NoSuchFieldError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::IncompatibleClassChangeError::(s);
	return;

}


