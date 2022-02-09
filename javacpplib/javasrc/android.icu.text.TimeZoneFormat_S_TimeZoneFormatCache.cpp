// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$TimeZoneFormatCache.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneFormat_S_TimeZoneFormatCache.h"
#include "android.icu.text.TimeZoneFormat.h"
#include "android.icu.util.ULocale.h"

// .method private constructor <init>()V
android::icu::text::TimeZoneFormat_S_TimeZoneFormatCache::TimeZoneFormat_S_TimeZoneFormatCache()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/TimeZoneFormat$TimeZoneFormatCache;)V
android::icu::text::TimeZoneFormat_S_TimeZoneFormatCache::TimeZoneFormat_S_TimeZoneFormatCache(std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeZoneFormatCache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/TimeZoneFormat$TimeZoneFormatCache;
	// 044    invoke-direct {p0}, Landroid/icu/text/TimeZoneFormat$TimeZoneFormatCache;-><init>()V
	return;

}
// .method protected createInstance(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Landroid/icu/text/TimeZoneFormat;
std::shared_ptr<android::icu::text::TimeZoneFormat> android::icu::text::TimeZoneFormat_S_TimeZoneFormatCache::createInstance(std::shared_ptr<android::icu::util::ULocale> key,std::shared_ptr<android::icu::util::ULocale> data)
{
	
	std::shared_ptr<android::icu::text::TimeZoneFormat> fmt;
	
	//    .param p1, "key"    # Landroid/icu/util/ULocale;
	//    .param p2, "data"    # Landroid/icu/util/ULocale;
	fmt = std::make_shared<android::icu::text::TimeZoneFormat>(data);
	//    .local v0, "fmt":Landroid/icu/text/TimeZoneFormat;
	fmt->freeze();
	return fmt;

}


