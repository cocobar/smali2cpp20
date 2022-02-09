// CPP L:\smali2cpp20\x64\Release\out\java\io\UTFDataFormatException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.UTFDataFormatException.h"
#include "java.lang.String.h"

static java::io::UTFDataFormatException::serialVersionUID = 0x5d6c7f018d30324L;
// .method public constructor <init>()V
java::io::UTFDataFormatException::UTFDataFormatException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/IOException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::UTFDataFormatException::UTFDataFormatException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::io::IOException::(s);
	return;

}


