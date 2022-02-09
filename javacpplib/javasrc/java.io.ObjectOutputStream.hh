#ifndef __java_io_ObjectOutputStream__
#define __java_io_ObjectOutputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream.smali
#include "java2ctype.h"
#include "java.io.ObjectOutput.hh"
#include "java.io.ObjectStreamConstants.hh"
#include "java.io.OutputStream.hh"

namespace java::io{
class ObjectOutputStream : public java::io::OutputStream, public java::io::ObjectOutput, public java::io::ObjectStreamConstants {
public:
	ObjectOutputStream();
	virtual ~ObjectOutputStream();

}; // class ObjectOutputStream
}; // namespace java::io

#endif //__java_io_ObjectOutputStream__

