#ifndef __android_icu_impl_TimeZoneNamesImpl_S_TZ2MZsCache__
#define __android_icu_impl_TimeZoneNamesImpl_S_TZ2MZsCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$TZ2MZsCache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_MZMapEntry.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_TZ2MZsCache : public android::icu::impl::SoftCache<java::lang::String,java::util::List<android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry>,java::lang::String> {
protected:
	std::shared_ptr<java::util::List<android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry>> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> data);
private:
	TimeZoneNamesImpl_S_TZ2MZsCache();
	static long long parseDate(std::shared_ptr<java::lang::String> text);
public:
	TimeZoneNamesImpl_S_TZ2MZsCache(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache> _this0);
public:
	virtual ~TimeZoneNamesImpl_S_TZ2MZsCache(){
	}

}; // class TimeZoneNamesImpl_S_TZ2MZsCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_TZ2MZsCache__

