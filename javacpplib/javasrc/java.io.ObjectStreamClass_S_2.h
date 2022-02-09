#ifndef __java_io_ObjectStreamClass_S_2__
#define __java_io_ObjectStreamClass_S_2__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$2.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass.h"
#include "java.lang.Class.h"
#include "java.lang.Void.h"
#include "java.security.PrivilegedAction.h"

namespace java::io{
class ObjectStreamClass_S_2 : public java::security::PrivilegedAction<java::lang::Void> {
protected:
private:
public:
	std::shared_ptr<java::io::ObjectStreamClass> this_S_0;
	std::shared_ptr<java::lang::Class> val_S_cl;
	ObjectStreamClass_S_2(std::shared_ptr<java::io::ObjectStreamClass> this_S_0,std::shared_ptr<java::lang::Class> var1);
	std::shared_ptr<java::lang::Void> virtual run();
public:
	virtual ~ObjectStreamClass_S_2(){
	}

}; // class ObjectStreamClass_S_2
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_2__

