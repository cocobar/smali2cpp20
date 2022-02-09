#ifndef __java_io_File__
#define __java_io_File__
// H L:\smali2cpp20\x64\Release\out\java\io\File.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "java.lang.Comparable.hh"

namespace java::io{
class File : public java::io::Serializable, public java::lang::Comparable<java::io::File> {
public:
	File();
	virtual ~File();

}; // class File
}; // namespace java::io

#endif //__java_io_File__

