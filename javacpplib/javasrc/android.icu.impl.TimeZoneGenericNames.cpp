// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.impl.TimeZoneGenericNames_S_Cache.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericMatchInfo.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameSearchHandler.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "android.icu.impl.TimeZoneGenericNames_S_NameInfo.h"
#include "android.icu.impl.TimeZoneGenericNames_S_Pattern.h"
#include "android.icu.impl.TimeZoneGenericNames.h"
#include "android.icu.impl.ZoneMeta.h"
#include "android.icu.text.LocaleDisplayNames.h"
#include "android.icu.text.TimeZoneFormat_S_TimeType.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.text.TimeZoneNames.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.TimeZone_S_SystemTimeZoneType.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Boolean.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.lang.ref.WeakReference.h"
#include "java.text.MessageFormat.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static android::icu::impl::TimeZoneGenericNames::_android_icu_impl_TimeZoneGenericNames_S_GenericNameTypeSwitchesValues = nullptr;
static android::icu::impl::TimeZoneGenericNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues = nullptr;
static android::icu::impl::TimeZoneGenericNames::_assertionsDisabled;
static android::icu::impl::TimeZoneGenericNames::DST_CHECK_RANGE = 0x3b3922000L;
static android::icu::impl::TimeZoneGenericNames::GENERIC_NAMES_CACHE = nullptr;
static android::icu::impl::TimeZoneGenericNames::GENERIC_NON_LOCATION_TYPES;
static android::icu::impl::TimeZoneGenericNames::serialVersionUID = 0x25e296fe0f5baf81L;
// .method private static synthetic -getandroid-icu-impl-TimeZoneGenericNames$GenericNameTypeSwitchesValues()[I
int android::icu::impl::TimeZoneGenericNames::_getandroid_icu_impl_TimeZoneGenericNames_S_GenericNameTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::TimeZoneGenericNames::_android_icu_impl_TimeZoneGenericNames_S_GenericNameTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::TimeZoneGenericNames::_android_icu_impl_TimeZoneGenericNames_S_GenericNameTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::TimeZoneGenericNames_S_GenericNameType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LOCATION->ordinal()] = 0x1;
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
	cVar0[android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG->ordinal()] = 0x2;
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
	cVar0[android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_2c
label_goto_29:
	android::icu::impl::TimeZoneGenericNames::_android_icu_impl_TimeZoneGenericNames_S_GenericNameTypeSwitchesValues = cVar0;
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
// .method private static synthetic -getandroid-icu-text-TimeZoneNames$NameTypeSwitchesValues()[I
int android::icu::impl::TimeZoneGenericNames::_getandroid_icu_text_TimeZoneNames_S_NameTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::TimeZoneGenericNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::TimeZoneGenericNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::TimeZoneNames_S_NameType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION->ordinal()] = 0x8;
	//label_try_end_18:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5f;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_18} :catch_5f
