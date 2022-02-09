#ifndef __dalvik_system_TemporaryDirectory__
#define __dalvik_system_TemporaryDirectory__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\TemporaryDirectory.smali
#include "java2ctype.h"
#include "java.io.File.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace dalvik::system{
class TemporaryDirectory : public java::lang::Object {
protected:
private:
public:
	TemporaryDirectory();
	static void setUpDirectory(std::shared_ptr<java::io::File> baseDir);
	static void setUpDirectory(std::shared_ptr<java::lang::String> baseDir);
public:
	virtual ~TemporaryDirectory(){
	}

}; // class TemporaryDirectory
}; // namespace dalvik::system

#endif //__dalvik_system_TemporaryDirectory__

