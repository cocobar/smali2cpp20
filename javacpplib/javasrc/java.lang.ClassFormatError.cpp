// CPP L:\smali2cpp20\x64\Release\out\java\lang\ClassFormatError.smali
#include "java2ctype.h"
#include "java.lang.ClassFormatError.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"

static java::lang::ClassFormatError::serialVersionUID = -0x74da41deeb7d0a8bL;
// .method public constructor <init>()V
java::lang::ClassFormatError::ClassFormatError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/LinkageError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::ClassFormatError::ClassFormatError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::LinkageError::(s);
	return;

}


