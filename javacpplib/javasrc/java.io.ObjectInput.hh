#ifndef __java_io_ObjectInput__
#define __java_io_ObjectInput__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInput.smali
#include "java2ctype.h"
#include "java.io.DataInput.hh"
#include "java.lang.AutoCloseable.hh"

namespace java::io{
class ObjectInput : public java::io::DataInput, public java::lang::AutoCloseable {
public:
	ObjectInput();
	virtual ~ObjectInput();

}; // class ObjectInput
}; // namespace java::io

#endif //__java_io_ObjectInput__

