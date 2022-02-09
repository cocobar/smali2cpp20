#ifndef __android_icu_impl_ICUResourceBundleReader_S_ReaderCacheKey__
#define __android_icu_impl_ICUResourceBundleReader_S_ReaderCacheKey__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ReaderCacheKey.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceBundleReader_S_ReaderCacheKey : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> baseName;
	std::shared_ptr<java::lang::String> localeID;
	ICUResourceBundleReader_S_ReaderCacheKey(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::lang::String> cVar1);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
public:
	virtual ~ICUResourceBundleReader_S_ReaderCacheKey(){
	}

}; // class ICUResourceBundleReader_S_ReaderCacheKey
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_ReaderCacheKey__

