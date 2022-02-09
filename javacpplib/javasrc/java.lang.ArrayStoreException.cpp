// CPP L:\smali2cpp20\x64\Release\out\java\lang\ArrayStoreException.smali
#include "java2ctype.h"
#include "java.lang.ArrayStoreException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

static java::lang::ArrayStoreException::serialVersionUID = -0x3ec20f6240af4121L;
// .method public constructor <init>()V
java::lang::ArrayStoreException::ArrayStoreException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::ArrayStoreException::ArrayStoreException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::RuntimeException::(s);
	return;

}


