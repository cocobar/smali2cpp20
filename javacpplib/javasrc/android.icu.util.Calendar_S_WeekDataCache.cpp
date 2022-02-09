// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$WeekDataCache.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar_S_WeekData.h"
#include "android.icu.util.Calendar_S_WeekDataCache.h"
#include "android.icu.util.Calendar.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
android::icu::util::Calendar_S_WeekDataCache::Calendar_S_WeekDataCache()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/Calendar$WeekDataCache;)V
android::icu::util::Calendar_S_WeekDataCache::Calendar_S_WeekDataCache(std::shared_ptr<android::icu::util::Calendar_S_WeekDataCache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/util/Calendar$WeekDataCache;
	// 044    invoke-direct {p0}, Landroid/icu/util/Calendar$WeekDataCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/Calendar$WeekData;
std::shared_ptr<android::icu::util::Calendar_S_WeekData> android::icu::util::Calendar_S_WeekDataCache::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> data)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "data"    # Ljava/lang/String;
	return android::icu::util::Calendar::-wrap1(key);

}


