#ifndef __android_icu_impl_ICUResourceBundleReader_S_ReaderCache__
#define __android_icu_impl_ICUResourceBundleReader_S_ReaderCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$ReaderCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderCacheKey.hhh"
#include "android.icu.impl.ICUResourceBundleReader.hhh"
#include "android.icu.impl.SoftCache.hhh"
#include "java.lang.ClassLoader.hhh"

namespace android::icu::impl{
class ICUResourceBundleReader_S_ReaderCache : public android::icu::impl::SoftCache<android::icu::impl::ICUResourceBundleReader_S_ReaderCacheKey,android::icu::impl::ICUResourceBundleReader,java::lang::ClassLoader> {
public:
	ICUResourceBundleReader_S_ReaderCache();
	virtual ~ICUResourceBundleReader_S_ReaderCache();

}; // class ICUResourceBundleReader_S_ReaderCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundleReader_S_ReaderCache__

