// CPP L:\smali2cpp20\x64\Release\out\java\io\IOError.smali
#include "java2ctype.h"
#include "java.io.IOError.h"
#include "java.lang.Error.h"
#include "java.lang.Throwable.h"

static java::io::IOError::serialVersionUID = 0xee63f0410b0d9dL;
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::io::IOError::IOError(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::Error::(cause);
	return;

}


