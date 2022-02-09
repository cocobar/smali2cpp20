// CPP L:\smali2cpp20\x64\Release\out\java\io\InterruptedIOException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InterruptedIOException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::io::InterruptedIOException::serialVersionUID = 0x37cbedb690cd3f17L;
// .method public constructor <init>()V
java::io::InterruptedIOException::InterruptedIOException()
{
	
	// 020    invoke-direct {p0}, Ljava/io/IOException;-><init>()V
	this->bytesTransferred = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::InterruptedIOException::InterruptedIOException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::io::IOException::(s);
	this->bytesTransferred = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::io::InterruptedIOException::InterruptedIOException(std::shared_ptr<java::lang::String> detailMessage,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "detailMessage"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::io::IOException::(detailMessage, cause);
	this->bytesTransferred = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::io::InterruptedIOException::InterruptedIOException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::io::IOException::(cause);
	this->bytesTransferred = 0x0;
	return;

}


