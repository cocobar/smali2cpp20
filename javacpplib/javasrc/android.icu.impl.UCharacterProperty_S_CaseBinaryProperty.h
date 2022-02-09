#ifndef __android_icu_impl_UCharacterProperty_S_CaseBinaryProperty__
#define __android_icu_impl_UCharacterProperty_S_CaseBinaryProperty__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$CaseBinaryProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

namespace android::icu::impl{
class UCharacterProperty_S_CaseBinaryProperty : public android::icu::impl::UCharacterProperty_S_BinaryProperty {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	int which;
	UCharacterProperty_S_CaseBinaryProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int which);
	bool virtual contains(int c);
public:
	virtual ~UCharacterProperty_S_CaseBinaryProperty(){
	}

}; // class UCharacterProperty_S_CaseBinaryProperty
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_CaseBinaryProperty__

