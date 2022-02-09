#ifndef __java_io_InterruptedIOException__
#define __java_io_InterruptedIOException__
// H L:\smali2cpp20\x64\Release\out\java\io\InterruptedIOException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::io{
class InterruptedIOException : public java::io::IOException {
protected:
private:
	static long long serialVersionUID;
public:
	int bytesTransferred;
	InterruptedIOException();
	InterruptedIOException(std::shared_ptr<java::lang::String> s);
	InterruptedIOException(std::shared_ptr<java::lang::String> detailMessage,std::shared_ptr<java::lang::Throwable> cause);
	InterruptedIOException(std::shared_ptr<java::lang::Throwable> cause);
public:
	virtual ~InterruptedIOException(){
	}

}; // class InterruptedIOException
}; // namespace java::io

#endif //__java_io_InterruptedIOException__

