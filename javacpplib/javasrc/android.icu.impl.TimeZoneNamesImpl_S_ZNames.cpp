// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$ZNames.smali
#include "java2ctype.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_NameInfo.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNames.h"
#include "android.icu.impl.TimeZoneNamesImpl.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Map.h"

static android::icu::impl::TimeZoneNamesImpl_S_ZNames::_android_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndexSwitchesValues = nullptr;
static android::icu::impl::TimeZoneNamesImpl_S_ZNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues = nullptr;
static android::icu::impl::TimeZoneNamesImpl_S_ZNames::EMPTY_ZNAMES;
static android::icu::impl::TimeZoneNamesImpl_S_ZNames::EX_LOC_INDEX;
static android::icu::impl::TimeZoneNamesImpl_S_ZNames::NUM_NAME_TYPES = 0x7;
// .method private static synthetic -getandroid-icu-impl-TimeZoneNamesImpl$ZNames$NameTypeIndexSwitchesValues()[I
int android::icu::impl::TimeZoneNamesImpl_S_ZNames::_getandroid_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndexSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::TimeZoneNamesImpl_S_ZNames::_android_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndexSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames::_android_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndexSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::EXEMPLAR_LOCATION->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_5c
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::LONG_DAYLIGHT->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_5a
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::LONG_GENERIC->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_58;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_58
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::LONG_STANDARD->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_56;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_56
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::SHORT_DAYLIGHT->ordinal()] = 0x5;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_54;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_54
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::SHORT_GENERIC->ordinal()] = 0x6;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_52;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_52
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::SHORT_STANDARD->ordinal()] = 0x7;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_50;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_50
label_goto_4d:
	android::icu::impl::TimeZoneNamesImpl_S_ZNames::_android_icu_impl_TimeZoneNamesImpl_S_ZNames_S_NameTypeIndexSwitchesValues = cVar0;
	return cVar0;
