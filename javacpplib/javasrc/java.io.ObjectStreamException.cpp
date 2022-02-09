// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.ObjectStreamException.h"
#include "java.lang.String.h"

static java::io::ObjectStreamException::serialVersionUID = 0x64c3e46b8d39fbdfL;
// .method protected constructor <init>()V
java::io::ObjectStreamException::ObjectStreamException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/IOException;-><init>()V
	return;

}
// .method protected constructor <init>(Ljava/lang/String;)V
java::io::ObjectStreamException::ObjectStreamException(std::shared_ptr<java::lang::String> classname)
{
	
	//    .param p1, "classname"    # Ljava/lang/String;
	java::io::IOException::(classname);
	return;

}


