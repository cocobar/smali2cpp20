#ifndef __java_io_FilePermission__
#define __java_io_FilePermission__
// H L:\smali2cpp20\x64\Release\out\java\io\FilePermission.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.String.h"
#include "java.security.Permission.h"

namespace java::io{
class FilePermission : public java::security::Permission, public java::io::Serializable {
protected:
private:
public:
	FilePermission(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> actions);
	std::shared_ptr<java::lang::String> virtual getActions();
	bool virtual implies(std::shared_ptr<java::security::Permission> p);
public:
	virtual ~FilePermission(){
	}

}; // class FilePermission
}; // namespace java::io

#endif //__java_io_FilePermission__

