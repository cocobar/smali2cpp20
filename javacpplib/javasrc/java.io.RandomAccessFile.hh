#ifndef __java_io_RandomAccessFile__
#define __java_io_RandomAccessFile__
// H L:\smali2cpp20\x64\Release\out\java\io\RandomAccessFile.smali
#include "java2ctype.h"
#include "java.io.Closeable.hh"
#include "java.io.DataInput.hh"
#include "java.io.DataOutput.hh"

namespace java::io{
class RandomAccessFile : public java::io::DataOutput, public java::io::DataInput, public java::io::Closeable {
public:
	RandomAccessFile();
	virtual ~RandomAccessFile();

}; // class RandomAccessFile
}; // namespace java::io

#endif //__java_io_RandomAccessFile__