label_goto_18:
	try {
	//label_try_start_18:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT->ordinal()] = 0x9;
	//label_try_end_22:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5d;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_18 .. :try_end_22} :catch_5d
label_goto_22:
	try {
	//label_try_start_22:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC->ordinal()] = 0x1;
	//label_try_end_2b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5b;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_22 .. :try_end_2b} :catch_5b
label_goto_2b:
	try {
	//label_try_start_2b:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD->ordinal()] = 0x2;
	//label_try_end_34:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_59;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_2b .. :try_end_34} :catch_59
label_goto_34:
	try {
	//label_try_start_34:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT->ordinal()] = 0xa;
	//label_try_end_3e:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_57;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_34 .. :try_end_3e} :catch_57
label_goto_3e:
	try {
	//label_try_start_3e:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC->ordinal()] = 0x3;
	//label_try_end_47:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_55;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3e .. :try_end_47} :catch_55
label_goto_47:
	try {
	//label_try_start_47:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD->ordinal()] = 0x4;
	//label_try_end_50:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_53;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_47 .. :try_end_50} :catch_53
label_goto_50:
	android::icu::impl::TimeZoneGenericNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_53:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_50;
label_catch_55:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_47;
label_catch_57:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3e;
label_catch_59:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_34;
label_catch_5b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_2b;
label_catch_5d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_22;
label_catch_5f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_18;

}
// .method static constructor <clinit>()V
void android::icu::impl::TimeZoneGenericNames::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Cache> cVar0;
	std::shared<std::vector<std::vector<android::icu::text::TimeZoneNames_S_NameType>>> cVar1;
	
	android::icu::impl::TimeZoneGenericNames::_assertionsDisabled = ( android::icu::impl::TimeZoneGenericNames()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_Cache>(0x0);
	android::icu::impl::TimeZoneGenericNames::GENERIC_NAMES_CACHE = cVar0;
	cVar1 = std::make_shared<std::vector<std::vector<android::icu::text::TimeZoneNames_S_NameType>>>(0x2);
	cVar1[0x0] = android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC;
	cVar1[0x1] = android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC;
	android::icu::impl::TimeZoneGenericNames::GENERIC_NON_LOCATION_TYPES = cVar1;
	return;

}
// .method private constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::impl::TimeZoneGenericNames::TimeZoneGenericNames(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	android::icu::impl::TimeZoneGenericNames::(locale, 0x0);
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/impl/TimeZoneGenericNames;)V
android::icu::impl::TimeZoneGenericNames::TimeZoneGenericNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::impl::TimeZoneGenericNames> _this1)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "-this1"    # Landroid/icu/impl/TimeZoneGenericNames;
	android::icu::impl::TimeZoneGenericNames::(locale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/TimeZoneNames;)V
android::icu::impl::TimeZoneGenericNames::TimeZoneGenericNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::TimeZoneNames> tznames)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "tznames"    # Landroid/icu/text/TimeZoneNames;
	// 430    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_locale = locale;
	this->_tznames = tznames;
	this->init();
	return;

}
// .method private createGenericMatchInfo(Landroid/icu/text/TimeZoneNames$MatchInfo;)Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> android::icu::impl::TimeZoneGenericNames::createGenericMatchInfo(std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> matchInfo)
{
	
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> timeType;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> tzID;
	std::shared_ptr<java::lang::String> mzID;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> gmatch;
	
	//    .param p1, "matchInfo"    # Landroid/icu/text/TimeZoneNames$MatchInfo;
	0x0;
	//    .local v1, "nameType":Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	timeType = android::icu::text::TimeZoneFormat_S_TimeType::UNKNOWN;
	//    .local v4, "timeType":Landroid/icu/text/TimeZoneFormat$TimeType;
	// switch
	{
	auto item = ( android::icu::impl::TimeZoneGenericNames::-getandroid-icu-text-TimeZoneNames$NameTypeSwitchesValues({const[class].FS-Param})[matchInfo->nameType()->ordinal()] );
	if (item == 1) goto label_pswitch_4d;
	if (item == 2) goto label_pswitch_33;
	if (item == 3) goto label_pswitch_55;
	if (item == 4) goto label_pswitch_50;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unexpected MatchInfo name type - ")))->append(matchInfo->nameType())->toString());
	// throw
	throw cVar0;
	// 506    .line 801
label_pswitch_33:
	//    .local v1, "nameType":Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	timeType = android::icu::text::TimeZoneFormat_S_TimeType::STANDARD;
label_goto_37:
	tzID = matchInfo->tzID();
	//    .local v2, "tzID":Ljava/lang/String;
	if ( tzID )     
		goto label_cond_62;
	mzID = matchInfo->mzID();
	//    .local v6, "mzID":Ljava/lang/String;
	if ( android::icu::impl::TimeZoneGenericNames::_assertionsDisabled )     
		goto label_cond_58;
	if ( mzID )     
		goto label_cond_58;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 543    .line 805
	// 544    .end local v2    # "tzID":Ljava/lang/String;
	// 545    .end local v6    # "mzID":Ljava/lang/String;
	// 546    .local v1, "nameType":Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
label_pswitch_4d:
	//    .local v1, "nameType":Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	goto label_goto_37;
	// 553    .line 808
	// 554    .local v1, "nameType":Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
label_pswitch_50:
	//    .local v1, "nameType":Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	timeType = android::icu::text::TimeZoneFormat_S_TimeType::STANDARD;
	goto label_goto_37;
	// 564    .line 812
	// 565    .local v1, "nameType":Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
label_pswitch_55:
	//    .local v1, "nameType":Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	goto label_goto_37;
	// 572    .line 822
	// 573    .restart local v2    # "tzID":Ljava/lang/String;
	// 574    .restart local v6    # "mzID":Ljava/lang/String;
label_cond_58:
	tzID = this->_tznames->getReferenceZoneID(mzID, this->getTargetRegion());
	//    .end local v6    # "mzID":Ljava/lang/String;
label_cond_62:
	if ( android::icu::impl::TimeZoneGenericNames::_assertionsDisabled )     
		goto label_cond_6e;
	if ( tzID )     
		goto label_cond_6e;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 601    .line 826
label_cond_6e:
	gmatch = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo>(nameType, tzID, matchInfo->matchLength(), timeType, 0x0);
	//    .local v0, "gmatch":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	return gmatch;
	// 615    .line 799
	// 616    :pswitch_data_78
	// 617    .packed-switch 0x1
	// 618        :pswitch_4d
	// 619        :pswitch_33
	// 620        :pswitch_55
	// 621        :pswitch_50
	// 622    .end packed-switch

}
// .method private declared-synchronized findLocal(Ljava/lang/String;ILjava/util/EnumSet;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo>> android::icu::impl::TimeZoneGenericNames::findLocal(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> types)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameSearchHandler> handler;
	std::shared_ptr<java::util::Iterator> tzID_S_iterator;
	std::shared_ptr<java::lang::String> tzID;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 630        value = {
	// 631            "(",
	// 632            "Ljava/lang/String;",
	// 633            "I",
	// 634            "Ljava/util/EnumSet",
	// 635            "<",
	// 636            "Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;",
	// 637            ">;)",
	// 638            "Ljava/util/Collection",
	// 639            "<",
	// 640            "Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;",
	// 641            ">;"
	// 642        }
	// 643    .end annotation
	//    .local p3, "types":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
	this->monitor_enter();
	try {
	//label_try_start_1:
	handler = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_GenericNameSearchHandler>(types);
	//    .local v0, "handler":Landroid/icu/impl/TimeZoneGenericNames$GenericNameSearchHandler;
	this->_gnamesTrie->find(text, start, handler);
	if ( handler->getMaxMatchLen() == (text->length() -  start) )
		goto label_cond_1a;
	if ( !(this->_gnamesTrieFullyLoaded) )  
		goto label_cond_20;
label_cond_1a:
	//label_try_end_1d:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_1 .. :try_end_1d} :catchall_3c
	this->monitor_exit();
	return handler->getMatches();
	// 690    .line 882
label_cond_20:
	try {
	//label_try_start_20:
	//    .local v3, "tzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	tzID_S_iterator = android::icu::util::TimeZone::getAvailableIDs(android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL, 0x0, 0x0)->iterator();
	//    .local v2, "tzID$iterator":Ljava/util/Iterator;
label_goto_2c:
	if ( !(tzID_S_iterator->hasNext()) )  
		goto label_cond_3f;
	tzID = tzID_S_iterator->next();
	tzID->checkCast("java::lang::String");
	//    .local v1, "tzID":Ljava/lang/String;
	this->loadStrings(tzID);
	//label_try_end_3b:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_20 .. :try_end_3b} :catchall_3c
	goto label_goto_2c;
	// 731    .end local v0    # "handler":Landroid/icu/impl/TimeZoneGenericNames$GenericNameSearchHandler;
	// 732    .end local v1    # "tzID":Ljava/lang/String;
	// 733    .end local v2    # "tzID$iterator":Ljava/util/Iterator;
	// 734    .end local v3    # "tzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_catchall_3c:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 742    .line 886
	// 743    .restart local v0    # "handler":Landroid/icu/impl/TimeZoneGenericNames$GenericNameSearchHandler;
	// 744    .restart local v2    # "tzID$iterator":Ljava/util/Iterator;
	// 745    .restart local v3    # "tzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_3f:
	try {
	//label_try_start_40:
	this->_gnamesTrieFullyLoaded = 0x1;
	handler->resetResults();
	this->_gnamesTrie->find(text, start, handler);
	//label_try_end_4d:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_40 .. :try_end_4d} :catchall_3c
	this->monitor_exit();
	return handler->getMatches();

}
// .method private findTimeZoneNames(Ljava/lang/String;ILjava/util/EnumSet;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> android::icu::impl::TimeZoneGenericNames::findTimeZoneNames(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> types)
{
	
	std::shared_ptr<java::util::EnumSet> nameTypes;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 777        value = {
	// 778            "(",
	// 779            "Ljava/lang/String;",
	// 780            "I",
	// 781            "Ljava/util/EnumSet",
	// 782            "<",
	// 783            "Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;",
	// 784            ">;)",
	// 785            "Ljava/util/Collection",
	// 786            "<",
	// 787            "Landroid/icu/text/TimeZoneNames$MatchInfo;",
	// 788            ">;"
	// 789        }
	// 790    .end annotation
	//    .local p3, "types":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
	//    .local v1, "tznamesMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	nameTypes = java::util::EnumSet::noneOf(android::icu::text::TimeZoneNames_S_NameType());
	//    .local v0, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	if ( !(types->contains(android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG)) )  
		goto label_cond_19;
	nameTypes->add(android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC);
	nameTypes->add(android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD);
label_cond_19:
	if ( !(types->contains(android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT)) )  
		goto label_cond_2b;
	nameTypes->add(android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC);
	nameTypes->add(android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD);
label_cond_2b:
	if ( nameTypes->isEmpty() )     
		goto label_cond_37;
	//    .end local v1    # "tznamesMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
label_cond_37:
	return 0x0;

}
// .method private formatGenericNonLocationName(Landroid/icu/util/TimeZone;Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneGenericNames::formatGenericNonLocationName(std::shared_ptr<android::icu::util::TimeZone> tz,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> type,long long date)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	auto tzID;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> nameType;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::String> mzID;
	int useStandard;
	auto offsets;
	std::shared_ptr<android::icu::util::BasicTimeZone> btz;
	std::shared_ptr<android::icu::util::TimeZoneTransition> before;
	auto stdName;
	std::shared_ptr<java::lang::String> mzName;
	std::shared_ptr<java::lang::String> goldenID;
	auto offsets1;
	int cVar1;
	std::shared_ptr<android::icu::util::TimeZoneTransition> after;
	auto tmpOffsets;
	
	//    .param p1, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p2, "type"    # Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	//    .param p3, "date"    # J
	if ( android::icu::impl::TimeZoneGenericNames::_assertionsDisabled )     
		goto label_cond_1a;
	if ( type == android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG )
		goto label_cond_1a;
	if ( type == android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT )
		goto label_cond_1a;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 900    .line 328
label_cond_1a:
	tzID = android::icu::impl::ZoneMeta::getCanonicalCLDRID(tz);
	//    .local v21, "tzID":Ljava/lang/String;
	if ( tzID )     
		goto label_cond_23;
	return 0x0;
	// 915    .line 335
label_cond_23:
	if ( type != android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG )
		goto label_cond_3e;
	nameType = android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC;
	//    .local v15, "nameType":Landroid/icu/text/TimeZoneNames$NameType;
label_goto_2d:
	name = this->_tznames->getTimeZoneDisplayName(tzID, nameType);
	//    .local v14, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_41;
	return name;
	// 951    .line 335
	// 952    .end local v14    # "name":Ljava/lang/String;
	// 953    .end local v15    # "nameType":Landroid/icu/text/TimeZoneNames$NameType;
label_cond_3e:
	//    .restart local v15    # "nameType":Landroid/icu/text/TimeZoneNames$NameType;
	goto label_goto_2d;
	// 960    .line 343
	// 961    .restart local v14    # "name":Ljava/lang/String;
label_cond_41:
	mzID = this->_tznames->getMetaZoneID(tzID, date);
	//    .local v12, "mzID":Ljava/lang/String;
	if ( !(mzID) )  
		goto label_cond_163;
	useStandard = 0x0;
	//    .local v22, "useStandard":Z
	?;
	offsets = ?;
	//    .local v16, "offsets":[I
	tz->getOffset(date, 0x0, offsets);
	if ( offsets[0x1] )     
		goto label_cond_a5;
	useStandard = 0x1;
	if ( !(tz->instanceOf("android::icu::util::BasicTimeZone")) )  
		goto label_cond_18d;
	btz = tz;
	btz->checkCast("android::icu::util::BasicTimeZone");
	//    .local v8, "btz":Landroid/icu/util/BasicTimeZone;
	before = btz->getPreviousTransition(date, 0x1);
	//    .local v7, "before":Landroid/icu/util/TimeZoneTransition;
	if ( !(before) )  
		goto label_cond_164;
	if ( ((date - before->getTime()) > 0x3b3922000L) >= 0 )
		goto label_cond_164;
	if ( !(before->getFrom()->getDSTSavings()) )  
		goto label_cond_164;
	useStandard = 0x0;
	//    .end local v7    # "before":Landroid/icu/util/TimeZoneTransition;
	//    .end local v8    # "btz":Landroid/icu/util/BasicTimeZone;
label_cond_a5:
label_goto_a5:
	if ( !(useStandard) )  
		goto label_cond_da;
	if ( nameType != android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC )
		goto label_cond_1d1;
	//    .local v19, "stdNameType":Landroid/icu/text/TimeZoneNames$NameType;
label_goto_af:
	stdName = this->_tznames->getDisplayName(tzID, stdNameType, date);
	//    .local v18, "stdName":Ljava/lang/String;
	if ( !(stdName) )  
		goto label_cond_da;
	name = stdName;
	//    .local v11, "mzGenericName":Ljava/lang/String;
	if ( !(stdName->equalsIgnoreCase(this->_tznames->getMetaZoneDisplayName(mzID, nameType))) )  
		goto label_cond_da;
	name = 0x0;
	//    .end local v11    # "mzGenericName":Ljava/lang/String;
	//    .end local v14    # "name":Ljava/lang/String;
	//    .end local v18    # "stdName":Ljava/lang/String;
	//    .end local v19    # "stdNameType":Landroid/icu/text/TimeZoneNames$NameType;
label_cond_da:
	if ( name )     
		goto label_cond_163;
	mzName = this->_tznames->getMetaZoneDisplayName(mzID, nameType);
	//    .local v13, "mzName":Ljava/lang/String;
	if ( !(mzName) )  
		goto label_cond_163;
	goldenID = this->_tznames->getReferenceZoneID(mzID, this->getTargetRegion());
	//    .local v9, "goldenID":Ljava/lang/String;
	if ( !(goldenID) )  
		goto label_cond_1da;
	if ( !(( goldenID->equals(tzID) ^ 0x1)) )  
		goto label_cond_1da;
	//    .local v10, "goldenZone":Landroid/icu/util/TimeZone;
	?;
	offsets1 = ?;
	//    .local v17, "offsets1":[I
	android::icu::util::TimeZone::getFrozenTimeZone(goldenID)->getOffset((((long long)(offsets[0x0]) + date) + (long long)(offsets[0x1])), 0x1, offsets1);
	if ( offsets[0x0] != offsets1[0x0] )
		goto label_cond_151;
	if ( offsets[0x1] == offsets1[0x1] )
		goto label_cond_1d8;
label_cond_151:
	if ( nameType != android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC )
		goto label_cond_1d5;
	cVar1 = 0x1;
label_goto_159:
	name = this->getPartialLocationName(tzID, mzID, cVar1, mzName);
	//    .end local v9    # "goldenID":Ljava/lang/String;
	//    .end local v10    # "goldenZone":Landroid/icu/util/TimeZone;
	//    .end local v13    # "mzName":Ljava/lang/String;
	//    .end local v16    # "offsets":[I
	//    .end local v17    # "offsets1":[I
	//    .end local v22    # "useStandard":Z
label_cond_163:
label_goto_163:
	return name;
	// 1318    .line 360
	// 1319    .restart local v7    # "before":Landroid/icu/util/TimeZoneTransition;
	// 1320    .restart local v8    # "btz":Landroid/icu/util/BasicTimeZone;
	// 1321    .restart local v14    # "name":Ljava/lang/String;
	// 1322    .restart local v16    # "offsets":[I
	// 1323    .restart local v22    # "useStandard":Z
label_cond_164:
	after = btz->getNextTransition(date, 0x0);
	//    .local v6, "after":Landroid/icu/util/TimeZoneTransition;
	if ( !(after) )  
		goto label_cond_a5;
	if ( ((after->getTime() - date) > 0x3b3922000L) >= 0 )
		goto label_cond_a5;
	if ( !(after->getTo()->getDSTSavings()) )  
		goto label_cond_a5;
	useStandard = 0x0;
	goto label_goto_a5;
	// 1368    .line 370
	// 1369    .end local v6    # "after":Landroid/icu/util/TimeZoneTransition;
	// 1370    .end local v7    # "before":Landroid/icu/util/TimeZoneTransition;
	// 1371    .end local v8    # "btz":Landroid/icu/util/BasicTimeZone;
label_cond_18d:
	tmpOffsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v20, "tmpOffsets":[I
	tz->getOffset((date - 0x3b3922000L), 0x0, tmpOffsets);
	if ( !(tmpOffsets[0x1]) )  
		goto label_cond_1b3;
	useStandard = 0x0;
	goto label_goto_a5;
	// 1411    .line 375
label_cond_1b3:
	tz->getOffset((0x3b3922000L + date), 0x0, tmpOffsets);
	if ( !(tmpOffsets[0x1]) )  
		goto label_cond_a5;
	useStandard = 0x0;
	goto label_goto_a5;
	// 1441    .line 384
	// 1442    .end local v20    # "tmpOffsets":[I
label_cond_1d1:
	//    .restart local v19    # "stdNameType":Landroid/icu/text/TimeZoneNames$NameType;
	goto label_goto_af;
	// 1449    .line 421
	// 1450    .end local v14    # "name":Ljava/lang/String;
	// 1451    .end local v19    # "stdNameType":Landroid/icu/text/TimeZoneNames$NameType;
	// 1452    .restart local v9    # "goldenID":Ljava/lang/String;
	// 1453    .restart local v10    # "goldenZone":Landroid/icu/util/TimeZone;
	// 1454    .restart local v13    # "mzName":Ljava/lang/String;
	// 1455    .restart local v17    # "offsets1":[I
label_cond_1d5:
	cVar1 = 0x0;
	goto label_goto_159;
	// 1461    .line 423
label_cond_1d8:
	name = mzName;
	//    .restart local v14    # "name":Ljava/lang/String;
	goto label_goto_163;
	// 1468    .line 426
	// 1469    .end local v10    # "goldenZone":Landroid/icu/util/TimeZone;
	// 1470    .end local v14    # "name":Ljava/lang/String;
	// 1471    .end local v17    # "offsets1":[I
label_cond_1da:
	name = mzName;
	//    .restart local v14    # "name":Ljava/lang/String;
	goto label_goto_163;

}
// .method private varargs declared-synchronized formatPattern(Landroid/icu/impl/TimeZoneGenericNames$Pattern;[Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneGenericNames::formatPattern(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> pat,std::shared_ptr<std::vector<java::lang::String>> args)
{
	
	int idx;
	std::shared_ptr<java::text::MessageFormat> cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "pat"    # Landroid/icu/impl/TimeZoneGenericNames$Pattern;
	//    .param p2, "args"    # [Ljava/lang/String;
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->_patternFormatters )     
		goto label_cond_e;
	this->_patternFormatters = std::make_shared<std::vector<std::vector<java::text::MessageFormat>>>(android::icu::impl::TimeZoneGenericNames_S_Pattern::values({const[class].FS-Param})->size());
label_cond_e:
	idx = pat->ordinal();
	//    .local v2, "idx":I
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_58;
	}
	//    .catchall {:try_start_1 .. :try_end_16} :catchall_58
	if ( this->_patternFormatters[idx] )     
		goto label_cond_48;
	try {
	//label_try_start_18:
	bundle = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/zone")), this->_locale);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//label_try_end_3e:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_52;
	}
	catch (...){
		goto label_catchall_58;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_18 .. :try_end_3e} :catch_52
	//    .catchall {:try_start_18 .. :try_end_3e} :catchall_58
	//    .end local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	//    .local v3, "patText":Ljava/lang/String;
label_goto_3f:
	try {
	//label_try_start_3f:
	cVar1 = std::make_shared<java::text::MessageFormat>(patText);
	this->_patternFormatters[idx] = cVar1;
	//    .end local v3    # "patText":Ljava/lang/String;
label_cond_48:
	//label_try_end_4f:
	}
	catch (...){
		goto label_catchall_58;
	}
	//    .catchall {:try_start_3f .. :try_end_4f} :catchall_58
	this->monitor_exit();
	return this->_patternFormatters[idx]->format(args);
	// 1594    .line 455
label_catch_52:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/util/MissingResourceException;
	try {
	//label_try_start_53:
	//label_try_end_56:
	}
	catch (...){
		goto label_catchall_58;
	}
	//    .catchall {:try_start_53 .. :try_end_56} :catchall_58
	//    .restart local v3    # "patText":Ljava/lang/String;
	goto label_goto_3f;
	// 1610    .end local v1    # "e":Ljava/util/MissingResourceException;
	// 1611    .end local v2    # "idx":I
	// 1612    .end local v3    # "patText":Ljava/lang/String;
label_catchall_58:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/impl/TimeZoneGenericNames;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames> android::icu::impl::TimeZoneGenericNames::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "key":Ljava/lang/String;
	cVar0 = android::icu::impl::TimeZoneGenericNames::GENERIC_NAMES_CACHE->getInstance(locale->getBaseName(), locale);
	cVar0->checkCast("android::icu::impl::TimeZoneGenericNames");
	return cVar0;

}
// .method private declared-synchronized getLocaleDisplayNames()Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::impl::TimeZoneGenericNames::getLocaleDisplayNames()
{
	
	std::shared_ptr<android::icu::text::LocaleDisplayNames> locNames;
	std::shared_ptr<android::icu::text::LocaleDisplayNames> cVar0;
	std::shared_ptr<java::lang::Object> locNames;
	std::shared_ptr<java::lang::ref::WeakReference> cVar1;
	
	this->monitor_enter();
	locNames = 0x0;
	//    .local v1, "locNames":Landroid/icu/text/LocaleDisplayNames;
	try {
	//label_try_start_2:
	if ( !(this->_localeDisplayNamesRef) )  
		goto label_cond_10;
	cVar0 = this->_localeDisplayNamesRef->get();
	cVar0->checkCast("android::icu::text::LocaleDisplayNames");
	locNames = cVar0;
	//    .end local v1    # "locNames":Landroid/icu/text/LocaleDisplayNames;
label_cond_10:
	if ( locNames )     
		goto label_cond_1f;
	locNames = android::icu::text::LocaleDisplayNames::getInstance(this->_locale);
	//    .local v1, "locNames":Landroid/icu/text/LocaleDisplayNames;
	cVar1 = std::make_shared<java::lang::ref::WeakReference>(locNames);
	this->_localeDisplayNamesRef = cVar1;
	//label_try_end_1f:
	}
	catch (...){
		goto label_catchall_21;
	}
	//    .catchall {:try_start_2 .. :try_end_1f} :catchall_21
	//    .end local v1    # "locNames":Landroid/icu/text/LocaleDisplayNames;
label_cond_1f:
	this->monitor_exit();
	return locNames;
label_catchall_21:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private getPartialLocationName(Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneGenericNames::getPartialLocationName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<java::lang::String> mzID,bool isLong,std::shared_ptr<java::lang::String> mzDisplayName)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::lang::String> name;
	int location;
	std::shared_ptr<java::lang::String> countryCode;
	auto location;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar1;
	std::shared_ptr<java::lang::String> tmp;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_NameInfo> info;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> cVar2;
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "mzID"    # Ljava/lang/String;
	//    .param p3, "isLong"    # Z
	//    .param p4, "mzDisplayName"    # Ljava/lang/String;
	if ( !(isLong) )  
		goto label_cond_33;
	//    .local v3, "letter":Ljava/lang/String;
label_goto_5:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	key = cVar0->append(tzID)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("&")))->append(mzID)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("#")))->append(letter)->toString();
	//    .local v2, "key":Ljava/lang/String;
	name = this->_genericPartialLocationNamesMap->get(key);
	name->checkCast("java::lang::String");
	//    .local v5, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_37;
	return name;
	// 1775    .line 544
	// 1776    .end local v2    # "key":Ljava/lang/String;
	// 1777    .end local v3    # "letter":Ljava/lang/String;
	// 1778    .end local v5    # "name":Ljava/lang/String;
label_cond_33:
	//    .restart local v3    # "letter":Ljava/lang/String;
	goto label_goto_5;
	// 1785    .line 550
	// 1786    .restart local v2    # "key":Ljava/lang/String;
	// 1787    .restart local v5    # "name":Ljava/lang/String;
label_cond_37:
	location = 0x0;
	//    .local v4, "location":Ljava/lang/String;
	countryCode = android::icu::impl::ZoneMeta::getCanonicalCountry(tzID);
	//    .local v0, "countryCode":Ljava/lang/String;
	if ( !(countryCode) )  
		goto label_cond_8f;
	//    .local v6, "regionalGolden":Ljava/lang/String;
	if ( !(tzID->equals(this->_tznames->getReferenceZoneID(mzID, countryCode))) )  
		goto label_cond_88;
	location = this->getLocaleDisplayNames()->regionDisplayName(countryCode);
	//    .end local v6    # "regionalGolden":Ljava/lang/String;
	//    .local v4, "location":Ljava/lang/String;
label_cond_52:
label_goto_52:
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x2);
	cVar1[0x0] = location;
	cVar1[0x1] = mzDisplayName;
	name = this->formatPattern(android::icu::impl::TimeZoneGenericNames_S_Pattern::FALLBACK_FORMAT, cVar1);
	this->monitor_enter();
	try {
	//label_try_start_62:
	tmp = this->_genericPartialLocationNamesMap->putIfAbsent(key->intern(), name->intern());
	tmp->checkCast("java::lang::String");
	//    .local v7, "tmp":Ljava/lang/String;
	if ( tmp )     
		goto label_cond_9c;
	if ( !(isLong) )  
		goto label_cond_99;
	cVar2 = android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG;
label_goto_7e:
	info = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_NameInfo>(tzID->intern(), cVar2);
	//    .local v1, "info":Landroid/icu/impl/TimeZoneGenericNames$NameInfo;
	this->_gnamesTrie->put(name, info);
	//label_try_end_86:
	}
	catch (...){
		goto label_catchall_9e;
	}
	//    .catchall {:try_start_62 .. :try_end_86} :catchall_9e
	//    .end local v1    # "info":Landroid/icu/impl/TimeZoneGenericNames$NameInfo;
