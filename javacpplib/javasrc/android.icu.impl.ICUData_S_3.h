#ifndef __android_icu_impl_ICUData_S_3__
#define __android_icu_impl_ICUData_S_3__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUData$3.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace android::icu::impl{
class ICUData_S_3 : public java::security::PrivilegedAction<java::io::InputStream> {
protected:
private:
public:
	std::shared_ptr<java::lang::ClassLoader> val_S_loader;
	std::shared_ptr<java::lang::String> val_S_resourceName;
	ICUData_S_3(std::shared_ptr<java::lang::ClassLoader> var0,std::shared_ptr<java::lang::String> var1);
	std::shared_ptr<java::io::InputStream> virtual run();
public:
	virtual ~ICUData_S_3(){
	}

}; // class ICUData_S_3
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUData_S_3__

