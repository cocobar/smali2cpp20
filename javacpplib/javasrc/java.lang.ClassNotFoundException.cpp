// CPP L:\smali2cpp20\x64\Release\out\java\lang\ClassNotFoundException.smali
#include "java2ctype.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.ReflectiveOperationException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::ClassNotFoundException::serialVersionUID = 0x7f5acd663ed4208eL;
// .method public constructor <init>()V
java::lang::ClassNotFoundException::ClassNotFoundException()
{
	
	std::shared_ptr<java::lang::Throwable> cVar0;
	
	cVar0 = 0x0;
	cVar0->checkCast("java::lang::Throwable");
	java::lang::ReflectiveOperationException::(cVar0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::ClassNotFoundException::ClassNotFoundException(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::ReflectiveOperationException::(s, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::ClassNotFoundException::ClassNotFoundException(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::Throwable> ex)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "ex"    # Ljava/lang/Throwable;
	java::lang::ReflectiveOperationException::(s, 0x0);
	this->ex = ex;
	return;

}
// .method public getCause()Ljava/lang/Throwable;
std::shared_ptr<java::lang::Throwable> java::lang::ClassNotFoundException::getCause()
{
	
	return this->ex;

}
// .method public getException()Ljava/lang/Throwable;
std::shared_ptr<java::lang::Throwable> java::lang::ClassNotFoundException::getException()
{
	
	return this->ex;

}


