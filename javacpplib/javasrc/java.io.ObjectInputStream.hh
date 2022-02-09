#ifndef __java_io_ObjectInputStream__
#define __java_io_ObjectInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream.smali
#include "java2ctype.h"
#include "java.io.InputStream.hh"
#include "java.io.ObjectInput.hh"
#include "java.io.ObjectStreamConstants.hh"

namespace java::io{
class ObjectInputStream : public java::io::InputStream, public java::io::ObjectInput, public java::io::ObjectStreamConstants {
public:
	ObjectInputStream();
	virtual ~ObjectInputStream();

}; // class ObjectInputStream
}; // namespace java::io

#endif //__java_io_ObjectInputStream__

