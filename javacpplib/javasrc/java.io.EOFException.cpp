// CPP L:\smali2cpp20\x64\Release\out\java\io\EOFException.smali
#include "java2ctype.h"
#include "java.io.EOFException.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

static java::io::EOFException::serialVersionUID = 0x5949a7f76b53ec41L;
// .method public constructor <init>()V
java::io::EOFException::EOFException()
{
	
	// 016    invoke-direct {p0}, Ljava/io/IOException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::EOFException::EOFException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::io::IOException::(s);
	return;

}


