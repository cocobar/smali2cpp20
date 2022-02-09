#ifndef __java_io_ObjectStreamClass_S_ClassDataSlot__
#define __java_io_ObjectStreamClass_S_ClassDataSlot__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$ClassDataSlot.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass.h"
#include "java.lang.Object.h"

namespace java::io{
class ObjectStreamClass_S_ClassDataSlot : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	bool hasData;
	ObjectStreamClass_S_ClassDataSlot(std::shared_ptr<java::io::ObjectStreamClass> desc,bool hasData);
public:
	virtual ~ObjectStreamClass_S_ClassDataSlot(){
	}

}; // class ObjectStreamClass_S_ClassDataSlot
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_ClassDataSlot__

