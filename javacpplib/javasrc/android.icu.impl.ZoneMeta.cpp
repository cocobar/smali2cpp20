// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ZoneMeta.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.OlsonTimeZone.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.impl.ZoneMeta_S_CustomTimeZoneCache.h"
#include "android.icu.impl.ZoneMeta_S_SystemTimeZoneCache.h"
#include "android.icu.impl.ZoneMeta.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "android.icu.util.TimeZone_S_SystemTimeZoneType.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Boolean.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.ref.SoftReference.h"
#include "java.text.ParsePosition.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"
#include "java.util.TreeSet.h"

static android::icu::impl::ZoneMeta::_android_icu_util_TimeZone_S_SystemTimeZoneTypeSwitchesValues = nullptr;
static android::icu::impl::ZoneMeta::_assertionsDisabled;
static android::icu::impl::ZoneMeta::ASSERT = false;
static android::icu::impl::ZoneMeta::CANONICAL_ID_CACHE = nullptr;
static android::icu::impl::ZoneMeta::CUSTOM_ZONE_CACHE;
static android::icu::impl::ZoneMeta::REF_CANONICAL_SYSTEM_LOCATION_ZONES = nullptr;
static android::icu::impl::ZoneMeta::REF_CANONICAL_SYSTEM_ZONES = nullptr;
static android::icu::impl::ZoneMeta::REF_SYSTEM_ZONES = nullptr;
static android::icu::impl::ZoneMeta::REGION_CACHE = nullptr;
static android::icu::impl::ZoneMeta::SINGLE_COUNTRY_CACHE = nullptr;
static android::icu::impl::ZoneMeta::SYSTEM_ZONE_CACHE;
static android::icu::impl::ZoneMeta::ZONEIDS = nullptr;
static android::icu::impl::ZoneMeta::ZONEINFORESNAME = std::make_shared<java::lang::String>("zoneinfo64");
static android::icu::impl::ZoneMeta::kCUSTOM_TZ_PREFIX = std::make_shared<java::lang::String>("GMT");
static android::icu::impl::ZoneMeta::kGMT_ID = std::make_shared<java::lang::String>("GMT");
static android::icu::impl::ZoneMeta::kMAX_CUSTOM_HOUR = 0x17;
static android::icu::impl::ZoneMeta::kMAX_CUSTOM_MIN = 0x3b;
static android::icu::impl::ZoneMeta::kMAX_CUSTOM_SEC = 0x3b;
static android::icu::impl::ZoneMeta::kNAMES = std::make_shared<java::lang::String>("Names");
static android::icu::impl::ZoneMeta::kREGIONS = std::make_shared<java::lang::String>("Regions");
static android::icu::impl::ZoneMeta::kWorld = std::make_shared<java::lang::String>("001");
static android::icu::impl::ZoneMeta::kZONES = std::make_shared<java::lang::String>("Zones");
// .method private static synthetic -getandroid-icu-util-TimeZone$SystemTimeZoneTypeSwitchesValues()[I
int android::icu::impl::ZoneMeta::_getandroid_icu_util_TimeZone_S_SystemTimeZoneTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::ZoneMeta::_android_icu_util_TimeZone_S_SystemTimeZoneTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::ZoneMeta::_android_icu_util_TimeZone_S_SystemTimeZoneTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::util::TimeZone_S_SystemTimeZoneType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::util::TimeZone_S_SystemTimeZoneType::ANY->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_30
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_2e
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL_LOCATION->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_2c
label_goto_29:
	android::icu::impl::ZoneMeta::_android_icu_util_TimeZone_S_SystemTimeZoneTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_2c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_30:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void android::icu::impl::ZoneMeta::static_cinit()
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	std::shared_ptr<android::icu::impl::SimpleCache> cVar1;
	std::shared_ptr<android::icu::impl::SimpleCache> cVar2;
	std::shared_ptr<android::icu::impl::SimpleCache> cVar3;
	std::shared_ptr<android::icu::impl::ZoneMeta_S_SystemTimeZoneCache> cVar4;
	std::shared_ptr<android::icu::impl::ZoneMeta_S_CustomTimeZoneCache> cVar5;
	
	cVar0 = 0x0;
	android::icu::impl::ZoneMeta::_assertionsDisabled = ( android::icu::impl::ZoneMeta()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::ZoneMeta::ZONEIDS = cVar0;
	cVar1 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::impl::ZoneMeta::CANONICAL_ID_CACHE = cVar1;
	cVar2 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::impl::ZoneMeta::REGION_CACHE = cVar2;
	cVar3 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::impl::ZoneMeta::SINGLE_COUNTRY_CACHE = cVar3;
	cVar4 = std::make_shared<android::icu::impl::ZoneMeta_S_SystemTimeZoneCache>(cVar0);
	android::icu::impl::ZoneMeta::SYSTEM_ZONE_CACHE = cVar4;
	cVar5 = std::make_shared<android::icu::impl::ZoneMeta_S_CustomTimeZoneCache>(cVar0);
	android::icu::impl::ZoneMeta::CUSTOM_ZONE_CACHE = cVar5;
	return;

}
// .method public constructor <init>()V
android::icu::impl::ZoneMeta::ZoneMeta()
{
	
	// 270    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static declared-synchronized countEquivalentIDs(Ljava/lang/String;)I
int android::icu::impl::ZoneMeta::countEquivalentIDs(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<android::icu::impl::ZoneMeta> cVar0;
	int count;
	std::shared_ptr<android::icu::util::UResourceBundle> res;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "id"    # Ljava/lang/String;
	cVar0 = android::icu::impl::ZoneMeta();
	cVar0->monitor_enter();
	count = 0x0;
	//    .local v0, "count":I
	try {
	//label_try_start_5:
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_19;
	}
	//    .catchall {:try_start_5 .. :try_end_8} :catchall_19
	res = android::icu::impl::ZoneMeta::openOlsonResource(0x0, id);
	//    .local v3, "res":Landroid/icu/util/UResourceBundle;
	if ( !(res) )  
		goto label_cond_17;
	try {
	//label_try_start_b:
	//    .local v2, "links":Landroid/icu/util/UResourceBundle;
	//    .local v4, "v":[I
	count = res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("links")))->getIntVector()->size();
	//label_try_end_17:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c;
	}
	catch (...){
		goto label_catchall_19;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_b .. :try_end_17} :catch_1c
	//    .catchall {:try_start_b .. :try_end_17} :catchall_19
	//    .end local v2    # "links":Landroid/icu/util/UResourceBundle;
	//    .end local v4    # "v":[I
label_cond_17:
label_goto_17:
	cVar0->monitor_exit();
	return count;
	// 332    .end local v3    # "res":Landroid/icu/util/UResourceBundle;
label_catchall_19:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 340    .line 231
	// 341    .restart local v3    # "res":Landroid/icu/util/UResourceBundle;
