#ifndef __java_io_ObjectInputStream_S_1__
#define __java_io_ObjectInputStream_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$1.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.security.PrivilegedAction.h"

namespace java::io{
class ObjectInputStream_S_1 : public java::security::PrivilegedAction<java::lang::Boolean> {
protected:
private:
public:
	std::shared_ptr<java::lang::Class> val_S_subcl;
	ObjectInputStream_S_1(std::shared_ptr<java::lang::Class> var0);
	std::shared_ptr<java::lang::Boolean> virtual run();
public:
	virtual ~ObjectInputStream_S_1(){
	}

}; // class ObjectInputStream_S_1
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_1__

