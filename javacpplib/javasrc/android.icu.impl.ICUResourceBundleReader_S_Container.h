#ifndef __android_icu_impl_ICUResourceBundleReader_S_Container__
#define __android_icu_impl_ICUResourceBundleReader_S_Container__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Container.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceBundleReader_S_Container : public java::lang::Object {
protected:
	int itemsOffset;
	int size;
	int virtual getContainer16Resource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index);
	int virtual getContainer32Resource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index);
private:
public:
	ICUResourceBundleReader_S_Container();
	int virtual getContainerResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index);
	int virtual getResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,std::shared_ptr<java::lang::String> resKey);
	int virtual getSize();
public:
	virtual ~ICUResourceBundleReader_S_Container(){
	}

}; // class ICUResourceBundleReader_S_Container
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_Container__