label_catch_1c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/util/MissingResourceException;
	goto label_goto_17;

}
// .method private static findCLDRCanonicalID(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::findCLDRCanonicalID(std::shared_ptr<java::lang::String> tzid)
{
	
	std::shared_ptr<java::lang::String> canonical;
	std::shared_ptr<java::lang::String> tzidKey;
	std::shared_ptr<android::icu::util::UResourceBundle> keyTypeData;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "tzid"    # Ljava/lang/String;
	canonical = 0x0;
	//    .local v1, "canonical":Ljava/lang/String;
	tzidKey = tzid->replace(0x2f, 0x3a);
	//    .local v7, "tzidKey":Ljava/lang/String;
	try {
	//label_try_start_9:
	keyTypeData = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("keyTypeData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	//    .local v3, "keyTypeData":Landroid/icu/util/UResourceBundle;
	//    .local v6, "typeMap":Landroid/icu/util/UResourceBundle;
	//label_try_end_22:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3e;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_9 .. :try_end_22} :catch_3e
	//    .local v5, "typeKeys":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_23:
	keyTypeData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("typeMap")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("timezone")))->get(tzidKey);
	//label_try_end_26:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3c;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_23 .. :try_end_26} :catch_3c
	canonical = tzid;
	//    .end local v1    # "canonical":Ljava/lang/String;
label_goto_27:
	if ( canonical )     
		goto label_cond_3b;
	try {
	//label_try_start_29:
	//    .local v4, "typeAlias":Landroid/icu/util/UResourceBundle;
	//    .local v0, "aliasesForKey":Landroid/icu/util/UResourceBundle;
	//label_try_end_3a:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3e;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_29 .. :try_end_3a} :catch_3e
	canonical = keyTypeData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("typeAlias")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("timezone")))->getString(tzidKey);
	//    .end local v0    # "aliasesForKey":Landroid/icu/util/UResourceBundle;
	//    .end local v3    # "keyTypeData":Landroid/icu/util/UResourceBundle;
	//    .end local v4    # "typeAlias":Landroid/icu/util/UResourceBundle;
	//    .end local v5    # "typeKeys":Landroid/icu/util/UResourceBundle;
	//    .end local v6    # "typeMap":Landroid/icu/util/UResourceBundle;
label_cond_3b:
label_goto_3b:
	return canonical;
	// 449    .line 408
	// 450    .restart local v1    # "canonical":Ljava/lang/String;
	// 451    .restart local v3    # "keyTypeData":Landroid/icu/util/UResourceBundle;
	// 452    .restart local v5    # "typeKeys":Landroid/icu/util/UResourceBundle;
	// 453    .restart local v6    # "typeMap":Landroid/icu/util/UResourceBundle;
label_catch_3c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/util/MissingResourceException;
	goto label_goto_27;
	// 460    .line 417
	// 461    .end local v1    # "canonical":Ljava/lang/String;
	// 462    .end local v2    # "e":Ljava/util/MissingResourceException;
	// 463    .end local v3    # "keyTypeData":Landroid/icu/util/UResourceBundle;
	// 464    .end local v5    # "typeKeys":Landroid/icu/util/UResourceBundle;
	// 465    .end local v6    # "typeMap":Landroid/icu/util/UResourceBundle;
label_catch_3e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "e":Ljava/util/MissingResourceException;
	goto label_goto_3b;

}
// .method static formatCustomID(IIIZ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::formatCustomID(int hour,int min,int sec,bool negative)
{
	
	char cVar0;
	char cVar1;
	int cVar2;
	std::shared_ptr<java::lang::StringBuilder> zid;
	
	//    .param p0, "hour"    # I
	//    .param p1, "min"    # I
	//    .param p2, "sec"    # I
	//    .param p3, "negative"    # Z
	cVar0 = 0x3a;
	cVar1 = 0x30;
	cVar2 = 0xa;
	zid = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GMT")));
	//    .local v0, "zid":Ljava/lang/StringBuilder;
	if ( hour )     
		goto label_cond_12;
	if ( !(min) )  
		goto label_cond_39;
label_cond_12:
	if ( !(negative) )  
		goto label_cond_3e;
	zid->append(0x2d);
label_goto_19:
	if ( hour >= cVar2 )
		goto label_cond_1e;
	zid->append(cVar1);
label_cond_1e:
	zid->append(hour);
	zid->append(cVar0);
	if ( min >= cVar2 )
		goto label_cond_29;
	zid->append(cVar1);
label_cond_29:
	zid->append(min);
	if ( !(sec) )  
		goto label_cond_39;
	zid->append(cVar0);
	if ( sec >= cVar2 )
		goto label_cond_36;
	zid->append(cVar1);
label_cond_36:
	zid->append(sec);
label_cond_39:
	return zid->toString();
	// 557    .line 810
label_cond_3e:
	zid->append(0x2b);
	goto label_goto_19;

}
// .method public static getAvailableIDs(Landroid/icu/util/TimeZone$SystemTimeZoneType;Ljava/lang/String;Ljava/lang/Integer;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ZoneMeta::getAvailableIDs(std::shared_ptr<android::icu::util::TimeZone_S_SystemTimeZoneType> type,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::Integer> rawOffset)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::util::Set> baseSet;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::util::TreeSet> result;
	std::shared_ptr<java::util::Iterator> id_S_iterator;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<android::icu::util::TimeZone> z;
	
	//    .param p0, "type"    # Landroid/icu/util/TimeZone$SystemTimeZoneType;
	//    .param p1, "region"    # Ljava/lang/String;
	//    .param p2, "rawOffset"    # Ljava/lang/Integer;
	//    .annotation system Ldalvik/annotation/Signature;
	// 572        value = {
	// 573            "(",
	// 574            "Landroid/icu/util/TimeZone$SystemTimeZoneType;",
	// 575            "Ljava/lang/String;",
	// 576            "Ljava/lang/Integer;",
	// 577            ")",
	// 578            "Ljava/util/Set",
	// 579            "<",
	// 580            "Ljava/lang/String;",
	// 581            ">;"
	// 582        }
	// 583    .end annotation
	0x0;
	//    .local v0, "baseSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// switch
	{
	auto item = ( android::icu::impl::ZoneMeta::-getandroid-icu-util-TimeZone$SystemTimeZoneTypeSwitchesValues({const[class].FS-Param})[type->ordinal()] );
	if (item == 1) goto label_pswitch_17;
	if (item == 2) goto label_pswitch_20;
	if (item == 3) goto label_pswitch_25;
	}
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown SystemTimeZoneType")));
	// throw
	throw cVar0;
	// 612    .line 164
label_pswitch_17:
	baseSet = android::icu::impl::ZoneMeta::getSystemZIDs({const[class].FS-Param});
	//    .local v0, "baseSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_goto_1b:
	if ( region )     
		goto label_cond_2a;
	if ( rawOffset )     
		goto label_cond_2a;
	return baseSet;
	// 628    .line 167
	// 629    .local v0, "baseSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_pswitch_20:
	//    .local v0, "baseSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_1b;
	// 638    .line 170
	// 639    .local v0, "baseSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_pswitch_25:
	//    .local v0, "baseSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	goto label_goto_1b;
	// 648    .line 181
label_cond_2a:
	if ( !(region) )  
		goto label_cond_32;
	cVar1 = region->toUpperCase(java::util::Locale::ENGLISH);
label_cond_32:
	result = std::make_shared<java::util::TreeSet>();
	//    .local v4, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	id_S_iterator = baseSet->iterator();
	//    .local v2, "id$iterator":Ljava/util/Iterator;
label_cond_3b:
label_goto_3b:
	if ( !(id_S_iterator->hasNext()) )  
		goto label_cond_6f;
	id = id_S_iterator->next();
	id->checkCast("java::lang::String");
	//    .local v1, "id":Ljava/lang/String;
	if ( !(cVar1) )  
		goto label_cond_53;
	//    .local v3, "r":Ljava/lang/String;
	if ( !(cVar1->equals(android::icu::impl::ZoneMeta::getRegion(id))) )  
		goto label_cond_3b;
	//    .end local v3    # "r":Ljava/lang/String;
