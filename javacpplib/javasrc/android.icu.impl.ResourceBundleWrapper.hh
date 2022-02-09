#ifndef __android_icu_impl_ResourceBundleWrapper__
#define __android_icu_impl_ResourceBundleWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper.smali
#include "java2ctype.h"
#include "android.icu.util.UResourceBundle.hh"

namespace android::icu::impl{
class ResourceBundleWrapper : public android::icu::util::UResourceBundle {
public:
	ResourceBundleWrapper();
	virtual ~ResourceBundleWrapper();

}; // class ResourceBundleWrapper
}; // namespace android::icu::impl

#endif //__android_icu_impl_ResourceBundleWrapper__

