// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$ExceptionInfo.smali
#include "java2ctype.h"
#include "java.io.InvalidClassException.h"
#include "java.io.ObjectStreamClass_S_ExceptionInfo.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
java::io::ObjectStreamClass_S_ExceptionInfo::ObjectStreamClass_S_ExceptionInfo(std::shared_ptr<java::lang::String> cn,std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "cn"    # Ljava/lang/String;
	//    .param p2, "msg"    # Ljava/lang/String;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->className = cn;
	this->message = msg;
	return;

}
// .method newInvalidClassException()Ljava/io/InvalidClassException;
std::shared_ptr<java::io::InvalidClassException> java::io::ObjectStreamClass_S_ExceptionInfo::newInvalidClassException()
{
	
	std::shared_ptr<java::io::InvalidClassException> cVar0;
	
	cVar0 = std::make_shared<java::io::InvalidClassException>(this->className, this->message);
	return cVar0;

}


