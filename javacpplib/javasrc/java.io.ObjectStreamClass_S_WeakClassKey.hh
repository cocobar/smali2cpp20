#ifndef __java_io_ObjectStreamClass_S_WeakClassKey__
#define __java_io_ObjectStreamClass_S_WeakClassKey__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$WeakClassKey.smali
#include "java2ctype.h"
#include "java.lang.Class.hhh"
#include "java.lang.Object.hhh"
#include "java.lang.ref.WeakReference.hhh"

namespace java::io{
class ObjectStreamClass_S_WeakClassKey : public java::lang::ref::WeakReference<java::lang::Class<java::lang::Object>> {
public:
	ObjectStreamClass_S_WeakClassKey();
	virtual ~ObjectStreamClass_S_WeakClassKey();

}; // class ObjectStreamClass_S_WeakClassKey
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_WeakClassKey__

