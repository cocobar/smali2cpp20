// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneGenericNames_S_Cache.h"
#include "android.icu.impl.TimeZoneGenericNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
android::icu::impl::TimeZoneGenericNames_S_Cache::TimeZoneGenericNames_S_Cache()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/TimeZoneGenericNames$Cache;)V
android::icu::impl::TimeZoneGenericNames_S_Cache::TimeZoneGenericNames_S_Cache(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Cache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/TimeZoneGenericNames$Cache;
	// 044    invoke-direct {p0}, Landroid/icu/impl/TimeZoneGenericNames$Cache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/impl/TimeZoneGenericNames;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames> android::icu::impl::TimeZoneGenericNames_S_Cache::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> data)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> cVar0;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "data"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::impl::TimeZoneGenericNames>(data, 0x0);
	return cVar0->freeze();

}


