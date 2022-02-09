#ifndef __android_icu_impl_UCharacterProperty_S_IsAcceptable__
#define __android_icu_impl_UCharacterProperty_S_IsAcceptable__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterProperty$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"

namespace android::icu::impl{
class UCharacterProperty_S_IsAcceptable : public android::icu::impl::ICUBinary_S_Authenticate {
protected:
private:
	UCharacterProperty_S_IsAcceptable();
public:
	UCharacterProperty_S_IsAcceptable(std::shared_ptr<android::icu::impl::UCharacterProperty_S_IsAcceptable> _this0);
	bool virtual isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version);
public:
	virtual ~UCharacterProperty_S_IsAcceptable(){
	}

}; // class UCharacterProperty_S_IsAcceptable
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterProperty_S_IsAcceptable__

