#ifndef __java_io_StreamCorruptedException__
#define __java_io_StreamCorruptedException__
// H L:\smali2cpp20\x64\Release\out\java\io\StreamCorruptedException.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamException.hh"

namespace java::io{
class StreamCorruptedException : public java::io::ObjectStreamException {
public:
	StreamCorruptedException();
	virtual ~StreamCorruptedException();

}; // class StreamCorruptedException
}; // namespace java::io

#endif //__java_io_StreamCorruptedException__
