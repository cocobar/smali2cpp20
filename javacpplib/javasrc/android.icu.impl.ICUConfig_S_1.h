#ifndef __android_icu_impl_ICUConfig_S_1__
#define __android_icu_impl_ICUConfig_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUConfig$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace android::icu::impl{
class ICUConfig_S_1 : public java::security::PrivilegedAction<java::lang::String> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_fname;
	ICUConfig_S_1(std::shared_ptr<java::lang::String> var0);
	std::shared_ptr<java::lang::String> virtual run();
public:
	virtual ~ICUConfig_S_1(){
	}

}; // class ICUConfig_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUConfig_S_1__

