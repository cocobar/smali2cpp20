#ifndef __java_io_FileFilter__
#define __java_io_FileFilter__
// H L:\smali2cpp20\x64\Release\out\java\io\FileFilter.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.lang.Object.h"

namespace java::io{
class FileFilter : public java::lang::Object {
protected:
private:
public:
	bool accept(std::shared_ptr<java::io::File> var0) = 0;
	FileFilter(){ };
	virtual ~FileFilter(){ };

}; // class FileFilter
}; // namespace java::io

#endif //__java_io_FileFilter__

