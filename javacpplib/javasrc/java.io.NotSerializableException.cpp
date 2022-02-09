// CPP L:\smali2cpp20\x64\Release\out\java\io\NotSerializableException.smali
#include "java2ctype.h"
#include "java.io.NotSerializableException.h"
#include "java.io.ObjectStreamException.h"
#include "java.lang.String.h"

static java::io::NotSerializableException::serialVersionUID = 0x28567800e7861635L;
// .method public constructor <init>()V
java::io::NotSerializableException::NotSerializableException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/ObjectStreamException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::NotSerializableException::NotSerializableException(std::shared_ptr<java::lang::String> classname)
{
	
	//    .param p1, "classname"    # Ljava/lang/String;
	java::io::ObjectStreamException::(classname);
	return;

}


