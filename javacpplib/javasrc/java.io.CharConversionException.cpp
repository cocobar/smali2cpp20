// CPP L:\smali2cpp20\x64\Release\out\java\io\CharConversionException.smali
#include "java2ctype.h"
#include "java.io.CharConversionException.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

static java::io::CharConversionException::serialVersionUID = -0x78759ce22aa3ec97L;
// .method public constructor <init>()V
java::io::CharConversionException::CharConversionException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/IOException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::CharConversionException::CharConversionException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::io::IOException::(s);
	return;

}


