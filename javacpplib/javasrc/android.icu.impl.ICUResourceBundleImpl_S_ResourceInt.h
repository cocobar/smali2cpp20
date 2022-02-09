#ifndef __android_icu_impl_ICUResourceBundleImpl_S_ResourceInt__
#define __android_icu_impl_ICUResourceBundleImpl_S_ResourceInt__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceInt.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceBundleImpl_S_ResourceInt : public android::icu::impl::ICUResourceBundleImpl {
protected:
private:
public:
	ICUResourceBundleImpl_S_ResourceInt(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource);
	int virtual getInt();
	int virtual getType();
	int virtual getUInt();
public:
	virtual ~ICUResourceBundleImpl_S_ResourceInt(){
	}

}; // class ICUResourceBundleImpl_S_ResourceInt
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleImpl_S_ResourceInt__

