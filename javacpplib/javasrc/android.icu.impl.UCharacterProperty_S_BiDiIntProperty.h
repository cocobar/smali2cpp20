#ifndef __android_icu_impl_UCharacterProperty_S_BiDiIntProperty__
#define __android_icu_impl_UCharacterProperty_S_BiDiIntProperty__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$BiDiIntProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

namespace android::icu::impl{
class UCharacterProperty_S_BiDiIntProperty : public android::icu::impl::UCharacterProperty_S_IntProperty {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	UCharacterProperty_S_BiDiIntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0);
	int virtual getMaxValue(int which);
public:
	virtual ~UCharacterProperty_S_BiDiIntProperty(){
	}

}; // class UCharacterProperty_S_BiDiIntProperty
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_BiDiIntProperty__

