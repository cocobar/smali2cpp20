// CPP L:\smali2cpp20\x64\Release\out\java\lang\IndexOutOfBoundsException.smali
#include "java2ctype.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

static java::lang::IndexOutOfBoundsException::serialVersionUID = 0x33fc59fdab42b27L;
// .method public constructor <init>()V
java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::IndexOutOfBoundsException::IndexOutOfBoundsException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::RuntimeException::(s);
	return;

}


