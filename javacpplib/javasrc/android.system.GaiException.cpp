// CPP L:\smali2cpp20\x64\Release\out\android\system\GaiException.smali
#include "java2ctype.h"
#include "android.system.GaiException.h"
#include "android.system.OsConstants.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.net.UnknownHostException.h"
#include "libcore.io.Libcore.h"
#include "libcore.io.Os.h"

// .method public constructor <init>(Ljava/lang/String;I)V
android::system::GaiException::GaiException(std::shared_ptr<java::lang::String> functionName,int error)
{
	
	//    .param p1, "functionName"    # Ljava/lang/String;
	//    .param p2, "error"    # I
	// 020    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	this->functionName = functionName;
	this->error = error;
	return;

}
// .method public constructor <init>(Ljava/lang/String;ILjava/lang/Throwable;)V
android::system::GaiException::GaiException(std::shared_ptr<java::lang::String> functionName,int error,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "functionName"    # Ljava/lang/String;
	//    .param p2, "error"    # I
	//    .param p3, "cause"    # Ljava/lang/Throwable;
	java::lang::RuntimeException::(cause);
	this->functionName = functionName;
	this->error = error;
	return;

}
// .method public getMessage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::GaiException::getMessage()
{
	
	std::shared_ptr<java::lang::String> gaiName;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	gaiName = android::system::OsConstants::gaiName(this->error);
	//    .local v1, "gaiName":Ljava/lang/String;
	if ( gaiName )     
		goto label_cond_1e;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
label_cond_1e:
	//    .local v0, "description":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(this->functionName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" failed: ")))->append(gaiName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (")))->append(libcore::io::Libcore::os->gai_strerror(this->error))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString();

}
// .method public rethrowAsUnknownHostException()Ljava/net/UnknownHostException;
std::shared_ptr<java::net::UnknownHostException> android::system::GaiException::rethrowAsUnknownHostException()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 148        value = {
	// 149            Ljava/net/UnknownHostException;
	// 150        }
	// 151    .end annotation
	// throw
	
	// throw
	throw this->rethrowAsUnknownHostException(this->getMessage());

}
// .method public rethrowAsUnknownHostException(Ljava/lang/String;)Ljava/net/UnknownHostException;
std::shared_ptr<java::net::UnknownHostException> android::system::GaiException::rethrowAsUnknownHostException(std::shared_ptr<java::lang::String> detailMessage)
{
	
	std::shared_ptr<java::net::UnknownHostException> newException;
	
	//    .param p1, "detailMessage"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 170        value = {
	// 171            Ljava/net/UnknownHostException;
	// 172        }
	// 173    .end annotation
	newException = std::make_shared<java::net::UnknownHostException>(detailMessage);
	//    .local v0, "newException":Ljava/net/UnknownHostException;
	newException->initCause(this);
	// throw
	throw newException;

}


