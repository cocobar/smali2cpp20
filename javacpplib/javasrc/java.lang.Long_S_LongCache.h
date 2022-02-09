#ifndef __java_lang_Long_S_LongCache__
#define __java_lang_Long_S_LongCache__
// H L:\smali2cpp20\x64\Release\out\java\lang\Long$LongCache.smali
#include "java2ctype.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"

namespace java::lang{
class Long_S_LongCache : public java::lang::Object {
protected:
private:
	Long_S_LongCache();
public:
	static std::shared_ptr<std::vector<java::lang::Long>> cache;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Long_S_LongCache::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Long_S_LongCache(){
	}

}; // class Long_S_LongCache
}; // namespace java::lang

#endif //__java_lang_Long_S_LongCache__

