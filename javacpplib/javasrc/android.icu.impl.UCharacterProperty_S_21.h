#ifndef __android_icu_impl_UCharacterProperty_S_21__
#define __android_icu_impl_UCharacterProperty_S_21__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$21.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_CombiningClassIntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

namespace android::icu::impl{
class UCharacterProperty_S_21 : public android::icu::impl::UCharacterProperty_S_CombiningClassIntProperty {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	UCharacterProperty_S_21(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0);
	int virtual getValue(int c);
public:
	virtual ~UCharacterProperty_S_21(){
	}

}; // class UCharacterProperty_S_21
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_21__

