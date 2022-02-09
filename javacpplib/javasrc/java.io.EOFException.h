#ifndef __java_io_EOFException__
#define __java_io_EOFException__
// H L:\smali2cpp20\x64\Release\out\java\io\EOFException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

namespace java::io{
class EOFException : public java::io::IOException {
protected:
private:
	static long long serialVersionUID;
public:
	EOFException();
	EOFException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~EOFException(){
	}

}; // class EOFException
}; // namespace java::io

#endif //__java_io_EOFException__

