#ifndef __java_io_FileNotFoundException__
#define __java_io_FileNotFoundException__
// H L:\smali2cpp20\x64\Release\out\java\io\FileNotFoundException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"

namespace java::io{
class FileNotFoundException : public java::io::IOException {
protected:
private:
	static long long serialVersionUID;
	FileNotFoundException(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> reason);
public:
	FileNotFoundException();
	FileNotFoundException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~FileNotFoundException(){
	}

}; // class FileNotFoundException
}; // namespace java::io

#endif //__java_io_FileNotFoundException__

