#ifndef __android_icu_impl_ResourceBundleWrapper_S_2__
#define __android_icu_impl_ResourceBundleWrapper_S_2__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper$2.smali
#include "java2ctype.h"
#include "android.icu.impl.ResourceBundleWrapper_S_Loader.h"
#include "android.icu.impl.ResourceBundleWrapper.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ResourceBundleWrapper_S_2 : public android::icu::impl::ResourceBundleWrapper_S_Loader {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_baseName;
	std::shared_ptr<java::lang::String> val_S_defaultID;
	bool val_S_disableFallback;
	std::shared_ptr<java::lang::String> val_S_localeID;
	std::shared_ptr<java::lang::String> val_S_name;
	std::shared_ptr<java::lang::ClassLoader> val_S_root;
	ResourceBundleWrapper_S_2(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1,std::shared_ptr<java::lang::String> var2,std::shared_ptr<java::lang::ClassLoader> var3,bool var4,std::shared_ptr<java::lang::String> var5);
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper> virtual load();
public:
	virtual ~ResourceBundleWrapper_S_2(){
	}

}; // class ResourceBundleWrapper_S_2
}; // namespace android::icu::impl

#endif //__android_icu_impl_ResourceBundleWrapper_S_2__

