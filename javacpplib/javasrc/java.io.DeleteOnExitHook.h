#ifndef __java_io_DeleteOnExitHook__
#define __java_io_DeleteOnExitHook__
// H L:\smali2cpp20\x64\Release\out\java\io\DeleteOnExitHook.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.LinkedHashSet.h"

namespace java::io{
class DeleteOnExitHook : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::LinkedHashSet<java::lang::String>> files;
	DeleteOnExitHook();
public:
	static void static_cinit();
	static void add(std::shared_ptr<java::lang::String> file);
	static void runHooks();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::io::DeleteOnExitHook::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DeleteOnExitHook(){
	}

}; // class DeleteOnExitHook
}; // namespace java::io

#endif //__java_io_DeleteOnExitHook__

