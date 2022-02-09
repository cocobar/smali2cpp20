#ifndef __android_icu_impl_ICUResourceBundleReader_S_Array__
#define __android_icu_impl_ICUResourceBundleReader_S_Array__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Array.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Container.h"
#include "android.icu.impl.UResource_S_Array.h"
#include "android.icu.impl.UResource_S_Value.h"

namespace android::icu::impl{
class ICUResourceBundleReader_S_Array : public android::icu::impl::ICUResourceBundleReader_S_Container, public android::icu::impl::UResource_S_Array {
protected:
private:
public:
	ICUResourceBundleReader_S_Array();
	bool virtual getValue(int i,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
public:
	virtual ~ICUResourceBundleReader_S_Array(){
	}

}; // class ICUResourceBundleReader_S_Array
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_Array__

