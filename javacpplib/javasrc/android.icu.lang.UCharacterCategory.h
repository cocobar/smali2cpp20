#ifndef __android_icu_lang_UCharacterCategory__
#define __android_icu_lang_UCharacterCategory__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UCharacterCategory.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacterEnums_S_ECharacterCategory.h"
#include "java.lang.String.h"

namespace android::icu::lang{
class UCharacterCategory : public android::icu::lang::UCharacterEnums_S_ECharacterCategory {
protected:
private:
	UCharacterCategory();
public:
	static std::shared_ptr<java::lang::String> toString(int category);
public:
	virtual ~UCharacterCategory(){
	}

}; // class UCharacterCategory
}; // namespace android::icu::lang

#endif //__android_icu_lang_UCharacterCategory__

