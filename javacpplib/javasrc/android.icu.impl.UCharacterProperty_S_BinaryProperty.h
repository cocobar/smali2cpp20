#ifndef __android_icu_impl_UCharacterProperty_S_BinaryProperty__
#define __android_icu_impl_UCharacterProperty_S_BinaryProperty__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$BinaryProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class UCharacterProperty_S_BinaryProperty : public java::lang::Object {
protected:
private:
public:
	int column;
	int mask;
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	UCharacterProperty_S_BinaryProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source);
	UCharacterProperty_S_BinaryProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int column,int mask);
	bool virtual contains(int c);
	int virtual getSource();
public:
	virtual ~UCharacterProperty_S_BinaryProperty(){
	}

}; // class UCharacterProperty_S_BinaryProperty
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_BinaryProperty__

