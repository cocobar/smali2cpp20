#ifndef __java_lang_Integer_S_IntegerCache__
#define __java_lang_Integer_S_IntegerCache__
// H L:\smali2cpp20\x64\Release\out\java\lang\Integer$IntegerCache.smali
#include "java2ctype.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"

namespace java::lang{
class Integer_S_IntegerCache : public java::lang::Object {
protected:
private:
	Integer_S_IntegerCache();
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<std::vector<java::lang::Integer>> cache;
	static int high;
	static int low;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Integer_S_IntegerCache::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Integer_S_IntegerCache(){
	}

}; // class Integer_S_IntegerCache
}; // namespace java::lang

#endif //__java_lang_Integer_S_IntegerCache__

