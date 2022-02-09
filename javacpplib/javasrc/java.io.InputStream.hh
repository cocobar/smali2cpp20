#ifndef __java_io_InputStream__
#define __java_io_InputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\InputStream.smali
#include "java2ctype.h"
#include "java.io.Closeable.hh"

namespace java::io{
class InputStream : public java::io::Closeable {
public:
	InputStream();
	virtual ~InputStream();

}; // class InputStream
}; // namespace java::io

#endif //__java_io_InputStream__

