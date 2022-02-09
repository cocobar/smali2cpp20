#ifndef __android_icu_impl_SoftCache__
#define __android_icu_impl_SoftCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\SoftCache.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.hhh"

namespace android::icu::impl{
template <typename D,typename K,typename V>
class SoftCache : public android::icu::impl::CacheBase<K,V,D> {
public:
	SoftCache();
	virtual ~SoftCache();

}; // class SoftCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_SoftCache__