label_goto_86:
	this->monitor_exit();
	return name;
	// 1904    .line 560
	// 1905    .end local v7    # "tmp":Ljava/lang/String;
	// 1906    .local v4, "location":Ljava/lang/String;
	// 1907    .restart local v6    # "regionalGolden":Ljava/lang/String;
label_cond_88:
	location = this->_tznames->getExemplarLocationName(tzID);
	//    .local v4, "location":Ljava/lang/String;
	goto label_goto_52;
	// 1918    .line 563
	// 1919    .end local v6    # "regionalGolden":Ljava/lang/String;
	// 1920    .local v4, "location":Ljava/lang/String;
label_cond_8f:
	location = this->_tznames->getExemplarLocationName(tzID);
	//    .local v4, "location":Ljava/lang/String;
	if ( location )     
		goto label_cond_52;
	location = tzID;
	goto label_goto_52;
	// 1937    .line 576
	// 1938    .restart local v7    # "tmp":Ljava/lang/String;
label_cond_99:
	try {
	//label_try_start_99:
	cVar2 = android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT;
	//label_try_end_9b:
	}
	catch (...){
		goto label_catchall_9e;
	}
	//    .catchall {:try_start_99 .. :try_end_9b} :catchall_9e
	goto label_goto_7e;
	// 1947    .line 579
