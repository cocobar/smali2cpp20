// CPP L:\smali2cpp20\x64\Release\out\java\io\IOException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::io::IOException::serialVersionUID = 0x6c8073646525f0abL;
// .method public constructor <init>()V
java::io::IOException::IOException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Exception;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::io::IOException::IOException(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	java::lang::Exception::(message);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::io::IOException::IOException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::Exception::(message, cause);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::io::IOException::IOException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::Exception::(cause);
	return;

}