label_cond_53:
	if ( !(rawOffset) )  
		goto label_cond_6b;
	z = android::icu::impl::ZoneMeta::getSystemTimeZone(id);
	//    .local v5, "z":Landroid/icu/util/TimeZone;
	if ( !(z) )  
		goto label_cond_3b;
	if ( ( rawOffset->equals(java::lang::Integer::valueOf(z->getRawOffset())) ^ 0x1) )     
		goto label_cond_3b;
	//    .end local v5    # "z":Landroid/icu/util/TimeZone;
label_cond_6b:
	result->add(id);
	goto label_goto_3b;
	// 740    .line 203
	// 741    .end local v1    # "id":Ljava/lang/String;
label_cond_6f:
	if ( !(result->isEmpty()) )  
		goto label_cond_7a;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 756    .line 207
label_cond_7a:
	return java::util::Collections::unmodifiableSet(result);
	// 764    .line 162
	// 765    nop
	// 767    :pswitch_data_80
	// 768    .packed-switch 0x1
	// 769        :pswitch_17
	// 770        :pswitch_20
	// 771        :pswitch_25
	// 772    .end packed-switch

}
// .method public static getCanonicalCLDRID(Landroid/icu/util/TimeZone;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getCanonicalCLDRID(std::shared_ptr<android::icu::util::TimeZone> tz)
{
	
	//    .param p0, "tz"    # Landroid/icu/util/TimeZone;
	if ( !(tz->instanceOf("android::icu::impl::OlsonTimeZone")) )  
		goto label_cond_b;
	tz->checkCast("android::icu::impl::OlsonTimeZone");
	//    .end local p0    # "tz":Landroid/icu/util/TimeZone;
	return tz->getCanonicalID();
	// 795    .line 351
	// 796    .restart local p0    # "tz":Landroid/icu/util/TimeZone;
label_cond_b:
	return android::icu::impl::ZoneMeta::getCanonicalCLDRID(tz->getID());

}
// .method public static getCanonicalCLDRID(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getCanonicalCLDRID(std::shared_ptr<java::lang::String> tzid)
{
	
	std::shared_ptr<java::lang::String> canonical;
	std::shared_ptr<java::lang::Object> canonical;
	int zoneIdx;
	std::shared_ptr<android::icu::util::UResourceBundle> zone;
	std::shared_ptr<java::lang::String> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "tzid"    # Ljava/lang/String;
	canonical = android::icu::impl::ZoneMeta::CANONICAL_ID_CACHE->get(tzid);
	canonical->checkCast("java::lang::String");
	//    .local v0, "canonical":Ljava/lang/String;
	if ( canonical )     
		goto label_cond_4a;
	canonical = android::icu::impl::ZoneMeta::findCLDRCanonicalID(tzid);
	if ( canonical )     
		goto label_cond_43;
	try {
	//label_try_start_10:
	zoneIdx = android::icu::impl::ZoneMeta::getZoneIndex(tzid);
	//    .local v4, "zoneIdx":I
	if ( zoneIdx < 0 ) 
		goto label_cond_43;
	//    .local v2, "top":Landroid/icu/util/UResourceBundle;
	//    .local v5, "zones":Landroid/icu/util/UResourceBundle;
	zone = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneinfo64")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Zones")))->get(zoneIdx);
	//    .local v3, "zone":Landroid/icu/util/UResourceBundle;
	if ( zone->getType() != 0x7 )
		goto label_cond_40;
	cVar0 = android::icu::impl::ZoneMeta::getZoneID(zone->getInt());
	//label_try_end_3f:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4b;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_10 .. :try_end_3f} :catch_4b
	canonical = android::icu::impl::ZoneMeta::findCLDRCanonicalID(cVar0);
label_cond_40:
	if ( canonical )     
		goto label_cond_43;
	canonical = cVar0;
	//    .end local v2    # "top":Landroid/icu/util/UResourceBundle;
	//    .end local v3    # "zone":Landroid/icu/util/UResourceBundle;
	//    .end local v4    # "zoneIdx":I
	//    .end local v5    # "zones":Landroid/icu/util/UResourceBundle;
label_cond_43:
label_goto_43:
	if ( !(canonical) )  
		goto label_cond_4a;
	android::icu::impl::ZoneMeta::CANONICAL_ID_CACHE->put(tzid, canonical);
label_cond_4a:
	return canonical;
	// 923    .line 383
label_catch_4b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/util/MissingResourceException;
	goto label_goto_43;

}
// .method public static getCanonicalCountry(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getCanonicalCountry(std::shared_ptr<java::lang::String> tzid)
{
	
	std::shared_ptr<java::lang::String> country;
	
	//    .param p0, "tzid"    # Ljava/lang/String;
	country = android::icu::impl::ZoneMeta::getRegion(tzid);
	//    .local v0, "country":Ljava/lang/String;
	if ( !(country) )  
		goto label_cond_10;
	if ( !(country->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("001")))) )  
		goto label_cond_10;
	//    .end local v0    # "country":Ljava/lang/String;
label_cond_10:
	return country;

}
// .method public static getCanonicalCountry(Ljava/lang/String;Landroid/icu/util/Output;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getCanonicalCountry(std::shared_ptr<java::lang::String> tzid,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isPrimary)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> country;
	std::shared_ptr<java::lang::Boolean> singleZone;
	std::shared_ptr<java::util::Set> ids;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::Object> singleZone;
	std::shared_ptr<java::lang::Object> primaryZone;
	std::shared_ptr<java::lang::String> canonicalID;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "tzid"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 966        value = {
	// 967            "(",
	// 968            "Ljava/lang/String;",
	// 969            "Landroid/icu/util/Output",
	// 970            "<",
	// 971            "Ljava/lang/Boolean;",
	// 972            ">;)",
	// 973            "Ljava/lang/String;"
	// 974        }
	// 975    .end annotation
	//    .local p1, "isPrimary":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	cVar0 = 0x1;
	cVar1 = 0x0;
	isPrimary->value = java::lang::Boolean::FALSE;
	country = android::icu::impl::ZoneMeta::getRegion(tzid);
	//    .local v2, "country":Ljava/lang/String;
	if ( !(country) )  
		goto label_cond_16;
	if ( !(country->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("001")))) )  
		goto label_cond_16;
	return cVar1;
	// 1008    .line 476
label_cond_16:
	singleZone = android::icu::impl::ZoneMeta::SINGLE_COUNTRY_CACHE->get(tzid);
	singleZone->checkCast("java::lang::Boolean");
	//    .local v7, "singleZone":Ljava/lang/Boolean;
	if ( singleZone )     
		goto label_cond_45;
	ids = android::icu::util::TimeZone::getAvailableIDs(android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL_LOCATION, country, cVar1);
	//    .local v4, "ids":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( android::icu::impl::ZoneMeta::_assertionsDisabled )     
		goto label_cond_36;
	if ( ids->size() >= cVar0 )
		goto label_cond_36;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1047    .line 480
label_cond_36:
	if ( ids->size() >  cVar0 )
		goto label_cond_50;
label_goto_3c:
	singleZone = java::lang::Boolean::valueOf(cVar0);
	android::icu::impl::ZoneMeta::SINGLE_COUNTRY_CACHE->put(tzid, singleZone);
	//    .end local v4    # "ids":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_45:
	if ( !(singleZone->booleanValue()) )  
		goto label_cond_52;
	isPrimary->value = java::lang::Boolean::TRUE;
