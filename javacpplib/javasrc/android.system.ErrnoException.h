#ifndef __android_system_ErrnoException__
#define __android_system_ErrnoException__
// H L:\smali2cpp20\x64\Release\out\android\system\ErrnoException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.net.SocketException.h"

namespace android::system{
class ErrnoException : public java::lang::Exception {
protected:
private:
	std::shared_ptr<java::lang::String> functionName;
public:
	int errno;
	ErrnoException(std::shared_ptr<java::lang::String> functionName,int errno);
	ErrnoException(std::shared_ptr<java::lang::String> functionName,int errno,std::shared_ptr<java::lang::Throwable> cause);
	std::shared_ptr<java::lang::String> virtual getMessage();
	std::shared_ptr<java::io::IOException> virtual rethrowAsIOException();
	std::shared_ptr<java::net::SocketException> virtual rethrowAsSocketException();
public:
	virtual ~ErrnoException(){
	}

}; // class ErrnoException
}; // namespace android::system

#endif //__android_system_ErrnoException__

