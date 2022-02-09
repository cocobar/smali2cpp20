#ifndef __java_io_ObjectStreamClass_S_Caches__
#define __java_io_ObjectStreamClass_S_Caches__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$Caches.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_FieldReflectorKey.h"
#include "java.io.ObjectStreamClass_S_WeakClassKey.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.ref.Reference.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.util.concurrent.ConcurrentMap.h"

namespace java::io{
class ObjectStreamClass_S_Caches : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Class<java::lang::Object>>> localDescsQueue;
	static std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Class<java::lang::Object>>> reflectorsQueue;
	ObjectStreamClass_S_Caches();
public:
	static std::shared_ptr<java::util::concurrent::ConcurrentMap<java::io::ObjectStreamClass_S_WeakClassKey,java::lang::ref::Reference<java::lang::Object>>> localDescs;
	static std::shared_ptr<java::util::concurrent::ConcurrentMap<java::io::ObjectStreamClass_S_FieldReflectorKey,java::lang::ref::Reference<java::lang::Object>>> reflectors;
	static std::shared_ptr<java::lang::ref::ReferenceQueue> _get0();
	static std::shared_ptr<java::lang::ref::ReferenceQueue> _get1();
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::ObjectStreamClass_S_Caches::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ObjectStreamClass_S_Caches(){
	}

}; // class ObjectStreamClass_S_Caches
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_Caches__

