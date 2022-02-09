#ifndef __java_io_ObjectStreamClass_S_1__
#define __java_io_ObjectStreamClass_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$1.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass.h"
#include "java.lang.Long.h"
#include "java.security.PrivilegedAction.h"

namespace java::io{
class ObjectStreamClass_S_1 : public java::security::PrivilegedAction<java::lang::Long> {
protected:
private:
public:
	std::shared_ptr<java::io::ObjectStreamClass> this_S_0;
	ObjectStreamClass_S_1(std::shared_ptr<java::io::ObjectStreamClass> this_S_0);
	std::shared_ptr<java::lang::Long> virtual run();
public:
	virtual ~ObjectStreamClass_S_1(){
	}

}; // class ObjectStreamClass_S_1
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_1__