label_cond_4f:
label_goto_4f:
	return country;
	// 1084    .line 480
	// 1085    .restart local v4    # "ids":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_50:
	cVar0 = 0x0;
	goto label_goto_3c;
	// 1091    .line 492
	// 1092    .end local v4    # "ids":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_52:
	try {
	//label_try_start_52:
	//    .local v0, "bundle":Landroid/icu/util/UResourceBundle;
	//    .local v6, "primaryZones":Landroid/icu/util/UResourceBundle;
	primaryZone = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("metaZones")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("primaryZones")))->getString(country);
	//    .local v5, "primaryZone":Ljava/lang/String;
	if ( !(tzid->equals(primaryZone)) )  
		goto label_cond_74;
	isPrimary->value = java::lang::Boolean::TRUE;
	goto label_goto_4f;
	// 1132    .line 504
	// 1133    .end local v0    # "bundle":Landroid/icu/util/UResourceBundle;
	// 1134    .end local v5    # "primaryZone":Ljava/lang/String;
	// 1135    .end local v6    # "primaryZones":Landroid/icu/util/UResourceBundle;
label_catch_72:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/util/MissingResourceException;
	goto label_goto_4f;
	// 1142    .line 499
	// 1143    .end local v3    # "e":Ljava/util/MissingResourceException;
	// 1144    .restart local v0    # "bundle":Landroid/icu/util/UResourceBundle;
	// 1145    .restart local v5    # "primaryZone":Ljava/lang/String;
	// 1146    .restart local v6    # "primaryZones":Landroid/icu/util/UResourceBundle;
