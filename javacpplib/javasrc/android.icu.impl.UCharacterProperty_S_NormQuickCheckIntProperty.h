#ifndef __android_icu_impl_UCharacterProperty_S_NormQuickCheckIntProperty__
#define __android_icu_impl_UCharacterProperty_S_NormQuickCheckIntProperty__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$NormQuickCheckIntProperty.smali
#include "java2ctype.h"
#include "android.icu.impl.UCharacterProperty_S_IntProperty.h"
#include "android.icu.impl.UCharacterProperty.h"

namespace android::icu::impl{
class UCharacterProperty_S_NormQuickCheckIntProperty : public android::icu::impl::UCharacterProperty_S_IntProperty {
protected:
private:
public:
	int max;
	std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0;
	int which;
	UCharacterProperty_S_NormQuickCheckIntProperty(std::shared_ptr<android::icu::impl::UCharacterProperty> this_S_0,int source,int which,int max);
	int virtual getMaxValue(int which);
	int virtual getValue(int c);
public:
	virtual ~UCharacterProperty_S_NormQuickCheckIntProperty(){
	}

}; // class UCharacterProperty_S_NormQuickCheckIntProperty
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_NormQuickCheckIntProperty__

