#ifndef __java_io_OutputStream__
#define __java_io_OutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\OutputStream.smali
#include "java2ctype.h"
#include "java.io.Closeable.hh"
#include "java.io.Flushable.hh"

namespace java::io{
class OutputStream : public java::io::Closeable, public java::io::Flushable {
public:
	OutputStream();
	virtual ~OutputStream();

}; // class OutputStream
}; // namespace java::io

#endif //__java_io_OutputStream__

