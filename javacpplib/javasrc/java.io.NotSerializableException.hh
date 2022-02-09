#ifndef __java_io_NotSerializableException__
#define __java_io_NotSerializableException__
// H L:\smali2cpp20\x64\Release\out\java\io\NotSerializableException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.hh"

namespace java::io{
class NotSerializableException : public java::io::ObjectStreamException {
public:
	NotSerializableException();
	virtual ~NotSerializableException();

}; // class NotSerializableException
}; // namespace java::io

#endif //__java_io_NotSerializableException__