label_catch_50:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_52:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_54:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_56:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_58:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_5a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_5c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method private static synthetic -getandroid-icu-text-TimeZoneNames$NameTypeSwitchesValues()[I
int android::icu::impl::TimeZoneNamesImpl_S_ZNames::_getandroid_icu_text_TimeZoneNames_S_NameTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::TimeZoneNamesImpl_S_ZNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::TimeZoneNames_S_NameType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_5c
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_5a
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_58;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_58
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_56;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_56
label_goto_32:
	try {
	//label_try_start_32:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT->ordinal()] = 0x5;
	//label_try_end_3b:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_54;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_32 .. :try_end_3b} :catch_54
label_goto_3b:
	try {
	//label_try_start_3b:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC->ordinal()] = 0x6;
	//label_try_end_44:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_52;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_3b .. :try_end_44} :catch_52
label_goto_44:
	try {
	//label_try_start_44:
	cVar0[android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD->ordinal()] = 0x7;
	//label_try_end_4d:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_50;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_44 .. :try_end_4d} :catch_50
label_goto_4d:
	android::icu::impl::TimeZoneNamesImpl_S_ZNames::_android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_50:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_4d;
label_catch_52:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_44;
label_catch_54:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_3b;
label_catch_56:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_58:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_5a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_5c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void android::icu::impl::TimeZoneNamesImpl_S_ZNames::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_ZNames>(0x0);
	android::icu::impl::TimeZoneNamesImpl_S_ZNames::EMPTY_ZNAMES = cVar0;
	android::icu::impl::TimeZoneNamesImpl_S_ZNames::EX_LOC_INDEX = android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::EXEMPLAR_LOCATION->ordinal();
	return;

}
// .method protected constructor <init>([Ljava/lang/String;)V
android::icu::impl::TimeZoneNamesImpl_S_ZNames::TimeZoneNamesImpl_S_ZNames(std::shared_ptr<std::vector<java::lang::String>> names)
{
	
	bool cVar0;
	
	//    .param p1, "names"    # [Ljava/lang/String;
	// 390    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->_names = names;
	if ( names )     
		goto label_cond_b;
	cVar0 = 0x1;
label_goto_8:
	this->didAddIntoTrie = cVar0;
	return;
	// 406    .line 758
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method private addNamesIntoTrie(Ljava/lang/String;Ljava/lang/String;Landroid/icu/impl/TextTrieMap;)V
void android::icu::impl::TimeZoneNamesImpl_S_ZNames::addNamesIntoTrie(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::impl::TextTrieMap<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>> trie)
{
	
	int i;
	std::shared_ptr<java::lang::CharSequence> name;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_NameInfo> info;
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .param p2, "tzID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 418        value = {
	// 419            "(",
	// 420            "Ljava/lang/String;",
	// 421            "Ljava/lang/String;",
	// 422            "Landroid/icu/impl/TextTrieMap",
	// 423            "<",
	// 424            "Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;",
	// 425            ">;)V"
	// 426        }
	// 427    .end annotation
	//    .local p3, "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;>;"
	if ( !(this->_names) )  
		goto label_cond_9;
	if ( !(this->didAddIntoTrie) )  
		goto label_cond_a;
label_cond_9:
	return;
	// 446    .line 810
label_cond_a:
	this->didAddIntoTrie = 0x1;
	i = 0x0;
	//    .local v0, "i":I
label_goto_e:
	if ( i >= this->_names->size() )
		goto label_cond_2e;
	name = this->_names[i];
	//    .local v2, "name":Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_2b;
	info = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>(0x0);
	//    .local v1, "info":Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;
	info->mzID = mzID;
	info->tzID = tzID;
	info->type = android::icu::impl::TimeZoneNamesImpl_S_ZNames::getNameType(i);
	trie->put(name, info);
	//    .end local v1    # "info":Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;
label_cond_2b:
	i = ( i + 0x1);
	goto label_goto_e;
	// 501    .line 822
	// 502    .end local v2    # "name":Ljava/lang/String;
label_cond_2e:
	return;

}
// .method public static createMetaZoneAndPutInCache(Ljava/util/Map;[Ljava/lang/String;Ljava/lang/String;)Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> android::icu::impl::TimeZoneNamesImpl_S_ZNames::createMetaZoneAndPutInCache(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::TimeZoneNamesImpl_S_ZNames>> cache,std::shared_ptr<std::vector<java::lang::String>> names,std::shared_ptr<java::lang::String> mzID)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> value;
	
	//    .param p1, "names"    # [Ljava/lang/String;
	//    .param p2, "mzID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 512        value = {
	// 513            "(",
	// 514            "Ljava/util/Map",
	// 515            "<",
	// 516            "Ljava/lang/String;",
	// 517            "Landroid/icu/impl/TimeZoneNamesImpl$ZNames;",
	// 518            ">;[",
	// 519            "Ljava/lang/String;",
	// 520            "Ljava/lang/String;",
	// 521            ")",
	// 522            "Landroid/icu/impl/TimeZoneNamesImpl$ZNames;"
	// 523        }
	// 524    .end annotation
	//    .local p0, "cache":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/TimeZoneNamesImpl$ZNames;>;"
	//    .local v0, "key":Ljava/lang/String;
	if ( names )     
		goto label_cond_c;
	value = android::icu::impl::TimeZoneNamesImpl_S_ZNames::EMPTY_ZNAMES;
	//    .local v1, "value":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
label_goto_8:
	cache->put(mzID->intern(), value);
	return value;
	// 548    .line 768
	// 549    .end local v1    # "value":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
label_cond_c:
	value = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_ZNames>(names);
	//    .restart local v1    # "value":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
	goto label_goto_8;

}
// .method public static createTimeZoneAndPutInCache(Ljava/util/Map;[Ljava/lang/String;Ljava/lang/String;)Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> android::icu::impl::TimeZoneNamesImpl_S_ZNames::createTimeZoneAndPutInCache(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::TimeZoneNamesImpl_S_ZNames>> cache,std::shared_ptr<std::vector<java::lang::String>> cVar0,std::shared_ptr<java::lang::String> tzID)
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> value;
	
	//    .param p1, "names"    # [Ljava/lang/String;
	//    .param p2, "tzID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 564        value = {
	// 565            "(",
	// 566            "Ljava/util/Map",
	// 567            "<",
	// 568            "Ljava/lang/String;",
	// 569            "Landroid/icu/impl/TimeZoneNamesImpl$ZNames;",
	// 570            ">;[",
	// 571            "Ljava/lang/String;",
	// 572            "Ljava/lang/String;",
	// 573            ")",
	// 574            "Landroid/icu/impl/TimeZoneNamesImpl$ZNames;"
	// 575        }
	// 576    .end annotation
	//    .local p0, "cache":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/TimeZoneNamesImpl$ZNames;>;"
	if ( cVar0 )     
		goto label_cond_8;
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(( android::icu::impl::TimeZoneNamesImpl_S_ZNames::EX_LOC_INDEX + 0x1));
label_cond_8:
	if ( cVar0[android::icu::impl::TimeZoneNamesImpl_S_ZNames::EX_LOC_INDEX] )     
		goto label_cond_16;
	cVar0[android::icu::impl::TimeZoneNamesImpl_S_ZNames::EX_LOC_INDEX] = android::icu::impl::TimeZoneNamesImpl::getDefaultExemplarLocationName(tzID);
label_cond_16:
	//    .local v0, "key":Ljava/lang/String;
	value = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_ZNames>(cVar0);
	//    .local v1, "value":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
	cache->put(tzID->intern(), value);
	return value;

}
// .method private static getNameType(I)Landroid/icu/text/TimeZoneNames$NameType;
std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> android::icu::impl::TimeZoneNamesImpl_S_ZNames::getNameType(int index)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "index"    # I
	// switch
	{
	auto item = ( android::icu::impl::TimeZoneNamesImpl_S_ZNames::-getandroid-icu-impl-TimeZoneNamesImpl$ZNames$NameTypeIndexSwitchesValues({const[class].FS-Param})[android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::values[index]->ordinal()] );
	if (item == 1) goto label_pswitch_2b;
	if (item == 2) goto label_pswitch_34;
	if (item == 3) goto label_pswitch_2e;
	if (item == 4) goto label_pswitch_31;
	if (item == 5) goto label_pswitch_3d;
	if (item == 6) goto label_pswitch_37;
	if (item == 7) goto label_pswitch_3a;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::AssertionError>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No NameType match for ")))->append(index)->toString());
	// throw
	throw cVar0;
	// 673    .line 731
label_pswitch_2b:
	return android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION;
	// 679    .line 733
label_pswitch_2e:
	return android::icu::text::TimeZoneNames_S_NameType::LONG_GENERIC;
	// 685    .line 735
label_pswitch_31:
	return android::icu::text::TimeZoneNames_S_NameType::LONG_STANDARD;
	// 691    .line 737
label_pswitch_34:
	return android::icu::text::TimeZoneNames_S_NameType::LONG_DAYLIGHT;
	// 697    .line 739
label_pswitch_37:
	return android::icu::text::TimeZoneNames_S_NameType::SHORT_GENERIC;
	// 703    .line 741
label_pswitch_3a:
	return android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD;
	// 709    .line 743
label_pswitch_3d:
	return android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT;
	// 715    .line 729
	// 716    :pswitch_data_40
	// 717    .packed-switch 0x1
	// 718        :pswitch_2b
	// 719        :pswitch_34
	// 720        :pswitch_2e
	// 721        :pswitch_31
	// 722        :pswitch_3d
	// 723        :pswitch_37
	// 724        :pswitch_3a
	// 725    .end packed-switch

}
// .method private static getNameTypeIndex(Landroid/icu/text/TimeZoneNames$NameType;)I
int android::icu::impl::TimeZoneNamesImpl_S_ZNames::getNameTypeIndex(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	// switch
	{
	auto item = ( android::icu::impl::TimeZoneNamesImpl_S_ZNames::-getandroid-icu-text-TimeZoneNames$NameTypeSwitchesValues({const[class].FS-Param})[type->ordinal()] );
	if (item == 1) goto label_pswitch_27;
	if (item == 2) goto label_pswitch_3c;
	if (item == 3) goto label_pswitch_2e;
	if (item == 4) goto label_pswitch_35;
	if (item == 5) goto label_pswitch_51;
	if (item == 6) goto label_pswitch_43;
	if (item == 7) goto label_pswitch_4a;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::AssertionError>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No NameTypeIndex match for ")))->append(type)->toString());
	// throw
	throw cVar0;
	// 771    .line 710
label_pswitch_27:
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::EXEMPLAR_LOCATION->ordinal();
	// 781    .line 712
label_pswitch_2e:
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::LONG_GENERIC->ordinal();
	// 791    .line 714
label_pswitch_35:
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::LONG_STANDARD->ordinal();
	// 801    .line 716
label_pswitch_3c:
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::LONG_DAYLIGHT->ordinal();
	// 811    .line 718
label_pswitch_43:
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::SHORT_GENERIC->ordinal();
	// 821    .line 720
label_pswitch_4a:
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::SHORT_STANDARD->ordinal();
	// 831    .line 722
label_pswitch_51:
	return android::icu::impl::TimeZoneNamesImpl_S_ZNames_S_NameTypeIndex::SHORT_DAYLIGHT->ordinal();
	// 841    .line 708
	// 842    :pswitch_data_58
	// 843    .packed-switch 0x1
	// 844        :pswitch_27
	// 845        :pswitch_3c
	// 846        :pswitch_2e
	// 847        :pswitch_35
	// 848        :pswitch_51
	// 849        :pswitch_43
	// 850        :pswitch_4a
	// 851    .end packed-switch

}
// .method public addAsMetaZoneIntoTrie(Ljava/lang/String;Landroid/icu/impl/TextTrieMap;)V
void android::icu::impl::TimeZoneNamesImpl_S_ZNames::addAsMetaZoneIntoTrie(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::impl::TextTrieMap<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>> trie)
{
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 860        value = {
	// 861            "(",
	// 862            "Ljava/lang/String;",
	// 863            "Landroid/icu/impl/TextTrieMap",
	// 864            "<",
	// 865            "Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;",
	// 866            ">;)V"
	// 867        }
	// 868    .end annotation
	//    .local p2, "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;>;"
	this->addNamesIntoTrie(mzID, 0x0, trie);
	return;

}
// .method public addAsTimeZoneIntoTrie(Ljava/lang/String;Landroid/icu/impl/TextTrieMap;)V
void android::icu::impl::TimeZoneNamesImpl_S_ZNames::addAsTimeZoneIntoTrie(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::impl::TextTrieMap<android::icu::impl::TimeZoneNamesImpl_S_NameInfo>> trie)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 885        value = {
	// 886            "(",
	// 887            "Ljava/lang/String;",
	// 888            "Landroid/icu/impl/TextTrieMap",
	// 889            "<",
	// 890            "Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;",
	// 891            ">;)V"
	// 892        }
	// 893    .end annotation
	//    .local p2, "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/impl/TimeZoneNamesImpl$NameInfo;>;"
	this->addNamesIntoTrie(0x0, tzID, trie);
	return;

}
// .method public getName(Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl_S_ZNames::getName(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type)
{
	
	int index;
	
	//    .param p1, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	index = android::icu::impl::TimeZoneNamesImpl_S_ZNames::getNameTypeIndex(type);
	//    .local v0, "index":I
	if ( !(this->_names) )  
		goto label_cond_13;
	if ( index >= this->_names->size() )
		goto label_cond_13;
	return this->_names[index];
	// 937    .line 794
label_cond_13:
	return 0x0;

}


