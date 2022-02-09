#ifndef __android_icu_impl_UCharacterProperty_S_16__
#define __android_icu_impl_UCharacterProperty_S_16__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$16.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_BiDiIntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

namespace android::icu::impl{
class UCharacterProperty_S_16 : public android::icu::impl::UCharacterProperty_S_BiDiIntProperty {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	UCharacterProperty_S_16(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1);
	int virtual getValue(int c);
public:
	virtual ~UCharacterProperty_S_16(){
	}

}; // class UCharacterProperty_S_16
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_16__

