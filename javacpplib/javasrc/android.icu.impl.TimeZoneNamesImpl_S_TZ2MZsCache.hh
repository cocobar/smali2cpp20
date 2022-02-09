#ifndef __android_icu_impl_TimeZoneNamesImpl_S_TZ2MZsCache__
#define __android_icu_impl_TimeZoneNamesImpl_S_TZ2MZsCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$TZ2MZsCache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.hhh"
#include "android.icu.impl.TimeZoneNamesImpl_S_MZMapEntry.hhh"
#include "java.lang.String.hhh"
#include "java.util.List.hhh"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_TZ2MZsCache : public android::icu::impl::SoftCache<java::lang::String,java::util::List<android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry>,java::lang::String> {
public:
	TimeZoneNamesImpl_S_TZ2MZsCache();
	virtual ~TimeZoneNamesImpl_S_TZ2MZsCache();

}; // class TimeZoneNamesImpl_S_TZ2MZsCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_TZ2MZsCache__

