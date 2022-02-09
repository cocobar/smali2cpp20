#ifndef __java_io_PrintStream__
#define __java_io_PrintStream__
// H L:\smali2cpp20\x64\Release\out\java\io\PrintStream.smali
#include "java2ctype.h"
#include "java.io.Closeable.hh"
#include "java.io.FilterOutputStream.hh"
#include "java.lang.Appendable.hh"

namespace java::io{
class PrintStream : public java::io::FilterOutputStream, public java::lang::Appendable, public java::io::Closeable {
public:
	PrintStream();
	virtual ~PrintStream();

}; // class PrintStream
}; // namespace java::io

#endif //__java_io_PrintStream__