label_cond_74:
	canonicalID = android::icu::impl::ZoneMeta::getCanonicalCLDRID(tzid);
	//    .local v1, "canonicalID":Ljava/lang/String;
	if ( !(canonicalID) )  
		goto label_cond_4f;
	if ( !(canonicalID->equals(primaryZone)) )  
		goto label_cond_4f;
	isPrimary->value = java::lang::Boolean::TRUE;
	//label_try_end_84:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_72;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_52 .. :try_end_84} :catch_72
	goto label_goto_4f;

}
// .method private static declared-synchronized getCanonicalSystemLocationZIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ZoneMeta::getCanonicalSystemLocationZIDs()
{
	
	std::shared_ptr<android::icu::impl::ZoneMeta> cVar0;
	std::shared_ptr<java::util::Set> canonicalSystemLocationZones;
	std::shared_ptr<java::util::Set> cVar1;
	std::shared_ptr<java::util::TreeSet> canonicalSystemLocationIDs;
	auto allIDs;
	int cVar2;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::Object> canonicalSystemLocationZones;
	std::shared_ptr<java::lang::ref::SoftReference> cVar4;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1175        value = {
	// 1176            "()",
	// 1177            "Ljava/util/Set",
	// 1178            "<",
	// 1179            "Ljava/lang/String;",
	// 1180            ">;"
	// 1181        }
	// 1182    .end annotation
	cVar0 = android::icu::impl::ZoneMeta();
	cVar0->monitor_enter();
	canonicalSystemLocationZones = 0x0;
	//    .local v4, "canonicalSystemLocationZones":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	try {
	//label_try_start_4:
	if ( !(android::icu::impl::ZoneMeta::REF_CANONICAL_SYSTEM_LOCATION_ZONES) )  
		goto label_cond_12;
	cVar1 = android::icu::impl::ZoneMeta::REF_CANONICAL_SYSTEM_LOCATION_ZONES->get();
	cVar1->checkCast("java::util::Set");
	canonicalSystemLocationZones = cVar1;
	//    .end local v4    # "canonicalSystemLocationZones":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_12:
	if ( canonicalSystemLocationZones )     
		goto label_cond_5c;
	canonicalSystemLocationIDs = std::make_shared<java::util::TreeSet>();
	//    .local v3, "canonicalSystemLocationIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	allIDs = android::icu::impl::ZoneMeta::getZoneIDs({const[class].FS-Param});
	//    .local v1, "allIDs":[Ljava/lang/String;
	cVar2 = 0x0;
label_goto_1f:
	if ( cVar2 >= allIDs->size() )
		goto label_cond_51;
	id = allIDs[cVar2];
	//    .local v5, "id":Ljava/lang/String;
	if ( !(id->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/Unknown")))) )  
		goto label_cond_2f;
label_cond_2c:
label_goto_2c:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_1f;
	// 1256    .line 139
label_cond_2f:
	//    .local v2, "canonicalID":Ljava/lang/String;
	if ( !(id->equals(android::icu::impl::ZoneMeta::getCanonicalCLDRID(id))) )  
		goto label_cond_2c;
	region = android::icu::impl::ZoneMeta::getRegion(id);
	//    .local v6, "region":Ljava/lang/String;
	if ( !(region) )  
		goto label_cond_2c;
	if ( !(( region->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("001"))) ^ 0x1)) )  
		goto label_cond_2c;
	canonicalSystemLocationIDs->add(id);
	//label_try_end_4d:
	}
	catch (...){
		goto label_catchall_4e;
	}
	//    .catchall {:try_start_4 .. :try_end_4d} :catchall_4e
	goto label_goto_2c;
	// 1296    .end local v1    # "allIDs":[Ljava/lang/String;
	// 1297    .end local v2    # "canonicalID":Ljava/lang/String;
	// 1298    .end local v5    # "id":Ljava/lang/String;
	// 1299    .end local v6    # "region":Ljava/lang/String;
label_catchall_4e:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1307    .line 147
	// 1308    .restart local v1    # "allIDs":[Ljava/lang/String;
label_cond_51:
	try {
	//label_try_start_51:
	canonicalSystemLocationZones = java::util::Collections::unmodifiableSet(canonicalSystemLocationIDs);
	//    .local v4, "canonicalSystemLocationZones":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar4 = std::make_shared<java::lang::ref::SoftReference>(canonicalSystemLocationZones);
	android::icu::impl::ZoneMeta::REF_CANONICAL_SYSTEM_LOCATION_ZONES = cVar4;
	//label_try_end_5c:
	}
	catch (...){
		goto label_catchall_4e;
	}
	//    .catchall {:try_start_51 .. :try_end_5c} :catchall_4e
label_cond_5c:
	cVar0->monitor_exit();
	return canonicalSystemLocationZones;

}
// .method private static declared-synchronized getCanonicalSystemZIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ZoneMeta::getCanonicalSystemZIDs()
{
	
	std::shared_ptr<android::icu::impl::ZoneMeta> cVar0;
	std::shared_ptr<java::util::Set> canonicalSystemZones;
	std::shared_ptr<java::util::Set> cVar1;
	std::shared_ptr<java::util::TreeSet> canonicalSystemIDs;
	auto allIDs;
	int cVar2;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::lang::Object> canonicalSystemZones;
	std::shared_ptr<java::lang::ref::SoftReference> cVar4;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1335        value = {
	// 1336            "()",
	// 1337            "Ljava/util/Set",
	// 1338            "<",
	// 1339            "Ljava/lang/String;",
	// 1340            ">;"
	// 1341        }
	// 1342    .end annotation
	cVar0 = android::icu::impl::ZoneMeta();
	cVar0->monitor_enter();
	canonicalSystemZones = 0x0;
	//    .local v4, "canonicalSystemZones":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	try {
	//label_try_start_4:
	if ( !(android::icu::impl::ZoneMeta::REF_CANONICAL_SYSTEM_ZONES) )  
		goto label_cond_12;
	cVar1 = android::icu::impl::ZoneMeta::REF_CANONICAL_SYSTEM_ZONES->get();
	cVar1->checkCast("java::util::Set");
	canonicalSystemZones = cVar1;
	//    .end local v4    # "canonicalSystemZones":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_12:
	if ( canonicalSystemZones )     
		goto label_cond_4b;
	canonicalSystemIDs = std::make_shared<java::util::TreeSet>();
	//    .local v3, "canonicalSystemIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	allIDs = android::icu::impl::ZoneMeta::getZoneIDs({const[class].FS-Param});
	//    .local v1, "allIDs":[Ljava/lang/String;
	cVar2 = 0x0;
label_goto_1f:
	if ( cVar2 >= allIDs->size() )
		goto label_cond_40;
	id = allIDs[cVar2];
	//    .local v5, "id":Ljava/lang/String;
	if ( !(id->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/Unknown")))) )  
		goto label_cond_2f;
label_cond_2c:
label_goto_2c:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_1f;
	// 1416    .line 107
label_cond_2f:
	//    .local v2, "canonicalID":Ljava/lang/String;
	if ( !(id->equals(android::icu::impl::ZoneMeta::getCanonicalCLDRID(id))) )  
		goto label_cond_2c;
	canonicalSystemIDs->add(id);
	//label_try_end_3c:
	}
	catch (...){
		goto label_catchall_3d;
	}
	//    .catchall {:try_start_4 .. :try_end_3c} :catchall_3d
	goto label_goto_2c;
	// 1437    .end local v1    # "allIDs":[Ljava/lang/String;
	// 1438    .end local v2    # "canonicalID":Ljava/lang/String;
	// 1439    .end local v5    # "id":Ljava/lang/String;
label_catchall_3d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1447    .line 112
	// 1448    .restart local v1    # "allIDs":[Ljava/lang/String;
label_cond_40:
	try {
	//label_try_start_40:
	canonicalSystemZones = java::util::Collections::unmodifiableSet(canonicalSystemIDs);
	//    .local v4, "canonicalSystemZones":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar4 = std::make_shared<java::lang::ref::SoftReference>(canonicalSystemZones);
	android::icu::impl::ZoneMeta::REF_CANONICAL_SYSTEM_ZONES = cVar4;
	//label_try_end_4b:
	}
	catch (...){
		goto label_catchall_3d;
	}
	//    .catchall {:try_start_40 .. :try_end_4b} :catchall_3d
label_cond_4b:
	cVar0->monitor_exit();
	return canonicalSystemZones;

}
// .method public static getCustomID(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getCustomID(std::shared_ptr<java::lang::String> id)
{
	
	bool cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> fields;
	
	//    .param p0, "id"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	fields = std::make_shared<std::vector<int[]>>(0x4);
	//    .local v0, "fields":[I
	if ( !(android::icu::impl::ZoneMeta::parseCustomID(id, fields)) )  
		goto label_cond_1e;
	if ( fields[cVar1] >= 0 )
		goto label_cond_1c;
label_goto_17:
	return android::icu::impl::ZoneMeta::formatCustomID(fields[cVar0], fields[0x2], fields[0x3], cVar0);
label_cond_1c:
	cVar0 = cVar1;
	goto label_goto_17;
	// 1521    .line 644
label_cond_1e:
	return 0x0;

}
// .method public static getCustomTimeZone(I)Landroid/icu/util/SimpleTimeZone;
std::shared_ptr<android::icu::util::SimpleTimeZone> android::icu::impl::ZoneMeta::getCustomTimeZone(int offset)
{
	
	int tmp;
	std::shared_ptr<android::icu::util::SimpleTimeZone> cVar0;
	
	//    .param p0, "offset"    # I
	//    .local v2, "negative":Z
	//    .local v4, "tmp":I
	if ( offset >= 0 )
		goto label_cond_6;
label_cond_6:
	tmp = ( offset / 0x3e8);
	//    .local v3, "sec":I
	tmp = ( tmp / 0x3c);
	//    .local v1, "min":I
	//    .local v0, "hour":I
	//    .local v5, "zid":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::SimpleTimeZone>(offset, android::icu::impl::ZoneMeta::formatCustomID(( tmp / 0x3c), ( tmp % 0x3c), ( tmp % 0x3c), 0x0));
	return cVar0;

}
// .method public static getCustomTimeZone(Ljava/lang/String;)Landroid/icu/util/SimpleTimeZone;
std::shared_ptr<android::icu::util::SimpleTimeZone> android::icu::impl::ZoneMeta::getCustomTimeZone(std::shared_ptr<java::lang::String> id)
{
	
	std::shared<std::vector<int[]>> fields;
	std::shared_ptr<android::icu::util::SimpleTimeZone> cVar0;
	
	//    .param p0, "id"    # Ljava/lang/String;
	fields = std::make_shared<std::vector<int[]>>(0x4);
	//    .local v0, "fields":[I
	if ( !(android::icu::impl::ZoneMeta::parseCustomID(id, fields)) )  
		goto label_cond_29;
	//    .local v1, "key":Ljava/lang/Integer;
	cVar0 = android::icu::impl::ZoneMeta::CUSTOM_ZONE_CACHE->getInstance(java::lang::Integer::valueOf((fields[0x0] *  ((fields[0x1] |  ( fields[0x2] << 0x5)) |  ( fields[0x3] << 0xb)))), fields);
	cVar0->checkCast("android::icu::util::SimpleTimeZone");
	return cVar0;
	// 1645    .line 629
	// 1646    .end local v1    # "key":Ljava/lang/Integer;
label_cond_29:
	return 0x0;

}
// .method public static declared-synchronized getEquivalentID(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getEquivalentID(std::shared_ptr<java::lang::String> id,int index)
{
	
	std::shared_ptr<android::icu::impl::ZoneMeta> cVar0;
	std::shared_ptr<android::icu::util::UResourceBundle> res;
	int zoneIdx;
	auto tmp;
	auto zones;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "index"    # I
	cVar0 = android::icu::impl::ZoneMeta();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//    .local v3, "result":Ljava/lang/String;
	if ( index < 0 ) 
		goto label_cond_29;
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_3 .. :try_end_c} :catchall_2b
	res = android::icu::impl::ZoneMeta::openOlsonResource(0x0, id);
	//    .local v2, "res":Landroid/icu/util/UResourceBundle;
	if ( !(res) )  
		goto label_cond_29;
	zoneIdx = -0x1;
	//    .local v5, "zoneIdx":I
	try {
	//label_try_start_10:
	//    .local v1, "links":Landroid/icu/util/UResourceBundle;
	zones = res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("links")))->getIntVector();
	//    .local v6, "zones":[I
	if ( index >= zones->size() )
		goto label_cond_20;
	zoneIdx = zones[index];
	//label_try_end_20:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_10 .. :try_end_20} :catch_2e
	//    .catchall {:try_start_10 .. :try_end_20} :catchall_2b
	//    .end local v1    # "links":Landroid/icu/util/UResourceBundle;
	//    .end local v6    # "zones":[I
label_cond_20:
label_goto_20:
	if ( zoneIdx < 0 ) 
		goto label_cond_29;
	try {
	//label_try_start_22:
	//label_try_end_25:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_22 .. :try_end_25} :catchall_2b
	tmp = android::icu::impl::ZoneMeta::getZoneID(zoneIdx);
	//    .local v4, "tmp":Ljava/lang/String;
	if ( !(tmp) )  
		goto label_cond_29;
	//    .end local v2    # "res":Landroid/icu/util/UResourceBundle;
	//    .end local v4    # "tmp":Ljava/lang/String;
	//    .end local v5    # "zoneIdx":I
label_cond_29:
	cVar0->monitor_exit();
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 1745    .end local v3    # "result":Ljava/lang/String;
label_catchall_2b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 1753    .line 268
	// 1754    .restart local v2    # "res":Landroid/icu/util/UResourceBundle;
	// 1755    .restart local v3    # "result":Ljava/lang/String;
	// 1756    .restart local v5    # "zoneIdx":I
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/util/MissingResourceException;
	goto label_goto_20;

}
// .method public static getRegion(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getRegion(std::shared_ptr<java::lang::String> tzid)
{
	
	std::shared_ptr<java::lang::String> region;
	int zoneIdx;
	std::shared_ptr<android::icu::util::UResourceBundle> regions;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "tzid"    # Ljava/lang/String;
	region = android::icu::impl::ZoneMeta::REGION_CACHE->get(tzid);
	region->checkCast("java::lang::String");
	//    .local v1, "region":Ljava/lang/String;
	if ( region )     
		goto label_cond_34;
	zoneIdx = android::icu::impl::ZoneMeta::getZoneIndex(tzid);
	//    .local v4, "zoneIdx":I
	if ( zoneIdx < 0 ) 
		goto label_cond_34;
	try {
	//label_try_start_10:
	//    .local v3, "top":Landroid/icu/util/UResourceBundle;
	regions = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneinfo64")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Regions")));
	//    .local v2, "regions":Landroid/icu/util/UResourceBundle;
	if ( zoneIdx >= regions->getSize() )
		goto label_cond_2d;
	//label_try_end_2c:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_10 .. :try_end_2c} :catch_35
	region = regions->getString(zoneIdx);
	//    .end local v2    # "regions":Landroid/icu/util/UResourceBundle;
	//    .end local v3    # "top":Landroid/icu/util/UResourceBundle;
