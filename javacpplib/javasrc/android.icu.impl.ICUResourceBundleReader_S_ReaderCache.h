#ifndef __android_icu_impl_ICUResourceBundleReader_S_ReaderCache__
#define __android_icu_impl_ICUResourceBundleReader_S_ReaderCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ReaderCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderCacheKey.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.SoftCache.h"
#include "java.lang.ClassLoader.h"

namespace android::icu::impl{
class ICUResourceBundleReader_S_ReaderCache : public android::icu::impl::SoftCache<android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey,android::icu::impl::ICUResourceBundleReader,java::lang::ClassLoader> {
protected:
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader> virtual createInstance(std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey> key,std::shared_ptr<java::lang::ClassLoader> loader);
private:
	ICUResourceBundleReader_S_ReaderCache();
public:
	ICUResourceBundleReader_S_ReaderCache(std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderCache> _this0);
public:
	virtual ~ICUResourceBundleReader_S_ReaderCache(){
	}

}; // class ICUResourceBundleReader_S_ReaderCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_ReaderCache__