label_cond_9c:
	name = tmp;
	goto label_goto_86;
	// 1953    .line 572
	// 1954    .end local v7    # "tmp":Ljava/lang/String;
label_catchall_9e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private declared-synchronized getTargetRegion()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneGenericNames::getTargetRegion()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->_region )     
		goto label_cond_2e;
	this->_region = this->_locale->getCountry();
	if ( this->_region->length() )     
		goto label_cond_2e;
	//    .local v0, "tmp":Landroid/icu/util/ULocale;
	this->_region = android::icu::util::ULocale::addLikelySubtags(this->_locale)->getCountry();
	if ( this->_region->length() )     
		goto label_cond_2e;
	this->_region = std::make_shared<java::lang::String>(std::make_shared<char[]>("001"));
	//    .end local v0    # "tmp":Landroid/icu/util/ULocale;
label_cond_2e:
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_1 .. :try_end_30} :catchall_32
	this->monitor_exit();
	return this->_region;
label_catchall_32:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private init()V
void android::icu::impl::TimeZoneGenericNames::init()
{
	
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	std::shared_ptr<android::icu::impl::TextTrieMap> cVar2;
	std::shared_ptr<java::lang::String> tzCanonicalID;
	
	if ( this->_tznames )     
		goto label_cond_c;
	this->_tznames = android::icu::text::TimeZoneNames::getInstance(this->_locale);
label_cond_c:
	cVar0 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	this->_genericLocationNamesMap = cVar0;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	this->_genericPartialLocationNamesMap = cVar1;
	cVar2 = std::make_shared<android::icu::impl::TextTrieMap>(0x1);
	this->_gnamesTrie = cVar2;
	this->_gnamesTrieFullyLoaded = 0x0;
	//    .local v0, "tz":Landroid/icu/util/TimeZone;
	tzCanonicalID = android::icu::impl::ZoneMeta::getCanonicalCLDRID(android::icu::util::TimeZone::getDefault({const[class].FS-Param}));
	//    .local v1, "tzCanonicalID":Ljava/lang/String;
	if ( !(tzCanonicalID) )  
		goto label_cond_32;
	this->loadStrings(tzCanonicalID);
label_cond_32:
	return;

}
// .method private declared-synchronized loadStrings(Ljava/lang/String;)V
void android::icu::impl::TimeZoneGenericNames::loadStrings(std::shared_ptr<java::lang::String> tzCanonicalID)
{
	
	int cVar0;
	std::shared_ptr<java::util::Iterator> mzID_S_iterator;
	std::shared_ptr<java::lang::String> mzID;
	std::shared_ptr<std::vector<android::icu::text::TimeZoneNames_S_NameType>> cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> genNonLocType;
	std::shared_ptr<java::lang::String> mzGenName;
	bool cVar3;
	
	//    .param p1, "tzCanonicalID"    # Ljava/lang/String;
	cVar0 = 0x0;
	this->monitor_enter();
	if ( !(tzCanonicalID) )  
		goto label_cond_a;
	try {
	//label_try_start_4:
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_55;
	}
	//    .catchall {:try_start_4 .. :try_end_7} :catchall_55
	if ( tzCanonicalID->length() )     
		goto label_cond_c;
label_cond_a:
	this->monitor_exit();
	return;
	// 2138    .line 489
label_cond_c:
	try {
	//label_try_start_c:
	this->getGenericLocationName(tzCanonicalID);
	//    .local v5, "mzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	mzID_S_iterator = this->_tznames->getAvailableMetaZoneIDs(tzCanonicalID)->iterator();
	//    .local v4, "mzID$iterator":Ljava/util/Iterator;
label_cond_19:
	if ( !(mzID_S_iterator->hasNext()) )  
		goto label_cond_53;
	mzID = mzID_S_iterator->next();
	mzID->checkCast("java::lang::String");
	//    .local v3, "mzID":Ljava/lang/String;
	//    .local v1, "goldenID":Ljava/lang/String;
	if ( tzCanonicalID->equals(this->_tznames->getReferenceZoneID(mzID, this->getTargetRegion())) )     
		goto label_cond_19;
	cVar1 = android::icu::impl::TimeZoneGenericNames::GENERIC_NON_LOCATION_TYPES;
	cVar2 = cVar0;
label_goto_39:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_19;
	genNonLocType = cVar1[cVar2];
	//    .local v0, "genNonLocType":Landroid/icu/text/TimeZoneNames$NameType;
	mzGenName = this->_tznames->getMetaZoneDisplayName(mzID, genNonLocType);
	//    .local v2, "mzGenName":Ljava/lang/String;
	if ( !(mzGenName) )  
		goto label_cond_4d;
	if ( genNonLocType != android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC )
		goto label_cond_51;
	cVar3 = 0x1;
label_goto_4a:
	this->getPartialLocationName(tzCanonicalID, mzID, cVar3, mzGenName);
	//label_try_end_4d:
	}
	catch (...){
		goto label_catchall_55;
	}
	//    .catchall {:try_start_c .. :try_end_4d} :catchall_55
label_cond_4d:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_39;
label_cond_51:
	cVar3 = cVar0;
	goto label_goto_4a;
	// 2240    .end local v0    # "genNonLocType":Landroid/icu/text/TimeZoneNames$NameType;
	// 2241    .end local v1    # "goldenID":Ljava/lang/String;
	// 2242    .end local v2    # "mzGenName":Ljava/lang/String;
	// 2243    .end local v3    # "mzID":Ljava/lang/String;
label_cond_53:
	this->monitor_exit();
	return;
	// 2250    .end local v4    # "mzID$iterator":Ljava/util/Iterator;
	// 2251    .end local v5    # "mzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_catchall_55:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::impl::TimeZoneGenericNames::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2264        value = {
	// 2265            Ljava/io/IOException;,
	// 2266            Ljava/lang/ClassNotFoundException;
	// 2267        }
	// 2268    .end annotation
	in->defaultReadObject();
	this->init();
	return;

}
// .method public cloneAsThawed()Landroid/icu/impl/TimeZoneGenericNames;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames> android::icu::impl::TimeZoneGenericNames::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> cVar0;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames> copy;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .local v1, "copy":Landroid/icu/impl/TimeZoneGenericNames;
	try {
	//label_try_start_1:
	cVar0 = this->clone();
	cVar0->checkCast("android::icu::impl::TimeZoneGenericNames");
	copy = cVar0;
	//    .local v1, "copy":Landroid/icu/impl/TimeZoneGenericNames;
	copy->_frozen = 0x0;
	//label_try_end_c:
	}
	catch (java::lang::Throwable e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_c} :catch_d
	//    .end local v1    # "copy":Landroid/icu/impl/TimeZoneGenericNames;
