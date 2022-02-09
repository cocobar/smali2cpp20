// CPP L:\smali2cpp20\x64\Release\out\java\io\StreamCorruptedException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.h"
#include "java.io.StreamCorruptedException.h"
#include "java.lang.String.h"

static java::io::StreamCorruptedException::serialVersionUID = 0x7cac02968639f3c2L;
// .method public constructor <init>()V
java::io::StreamCorruptedException::StreamCorruptedException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/ObjectStreamException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::StreamCorruptedException::StreamCorruptedException(std::shared_ptr<java::lang::String> reason)
{
	
	//    .param p1, "reason"    # Ljava/lang/String;
	java::io::ObjectStreamException::(reason);
	return;

}


