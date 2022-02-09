#ifndef __android_icu_impl_ICUBinary_S_Authenticate__
#define __android_icu_impl_ICUBinary_S_Authenticate__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUBinary$Authenticate.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class ICUBinary_S_Authenticate : public java::lang::Object {
protected:
private:
public:
	bool isDataVersionAcceptable(std::shared_ptr<unsigned char[]> var0) = 0;
	ICUBinary_S_Authenticate(){ };
	virtual ~ICUBinary_S_Authenticate(){ };

}; // class ICUBinary_S_Authenticate
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUBinary_S_Authenticate__

