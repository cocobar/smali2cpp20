// CPP L:\smali2cpp20\x64\Release\out\java\lang\InterruptedException.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.String.h"

static java::lang::InterruptedException::serialVersionUID = 0x5cfda8c301deb7f9L;
// .method public constructor <init>()V
java::lang::InterruptedException::InterruptedException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Exception;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::InterruptedException::InterruptedException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::Exception::(s);
	return;

}