label_goto_c:
	return copy;
	// 2316    .line 944
label_catch_d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "t":Ljava/lang/Throwable;
	goto label_goto_c;

}
// .method public find(Ljava/lang/String;ILjava/util/EnumSet;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo>> android::icu::impl::TimeZoneGenericNames::find(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> genericTypes)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::util::Collection> results;
	std::shared_ptr<java::lang::Iterable> tznamesMatches;
	std::shared_ptr<java::util::Iterator> match_S_iterator;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> match;
	std::shared_ptr<java::util::LinkedList> results;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 2341        value = {
	// 2342            "(",
	// 2343            "Ljava/lang/String;",
	// 2344            "I",
	// 2345            "Ljava/util/EnumSet",
	// 2346            "<",
	// 2347            "Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;",
	// 2348            ">;)",
	// 2349            "Ljava/util/Collection",
	// 2350            "<",
	// 2351            "Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;",
	// 2352            ">;"
	// 2353        }
	// 2354    .end annotation
	//    .local p3, "genericTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
	if ( !(text) )  
		goto label_cond_8;
	if ( text->length() )     
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad input text or range")));
	// throw
	throw cVar0;
	// 2377    .line 771
label_cond_11:
	if ( start < 0 ) 
		goto label_cond_8;
	if ( start >= text->length() )
		goto label_cond_8;
	results = this->findLocal(text, start, genericTypes);
	//    .local v2, "results":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;>;"
	tznamesMatches = this->findTimeZoneNames(text, start, genericTypes);
	//    .local v3, "tznamesMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	if ( !(tznamesMatches) )  
		goto label_cond_42;
	match_S_iterator = tznamesMatches->iterator();
	//    .local v1, "match$iterator":Ljava/util/Iterator;
label_goto_27:
	if ( !(match_S_iterator->hasNext()) )  
		goto label_cond_42;
	match = match_S_iterator->next();
	match->checkCast("android::icu::text::TimeZoneNames_S_MatchInfo");
	//    .local v0, "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	if ( results )     
		goto label_cond_3a;
	//    .end local v2    # "results":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;>;"
	results = std::make_shared<java::util::LinkedList>();
	//    .restart local v2    # "results":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;>;"
label_cond_3a:
	results->add(this->createGenericMatchInfo(match));
	goto label_goto_27;
	// 2442    .line 788
	// 2443    .end local v0    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 2444    .end local v1    # "match$iterator":Ljava/util/Iterator;
label_cond_42:
	return results;

}
// .method public findBestMatch(Ljava/lang/String;ILjava/util/EnumSet;)Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> android::icu::impl::TimeZoneGenericNames::findBestMatch(std::shared_ptr<java::lang::String> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>> genericTypes)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::Iterable> tznamesMatches;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> longestMatch;
	std::shared_ptr<java::util::Iterator> match_S_iterator;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_MatchInfo> match;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> bestMatch;
	std::shared_ptr<java::lang::Iterable> localMatches;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> match;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 2454        value = {
	// 2455            "(",
	// 2456            "Ljava/lang/String;",
	// 2457            "I",
	// 2458            "Ljava/util/EnumSet",
	// 2459            "<",
	// 2460            "Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;",
	// 2461            ">;)",
	// 2462            "Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;"
	// 2463        }
	// 2464    .end annotation
	//    .local p3, "genericTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;>;"
	if ( !(text) )  
		goto label_cond_8;
	if ( text->length() )     
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad input text or range")));
	// throw
	throw cVar0;
	// 2487    .line 705
label_cond_11:
	if ( start < 0 ) 
		goto label_cond_8;
	if ( start >= text->length() )
		goto label_cond_8;
	//    .local v0, "bestMatch":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	tznamesMatches = this->findTimeZoneNames(text, start, genericTypes);
	//    .local v6, "tznamesMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	if ( !(tznamesMatches) )  
		goto label_cond_57;
	longestMatch = 0x0;
	//    .local v2, "longestMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	match_S_iterator = tznamesMatches->iterator();
	//    .end local v2    # "longestMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	//    .local v5, "match$iterator":Ljava/util/Iterator;
label_cond_25:
label_goto_25:
	if ( !(match_S_iterator->hasNext()) )  
		goto label_cond_3f;
	match = match_S_iterator->next();
	match->checkCast("android::icu::text::TimeZoneNames_S_MatchInfo");
	//    .local v4, "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
	if ( !(longestMatch) )  
		goto label_cond_3d;
	if ( match->matchLength() <= longestMatch->matchLength() )
		goto label_cond_25;
label_cond_3d:
	longestMatch = match;
	//    .local v2, "longestMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	goto label_goto_25;
	// 2556    .line 719
	// 2557    .end local v2    # "longestMatch":Landroid/icu/text/TimeZoneNames$MatchInfo;
	// 2558    .end local v4    # "match":Landroid/icu/text/TimeZoneNames$MatchInfo;
label_cond_3f:
	if ( !(longestMatch) )  
		goto label_cond_57;
	bestMatch = this->createGenericMatchInfo(longestMatch);
	//    .local v0, "bestMatch":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	if ( bestMatch->matchLength() != (text->length() -  start) )
		goto label_cond_57;
	if ( bestMatch->timeType == android::icu::text::TimeZoneFormat_S_TimeType::STANDARD )
		goto label_cond_57;
	return bestMatch;
	// 2591    .line 747
	// 2592    .end local v0    # "bestMatch":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	// 2593    .end local v5    # "match$iterator":Ljava/util/Iterator;
label_cond_57:
	localMatches = this->findLocal(text, start, genericTypes);
	//    .local v1, "localMatches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;>;"
	if ( !(localMatches) )  
		goto label_cond_7b;
	match_S_iterator = localMatches->iterator();
	//    .restart local v5    # "match$iterator":Ljava/util/Iterator;
label_cond_61:
label_goto_61:
	if ( !(match_S_iterator->hasNext()) )  
		goto label_cond_7b;
	match = match_S_iterator->next();
	match->checkCast("android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo");
	//    .local v3, "match":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	if ( !(bestMatch) )  
		goto label_cond_79;
	if ( match->matchLength() <  bestMatch->matchLength() )
		goto label_cond_61;
label_cond_79:
	bestMatch = match;
	//    .restart local v0    # "bestMatch":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	goto label_goto_61;
	// 2644    .line 759
	// 2645    .end local v0    # "bestMatch":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	// 2646    .end local v3    # "match":Landroid/icu/impl/TimeZoneGenericNames$GenericMatchInfo;
	// 2647    .end local v5    # "match$iterator":Ljava/util/Iterator;
label_cond_7b:
	return 0x0;

}
// .method public freeze()Landroid/icu/impl/TimeZoneGenericNames;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames> android::icu::impl::TimeZoneGenericNames::freeze()
{
	
	this->_frozen = 0x1;
	return this;

}
// .method public getDisplayName(Landroid/icu/util/TimeZone;Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneGenericNames::getDisplayName(std::shared_ptr<android::icu::util::TimeZone> tz,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> type,long long date)
{
	
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::String> tzCanonicalID;
	
	//    .param p1, "tz"    # Landroid/icu/util/TimeZone;
	//    .param p2, "type"    # Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	//    .param p3, "date"    # J
	name = 0x0;
	//    .local v0, "name":Ljava/lang/String;
	0x0;
	//    .local v1, "tzCanonicalID":Ljava/lang/String;
	// switch
	{
	auto item = ( android::icu::impl::TimeZoneGenericNames::-getandroid-icu-impl-TimeZoneGenericNames$GenericNameTypeSwitchesValues({const[class].FS-Param})[type->ordinal()] );
	if (item == 1) goto label_pswitch_10;
	if (item == 2) goto label_pswitch_1b;
	if (item == 3) goto label_pswitch_1b;
	}
	//    .end local v0    # "name":Ljava/lang/String;
	//    .end local v1    # "tzCanonicalID":Ljava/lang/String;
label_cond_f:
label_goto_f:
	return name;
	// 2712    .line 202
	// 2713    .restart local v0    # "name":Ljava/lang/String;
	// 2714    .restart local v1    # "tzCanonicalID":Ljava/lang/String;
label_pswitch_10:
	tzCanonicalID = android::icu::impl::ZoneMeta::getCanonicalCLDRID(tz);
	//    .local v1, "tzCanonicalID":Ljava/lang/String;
	if ( !(tzCanonicalID) )  
		goto label_cond_f;
	name = this->getGenericLocationName(tzCanonicalID);
	//    .local v0, "name":Ljava/lang/String;
	goto label_goto_f;
	// 2732    .line 209
	// 2733    .local v0, "name":Ljava/lang/String;
	// 2734    .local v1, "tzCanonicalID":Ljava/lang/String;
label_pswitch_1b:
	name = this->formatGenericNonLocationName(tz, type, date);
	//    .local v0, "name":Ljava/lang/String;
	if ( name )     
		goto label_cond_f;
	tzCanonicalID = android::icu::impl::ZoneMeta::getCanonicalCLDRID(tz);
	//    .local v1, "tzCanonicalID":Ljava/lang/String;
	if ( !(tzCanonicalID) )  
		goto label_cond_f;
	name = this->getGenericLocationName(tzCanonicalID);
	goto label_goto_f;
	// 2760    .line 200
	// 2761    :pswitch_data_2c
	// 2762    .packed-switch 0x1
	// 2763        :pswitch_10
	// 2764        :pswitch_1b
	// 2765        :pswitch_1b
	// 2766    .end packed-switch

}
// .method public getGenericLocationName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneGenericNames::getGenericLocationName(std::shared_ptr<java::lang::String> canonicalTzID)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<android::icu::util::Output> isPrimary;
	std::shared_ptr<java::lang::String> countryCode;
	std::shared_ptr<java::lang::Object> cVar3;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar4;
	std::shared_ptr<java::lang::Object> cVar6;
	std::shared_ptr<java::lang::String> tmp;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_NameInfo> info;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	
	//    .param p1, "canonicalTzID"    # Ljava/lang/String;
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x0;
	if ( !(canonicalTzID) )  
		goto label_cond_b;
	if ( canonicalTzID->length() )     
		goto label_cond_c;
