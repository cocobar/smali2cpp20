#ifndef __android_icu_util_StringTrieBuilder_S_State__
#define __android_icu_util_StringTrieBuilder_S_State__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\StringTrieBuilder$State.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class StringTrieBuilder_S_State : public java::lang::Enum<android::icu::util::StringTrieBuilder_S_State> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::StringTrieBuilder_S_State>> _S_VALUES;
	StringTrieBuilder_S_State(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> ADDING;
	static std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> BUILDING_FAST;
	static std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> BUILDING_SMALL;
	static std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> BUILT;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::StringTrieBuilder_S_State> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::StringTrieBuilder_S_State::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~StringTrieBuilder_S_State(){
	}

}; // class StringTrieBuilder_S_State
}; // namespace android::icu::util

#endif //__android_icu_util_StringTrieBuilder_S_State__

