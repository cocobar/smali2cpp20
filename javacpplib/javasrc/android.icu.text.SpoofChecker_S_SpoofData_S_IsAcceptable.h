#ifndef __android_icu_text_SpoofChecker_S_SpoofData_S_IsAcceptable__
#define __android_icu_text_SpoofChecker_S_SpoofData_S_IsAcceptable__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$SpoofData$IsAcceptable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary_S_Authenticate.h"

namespace android::icu::text{
class SpoofChecker_S_SpoofData_S_IsAcceptable : public android::icu::impl::ICUBinary_S_Authenticate {
protected:
private:
	SpoofChecker_S_SpoofData_S_IsAcceptable();
public:
	SpoofChecker_S_SpoofData_S_IsAcceptable(std::shared_ptr<android::icu::text::SpoofChecker_S_SpoofData_S_IsAcceptable> _this0);
	bool virtual isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version);
public:
	virtual ~SpoofChecker_S_SpoofData_S_IsAcceptable(){
	}

}; // class SpoofChecker_S_SpoofData_S_IsAcceptable
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_SpoofData_S_IsAcceptable__

