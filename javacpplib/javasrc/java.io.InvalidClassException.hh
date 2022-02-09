#ifndef __java_io_InvalidClassException__
#define __java_io_InvalidClassException__
// H L:\smali2cpp20\x64\Release\out\java\io\InvalidClassException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.hh"

namespace java::io{
class InvalidClassException : public java::io::ObjectStreamException {
public:
	InvalidClassException();
	virtual ~InvalidClassException();

}; // class InvalidClassException
}; // namespace java::io

#endif //__java_io_InvalidClassException__