label_cond_2d:
label_goto_2d:
	if ( !(region) )  
		goto label_cond_34;
	android::icu::impl::ZoneMeta::REGION_CACHE->put(tzid, region);
	//    .end local v4    # "zoneIdx":I
label_cond_34:
	return region;
	// 1844    .line 439
	// 1845    .restart local v4    # "zoneIdx":I
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	goto label_goto_2d;

}
// .method public static getShortID(Landroid/icu/util/TimeZone;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getShortID(std::shared_ptr<android::icu::util::TimeZone> tz)
{
	
	std::shared_ptr<java::lang::String> canonicalID;
	
	//    .param p0, "tz"    # Landroid/icu/util/TimeZone;
	0x0;
	//    .local v0, "canonicalID":Ljava/lang/String;
	if ( !(tz->instanceOf("android::icu::impl::OlsonTimeZone")) )  
		goto label_cond_f;
	tz->checkCast("android::icu::impl::OlsonTimeZone");
	//    .end local p0    # "tz":Landroid/icu/util/TimeZone;
	canonicalID = tz->getCanonicalID();
	//    .local v0, "canonicalID":Ljava/lang/String;
label_goto_c:
	if ( canonicalID )     
		goto label_cond_18;
	return 0x0;
	// 1885    .line 848
	// 1886    .local v0, "canonicalID":Ljava/lang/String;
	// 1887    .restart local p0    # "tz":Landroid/icu/util/TimeZone;
label_cond_f:
	canonicalID = android::icu::impl::ZoneMeta::getCanonicalCLDRID(tz->getID());
	//    .local v0, "canonicalID":Ljava/lang/String;
	goto label_goto_c;
	// 1900    .line 853
	// 1901    .end local p0    # "tz":Landroid/icu/util/TimeZone;
label_cond_18:
	return android::icu::impl::ZoneMeta::getShortIDFromCanonical(canonicalID);

}
// .method public static getShortID(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getShortID(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<java::lang::String> canonicalID;
	
	//    .param p0, "id"    # Ljava/lang/String;
	canonicalID = android::icu::impl::ZoneMeta::getCanonicalCLDRID(id);
	//    .local v0, "canonicalID":Ljava/lang/String;
	if ( canonicalID )     
		goto label_cond_8;
	return 0x0;
	// 1929    .line 867
