#ifndef __java_io_DataInputStream__
#define __java_io_DataInputStream__
// H L:\smali2cpp20\x64\Release\out\java\io\DataInputStream.smali
#include "java2ctype.h"
#include "java.io.DataInput.hh"
#include "java.io.FilterInputStream.hh"

namespace java::io{
class DataInputStream : public java::io::FilterInputStream, public java::io::DataInput {
public:
	DataInputStream();
	virtual ~DataInputStream();

}; // class DataInputStream
}; // namespace java::io

#endif //__java_io_DataInputStream__

