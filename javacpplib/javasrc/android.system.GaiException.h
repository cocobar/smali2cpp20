#ifndef __android_system_GaiException__
#define __android_system_GaiException__
// H L:\smali2cpp20\x64\Release\out\android\system\GaiException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.net.UnknownHostException.h"

namespace android::system{
class GaiException : public java::lang::RuntimeException {
protected:
private:
	std::shared_ptr<java::lang::String> functionName;
public:
	int error;
	GaiException(std::shared_ptr<java::lang::String> functionName,int error);
	GaiException(std::shared_ptr<java::lang::String> functionName,int error,std::shared_ptr<java::lang::Throwable> cause);
	std::shared_ptr<java::lang::String> virtual getMessage();
	std::shared_ptr<java::net::UnknownHostException> virtual rethrowAsUnknownHostException();
	std::shared_ptr<java::net::UnknownHostException> virtual rethrowAsUnknownHostException(std::shared_ptr<java::lang::String> detailMessage);
public:
	virtual ~GaiException(){
	}

}; // class GaiException
}; // namespace android::system

#endif //__android_system_GaiException__

