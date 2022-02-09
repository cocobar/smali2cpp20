// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\GenderInfo$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.util.GenderInfo_S_Cache.h"
#include "android.icu.util.GenderInfo_S_ListGenderStyle.h"
#include "android.icu.util.GenderInfo.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.MissingResourceException.h"

// .method private constructor <init>()V
android::icu::util::GenderInfo_S_Cache::GenderInfo_S_Cache()
{
	
	std::shared_ptr<android::icu::impl::SimpleCache> cVar0;
	
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::SimpleCache>();
	this->cache = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/GenderInfo$Cache;)V
android::icu::util::GenderInfo_S_Cache::GenderInfo_S_Cache(std::shared_ptr<android::icu::util::GenderInfo_S_Cache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/util/GenderInfo$Cache;
	// 056    invoke-direct {p0}, Landroid/icu/util/GenderInfo$Cache;-><init>()V
	return;

}
// .method private static load(Landroid/icu/util/ULocale;)Landroid/icu/util/GenderInfo;
std::shared_ptr<android::icu::util::GenderInfo> android::icu::util::GenderInfo_S_Cache::load(std::shared_ptr<android::icu::util::ULocale> ulocale)
{
	
	std::shared_ptr<android::icu::util::GenderInfo> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "ulocale"    # Landroid/icu/util/ULocale;
	//    .local v2, "rb":Landroid/icu/util/UResourceBundle;
	//    .local v0, "genderList":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_14:
	cVar0 = std::make_shared<android::icu::util::GenderInfo>(android::icu::util::GenderInfo_S_ListGenderStyle::fromName(android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("genderList")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x1)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("genderList")))->getString(ulocale->toString())));
	//label_try_end_25:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_26;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_14 .. :try_end_25} :catch_26
	return cVar0;
	// 115    .line 255
label_catch_26:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "mre":Ljava/util/MissingResourceException;
	return 0x0;

}
// .method public get(Landroid/icu/util/ULocale;)Landroid/icu/util/GenderInfo;
std::shared_ptr<android::icu::util::GenderInfo> android::icu::util::GenderInfo_S_Cache::get(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::util::GenderInfo> result;
	std::shared_ptr<java::lang::Object> result;
	std::shared_ptr<android::icu::util::ULocale> fallback;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	result = this->cache->get(locale);
	result->checkCast("android::icu::util::GenderInfo");
	//    .local v1, "result":Landroid/icu/util/GenderInfo;
	if ( result )     
		goto label_cond_1f;
	result = android::icu::util::GenderInfo_S_Cache::load(locale);
	if ( result )     
		goto label_cond_1a;
	fallback = locale->getFallback();
	//    .local v0, "fallback":Landroid/icu/util/ULocale;
	if ( fallback )     
		goto label_cond_20;
	result = android::icu::util::GenderInfo::-get0({const[class].FS-Param});
	//    .end local v0    # "fallback":Landroid/icu/util/ULocale;
label_cond_1a:
label_goto_1a:
	this->cache->put(locale, result);
label_cond_1f:
	return result;
	// 179    .line 239
	// 180    .restart local v0    # "fallback":Landroid/icu/util/ULocale;
label_cond_20:
	result = this->get(fallback);
	goto label_goto_1a;

}


