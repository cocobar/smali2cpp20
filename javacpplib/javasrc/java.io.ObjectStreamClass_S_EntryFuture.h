#ifndef __java_io_ObjectStreamClass_S_EntryFuture__
#define __java_io_ObjectStreamClass_S_EntryFuture__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$EntryFuture.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.Thread.h"

namespace java::io{
class ObjectStreamClass_S_EntryFuture : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::Object> unset;
	std::shared_ptr<java::lang::Object> entry;
	std::shared_ptr<java::lang::Thread> owner;
	ObjectStreamClass_S_EntryFuture();
public:
	static void static_cinit();
	ObjectStreamClass_S_EntryFuture(std::shared_ptr<java::io::ObjectStreamClass_S_EntryFuture> _this0);
	std::shared_ptr<java::lang::Object> virtual get();
	std::shared_ptr<java::lang::Thread> virtual getOwner();
	bool virtual set(std::shared_ptr<java::lang::Object> entry);
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::ObjectStreamClass_S_EntryFuture::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ObjectStreamClass_S_EntryFuture(){
	}

}; // class ObjectStreamClass_S_EntryFuture
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_EntryFuture__

