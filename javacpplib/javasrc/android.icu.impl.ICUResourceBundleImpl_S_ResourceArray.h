#ifndef __android_icu_impl_ICUResourceBundleImpl_S_ResourceArray__
#define __android_icu_impl_ICUResourceBundleImpl_S_ResourceArray__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceArray.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceContainer.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

namespace android::icu::impl{
class ICUResourceBundleImpl_S_ResourceArray : public android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer {
protected:
	std::shared_ptr<android::icu::util::UResourceBundle> virtual handleGet(int index,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	std::shared_ptr<android::icu::util::UResourceBundle> virtual handleGet(std::shared_ptr<java::lang::String> indexStr,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	std::shared_ptr<java::lang::String> virtual handleGetStringArray();
private:
public:
	ICUResourceBundleImpl_S_ResourceArray(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource);
	std::shared_ptr<java::lang::String> virtual getStringArray();
	int virtual getType();
public:
	virtual ~ICUResourceBundleImpl_S_ResourceArray(){
	}

}; // class ICUResourceBundleImpl_S_ResourceArray
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleImpl_S_ResourceArray__

