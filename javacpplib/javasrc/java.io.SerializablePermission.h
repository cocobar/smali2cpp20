#ifndef __java_io_SerializablePermission__
#define __java_io_SerializablePermission__
// H L:\smali2cpp20\x64\Release\out\java\io\SerializablePermission.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.BasicPermission.h"

namespace java::io{
class SerializablePermission : public java::security::BasicPermission {
protected:
private:
public:
	SerializablePermission(std::shared_ptr<java::lang::String> name);
	SerializablePermission(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> actions);
public:
	virtual ~SerializablePermission(){
	}

}; // class SerializablePermission
}; // namespace java::io

#endif //__java_io_SerializablePermission__

