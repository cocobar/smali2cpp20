#ifndef __java_io_ObjectOutputStream_S_BlockDataOutputStream__
#define __java_io_ObjectOutputStream_S_BlockDataOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$BlockDataOutputStream.smali
#include "java2ctype.h"
#include "java.io.DataOutput.hh"
#include "java.io.OutputStream.hh"

namespace java::io{
class ObjectOutputStream_S_BlockDataOutputStream : public java::io::OutputStream, public java::io::DataOutput {
public:
	ObjectOutputStream_S_BlockDataOutputStream();
	virtual ~ObjectOutputStream_S_BlockDataOutputStream();

}; // class ObjectOutputStream_S_BlockDataOutputStream
}; // namespace java::io

#endif //__java_io_ObjectOutputStream_S_BlockDataOutputStream__

