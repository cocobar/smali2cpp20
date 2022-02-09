#ifndef __android_icu_impl_ICUResourceBundleImpl_S_ResourceString__
#define __android_icu_impl_ICUResourceBundleImpl_S_ResourceString__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceString.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceBundleImpl_S_ResourceString : public android::icu::impl::ICUResourceBundleImpl {
protected:
private:
	std::shared_ptr<java::lang::String> value;
public:
	ICUResourceBundleImpl_S_ResourceString(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource);
	std::shared_ptr<java::lang::String> virtual getString();
	int virtual getType();
public:
	virtual ~ICUResourceBundleImpl_S_ResourceString(){
	}

}; // class ICUResourceBundleImpl_S_ResourceString
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleImpl_S_ResourceString__

