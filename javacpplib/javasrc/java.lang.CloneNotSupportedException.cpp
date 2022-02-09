// CPP L:\smali2cpp20\x64\Release\out\java\lang\CloneNotSupportedException.smali
#include "java2ctype.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"

static java::lang::CloneNotSupportedException::serialVersionUID = 0x481a29f4778b29fbL;
// .method public constructor <init>()V
java::lang::CloneNotSupportedException::CloneNotSupportedException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Exception;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::CloneNotSupportedException::CloneNotSupportedException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::Exception::(s);
	return;

}