label_cond_8:
	return android::icu::impl::ZoneMeta::getShortIDFromCanonical(canonicalID);

}
// .method private static getShortIDFromCanonical(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getShortIDFromCanonical(std::shared_ptr<java::lang::String> canonicalID)
{
	
	std::shared_ptr<java::lang::String> shortID;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "canonicalID"    # Ljava/lang/String;
	shortID = 0x0;
	//    .local v2, "shortID":Ljava/lang/String;
	//    .local v5, "tzidKey":Ljava/lang/String;
	try {
	//label_try_start_9:
	//    .local v1, "keyTypeData":Landroid/icu/util/UResourceBundle;
	//    .local v4, "typeMap":Landroid/icu/util/UResourceBundle;
	//    .local v3, "typeKeys":Landroid/icu/util/UResourceBundle;
	//label_try_end_26:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_28;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_9 .. :try_end_26} :catch_28
	shortID = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("keyTypeData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("typeMap")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("timezone")))->getString(canonicalID->replace(0x2f, 0x3a));
	//    .end local v1    # "keyTypeData":Landroid/icu/util/UResourceBundle;
	//    .end local v2    # "shortID":Ljava/lang/String;
	//    .end local v3    # "typeKeys":Landroid/icu/util/UResourceBundle;
	//    .end local v4    # "typeMap":Landroid/icu/util/UResourceBundle;
label_goto_27:
	return shortID;
	// 2003    .line 881
	// 2004    .restart local v2    # "shortID":Ljava/lang/String;
label_catch_28:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	goto label_goto_27;

}
// .method public static getSystemTimeZone(Ljava/lang/String;)Landroid/icu/impl/OlsonTimeZone;
std::shared_ptr<android::icu::impl::OlsonTimeZone> android::icu::impl::ZoneMeta::getSystemTimeZone(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<android::icu::impl::OlsonTimeZone> cVar0;
	
	//    .param p0, "id"    # Ljava/lang/String;
	cVar0 = android::icu::impl::ZoneMeta::SYSTEM_ZONE_CACHE->getInstance(id, id);
	cVar0->checkCast("android::icu::impl::OlsonTimeZone");
	return cVar0;

}
// .method private static declared-synchronized getSystemZIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ZoneMeta::getSystemZIDs()
{
	
	std::shared_ptr<android::icu::impl::ZoneMeta> cVar0;
	std::shared_ptr<java::util::Set> systemZones;
	std::shared_ptr<java::util::Set> cVar1;
	std::shared_ptr<java::util::TreeSet> systemIDs;
	auto allIDs;
	int cVar2;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::lang::Object> systemZones;
	std::shared_ptr<java::lang::ref::SoftReference> cVar4;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2032        value = {
	// 2033            "()",
	// 2034            "Ljava/util/Set",
	// 2035            "<",
	// 2036            "Ljava/lang/String;",
	// 2037            ">;"
	// 2038        }
	// 2039    .end annotation
	cVar0 = android::icu::impl::ZoneMeta();
	cVar0->monitor_enter();
	systemZones = 0x0;
	//    .local v4, "systemZones":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	try {
	//label_try_start_4:
	if ( !(android::icu::impl::ZoneMeta::REF_SYSTEM_ZONES) )  
		goto label_cond_12;
	cVar1 = android::icu::impl::ZoneMeta::REF_SYSTEM_ZONES->get();
	cVar1->checkCast("java::util::Set");
	systemZones = cVar1;
	//    .end local v4    # "systemZones":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_12:
	if ( systemZones )     
		goto label_cond_41;
	systemIDs = std::make_shared<java::util::TreeSet>();
	//    .local v3, "systemIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	allIDs = android::icu::impl::ZoneMeta::getZoneIDs({const[class].FS-Param});
	//    .local v1, "allIDs":[Ljava/lang/String;
	cVar2 = 0x0;
label_goto_1f:
	if ( cVar2 >= allIDs->size() )
		goto label_cond_36;
	id = allIDs[cVar2];
	//    .local v2, "id":Ljava/lang/String;
	if ( !(id->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/Unknown")))) )  
		goto label_cond_2f;
label_goto_2c:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_1f;
	// 2112    .line 80
label_cond_2f:
	systemIDs->add(id);
	//label_try_end_32:
	}
	catch (...){
		goto label_catchall_33;
	}
	//    .catchall {:try_start_4 .. :try_end_32} :catchall_33
	goto label_goto_2c;
	// 2120    .end local v1    # "allIDs":[Ljava/lang/String;
	// 2121    .end local v2    # "id":Ljava/lang/String;
label_catchall_33:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 2129    .line 82
	// 2130    .restart local v1    # "allIDs":[Ljava/lang/String;
label_cond_36:
	try {
	//label_try_start_36:
	systemZones = java::util::Collections::unmodifiableSet(systemIDs);
	//    .local v4, "systemZones":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar4 = std::make_shared<java::lang::ref::SoftReference>(systemZones);
	android::icu::impl::ZoneMeta::REF_SYSTEM_ZONES = cVar4;
	//label_try_end_41:
	}
	catch (...){
		goto label_catchall_33;
	}
	//    .catchall {:try_start_36 .. :try_end_41} :catchall_33
label_cond_41:
	cVar0->monitor_exit();
	return systemZones;

}
// .method private static getZoneID(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getZoneID(int idx)
{
	
	auto ids;
	
	//    .param p0, "idx"    # I
	if ( idx < 0 ) 
		goto label_cond_c;
	ids = android::icu::impl::ZoneMeta::getZoneIDs({const[class].FS-Param});
	//    .local v0, "ids":[Ljava/lang/String;
	if ( idx >= ids->size() )
		goto label_cond_c;
	return ids[idx];
	// 2178    .line 310
	// 2179    .end local v0    # "ids":[Ljava/lang/String;
label_cond_c:
	return 0x0;

}
// .method private static declared-synchronized getZoneIDs()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ZoneMeta::getZoneIDs()
{
	
	std::shared_ptr<android::icu::impl::ZoneMeta> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = android::icu::impl::ZoneMeta();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_3 .. :try_end_5} :catchall_29
	if ( android::icu::impl::ZoneMeta::ZONEIDS )     
		goto label_cond_1c;
	try {
	//label_try_start_7:
	//    .local v1, "top":Landroid/icu/util/UResourceBundle;
	android::icu::impl::ZoneMeta::ZONEIDS = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneinfo64")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->getStringArray(std::make_shared<java::lang::String>(std::make_shared<char[]>("Names")));
	//label_try_end_1c:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_7 .. :try_end_1c} :catch_2c
	//    .catchall {:try_start_7 .. :try_end_1c} :catchall_29
label_cond_1c:
label_goto_1c:
	try {
	//label_try_start_1c:
	if ( android::icu::impl::ZoneMeta::ZONEIDS )     
		goto label_cond_25;
	android::icu::impl::ZoneMeta::ZONEIDS = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x0);
label_cond_25:
	//label_try_end_27:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_1c .. :try_end_27} :catchall_29
	cVar0->monitor_exit();
	return android::icu::impl::ZoneMeta::ZONEIDS;
label_catchall_29:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 2260    .line 293
label_catch_2c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/util/MissingResourceException;
	goto label_goto_1c;

}
// .method private static getZoneIndex(Ljava/lang/String;)I
int android::icu::impl::ZoneMeta::getZoneIndex(std::shared_ptr<java::lang::String> zid)
{
	
	int zoneIdx;
	auto all;
	int start;
	int limit;
	int lastMid;
	int mid;
	int r;
	
	//    .param p0, "zid"    # Ljava/lang/String;
	zoneIdx = -0x1;
	//    .local v6, "zoneIdx":I
	all = android::icu::impl::ZoneMeta::getZoneIDs({const[class].FS-Param});
	//    .local v0, "all":[Ljava/lang/String;
	if ( all->size() <= 0 )
		goto label_cond_13;
	start = 0x0;
	//    .local v5, "start":I
	limit = all->size();
	//    .local v2, "limit":I
	lastMid = 0x7fffffff;
	//    .local v1, "lastMid":I
label_goto_d:
	mid = ( (start + limit) / 0x2);
	//    .local v3, "mid":I
	if ( lastMid != mid )
		goto label_cond_14;
	//    .end local v1    # "lastMid":I
	//    .end local v2    # "limit":I
	//    .end local v3    # "mid":I
	//    .end local v5    # "start":I
label_cond_13:
label_goto_13:
	return zoneIdx;
	// 2319    .line 327
	// 2320    .restart local v1    # "lastMid":I
	// 2321    .restart local v2    # "limit":I
	// 2322    .restart local v3    # "mid":I
	// 2323    .restart local v5    # "start":I
label_cond_14:
	lastMid = mid;
	r = zid->compareTo(all[mid]);
	//    .local v4, "r":I
	if ( r )     
		goto label_cond_1f;
	zoneIdx = mid;
	goto label_goto_13;
	// 2344    .line 332
label_cond_1f:
	if ( r >= 0 )
		goto label_cond_23;
	limit = mid;
	goto label_goto_d;
	// 2353    .line 335
label_cond_23:
	start = mid;
	goto label_goto_d;

}
// .method public static openOlsonResource(Landroid/icu/util/UResourceBundle;Ljava/lang/String;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::ZoneMeta::openOlsonResource(std::shared_ptr<android::icu::util::UResourceBundle> cVar0,std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle> res;
	int zoneIdx;
	std::shared_ptr<android::icu::util::UResourceBundle> cVar0;
	std::shared_ptr<android::icu::util::UResourceBundle> zones;
	std::shared_ptr<android::icu::util::UResourceBundle> zone;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "top"    # Landroid/icu/util/UResourceBundle;
	//    .param p1, "id"    # Ljava/lang/String;
	res = 0x0;
	//    .local v1, "res":Landroid/icu/util/UResourceBundle;
	zoneIdx = android::icu::impl::ZoneMeta::getZoneIndex(id);
	//    .local v3, "zoneIdx":I
	if ( zoneIdx < 0 ) 
		goto label_cond_30;
	if ( cVar0 )     
		goto label_cond_15;
	try {
	//label_try_start_9:
	cVar0 = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneinfo64")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
label_cond_15:
	zones = cVar0->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Zones")));
	//    .local v4, "zones":Landroid/icu/util/UResourceBundle;
	zone = zones->get(zoneIdx);
	//    .local v2, "zone":Landroid/icu/util/UResourceBundle;
	if ( zone->getType() != 0x7 )
		goto label_cond_2f;
	//label_try_end_2e:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_9 .. :try_end_2e} :catch_31
label_cond_2f:
	res = zone;
	//    .end local v1    # "res":Landroid/icu/util/UResourceBundle;
	//    .end local v2    # "zone":Landroid/icu/util/UResourceBundle;
	//    .end local v4    # "zones":Landroid/icu/util/UResourceBundle;
label_cond_30:
label_goto_30:
	return res;
	// 2442    .line 537
	// 2443    .restart local v1    # "res":Landroid/icu/util/UResourceBundle;
label_catch_31:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	res = 0x0;
	goto label_goto_30;

}
// .method static parseCustomID(Ljava/lang/String;[I)Z
bool android::icu::impl::ZoneMeta::parseCustomID(std::shared_ptr<java::lang::String> id,std::shared_ptr<int[]> fields)
{
	
	std::shared_ptr<java::text::ParsePosition> pos;
	int hour;
	std::shared_ptr<android::icu::text::NumberFormat> numberFormat;
	int start;
	int min;
	int sec;
	int length;
	
	//    .param p0, "id"    # Ljava/lang/String;
	//    .param p1, "fields"    # [I
	0x0;
	//    .local v4, "numberFormat":Landroid/icu/text/NumberFormat;
	if ( !(id) )  
		goto label_cond_13a;
	if ( id->length() <= std::make_shared<java::lang::String>(std::make_shared<char[]>("GMT"))->length() )
		goto label_cond_13a;
	if ( !(id->toUpperCase(java::util::Locale::ENGLISH)->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("GMT")))) )  
		goto label_cond_13a;
	pos = std::make_shared<java::text::ParsePosition>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GMT"))->length());
	//    .local v6, "pos":Ljava/text/ParsePosition;
	0x1;
	//    .local v8, "sign":I
	hour = 0x0;
	//    .local v0, "hour":I
	0x0;
	//    .local v2, "min":I
	0x0;
	//    .local v7, "sec":I
	if ( id->charAt(pos->getIndex()) != 0x2d )
		goto label_cond_5d;
label_cond_3c:
	pos->setIndex(( pos->getIndex() + 0x1));
	numberFormat = android::icu::text::NumberFormat::getInstance({const[class].FS-Param});
	//    .local v4, "numberFormat":Landroid/icu/text/NumberFormat;
	numberFormat->setParseIntegerOnly(0x1);
	start = pos->getIndex();
	//    .local v9, "start":I
	//    .local v3, "n":Ljava/lang/Number;
	if ( pos->getIndex() != start )
		goto label_cond_6b;
	return 0x0;
	// 2584    .line 670
	// 2585    .end local v3    # "n":Ljava/lang/Number;
	// 2586    .end local v9    # "start":I
	// 2587    .local v4, "numberFormat":Landroid/icu/text/NumberFormat;
label_cond_5d:
	if ( id->charAt(pos->getIndex()) == 0x2b )
		goto label_cond_3c;
	return 0x0;
	// 2606    .line 685
	// 2607    .restart local v3    # "n":Ljava/lang/Number;
	// 2608    .local v4, "numberFormat":Landroid/icu/text/NumberFormat;
	// 2609    .restart local v9    # "start":I
label_cond_6b:
	hour = numberFormat->parse(id, pos)->intValue();
	if ( pos->getIndex() >= id->length() )
		goto label_cond_11b;
	if ( (pos->getIndex() -  start) >  0x2 )
		goto label_cond_8d;
	if ( id->charAt(pos->getIndex()) == 0x3a )
		goto label_cond_8f;
label_cond_8d:
	return 0x0;
	// 2656    .line 693
label_cond_8f:
	pos->setIndex(( pos->getIndex() + 0x1));
	//    .local v5, "oldPos":I
	if ( (pos->getIndex() -  pos->getIndex()) == 0x2 )
		goto label_cond_aa;
	return 0x0;
	// 2693    .line 700
label_cond_aa:
	min = numberFormat->parse(id, pos)->intValue();
	if ( pos->getIndex() >= id->length() )
		goto label_cond_ef;
	if ( id->charAt(pos->getIndex()) == 0x3a )
		goto label_cond_c6;
	return 0x0;
	// 2728    .line 706
label_cond_c6:
	pos->setIndex(( pos->getIndex() + 0x1));
	if ( pos->getIndex() != id->length() )
		goto label_cond_e9;
	if ( (pos->getIndex() -  pos->getIndex()) == 0x2 )
		goto label_cond_eb;
label_cond_e9:
	return 0x0;
	// 2776    .line 713
label_cond_eb:
	sec = numberFormat->parse(id, pos)->intValue();
	//    .end local v5    # "oldPos":I
label_cond_ef:
label_goto_ef:
label_pswitch_ef:
	if ( hour >  0x17 )
		goto label_cond_13a;
	if ( min >  0x3b )
		goto label_cond_13a;
	if ( sec >  0x3b )
		goto label_cond_13a;
	if ( !(fields) )  
		goto label_cond_119;
	if ( fields->size() <  0x1 )
		goto label_cond_104;
	fields[0x0] = -0x1;
label_cond_104:
	if ( fields->size() <  0x2 )
		goto label_cond_10b;
	fields[0x1] = hour;
label_cond_10b:
	if ( fields->size() <  0x3 )
		goto label_cond_112;
	fields[0x2] = min;
label_cond_112:
	if ( fields->size() <  0x4 )
		goto label_cond_119;
	fields[0x3] = sec;
label_cond_119:
	return 0x1;
	// 2859    .line 725
label_cond_11b:
	length = (pos->getIndex() - start);
	//    .local v1, "length":I
	if ( length <= 0 )
		goto label_cond_126;
	if ( 0x6 >= length )
		goto label_cond_128;
label_cond_126:
	return 0x0;
	// 2881    .line 730
label_cond_128:
	// switch
	{
	auto item = ( length );
	if (item == 1) goto label_pswitch_ef;
	if (item == 2) goto label_pswitch_ef;
	if (item == 3) goto label_pswitch_12c;
	if (item == 4) goto label_pswitch_12c;
	if (item == 5) goto label_pswitch_131;
	if (item == 6) goto label_pswitch_131;
	}
	goto label_goto_ef;
	// 2887    .line 737
label_pswitch_12c:
	( hour % 0x64);
	hour = ( hour / 0x64);
	goto label_goto_ef;
	// 2896    .line 742
label_pswitch_131:
	( hour % 0x64);
	( ( hour / 0x64) % 0x64);
	hour = ( hour / 0x2710);
	goto label_goto_ef;
	// 2910    .line 767
	// 2911    .end local v0    # "hour":I
	// 2912    .end local v1    # "length":I
	// 2913    .end local v2    # "min":I
	// 2914    .end local v3    # "n":Ljava/lang/Number;
	// 2915    .end local v4    # "numberFormat":Landroid/icu/text/NumberFormat;
	// 2916    .end local v6    # "pos":Ljava/text/ParsePosition;
	// 2917    .end local v7    # "sec":I
	// 2918    .end local v8    # "sign":I
	// 2919    .end local v9    # "start":I
label_cond_13a:
	return 0x0;
	// 2925    .line 730
	// 2926    :pswitch_data_13c
	// 2927    .packed-switch 0x1
	// 2928        :pswitch_ef
	// 2929        :pswitch_ef
	// 2930        :pswitch_12c
	// 2931        :pswitch_12c
	// 2932        :pswitch_131
	// 2933        :pswitch_131
	// 2934    .end packed-switch

}


