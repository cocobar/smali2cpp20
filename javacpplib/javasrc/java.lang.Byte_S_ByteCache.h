#ifndef __java_lang_Byte_S_ByteCache__
#define __java_lang_Byte_S_ByteCache__
// H L:\smali2cpp20\x64\Release\out\java\lang\Byte$ByteCache.smali
#include "java2ctype.h"
#include "java.lang.Byte.h"
#include "java.lang.Object.h"

namespace java::lang{
class Byte_S_ByteCache : public java::lang::Object {
protected:
private:
	Byte_S_ByteCache();
public:
	static std::shared_ptr<std::vector<java::lang::Byte>> cache;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Byte_S_ByteCache::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Byte_S_ByteCache(){
	}

}; // class Byte_S_ByteCache
}; // namespace java::lang

#endif //__java_lang_Byte_S_ByteCache__

