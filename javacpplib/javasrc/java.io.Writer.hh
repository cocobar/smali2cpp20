#ifndef __java_io_Writer__
#define __java_io_Writer__
// H L:\smali2cpp20\x64\Release\out\java\io\Writer.smali
#include "java2ctype.h"
#include "java.io.Closeable.hh"
#include "java.io.Flushable.hh"
#include "java.lang.Appendable.hh"

namespace java::io{
class Writer : public java::lang::Appendable, public java::io::Closeable, public java::io::Flushable {
public:
	Writer();
	virtual ~Writer();

}; // class Writer
}; // namespace java::io

#endif //__java_io_Writer__

