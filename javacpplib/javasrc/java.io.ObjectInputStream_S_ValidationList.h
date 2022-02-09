#ifndef __java_io_ObjectInputStream_S_ValidationList__
#define __java_io_ObjectInputStream_S_ValidationList__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$ValidationList.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_ValidationList_S_Callback.h"
#include "java.io.ObjectInputValidation.h"
#include "java.lang.Object.h"

namespace java::io{
class ObjectInputStream_S_ValidationList : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> list;
public:
	static std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> _get0(std::shared_ptr<java::io::ObjectInputStream_S_ValidationList> _this);
	ObjectInputStream_S_ValidationList();
	void virtual clear();
	void virtual doCallbacks();
	void virtual register(std::shared_ptr<java::io::ObjectInputValidation> obj,int priority);
public:
	virtual ~ObjectInputStream_S_ValidationList(){
	}

}; // class ObjectInputStream_S_ValidationList
}; // namespace java::io

#endif //__java_io_ObjectInputStream_S_ValidationList__

