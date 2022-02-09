#ifndef __android_icu_impl_UPropertyAliases_S_IsAcceptable__
#define __android_icu_impl_UPropertyAliases_S_IsAcceptable__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UPropertyAliases$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"

namespace android::icu::impl{
class UPropertyAliases_S_IsAcceptable : public android::icu::impl::ICUBinary_S_Authenticate {
protected:
private:
	UPropertyAliases_S_IsAcceptable();
public:
	UPropertyAliases_S_IsAcceptable(std::shared_ptr<android::icu::impl::UPropertyAliases_S_IsAcceptable> _this0);
	bool virtual isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version);
public:
	virtual ~UPropertyAliases_S_IsAcceptable(){
	}

}; // class UPropertyAliases_S_IsAcceptable
}; // namespace android::icu::impl

#endif //__android_icu_impl_UPropertyAliases_S_IsAcceptable__

