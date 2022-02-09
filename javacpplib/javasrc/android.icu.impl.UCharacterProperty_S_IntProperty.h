#ifndef __android_icu_impl_UCharacterProperty_S_IntProperty__
#define __android_icu_impl_UCharacterProperty_S_IntProperty__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$IntProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class UCharacterProperty_S_IntProperty : public java::lang::Object {
protected:
private:
public:
	int column;
	int mask;
	int shift;
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	UCharacterProperty_S_IntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source);
	UCharacterProperty_S_IntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int column,int mask,int shift);
	int virtual getMaxValue(int which);
	int virtual getSource();
	int virtual getValue(int c);
public:
	virtual ~UCharacterProperty_S_IntProperty(){
	}

}; // class UCharacterProperty_S_IntProperty
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_IntProperty__

