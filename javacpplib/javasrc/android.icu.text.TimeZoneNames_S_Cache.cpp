// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$Cache.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_Cache.h"
#include "android.icu.text.TimeZoneNames_S_Factory.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
android::icu::text::TimeZoneNames_S_Cache::TimeZoneNames_S_Cache()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/TimeZoneNames$Cache;)V
android::icu::text::TimeZoneNames_S_Cache::TimeZoneNames_S_Cache(std::shared_ptr<android::icu::text::TimeZoneNames_S_Cache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/TimeZoneNames$Cache;
	// 044    invoke-direct {p0}, Landroid/icu/text/TimeZoneNames$Cache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneNames;
std::shared_ptr<android::icu::text::TimeZoneNames> android::icu::text::TimeZoneNames_S_Cache::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> data)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "data"    # Landroid/icu/util/ULocale;
	return android::icu::text::TimeZoneNames::-get0({const[class].FS-Param})->getTimeZoneNames(data);

}


