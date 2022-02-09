#ifndef __java_lang_Class_S_Caches__
#define __java_lang_Class_S_Caches__
// H L:\smali2cpp20\x64\Release\out\java\lang\Class$Caches.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.reflect.Type.h"
#include "libcore.util.BasicLruCache.h"

namespace java::lang{
class Class_S_Caches : public java::lang::Object {
protected:
private:
	static std::shared_ptr<libcore::util::BasicLruCache<java::lang::Class,std::vector<java::lang::reflect::Type>>> genericInterfaces;
	Class_S_Caches();
public:
	static std::shared_ptr<libcore::util::BasicLruCache> _get0();
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Class_S_Caches::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Class_S_Caches(){
	}

}; // class Class_S_Caches
}; // namespace java::lang

#endif //__java_lang_Class_S_Caches__

