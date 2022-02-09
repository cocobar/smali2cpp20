#ifndef __android_icu_impl_ICUData_S_1__
#define __android_icu_impl_ICUData_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUData$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.net.URL.h"
#include "java.security.PrivilegedAction.h"

namespace android::icu::impl{
class ICUData_S_1 : public java::security::PrivilegedAction<java::net::URL> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_resourceName;
	ICUData_S_1(std::shared_ptr<java::lang::String> var0);
	std::shared_ptr<java::net::URL> virtual run();
public:
	virtual ~ICUData_S_1(){
	}

}; // class ICUData_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUData_S_1__

