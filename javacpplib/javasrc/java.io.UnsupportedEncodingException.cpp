// CPP L:\smali2cpp20\x64\Release\out\java\io\UnsupportedEncodingException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.UnsupportedEncodingException.h"
#include "java.lang.String.h"

static java::io::UnsupportedEncodingException::serialVersionUID = -0x3b5147a5b199d75eL;
// .method public constructor <init>()V
java::io::UnsupportedEncodingException::UnsupportedEncodingException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/IOException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::UnsupportedEncodingException::UnsupportedEncodingException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::io::IOException::(s);
	return;

}