label_cond_b:
	return cVar2;
	// 2793    .line 231
label_cond_c:
	name = this->_genericLocationNamesMap->get(canonicalTzID);
	name->checkCast("java::lang::String");
	//    .local v5, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_1e;
	if ( name->length() )     
		goto label_cond_1d;
	return cVar2;
	// 2817    .line 237
label_cond_1d:
	return name;
	// 2821    .line 240
label_cond_1e:
	isPrimary = std::make_shared<android::icu::util::Output>();
	//    .local v4, "isPrimary":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	countryCode = android::icu::impl::ZoneMeta::getCanonicalCountry(canonicalTzID, isPrimary);
	//    .local v2, "countryCode":Ljava/lang/String;
	if ( !(countryCode) )  
		goto label_cond_45;
	cVar3 = isPrimary->value;
	cVar3->checkCast("java::lang::Boolean");
	if ( !(cVar3->booleanValue()) )  
		goto label_cond_54;
	//    .local v1, "country":Ljava/lang/String;
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar4[cVar1] = this->getLocaleDisplayNames()->regionDisplayName(countryCode);
	name = this->formatPattern(android::icu::impl::TimeZoneGenericNames_S_Pattern::REGION_FORMAT, cVar4);
	//    .end local v1    # "country":Ljava/lang/String;
