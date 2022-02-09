#ifndef __android_icu_impl_ResourceBundleWrapper_S_1__
#define __android_icu_impl_ResourceBundleWrapper_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ResourceBundleWrapper_S_Loader.h"
#include "android.icu.impl.ResourceBundleWrapper.h"
#include "android.icu.impl.SoftCache.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ResourceBundleWrapper_S_1 : public android::icu::impl::SoftCache<java::lang::String,android::icu::impl::ResourceBundleWrapper,android::icu::impl::ResourceBundleWrapper_S_Loader> {
protected:
	std::shared_ptr<android::icu::impl::ResourceBundleWrapper> virtual createInstance(std::shared_ptr<java::lang::String> unusedKey,std::shared_ptr<android::icu::impl::ResourceBundleWrapper_S_Loader> loader);
private:
public:
	ResourceBundleWrapper_S_1();
public:
	virtual ~ResourceBundleWrapper_S_1(){
	}

}; // class ResourceBundleWrapper_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_ResourceBundleWrapper_S_1__

