#ifndef __android_icu_impl_ICUResourceBundleImpl_S_ResourceBinary__
#define __android_icu_impl_ICUResourceBundleImpl_S_ResourceBinary__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceBinary.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

namespace android::icu::impl{
class ICUResourceBundleImpl_S_ResourceBinary : public android::icu::impl::ICUResourceBundleImpl {
protected:
private:
public:
	ICUResourceBundleImpl_S_ResourceBinary(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource);
	std::shared_ptr<java::nio::ByteBuffer> virtual getBinary();
	unsigned char virtual getBinary(std::shared_ptr<unsigned char[]> ba);
	int virtual getType();
public:
	virtual ~ICUResourceBundleImpl_S_ResourceBinary(){
	}

}; // class ICUResourceBundleImpl_S_ResourceBinary
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleImpl_S_ResourceBinary__

