#ifndef __android_icu_impl_UCharacterProperty_S_11__
#define __android_icu_impl_UCharacterProperty_S_11__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$11.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

namespace android::icu::impl{
class UCharacterProperty_S_11 : public android::icu::impl::UCharacterProperty_S_BinaryProperty {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	UCharacterProperty_S_11(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0_1,int _S_anonymous0);
	bool virtual contains(int cVar3);
public:
	virtual ~UCharacterProperty_S_11(){
	}

}; // class UCharacterProperty_S_11
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_11__
