// CPP L:\smali2cpp20\x64\Release\out\java\io\InvalidObjectException.smali
#include "java2ctype.h"
#include "java.io.InvalidObjectException.h"
#include "java.io.ObjectStreamException.h"
#include "java.lang.String.h"

static java::io::InvalidObjectException::serialVersionUID = 0x2cde8ae9921ad3dfL;
// .method public constructor <init>(Ljava/lang/String;)V
java::io::InvalidObjectException::InvalidObjectException(std::shared_ptr<java::lang::String> reason)
{
	
	//    .param p1, "reason"    # Ljava/lang/String;
	java::io::ObjectStreamException::(reason);
	return;

}


