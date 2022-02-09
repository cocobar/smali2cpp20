#ifndef __android_icu_impl_ICUResourceBundle_S_3__
#define __android_icu_impl_ICUResourceBundle_S_3__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$3.smali
#include "java2ctype.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"
#include "java.security.PrivilegedAction.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUResourceBundle_S_3 : public java::security::PrivilegedAction<java::lang::Void> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_bn;
	std::shared_ptr<java::util::Set> val_S_names;
	std::shared_ptr<java::lang::ClassLoader> val_S_root;
	ICUResourceBundle_S_3(std::shared_ptr<java::lang::ClassLoader> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::util::Set> var2);
	std::shared_ptr<java::lang::Void> virtual run();
public:
	virtual ~ICUResourceBundle_S_3(){
	}

}; // class ICUResourceBundle_S_3
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundle_S_3__

