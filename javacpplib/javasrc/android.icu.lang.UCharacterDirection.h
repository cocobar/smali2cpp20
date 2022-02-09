#ifndef __android_icu_lang_UCharacterDirection__
#define __android_icu_lang_UCharacterDirection__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacterDirection.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacterEnums_S_ECharacterDirection.h"
#include "java.lang.String.h"

namespace android::icu::lang{
class UCharacterDirection : public android::icu::lang::UCharacterEnums_S_ECharacterDirection {
protected:
private:
	UCharacterDirection();
public:
	static std::shared_ptr<java::lang::String> toString(int dir);
public:
	virtual ~UCharacterDirection(){
	}

}; // class UCharacterDirection
}; // namespace android::icu::lang

#endif //__android_icu_lang_UCharacterDirection__

