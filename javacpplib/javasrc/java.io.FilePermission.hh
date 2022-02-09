#ifndef __java_io_FilePermission__
#define __java_io_FilePermission__
// H L:\smali2cpp20\x64\Release\out\java\io\FilePermission.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "java.security.Permission.hh"

namespace java::io{
class FilePermission : public java::security::Permission, public java::io::Serializable {
public:
	FilePermission();
	virtual ~FilePermission();

}; // class FilePermission
}; // namespace java::io

#endif //__java_io_FilePermission__

