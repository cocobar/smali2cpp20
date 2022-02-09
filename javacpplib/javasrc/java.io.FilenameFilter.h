#ifndef __java_io_FilenameFilter__
#define __java_io_FilenameFilter__
// H L:\smali2cpp20\x64\Release\out\java\io\FilenameFilter.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::io{
class FilenameFilter : public java::lang::Object {
protected:
private:
public:
	bool accept(std::shared_ptr<java::io::File> var0,std::shared_ptr<java::lang::String> var1) = 0;
	FilenameFilter(){ };
	virtual ~FilenameFilter(){ };

}; // class FilenameFilter
}; // namespace java::io

#endif //__java_io_FilenameFilter__

