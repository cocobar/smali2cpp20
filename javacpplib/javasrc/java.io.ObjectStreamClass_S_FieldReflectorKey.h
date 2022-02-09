#ifndef __java_io_ObjectStreamClass_S_FieldReflectorKey__
#define __java_io_ObjectStreamClass_S_FieldReflectorKey__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$FieldReflectorKey.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamField.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.lang.ref.WeakReference.h"

namespace java::io{
class ObjectStreamClass_S_FieldReflectorKey : public java::lang::ref::WeakReference<java::lang::Class<java::lang::Object>> {
protected:
private:
	int hash;
	bool nullClass;
	std::shared_ptr<java::lang::String> sigs;
public:
	ObjectStreamClass_S_FieldReflectorKey(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields,std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Class<java::lang::Object>>> queue);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
public:
	virtual ~ObjectStreamClass_S_FieldReflectorKey(){
	}

}; // class ObjectStreamClass_S_FieldReflectorKey
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_FieldReflectorKey__

