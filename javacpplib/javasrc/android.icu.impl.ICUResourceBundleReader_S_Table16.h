#ifndef __android_icu_impl_ICUResourceBundleReader_S_Table16__
#define __android_icu_impl_ICUResourceBundleReader_S_Table16__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Table16.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table.h"
#include "android.icu.impl.ICUResourceBundleReader.h"

namespace android::icu::impl{
class ICUResourceBundleReader_S_Table16 : public android::icu::impl::ICUResourceBundleReader_S_Table {
protected:
private:
public:
	ICUResourceBundleReader_S_Table16(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int offset);
	int virtual getContainerResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index);
public:
	virtual ~ICUResourceBundleReader_S_Table16(){
	}

}; // class ICUResourceBundleReader_S_Table16
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_Table16__

