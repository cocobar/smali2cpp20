#ifndef __android_icu_impl_ICUResourceBundleImpl_S_ResourceContainer__
#define __android_icu_impl_ICUResourceBundleImpl_S_ResourceContainer__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceContainer.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Container.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

namespace android::icu::impl{
class ICUResourceBundleImpl_S_ResourceContainer : public android::icu::impl::ICUResourceBundleImpl {
protected:
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_Container> value;
	std::shared_ptr<android::icu::util::UResourceBundle> virtual createBundleObject(int index,std::shared_ptr<java::lang::String> resKey,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	int virtual getContainerResource(int index);
private:
public:
	ICUResourceBundleImpl_S_ResourceContainer(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle);
	ICUResourceBundleImpl_S_ResourceContainer(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource);
	int virtual getSize();
	std::shared_ptr<java::lang::String> virtual getString(int index);
public:
	virtual ~ICUResourceBundleImpl_S_ResourceContainer(){
	}

}; // class ICUResourceBundleImpl_S_ResourceContainer
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleImpl_S_ResourceContainer__

