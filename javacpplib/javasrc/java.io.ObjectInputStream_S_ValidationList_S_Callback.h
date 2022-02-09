#ifndef __java_io_ObjectInputStream_S_ValidationList_S_Callback__
#define __java_io_ObjectInputStream_S_ValidationList_S_Callback__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$ValidationList$Callback.smali
#include "java2ctype.h"
#include "java.io.ObjectInputValidation.h"
#include "java.lang.Object.h"
#include "java.security.AccessControlContext.h"

namespace java::io{
class ObjectInputStream_S_ValidationList_S_Callback : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::security::AccessControlContext> acc;
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> next;
	std::shared_ptr<java::io::ObjectInputValidation> obj;
	int priority;
	ObjectInputStream_S_ValidationList_S_Callback(std::shared_ptr<java::io::ObjectInputValidation> obj,int priority,std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> next,std::shared_ptr<java::security::AccessControlContext> acc);
public:
	virtual ~ObjectInputStream_S_ValidationList_S_Callback(){
	}

}; // class ObjectInputStream_S_ValidationList_S_Callback
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_ValidationList_S_Callback__

