#ifndef __android_icu_impl_ICUBinary_S_DatPackageReader_S_IsAcceptable__
#define __android_icu_impl_ICUBinary_S_DatPackageReader_S_IsAcceptable__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$DatPackageReader$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"

namespace android::icu::impl{
class ICUBinary_S_DatPackageReader_S_IsAcceptable : public android::icu::impl::ICUBinary_S_Authenticate {
protected:
private:
	ICUBinary_S_DatPackageReader_S_IsAcceptable();
public:
	ICUBinary_S_DatPackageReader_S_IsAcceptable(std::shared_ptr<android::icu::impl::ICUBinary_S_DatPackageReader_S_IsAcceptable> _this0);
	bool virtual isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version);
public:
	virtual ~ICUBinary_S_DatPackageReader_S_IsAcceptable(){
	}

}; // class ICUBinary_S_DatPackageReader_S_IsAcceptable
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUBinary_S_DatPackageReader_S_IsAcceptable__

