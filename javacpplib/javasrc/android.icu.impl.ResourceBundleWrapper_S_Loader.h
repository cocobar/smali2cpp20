#ifndef __android_icu_impl_ResourceBundleWrapper_S_Loader__
#define __android_icu_impl_ResourceBundleWrapper_S_Loader__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper$Loader.smali
#include "java2ctype.h"
#include "android.icu.impl.ResourceBundleWrapper.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class ResourceBundleWrapper_S_Loader : public java::lang::Object {
protected:
private:
	ResourceBundleWrapper_S_Loader();
public:
	ResourceBundleWrapper_S_Loader(std::shared_ptr<android::icu::impl::ResourceBundleWrapper_S_Loader> _this0);
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper> load() = 0;
public:
	virtual ~ResourceBundleWrapper_S_Loader(){
	}

}; // class ResourceBundleWrapper_S_Loader
}; // namespace android::icu::impl

#endif //__android_icu_impl_ResourceBundleWrapper_S_Loader__

