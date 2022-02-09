#ifndef __java_io_NotActiveException__
#define __java_io_NotActiveException__
// H L:\smali2cpp20\x64\Release\out\java\io\NotActiveException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.hh"

namespace java::io{
class NotActiveException : public java::io::ObjectStreamException {
public:
	NotActiveException();
	virtual ~NotActiveException();

}; // class NotActiveException
}; // namespace java::io

#endif //__java_io_NotActiveException__

