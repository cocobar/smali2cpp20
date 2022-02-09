#ifndef __java_io_UnsupportedEncodingException__
#define __java_io_UnsupportedEncodingException__
// H L:\smali2cpp20\x64\Release\out\java\io\UnsupportedEncodingException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

namespace java::io{
class UnsupportedEncodingException : public java::io::IOException {
protected:
private:
	static long long serialVersionUID;
public:
	UnsupportedEncodingException();
	UnsupportedEncodingException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~UnsupportedEncodingException(){
	}

}; // class UnsupportedEncodingException
}; // namespace java::io

#endif //__java_io_UnsupportedEncodingException__

