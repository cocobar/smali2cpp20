#ifndef __android_icu_impl_ICUResourceBundleImpl__
#define __android_icu_impl_ICUResourceBundleImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

namespace android::icu::impl{
class ICUResourceBundleImpl : public android::icu::impl::ICUResourceBundle {
protected:
	int resource;
	ICUResourceBundleImpl(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource);
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual createBundleObject(std::shared_ptr<java::lang::String> _key,int _resource,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
private:
public:
	ICUResourceBundleImpl(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle);
	int virtual getResource();
public:
	virtual ~ICUResourceBundleImpl(){
	}

}; // class ICUResourceBundleImpl
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleImpl__

