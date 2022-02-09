#ifndef __java_io_ObjectInputStream_S_ValidationList_S_1__
#define __java_io_ObjectInputStream_S_ValidationList_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$ValidationList$1.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_ValidationList.h"
#include "java.lang.Void.h"
#include "java.security.PrivilegedExceptionAction.h"

namespace java::io{
class ObjectInputStream_S_ValidationList_S_1 : public java::security::PrivilegedExceptionAction<java::lang::Void> {
protected:
private:
public:
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList> this_S_1;
	ObjectInputStream_S_ValidationList_S_1(std::shared_ptr<java::io::ObjectInputStream_S_ValidationList> this_S_1);
	std::shared_ptr<java::lang::Void> virtual run();
public:
	virtual ~ObjectInputStream_S_ValidationList_S_1(){
	}

}; // class ObjectInputStream_S_ValidationList_S_1
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_ValidationList_S_1__

