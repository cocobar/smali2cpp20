#ifndef __android_icu_impl_ICUResourceBundleImpl_S_ResourceTable__
#define __android_icu_impl_ICUResourceBundleImpl_S_ResourceTable__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceTable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceContainer.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUResourceBundleImpl_S_ResourceTable : public android::icu::impl::ICUResourceBundleImpl_S_ResourceContainer {
protected:
	std::shared_ptr<java::lang::String> virtual getKey(int index);
	std::shared_ptr<android::icu::util::UResourceBundle> virtual handleGet(int index,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	std::shared_ptr<android::icu::util::UResourceBundle> virtual handleGet(std::shared_ptr<java::lang::String> resKey,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	std::shared_ptr<java::lang::Object> virtual handleGetObject(std::shared_ptr<java::lang::String> key);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual handleKeySet();
private:
public:
	ICUResourceBundleImpl_S_ResourceTable(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle,int rootRes);
	ICUResourceBundleImpl_S_ResourceTable(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource);
	std::shared_ptr<java::lang::String> virtual findString(std::shared_ptr<java::lang::String> key);
	int virtual getType();
public:
	virtual ~ICUResourceBundleImpl_S_ResourceTable(){
	}

}; // class ICUResourceBundleImpl_S_ResourceTable
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleImpl_S_ResourceTable__

