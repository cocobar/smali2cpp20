// CPP L:\smali2cpp20\x64\Release\out\java\io\InvalidClassException.smali
#include "java2ctype.h"
#include "java.io.InvalidClassException.h"
#include "java.io.ObjectStreamException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static java::io::InvalidClassException::serialVersionUID = -0x3c23083669749950L;
// .method public constructor <init>(Ljava/lang/String;)V
java::io::InvalidClassException::InvalidClassException(std::shared_ptr<java::lang::String> reason)
{
	
	//    .param p1, "reason"    # Ljava/lang/String;
	java::io::ObjectStreamException::(reason);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
java::io::InvalidClassException::InvalidClassException(std::shared_ptr<java::lang::String> cname,std::shared_ptr<java::lang::String> reason)
{
	
	//    .param p1, "cname"    # Ljava/lang/String;
	//    .param p2, "reason"    # Ljava/lang/String;
	java::io::ObjectStreamException::(reason);
	this->classname = cname;
	return;

}
// .method public getMessage()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::InvalidClassException::getMessage()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	if ( this->classname )     
		goto label_cond_9;
	return this->getMessage();
	// 061    .line 79
label_cond_9:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->classname)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("; ")))->append(this->getMessage())->toString();

}


