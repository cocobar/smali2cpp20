#ifndef __java_io_ObjectOutput__
#define __java_io_ObjectOutput__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutput.smali
#include "java2ctype.h"
#include "java.io.DataOutput.hh"
#include "java.lang.AutoCloseable.hh"

namespace java::io{
class ObjectOutput : public java::io::DataOutput, public java::lang::AutoCloseable {
public:
	ObjectOutput();
	virtual ~ObjectOutput();

}; // class ObjectOutput
}; // namespace java::io

#endif //__java_io_ObjectOutput__