label_cond_45:
label_goto_45:
	if ( name )     
		goto label_cond_65;
	this->_genericLocationNamesMap->putIfAbsent(canonicalTzID->intern(), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
label_goto_53:
	return name;
	// 2890    .line 253
label_cond_54:
	//    .local v0, "city":Ljava/lang/String;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar5[cVar1] = this->_tznames->getExemplarLocationName(canonicalTzID);
	name = this->formatPattern(android::icu::impl::TimeZoneGenericNames_S_Pattern::REGION_FORMAT, cVar5);
	goto label_goto_45;
	// 2912    .line 261
	// 2913    .end local v0    # "city":Ljava/lang/String;
label_cond_65:
	this->monitor_enter();
	try {
	//label_try_start_66:
	cVar6 = canonicalTzID->intern();
	tmp = this->_genericLocationNamesMap->putIfAbsent(cVar6, name->intern());
	tmp->checkCast("java::lang::String");
	//    .local v6, "tmp":Ljava/lang/String;
	if ( tmp )     
		goto label_cond_86;
	info = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_NameInfo>(cVar6, android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LOCATION);
	//    .local v3, "info":Landroid/icu/impl/TimeZoneGenericNames$NameInfo;
	this->_gnamesTrie->put(name, info);
	//label_try_end_84:
	}
	catch (...){
		goto label_catchall_88;
	}
	//    .catchall {:try_start_66 .. :try_end_84} :catchall_88
	//    .end local v3    # "info":Landroid/icu/impl/TimeZoneGenericNames$NameInfo;
label_goto_84:
	this->monitor_exit();
	goto label_goto_53;
	// 2961    .line 269
label_cond_86:
	name = tmp;
	goto label_goto_84;
	// 2967    .line 261
	// 2968    .end local v6    # "tmp":Ljava/lang/String;
label_catchall_88:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public isFrozen()Z
bool android::icu::impl::TimeZoneGenericNames::isFrozen()
{
	
	return this->_frozen;

}
// .method public setFormatPattern(Landroid/icu/impl/TimeZoneGenericNames$Pattern;Ljava/lang/String;)Landroid/icu/impl/TimeZoneGenericNames;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames> android::icu::impl::TimeZoneGenericNames::setFormatPattern(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> patType,std::shared_ptr<java::lang::String> patStr)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar2;
	std::shared_ptr<java::text::MessageFormat> cVar3;
	
	//    .param p1, "patType"    # Landroid/icu/impl/TimeZoneGenericNames$Pattern;
	//    .param p2, "patStr"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen object")));
	// throw
	throw cVar0;
	// 3011    .line 289
label_cond_10:
	if ( this->_genericLocationNamesMap->isEmpty() )     
		goto label_cond_1f;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	this->_genericLocationNamesMap = cVar1;
label_cond_1f:
	if ( this->_genericPartialLocationNamesMap->isEmpty() )     
		goto label_cond_2e;
	cVar2 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	this->_genericPartialLocationNamesMap = cVar2;
label_cond_2e:
	this->_gnamesTrie = 0x0;
	this->_gnamesTrieFullyLoaded = 0x0;
	if ( this->_patternFormatters )     
		goto label_cond_40;
	this->_patternFormatters = std::make_shared<std::vector<std::vector<java::text::MessageFormat>>>(android::icu::impl::TimeZoneGenericNames_S_Pattern::values({const[class].FS-Param})->size());
label_cond_40:
	cVar3 = std::make_shared<java::text::MessageFormat>(patStr);
	this->_patternFormatters[patType->ordinal()] = cVar3;
	return this;

}


