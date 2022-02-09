#ifndef __android_icu_impl_ICUResourceBundleImpl_S_ResourceIntVector__
#define __android_icu_impl_ICUResourceBundleImpl_S_ResourceIntVector__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceIntVector.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceBundleImpl_S_ResourceIntVector : public android::icu::impl::ICUResourceBundleImpl {
protected:
private:
public:
	ICUResourceBundleImpl_S_ResourceIntVector(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource);
	int virtual getIntVector();
	int virtual getType();
public:
	virtual ~ICUResourceBundleImpl_S_ResourceIntVector(){
	}

}; // class ICUResourceBundleImpl_S_ResourceIntVector
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleImpl_S_ResourceIntVector__

