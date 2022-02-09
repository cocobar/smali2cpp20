#ifndef __java_io_BufferedOutputStream__
#define __java_io_BufferedOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\BufferedOutputStream.smali
#include "java2ctype.h"
#include "java.io.FilterOutputStream.hh"

namespace java::io{
class BufferedOutputStream : public java::io::FilterOutputStream {
public:
	BufferedOutputStream();
	virtual ~BufferedOutputStream();

}; // class BufferedOutputStream
}; // namespace java::io

#endif //__java_io_BufferedOutputStream__

