#ifndef __android_icu_impl_TimeZoneNamesImpl_S_MZ2TZsCache__
#define __android_icu_impl_TimeZoneNamesImpl_S_MZ2TZsCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$MZ2TZsCache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_MZ2TZsCache : public android::icu::impl::SoftCache<java::lang::String,java::util::Map<java::lang::String,java::lang::String>,java::lang::String> {
protected:
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> data);
private:
	TimeZoneNamesImpl_S_MZ2TZsCache();
public:
	TimeZoneNamesImpl_S_MZ2TZsCache(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_MZ2TZsCache> _this0);
public:
	virtual ~TimeZoneNamesImpl_S_MZ2TZsCache(){
	}

}; // class TimeZoneNamesImpl_S_MZ2TZsCache
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_MZ2TZsCache__

