#ifndef __android_icu_impl_UCharacterProperty_S_NormInertBinaryProperty__
#define __android_icu_impl_UCharacterProperty_S_NormInertBinaryProperty__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$NormInertBinaryProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_BinaryProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

namespace android::icu::impl{
class UCharacterProperty_S_NormInertBinaryProperty : public android::icu::impl::UCharacterProperty_S_BinaryProperty {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	int which;
	UCharacterProperty_S_NormInertBinaryProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source,int which);
	bool virtual contains(int c);
public:
	virtual ~UCharacterProperty_S_NormInertBinaryProperty(){
	}

}; // class UCharacterProperty_S_NormInertBinaryProperty
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_NormInertBinaryProperty__

