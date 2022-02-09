#ifndef __java_lang_Character_S_CharacterCache__
#define __java_lang_Character_S_CharacterCache__
// H L:\smali2cpp20\x64\Release\out\java\lang\Character$CharacterCache.smali
#include "java2ctype.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"

namespace java::lang{
class Character_S_CharacterCache : public java::lang::Object {
protected:
private:
	Character_S_CharacterCache();
public:
	static std::shared_ptr<std::vector<java::lang::Character>> cache;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			java::lang::Character_S_CharacterCache::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Character_S_CharacterCache(){
	}

}; // class Character_S_CharacterCache
}; // namespace java::lang

#endif //__java_lang_Character_S_CharacterCache__

