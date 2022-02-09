#ifndef __android_icu_impl_ResourceBundleWrapper_S_2_S_1__
#define __android_icu_impl_ResourceBundleWrapper_S_2_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper$2$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ResourceBundleWrapper_S_2.h"
#include "java.io.InputStream.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedAction.h"

namespace android::icu::impl{
class ResourceBundleWrapper_S_2_S_1 : public java::security::PrivilegedAction<java::io::InputStream> {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper_S_2> this_S_1;
	std::shared_ptr<java::lang::String> val_S_resName;
	std::shared_ptr<java::lang::ClassLoader> val_S_root;
	ResourceBundleWrapper_S_2_S_1(std::shared_ptr<android::icu::impl::ResourceBundleWrapper_S_2> this_S_1,std::shared_ptr<java::lang::ClassLoader> var1,std::shared_ptr<java::lang::String> var2);
	std::shared_ptr<java::io::InputStream> virtual run();
public:
	virtual ~ResourceBundleWrapper_S_2_S_1(){
	}

}; // class ResourceBundleWrapper_S_2_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_ResourceBundleWrapper_S_2_S_1__

