#ifndef __android_icu_lang_UScript_S_ScriptMetadata__
#define __android_icu_lang_UScript_S_ScriptMetadata__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UScript$ScriptMetadata.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::lang{
class UScript_S_ScriptMetadata : public java::lang::Object {
protected:
private:
	static int ASPIRATIONAL;
	static int CASED;
	static int EXCLUSION;
	static int LB_LETTERS;
	static int LIMITED_USE;
	static int RECOMMENDED;
	static int RTL;
	static std::shared_ptr<int[]> SCRIPT_PROPS;
	static int UNKNOWN;
	UScript_S_ScriptMetadata();
	static int getScriptProps(int script);
public:
	static int _wrap0(int script);
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::lang::UScript_S_ScriptMetadata::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UScript_S_ScriptMetadata(){
	}

}; // class UScript_S_ScriptMetadata
}; // namespace android::icu::lang

#endif //__android_icu_lang_UScript_S_ScriptMetadata__

