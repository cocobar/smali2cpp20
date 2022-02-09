#ifndef __android_icu_lang_UCharacter__
#define __android_icu_lang_UCharacter__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacter.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacterEnums_S_ECharacterCategory.hh"
#include "android.icu.lang.UCharacterEnums_S_ECharacterDirection.hh"

namespace android::icu::lang{
class UCharacter : public android::icu::lang::UCharacterEnums_S_ECharacterCategory, public android::icu::lang::UCharacterEnums_S_ECharacterDirection {
public:
	UCharacter();
	virtual ~UCharacter();

}; // class UCharacter
}; // namespace android::icu::lang

#endif //__android_icu_lang_UCharacter__

