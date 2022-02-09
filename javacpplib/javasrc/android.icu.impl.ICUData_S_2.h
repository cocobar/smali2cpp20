#ifndef __android_icu_impl_ICUData_S_2__
#define __android_icu_impl_ICUData_S_2__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUData$2.smali
#include "java2ctype.h"
#include "java.io.InputStream.h"
#include "java.lang.Class.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace android::icu::impl{
class ICUData_S_2 : public java::security::PrivilegedAction<java::io::InputStream> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_resourceName;
	std::shared_ptr<java::lang::Class> val_S_root;
	ICUData_S_2(std::shared_ptr<java::lang::Class> var0,std::shared_ptr<java::lang::String> var1);
	std::shared_ptr<java::io::InputStream> virtual run();
public:
	virtual ~ICUData_S_2(){
	}

}; // class ICUData_S_2
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUData_S_2__

