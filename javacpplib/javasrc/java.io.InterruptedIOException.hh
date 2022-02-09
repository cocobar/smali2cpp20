#ifndef __java_io_InterruptedIOException__
#define __java_io_InterruptedIOException__
// H L:\smali2cpp20\x64\Release\out\java\io\InterruptedIOException.smali
#include "java2ctype.h"
#include "java.io.IOException.hh"

namespace java::io{
class InterruptedIOException : public java::io::IOException {
public:
	InterruptedIOException();
	virtual ~InterruptedIOException();

}; // class InterruptedIOException
}; // namespace java::io

#endif //__java_io_InterruptedIOException__

