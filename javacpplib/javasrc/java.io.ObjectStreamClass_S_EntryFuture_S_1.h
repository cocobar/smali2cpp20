#ifndef __java_io_ObjectStreamClass_S_EntryFuture_S_1__
#define __java_io_ObjectStreamClass_S_EntryFuture_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$EntryFuture$1.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_EntryFuture.h"
#include "java.lang.Void.h"
#include "java.security.PrivilegedAction.h"

namespace java::io{
class ObjectStreamClass_S_EntryFuture_S_1 : public java::security::PrivilegedAction<java::lang::Void> {
protected:
private:
public:
	std::shared_ptr<java::io::ObjectStreamClass_S_EntryFuture> this_S_1;
	ObjectStreamClass_S_EntryFuture_S_1(std::shared_ptr<java::io::ObjectStreamClass_S_EntryFuture> this_S_1);
	std::shared_ptr<java::lang::Void> virtual run();
public:
	virtual ~ObjectStreamClass_S_EntryFuture_S_1(){
	}

}; // class ObjectStreamClass_S_EntryFuture_S_1
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_EntryFuture_S_1__

