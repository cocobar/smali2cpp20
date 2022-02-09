#ifndef __java_io_DefaultFileSystem__
#define __java_io_DefaultFileSystem__
// H L:\smali2cpp20\x64\Release\out\java\io\DefaultFileSystem.smali
#include "java2ctype.h"
#include "java.io.FileSystem.h"
#include "java.lang.Object.h"

namespace java::io{
class DefaultFileSystem : public java::lang::Object {
protected:
private:
public:
	DefaultFileSystem();
	static std::shared_ptr<java::io::FileSystem> getFileSystem();
public:
	virtual ~DefaultFileSystem(){
	}

}; // class DefaultFileSystem
}; // namespace java::io

#endif //__java_io_DefaultFileSystem__

