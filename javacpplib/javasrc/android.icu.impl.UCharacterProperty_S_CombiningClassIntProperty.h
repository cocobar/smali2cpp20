#ifndef __android_icu_impl_UCharacterProperty_S_CombiningClassIntProperty__
#define __android_icu_impl_UCharacterProperty_S_CombiningClassIntProperty__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$CombiningClassIntProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

namespace android::icu::impl{
class UCharacterProperty_S_CombiningClassIntProperty : public android::icu::impl::UCharacterProperty_S_IntProperty {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	UCharacterProperty_S_CombiningClassIntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source);
	int virtual getMaxValue(int which);
public:
	virtual ~UCharacterProperty_S_CombiningClassIntProperty(){
	}

}; // class UCharacterProperty_S_CombiningClassIntProperty
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_CombiningClassIntProperty__
