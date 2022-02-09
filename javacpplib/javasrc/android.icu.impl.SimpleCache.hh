#ifndef __android_icu_impl_SimpleCache__
#define __android_icu_impl_SimpleCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\SimpleCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"

namespace android::icu::impl{
template <typename K,typename V>
class SimpleCache : public android::icu::impl::ICUCache<K,V> {
public:
	SimpleCache();
	virtual ~SimpleCache();

}; // class SimpleCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_SimpleCache__

