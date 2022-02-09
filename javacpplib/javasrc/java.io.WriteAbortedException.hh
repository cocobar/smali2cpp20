#ifndef __java_io_WriteAbortedException__
#define __java_io_WriteAbortedException__
// H L:\smali2cpp20\x64\Release\out\java\io\WriteAbortedException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.hh"

namespace java::io{
class WriteAbortedException : public java::io::ObjectStreamException {
public:
	WriteAbortedException();
	virtual ~WriteAbortedException();

}; // class WriteAbortedException
}; // namespace java::io

#endif //__java_io_WriteAbortedException__

