// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$MZ2TZsCache.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_MZ2TZsCache.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"

// .method private constructor <init>()V
android::icu::impl::TimeZoneNamesImpl_S_MZ2TZsCache::TimeZoneNamesImpl_S_MZ2TZsCache()
{
	
	// 038    invoke-direct {p0}, Landroid/icu/impl/SoftCache;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/TimeZoneNamesImpl$MZ2TZsCache;)V
android::icu::impl::TimeZoneNamesImpl_S_MZ2TZsCache::TimeZoneNamesImpl_S_MZ2TZsCache(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_MZ2TZsCache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/TimeZoneNamesImpl$MZ2TZsCache;
	// 048    invoke-direct {p0}, Landroid/icu/impl/TimeZoneNamesImpl$MZ2TZsCache;-><init>()V
	return;

}
// .method protected createInstance(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::TimeZoneNamesImpl_S_MZ2TZsCache::createInstance(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> data)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle> regionMap;
	std::shared_ptr<java::util::Set> regions;
	std::shared_ptr<java::util::HashMap> map;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Iterator> region_S_iterator;
	std::shared_ptr<java::lang::String> region;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "data"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 076        value = {
	// 077            "(",
	// 078            "Ljava/lang/String;",
	// 079            "Ljava/lang/String;",
	// 080            ")",
	// 081            "Ljava/util/Map",
	// 082            "<",
	// 083            "Ljava/lang/String;",
	// 084            "Ljava/lang/String;",
	// 085            ">;"
	// 086        }
	// 087    .end annotation
	0x0;
	//    .local v2, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .local v0, "bundle":Landroid/icu/util/UResourceBundle;
	//    .local v4, "mapTimezones":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_12:
	regionMap = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("metaZones")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("mapTimezones")))->get(key);
	//    .local v7, "regionMap":Landroid/icu/util/UResourceBundle;
	regions = regionMap->keySet();
	//    .local v8, "regions":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	map = std::make_shared<java::util::HashMap>(regions->size());
	//label_try_end_23:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4c;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_12 .. :try_end_23} :catch_4c
	//    .end local v2    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .local v3, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	try {
	//label_try_start_23:
	region_S_iterator = regions->iterator();
	//    .local v6, "region$iterator":Ljava/util/Iterator;
label_goto_27:
	if ( !(region_S_iterator->hasNext()) )  
		goto label_cond_4a;
	region = region_S_iterator->next();
	region->checkCast("java::lang::String");
	//    .local v5, "region":Ljava/lang/String;
	//    .local v9, "tzID":Ljava/lang/String;
	map->put(region->intern(), regionMap->getString(region)->intern());
	//label_try_end_42:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_43;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_23 .. :try_end_42} :catch_43
	goto label_goto_27;
	// 180    .line 981
	// 181    .end local v5    # "region":Ljava/lang/String;
	// 182    .end local v6    # "region$iterator":Ljava/util/Iterator;
	// 183    .end local v9    # "tzID":Ljava/lang/String;
label_catch_43:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/util/MissingResourceException;
	map;
	//    .end local v3    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .end local v7    # "regionMap":Landroid/icu/util/UResourceBundle;
	//    .end local v8    # "regions":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_goto_45:
	//    .end local v1    # "e":Ljava/util/MissingResourceException;
	//    .local v2, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_goto_49:
	return map;
	// 205    .end local v2    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 206    .restart local v3    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	// 207    .restart local v6    # "region$iterator":Ljava/util/Iterator;
	// 208    .restart local v7    # "regionMap":Landroid/icu/util/UResourceBundle;
	// 209    .restart local v8    # "regions":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_4a:
	//    .end local v3    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v2    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_49;
	// 217    .line 981
	// 218    .end local v6    # "region$iterator":Ljava/util/Iterator;
	// 219    .end local v7    # "regionMap":Landroid/icu/util/UResourceBundle;
	// 220    .end local v8    # "regions":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 221    .local v2, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_catch_4c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v1    # "e":Ljava/util/MissingResourceException;
	goto label_goto_45;

}


