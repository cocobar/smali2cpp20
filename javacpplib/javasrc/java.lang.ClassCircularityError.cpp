// CPP L:\smali2cpp20\x64\Release\out\java\lang\ClassCircularityError.smali
#include "java2ctype.h"
#include "java.lang.ClassCircularityError.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"

static java::lang::ClassCircularityError::serialVersionUID = 0xea1d92582e610a9L;
// .method public constructor <init>()V
java::lang::ClassCircularityError::ClassCircularityError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/LinkageError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::ClassCircularityError::ClassCircularityError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::LinkageError::(s);
	return;

}


