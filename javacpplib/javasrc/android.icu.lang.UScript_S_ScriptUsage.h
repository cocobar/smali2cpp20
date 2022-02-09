#ifndef __android_icu_lang_UScript_S_ScriptUsage__
#define __android_icu_lang_UScript_S_ScriptUsage__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UScript$ScriptUsage.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::lang{
class UScript_S_ScriptUsage : public java::lang::Enum<android::icu::lang::UScript_S_ScriptUsage> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::lang::UScript_S_ScriptUsage>> _S_VALUES;
	UScript_S_ScriptUsage(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> ASPIRATIONAL;
	static std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> EXCLUDED;
	static std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> LIMITED_USE;
	static std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> NOT_ENCODED;
	static std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> RECOMMENDED;
	static std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> UNKNOWN;
	static void static_cinit();
	static std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::lang::UScript_S_ScriptUsage> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::lang::UScript_S_ScriptUsage::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UScript_S_ScriptUsage(){
	}

}; // class UScript_S_ScriptUsage
}; // namespace android::icu::lang

#endif //__android_icu_lang_UScript_S_ScriptUsage__

