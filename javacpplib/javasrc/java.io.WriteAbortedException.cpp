// CPP L:\smali2cpp20\x64\Release\out\java\io\WriteAbortedException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.h"
#include "java.io.WriteAbortedException.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"

static java::io::WriteAbortedException::serialVersionUID = -0x2e29d7644e20988aL;
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Exception;)V
java::io::WriteAbortedException::WriteAbortedException(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::Exception> ex)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "ex"    # Ljava/lang/Exception;
	java::io::ObjectStreamException::(s);
	this->initCause(0x0);
	this->detail = ex;
	return;

}
// .method public getCause()Ljava/lang/Throwable;
std::shared_ptr<java::lang::Throwable> java::io::WriteAbortedException::getCause()
{
	
	return this->detail;

}
// .method public getMessage()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::WriteAbortedException::getMessage()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	if ( this->detail )     
		goto label_cond_9;
	return this->getMessage();
	// 064    .line 80
label_cond_9:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->getMessage())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; ")))->append(this->detail->toString())->toString();

}


