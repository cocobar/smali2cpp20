#ifndef __java_io_PushbackInputStream__
#define __java_io_PushbackInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\PushbackInputStream.smali
#include "java2ctype.h"
#include "java.io.FilterInputStream.hh"

namespace java::io{
class PushbackInputStream : public java::io::FilterInputStream {
public:
	PushbackInputStream();
	virtual ~PushbackInputStream();

}; // class PushbackInputStream
}; // namespace java::io

#endif //__java_io_PushbackInputStream__

