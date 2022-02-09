#ifndef __android_icu_util_Calendar_S_WeekDataCache__
#define __android_icu_util_Calendar_S_WeekDataCache__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$WeekDataCache.smali
#include "java2ctype.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.util.Calendar_S_WeekData.h"
#include "java.lang.String.h"

namespace android::icu::util{
class Calendar_S_WeekDataCache : public android::icu::impl::SoftCache<java::lang::String,android::icu::util::Calendar_S_WeekData,java::lang::String> {
protected:
	std::shared_ptr<android::icu::util::Calendar_S_WeekData> virtual createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> data);
private:
	Calendar_S_WeekDataCache();
public:
	Calendar_S_WeekDataCache(std::shared_ptr<android::icu::util::Calendar_S_WeekDataCache> _this0);
public:
	virtual ~Calendar_S_WeekDataCache(){
	}

}; // class Calendar_S_WeekDataCache
}; // namespace android::icu::util

#endif //__android_icu_util_Calendar_S_WeekDataCache__

