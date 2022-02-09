// CPP L:\smali2cpp20\x64\Release\out\android\system\ErrnoException.smali
#include "java2ctype.h"
#include "android.system.ErrnoException.h"
#include "android.system.OsConstants.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.net.SocketException.h"
#include "libcore.io.Libcore.h"
#include "libcore.io.Os.h"

// .method public constructor <init>(Ljava/lang/String;I)V
android::system::ErrnoException::ErrnoException(std::shared_ptr<java::lang::String> functionName,int errno)
{
	
	//    .param p1, "functionName"    # Ljava/lang/String;
	//    .param p2, "errno"    # I
	// 020    invoke-direct {p0}, Ljava/lang/Exception;-><init>()V
	this->functionName = functionName;
	this->errno = errno;
	return;

}
// .method public constructor <init>(Ljava/lang/String;ILjava/lang/Throwable;)V
android::system::ErrnoException::ErrnoException(std::shared_ptr<java::lang::String> functionName,int errno,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "functionName"    # Ljava/lang/String;
	//    .param p2, "errno"    # I
	//    .param p3, "cause"    # Ljava/lang/Throwable;
	java::lang::Exception::(cause);
	this->functionName = functionName;
	this->errno = errno;
	return;

}
// .method public getMessage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::ErrnoException::getMessage()
{
	
	std::shared_ptr<java::lang::String> errnoName;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	errnoName = android::system::OsConstants::errnoName(this->errno);
	//    .local v1, "errnoName":Ljava/lang/String;
	if ( errnoName )     
		goto label_cond_1e;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
label_cond_1e:
	//    .local v0, "description":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(this->functionName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" failed: ")))->append(errnoName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (")))->append(libcore::io::Libcore::os->strerror(this->errno))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString();

}
// .method public rethrowAsIOException()Ljava/io/IOException;
std::shared_ptr<java::io::IOException> android::system::ErrnoException::rethrowAsIOException()
{
	
	std::shared_ptr<java::io::IOException> newException;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 148        value = {
	// 149            Ljava/io/IOException;
	// 150        }
	// 151    .end annotation
	newException = std::make_shared<java::io::IOException>(this->getMessage());
	//    .local v0, "newException":Ljava/io/IOException;
	newException->initCause(this);
	// throw
	throw newException;

}
// .method public rethrowAsSocketException()Ljava/net/SocketException;
std::shared_ptr<java::net::SocketException> android::system::ErrnoException::rethrowAsSocketException()
{
	
	std::shared_ptr<java::net::SocketException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 174        value = {
	// 175            Ljava/net/SocketException;
	// 176        }
	// 177    .end annotation
	cVar0 = std::make_shared<java::net::SocketException>(this->getMessage(), this);
	// throw
	throw cVar0;

}


