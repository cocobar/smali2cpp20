#ifndef __java_io_InvalidObjectException__
#define __java_io_InvalidObjectException__
// H L:\smali2cpp20\x64\Release\out\java\io\InvalidObjectException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.hh"

namespace java::io{
class InvalidObjectException : public java::io::ObjectStreamException {
public:
	InvalidObjectException();
	virtual ~InvalidObjectException();

}; // class InvalidObjectException
}; // namespace java::io

#endif //__java_io_InvalidObjectException__

