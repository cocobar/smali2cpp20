// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ZoneMeta$SystemTimeZoneCache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.OlsonTimeZone.h"
#include "android.icu.impl.ZoneMeta_S_SystemTimeZoneCache.h"
#include "android.icu.impl.ZoneMeta.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"
#include "java.util.MissingResourceException.h"

// .method private constructor <init>()V
android::icu::impl::ZoneMeta_S_SystemTimeZoneCache::ZoneMeta_S_SystemTimeZoneCache()
{
	
	// 034    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ZoneMeta$SystemTimeZoneCache;)V
android::icu::impl::ZoneMeta_S_SystemTimeZoneCache::ZoneMeta_S_SystemTimeZoneCache(std::shared_ptr<android::icu::impl::ZoneMeta_S_SystemTimeZoneCache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/ZoneMeta$SystemTimeZoneCache;
	// 044    invoke-direct {p0}, Landroid/icu/impl/ZoneMeta$SystemTimeZoneCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/impl/OlsonTimeZone;
std::shared_ptr<android::icu::impl::OlsonTimeZone> android::icu::impl::ZoneMeta_S_SystemTimeZoneCache::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> data)
{
	
	std::shared_ptr<android::icu::impl::OlsonTimeZone> tz;
	std::shared_ptr<android::icu::util::UResourceBundle> top;
	std::shared_ptr<android::icu::util::UResourceBundle> res;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "data"    # Ljava/lang/String;
	tz = 0x0;
	//    .local v3, "tz":Landroid/icu/impl/OlsonTimeZone;
	try {
	//label_try_start_1:
	top = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneinfo64")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	//    .local v2, "top":Landroid/icu/util/UResourceBundle;
	res = android::icu::impl::ZoneMeta::openOlsonResource(top, data);
	//    .local v1, "res":Landroid/icu/util/UResourceBundle;
	if ( !(res) )  
		goto label_cond_1c;
	tz = std::make_shared<android::icu::impl::OlsonTimeZone>(top, res, data);
	//label_try_end_18:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_1 .. :try_end_18} :catch_1d
	//    .local v4, "tz":Landroid/icu/impl/OlsonTimeZone;
	try {
	//label_try_start_18:
	tz->freeze();
	//label_try_end_1b:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_18 .. :try_end_1b} :catch_1f
	//    .end local v3    # "tz":Landroid/icu/impl/OlsonTimeZone;
	tz = tz;
	//    .end local v1    # "res":Landroid/icu/util/UResourceBundle;
	//    .end local v2    # "top":Landroid/icu/util/UResourceBundle;
	//    .end local v4    # "tz":Landroid/icu/impl/OlsonTimeZone;
label_cond_1c:
label_goto_1c:
	return tz;
	// 110    .line 564
	// 111    .restart local v3    # "tz":Landroid/icu/impl/OlsonTimeZone;
label_catch_1d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	goto label_goto_1c;
	// 118    .end local v0    # "e":Ljava/util/MissingResourceException;
	// 119    .end local v3    # "tz":Landroid/icu/impl/OlsonTimeZone;
	// 120    .restart local v1    # "res":Landroid/icu/util/UResourceBundle;
	// 121    .restart local v2    # "top":Landroid/icu/util/UResourceBundle;
	// 122    .restart local v4    # "tz":Landroid/icu/impl/OlsonTimeZone;
label_catch_1f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/util/MissingResourceException;
	tz = tz;
	//    .end local v4    # "tz":Landroid/icu/impl/OlsonTimeZone;
	//    .local v3, "tz":Landroid/icu/impl/OlsonTimeZone;
	goto label_goto_1c;

}


