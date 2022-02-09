#ifndef __java_io_ObjectStreamClass_S_WeakClassKey__
#define __java_io_ObjectStreamClass_S_WeakClassKey__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$WeakClassKey.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.lang.ref.WeakReference.h"

namespace java::io{
class ObjectStreamClass_S_WeakClassKey : public java::lang::ref::WeakReference<java::lang::Class<java::lang::Object>> {
protected:
private:
	int hash;
public:
	ObjectStreamClass_S_WeakClassKey(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Class<java::lang::Object>>> refQueue);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
public:
	virtual ~ObjectStreamClass_S_WeakClassKey(){
	}

}; // class ObjectStreamClass_S_WeakClassKey
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_WeakClassKey__

