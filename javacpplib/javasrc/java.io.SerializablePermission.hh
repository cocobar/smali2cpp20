#ifndef __java_io_SerializablePermission__
#define __java_io_SerializablePermission__
// H L:\smali2cpp20\x64\Release\out\java\io\SerializablePermission.smali
#include "java2ctype.h"
#include "java.security.BasicPermission.hh"

namespace java::io{
class SerializablePermission : public java::security::BasicPermission {
public:
	SerializablePermission();
	virtual ~SerializablePermission();

}; // class SerializablePermission
}; // namespace java::io

#endif //__java_io_SerializablePermission__
