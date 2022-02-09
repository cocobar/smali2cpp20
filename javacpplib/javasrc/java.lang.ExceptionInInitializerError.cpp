// CPP L:\smali2cpp20\x64\Release\out\java\lang\ExceptionInInitializerError.smali
#include "java2ctype.h"
#include "java.lang.ExceptionInInitializerError.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::ExceptionInInitializerError::serialVersionUID = 0x151e34d009a19380L;
// .method public constructor <init>()V
java::lang::ExceptionInInitializerError::ExceptionInInitializerError()
{
	
	// 020    invoke-direct {p0}, Ljava/lang/LinkageError;-><init>()V
	this->initCause(0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::ExceptionInInitializerError::ExceptionInInitializerError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::LinkageError::(s);
	this->initCause(0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::lang::ExceptionInInitializerError::ExceptionInInitializerError(std::shared_ptr<java::lang::Throwable> thrown)
{
	
	//    .param p1, "thrown"    # Ljava/lang/Throwable;
	// 054    invoke-direct {p0}, Ljava/lang/LinkageError;-><init>()V
	this->initCause(0x0);
	this->exception = thrown;
	return;

}
// .method public getCause()Ljava/lang/Throwable;
std::shared_ptr<java::lang::Throwable> java::lang::ExceptionInInitializerError::getCause()
{
	
	return this->exception;

}
// .method public getException()Ljava/lang/Throwable;
std::shared_ptr<java::lang::Throwable> java::lang::ExceptionInInitializerError::getException()
{
	
	return this->exception;

}


