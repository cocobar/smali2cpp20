#ifndef __java_io_Reader__
#define __java_io_Reader__
// H L:\smali2cpp20\x64\Release\out\java\io\Reader.smali
#include "java2ctype.h"
#include "java.io.Closeable.hh"
#include "java.lang.Readable.hh"

namespace java::io{
class Reader : public java::lang::Readable, public java::io::Closeable {
public:
	Reader();
	virtual ~Reader();

}; // class Reader
}; // namespace java::io

#endif //__java_io_Reader__

