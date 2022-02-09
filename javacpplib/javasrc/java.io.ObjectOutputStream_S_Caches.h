#ifndef __java_io_ObjectOutputStream_S_Caches__
#define __java_io_ObjectOutputStream_S_Caches__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$Caches.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_WeakClassKey.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.util.concurrent.ConcurrentMap.h"

namespace java::io{
class ObjectOutputStream_S_Caches : public java::lang::Object {
protected:
private:
	ObjectOutputStream_S_Caches();
public:
	static std::shared_ptr<java::util::concurrent::ConcurrentMap<java::io::ObjectStreamClass_S_WeakClassKey,java::lang::Boolean>> subclassAudits;
	static std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Class<java::lang::Object>>> subclassAuditsQueue;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::ObjectOutputStream_S_Caches::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ObjectOutputStream_S_Caches(){
	}

}; // class ObjectOutputStream_S_Caches
}; // namespace java::io

#endif //__java_io_ObjectOutputStream_S_Caches__

