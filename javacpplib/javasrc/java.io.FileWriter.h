#ifndef __java_io_FileWriter__
#define __java_io_FileWriter__
// H L:\smali2cpp20\x64\Release\out\java\io\FileWriter.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.io.OutputStreamWriter.h"
#include "java.lang.String.h"

namespace java::io{
class FileWriter : public java::io::OutputStreamWriter {
protected:
private:
public:
	FileWriter(std::shared_ptr<java::io::File> file);
	FileWriter(std::shared_ptr<java::io::File> file,bool append);
	FileWriter(std::shared_ptr<java::io::FileDescriptor> fd);
	FileWriter(std::shared_ptr<java::lang::String> fileName);
	FileWriter(std::shared_ptr<java::lang::String> fileName,bool append);
public:
	virtual ~FileWriter(){
	}

}; // class FileWriter
}; // namespace java::io

#endif //__java_io_FileWriter__

