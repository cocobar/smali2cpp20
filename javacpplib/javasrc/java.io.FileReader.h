#ifndef __java_io_FileReader__
#define __java_io_FileReader__
// H L:\smali2cpp20\x64\Release\out\java\io\FileReader.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.io.FileDescriptor.h"
#include "java.io.InputStreamReader.h"
#include "java.lang.String.h"

namespace java::io{
class FileReader : public java::io::InputStreamReader {
protected:
private:
public:
	FileReader(std::shared_ptr<java::io::File> file);
	FileReader(std::shared_ptr<java::io::FileDescriptor> fd);
	FileReader(std::shared_ptr<java::lang::String> fileName);
public:
	virtual ~FileReader(){
	}

}; // class FileReader
}; // namespace java::io

#endif //__java_io_FileReader__

