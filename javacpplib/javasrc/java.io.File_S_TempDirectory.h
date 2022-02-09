#ifndef __java_io_File_S_TempDirectory__
#define __java_io_File_S_TempDirectory__
// H L:\smali2cpp20\x64\Release\out\java\io\File$TempDirectory.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class File_S_TempDirectory : public java::lang::Object {
protected:
private:
	File_S_TempDirectory();
public:
	static std::shared_ptr<java::io::File> generateFile(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::String> suffix,std::shared_ptr<java::io::File> dir);
public:
	virtual ~File_S_TempDirectory(){
	}

}; // class File_S_TempDirectory
}; // namespace java::io

#endif //__java_io_File_S_TempDirectory__

