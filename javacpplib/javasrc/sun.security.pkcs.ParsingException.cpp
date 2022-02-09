// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\ParsingException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"
#include "sun.security.pkcs.ParsingException.h"

static sun::security::pkcs::ParsingException::serialVersionUID = -0x57a8f6dfeae5affbL;
// .method public constructor <init>()V
sun::security::pkcs::ParsingException::ParsingException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/IOException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::pkcs::ParsingException::ParsingException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::io::IOException::(s);
	return;

}


