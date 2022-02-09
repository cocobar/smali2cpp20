// CPP L:\smali2cpp20\x64\Release\out\java\io\NotActiveException.smali
#include "java2ctype.h"
#include "java.io.NotActiveException.h"
#include "java.io.ObjectStreamException.h"
#include "java.lang.String.h"

static java::io::NotActiveException::serialVersionUID = -0x36085fdb3abe1fffL;
// .method public constructor <init>()V
java::io::NotActiveException::NotActiveException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/ObjectStreamException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::NotActiveException::NotActiveException(std::shared_ptr<java::lang::String> reason)
{
	
	//    .param p1, "reason"    # Ljava/lang/String;
	java::io::ObjectStreamException::(reason);
	return;

}


