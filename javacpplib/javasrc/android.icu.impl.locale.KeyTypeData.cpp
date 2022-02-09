// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.KeyTypeData_S_KeyData.h"
#include "android.icu.impl.locale.KeyTypeData_S_KeyInfoType.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialType.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_Type.h"
#include "android.icu.impl.locale.KeyTypeData_S_TypeInfoType.h"
#include "android.icu.impl.locale.KeyTypeData_S_ValueType.h"
#include "android.icu.impl.locale.KeyTypeData.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Boolean.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.EnumSet.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashMap.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"

static android::icu::impl::locale::KeyTypeData::_android_icu_impl_locale_KeyTypeData_S_KeyInfoTypeSwitchesValues;
static android::icu::impl::locale::KeyTypeData::_android_icu_impl_locale_KeyTypeData_S_TypeInfoTypeSwitchesValues;
static android::icu::impl::locale::KeyTypeData::_assertionsDisabled;
static android::icu::impl::locale::KeyTypeData::BCP47_KEYS;
static android::icu::impl::locale::KeyTypeData::DEPRECATED_KEYS;
static android::icu::impl::locale::KeyTypeData::DEPRECATED_KEY_TYPES;
static android::icu::impl::locale::KeyTypeData::KEYMAP;
static android::icu::impl::locale::KeyTypeData::KEY_DATA;
static android::icu::impl::locale::KeyTypeData::VALUE_TYPES;
// .method private static synthetic -getandroid-icu-impl-locale-KeyTypeData$KeyInfoTypeSwitchesValues()[I
int android::icu::impl::locale::KeyTypeData::_getandroid_icu_impl_locale_KeyTypeData_S_KeyInfoTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::locale::KeyTypeData::_android_icu_impl_locale_KeyTypeData_S_KeyInfoTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::locale::KeyTypeData::_android_icu_impl_locale_KeyTypeData_S_KeyInfoTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::locale::KeyTypeData_S_KeyInfoType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::locale::KeyTypeData_S_KeyInfoType::deprecated->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_25
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::impl::locale::KeyTypeData_S_KeyInfoType::valueType->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_23
label_goto_20:
	android::icu::impl::locale::KeyTypeData::_android_icu_impl_locale_KeyTypeData_S_KeyInfoTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_25:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method private static synthetic -getandroid-icu-impl-locale-KeyTypeData$TypeInfoTypeSwitchesValues()[I
int android::icu::impl::locale::KeyTypeData::_getandroid_icu_impl_locale_KeyTypeData_S_TypeInfoTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::locale::KeyTypeData::_android_icu_impl_locale_KeyTypeData_S_TypeInfoTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::locale::KeyTypeData::_android_icu_impl_locale_KeyTypeData_S_TypeInfoTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::locale::KeyTypeData_S_TypeInfoType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::locale::KeyTypeData_S_TypeInfoType::deprecated->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_1a
label_goto_17:
	android::icu::impl::locale::KeyTypeData::_android_icu_impl_locale_KeyTypeData_S_TypeInfoTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_1a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void android::icu::impl::locale::KeyTypeData::static_cinit()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	android::icu::impl::locale::KeyTypeData::_assertionsDisabled = ( android::icu::impl::locale::KeyTypeData()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::locale::KeyTypeData::DEPRECATED_KEYS = java::util::Collections::emptySet({const[class].FS-Param});
	android::icu::impl::locale::KeyTypeData::VALUE_TYPES = java::util::Collections::emptyMap({const[class].FS-Param});
	android::icu::impl::locale::KeyTypeData::DEPRECATED_KEY_TYPES = java::util::Collections::emptyMap({const[class].FS-Param});
	android::icu::impl::locale::KeyTypeData::KEY_DATA = std::make_shared<std::vector<std::vector<std::vector<java::lang::Object>>>>(0x0);
	cVar0 = std::make_shared<java::util::HashMap>();
	android::icu::impl::locale::KeyTypeData::KEYMAP = cVar0;
	android::icu::impl::locale::KeyTypeData::initFromResourceBundle({const[class].FS-Param});
	return;

}
// .method public constructor <init>()V
android::icu::impl::locale::KeyTypeData::KeyTypeData()
{
	
	// 267    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getBcp47KeyTypes(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::locale::KeyTypeData::getBcp47KeyTypes(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<java::util::Set> cVar0;
	
	//    .param p0, "key"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 276        value = {
	// 277            "(",
	// 278            "Ljava/lang/String;",
	// 279            ")",
	// 280            "Ljava/util/Set",
	// 281            "<",
	// 282            "Ljava/lang/String;",
	// 283            ">;"
	// 284        }
	// 285    .end annotation
	cVar0 = android::icu::impl::locale::KeyTypeData::BCP47_KEYS->get(key);
	cVar0->checkCast("java::util::Set");
	return cVar0;

}
// .method public static getBcp47Keys()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::locale::KeyTypeData::getBcp47Keys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 303        value = {
	// 304            "()",
	// 305            "Ljava/util/Set",
	// 306            "<",
	// 307            "Ljava/lang/String;",
	// 308            ">;"
	// 309        }
	// 310    .end annotation
	return android::icu::impl::locale::KeyTypeData::BCP47_KEYS->keySet();

}
// .method private static getKeyInfo(Landroid/icu/util/UResourceBundle;)V
void android::icu::impl::locale::KeyTypeData::getKeyInfo(std::shared_ptr<android::icu::util::UResourceBundle> keyInfoRes)
{
	
	std::shared_ptr<java::util::LinkedHashSet> _deprecatedKeys;
	std::shared_ptr<java::util::LinkedHashMap> _valueTypes;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> keyInfoIt;
	std::shared_ptr<android::icu::util::UResourceBundle> keyInfoEntry;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> keyInfoIt2;
	std::shared_ptr<android::icu::util::UResourceBundle> keyInfoEntry2;
	std::shared_ptr<java::lang::Object> key2;
	
	//    .param p0, "keyInfoRes"    # Landroid/icu/util/UResourceBundle;
	_deprecatedKeys = std::make_shared<java::util::LinkedHashSet>();
	//    .local v0, "_deprecatedKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	_valueTypes = std::make_shared<java::util::LinkedHashMap>();
	//    .local v1, "_valueTypes":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/locale/KeyTypeData$ValueType;>;"
	keyInfoIt = keyInfoRes->getIterator();
	//    .local v7, "keyInfoIt":Landroid/icu/util/UResourceBundleIterator;
label_cond_e:
	if ( !(keyInfoIt->hasNext()) )  
		goto label_cond_50;
	keyInfoEntry = keyInfoIt->next();
	//    .local v5, "keyInfoEntry":Landroid/icu/util/UResourceBundle;
	//    .local v2, "key":Ljava/lang/String;
	//    .local v4, "keyInfo":Landroid/icu/impl/locale/KeyTypeData$KeyInfoType;
	keyInfoIt2 = keyInfoEntry->getIterator();
	//    .local v8, "keyInfoIt2":Landroid/icu/util/UResourceBundleIterator;
label_goto_24:
	if ( !(keyInfoIt2->hasNext()) )  
		goto label_cond_e;
	keyInfoEntry2 = keyInfoIt2->next();
	//    .local v6, "keyInfoEntry2":Landroid/icu/util/UResourceBundle;
	key2 = keyInfoEntry2->getKey();
	//    .local v3, "key2":Ljava/lang/String;
	//    .local v9, "value2":Ljava/lang/String;
	// switch
	{
	auto item = ( android::icu::impl::locale::KeyTypeData::-getandroid-icu-impl-locale-KeyTypeData$KeyInfoTypeSwitchesValues({const[class].FS-Param})[android::icu::impl::locale::KeyTypeData_S_KeyInfoType::valueOf(keyInfoEntry->getKey())->ordinal()] );
	if (item == 1) goto label_pswitch_44;
	if (item == 2) goto label_pswitch_48;
	}
	goto label_goto_24;
	// 417    .line 435
label_pswitch_44:
	_deprecatedKeys->add(key2);
	goto label_goto_24;
	// 423    .line 438
label_pswitch_48:
	_valueTypes->put(key2, android::icu::impl::locale::KeyTypeData_S_ValueType::valueOf(keyInfoEntry2->getString()));
	goto label_goto_24;
	// 433    .line 443
	// 434    .end local v2    # "key":Ljava/lang/String;
	// 435    .end local v3    # "key2":Ljava/lang/String;
	// 436    .end local v4    # "keyInfo":Landroid/icu/impl/locale/KeyTypeData$KeyInfoType;
	// 437    .end local v5    # "keyInfoEntry":Landroid/icu/util/UResourceBundle;
	// 438    .end local v6    # "keyInfoEntry2":Landroid/icu/util/UResourceBundle;
	// 439    .end local v8    # "keyInfoIt2":Landroid/icu/util/UResourceBundleIterator;
	// 440    .end local v9    # "value2":Ljava/lang/String;
label_cond_50:
	android::icu::impl::locale::KeyTypeData::DEPRECATED_KEYS = java::util::Collections::unmodifiableSet(_deprecatedKeys);
	android::icu::impl::locale::KeyTypeData::VALUE_TYPES = java::util::Collections::unmodifiableMap(_valueTypes);
	return;
	// 458    .line 433
	// 459    nop
	// 461    :pswitch_data_5e
	// 462    .packed-switch 0x1
	// 463        :pswitch_44
	// 464        :pswitch_48
	// 465    .end packed-switch

}
// .method private static getTypeInfo(Landroid/icu/util/UResourceBundle;)V
void android::icu::impl::locale::KeyTypeData::getTypeInfo(std::shared_ptr<android::icu::util::UResourceBundle> typeInfoRes)
{
	
	std::shared_ptr<java::util::LinkedHashMap> _deprecatedKeyTypes;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> keyInfoIt;
	std::shared_ptr<android::icu::util::UResourceBundle> keyInfoEntry;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> keyInfoIt2;
	std::shared_ptr<android::icu::util::UResourceBundle> keyInfoEntry2;
	std::shared_ptr<java::util::LinkedHashSet> _deprecatedTypes;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> keyInfoIt3;
	
	//    .param p0, "typeInfoRes"    # Landroid/icu/util/UResourceBundle;
	_deprecatedKeyTypes = std::make_shared<java::util::LinkedHashMap>();
	//    .local v0, "_deprecatedKeyTypes":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	keyInfoIt = typeInfoRes->getIterator();
	//    .local v8, "keyInfoIt":Landroid/icu/util/UResourceBundleIterator;
label_cond_9:
	if ( !(keyInfoIt->hasNext()) )  
		goto label_cond_5e;
	keyInfoEntry = keyInfoIt->next();
	//    .local v5, "keyInfoEntry":Landroid/icu/util/UResourceBundle;
	//    .local v2, "key":Ljava/lang/String;
	//    .local v11, "typeInfo":Landroid/icu/impl/locale/KeyTypeData$TypeInfoType;
	keyInfoIt2 = keyInfoEntry->getIterator();
	//    .local v9, "keyInfoIt2":Landroid/icu/util/UResourceBundleIterator;
label_goto_1f:
	if ( !(keyInfoIt2->hasNext()) )  
		goto label_cond_9;
	keyInfoEntry2 = keyInfoIt2->next();
	//    .local v6, "keyInfoEntry2":Landroid/icu/util/UResourceBundle;
	//    .local v3, "key2":Ljava/lang/String;
	_deprecatedTypes = std::make_shared<java::util::LinkedHashSet>();
	//    .local v1, "_deprecatedTypes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	keyInfoIt3 = keyInfoEntry2->getIterator();
	//    .local v10, "keyInfoIt3":Landroid/icu/util/UResourceBundleIterator;
label_goto_36:
	if ( !(keyInfoIt3->hasNext()) )  
		goto label_cond_56;
	//    .local v7, "keyInfoEntry3":Landroid/icu/util/UResourceBundle;
	//    .local v4, "key3":Ljava/lang/String;
	// switch
	{
	auto item = ( android::icu::impl::locale::KeyTypeData::-getandroid-icu-impl-locale-KeyTypeData$TypeInfoTypeSwitchesValues({const[class].FS-Param})[android::icu::impl::locale::KeyTypeData_S_TypeInfoType::valueOf(keyInfoEntry->getKey())->ordinal()] );
	if (item == 1) goto label_pswitch_52;
	}
	goto label_goto_36;
	// 581    .line 474
label_pswitch_52:
	_deprecatedTypes->add(keyInfoIt3->next()->getKey());
	goto label_goto_36;
	// 587    .line 478
	// 588    .end local v4    # "key3":Ljava/lang/String;
	// 589    .end local v7    # "keyInfoEntry3":Landroid/icu/util/UResourceBundle;
label_cond_56:
	_deprecatedKeyTypes->put(keyInfoEntry2->getKey(), java::util::Collections::unmodifiableSet(_deprecatedTypes));
	goto label_goto_1f;
	// 599    .line 481
	// 600    .end local v1    # "_deprecatedTypes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 601    .end local v2    # "key":Ljava/lang/String;
	// 602    .end local v3    # "key2":Ljava/lang/String;
	// 603    .end local v5    # "keyInfoEntry":Landroid/icu/util/UResourceBundle;
	// 604    .end local v6    # "keyInfoEntry2":Landroid/icu/util/UResourceBundle;
	// 605    .end local v9    # "keyInfoIt2":Landroid/icu/util/UResourceBundleIterator;
	// 606    .end local v10    # "keyInfoIt3":Landroid/icu/util/UResourceBundleIterator;
	// 607    .end local v11    # "typeInfo":Landroid/icu/impl/locale/KeyTypeData$TypeInfoType;
label_cond_5e:
	android::icu::impl::locale::KeyTypeData::DEPRECATED_KEY_TYPES = java::util::Collections::unmodifiableMap(_deprecatedKeyTypes);
	return;
	// 618    .line 472
	// 619    nop
	// 621    :pswitch_data_66
	// 622    .packed-switch 0x1
	// 623        :pswitch_52
	// 624    .end packed-switch

}
// .method public static getValueType(Ljava/lang/String;)Landroid/icu/impl/locale/KeyTypeData$ValueType;
std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> android::icu::impl::locale::KeyTypeData::getValueType(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> type;
	
	//    .param p0, "key"    # Ljava/lang/String;
	type = android::icu::impl::locale::KeyTypeData::VALUE_TYPES->get(key);
	type->checkCast("android::icu::impl::locale::KeyTypeData_S_ValueType");
	//    .local v0, "type":Landroid/icu/impl/locale/KeyTypeData$ValueType;
	if ( type )     
		goto label_cond_c;
	//    .end local v0    # "type":Landroid/icu/impl/locale/KeyTypeData$ValueType;
label_cond_c:
	return type;

}
// .method private static initFromResourceBundle()V
void android::icu::impl::locale::KeyTypeData::initFromResourceBundle()
{
	
	auto keyTypeDataRes;
	int typeAliasRes;
	std::shared_ptr<android::icu::util::UResourceBundle> bcpTypeAliasRes;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> keyMapItr;
	std::shared_ptr<java::util::LinkedHashMap> _Bcp47Keys;
	std::shared_ptr<android::icu::util::UResourceBundle> keyMapEntry;
	std::shared_ptr<java::lang::String> legacyKeyId;
	std::shared_ptr<java::lang::String> bcpKeyId;
	std::shared_ptr<java::lang::Object> bcpKeyId;
	std::shared_ptr<java::util::LinkedHashSet> _bcp47Types;
	int isTZ;
	std::shared_ptr<android::icu::util::UResourceBundle> typeAliasResByKey;
	std::shared_ptr<java::util::HashMap> typeAliasMap;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> typeAliasResItr;
	std::shared_ptr<android::icu::util::UResourceBundle> typeAliasDataEntry;
	auto from;
	auto to;
	std::shared_ptr<java::util::Set> aliasSet;
	std::shared_ptr<java::util::HashSet> aliasSet;
	std::shared_ptr<android::icu::util::UResourceBundle> bcpTypeAliasResByKey;
	std::shared_ptr<java::util::HashMap> bcpTypeAliasMap;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> bcpTypeAliasResItr;
	std::shared_ptr<android::icu::util::UResourceBundle> bcpTypeAliasDataEntry;
	std::shared_ptr<java::util::HashMap> typeDataMap;
	int specialTypeSet;
	std::shared_ptr<android::icu::util::UResourceBundle> typeMapResByKey;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> typeMapResByKeyItr;
	std::shared_ptr<android::icu::util::UResourceBundle> typeMapEntry;
	std::shared_ptr<java::lang::String> legacyTypeId;
	std::shared_ptr<java::lang::String> bcpTypeId;
	int first;
	auto specialTypeSet;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_Type> t;
	std::shared_ptr<java::util::Set> typeAliasSet;
	std::shared_ptr<java::util::Iterator> alias_S_iterator;
	std::shared_ptr<java::lang::String> alias;
	std::shared_ptr<java::util::Set> bcpTypeAliasSet;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyData> keyData;
	std::vector<std::any> tryCatchExcetionList;
	auto typeMapResByKey;
	auto bcpTypeAliasResByKey;
	auto typeAliasResByKey;
	
	keyTypeDataRes = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("keyTypeData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	//    .local v28, "keyTypeDataRes":Landroid/icu/util/UResourceBundle;
	android::icu::impl::locale::KeyTypeData::getKeyInfo(keyTypeDataRes->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("keyInfo"))));
	android::icu::impl::locale::KeyTypeData::getTypeInfo(keyTypeDataRes->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("typeInfo"))));
	//    .local v27, "keyMapRes":Landroid/icu/util/UResourceBundle;
	//    .local v42, "typeMapRes":Landroid/icu/util/UResourceBundle;
	typeAliasRes = 0x0;
	//    .local v36, "typeAliasRes":Landroid/icu/util/UResourceBundle;
	bcpTypeAliasRes = 0x0;
	//    .local v12, "bcpTypeAliasRes":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_41:
	//label_try_end_4b:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27e;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_41 .. :try_end_4b} :catch_27e
	keyTypeDataRes->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("typeAlias")));
	//    .end local v36    # "typeAliasRes":Landroid/icu/util/UResourceBundle;
label_goto_4c:
	try {
	//label_try_start_4c:
	//label_try_end_56:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27b;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_4c .. :try_end_56} :catch_27b
	keyTypeDataRes->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("bcpTypeAlias")));
	//    .end local v12    # "bcpTypeAliasRes":Landroid/icu/util/UResourceBundle;
label_goto_57:
	keyMapItr = keyTypeDataRes->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("keyMap")))->getIterator();
	//    .local v26, "keyMapItr":Landroid/icu/util/UResourceBundleIterator;
	_Bcp47Keys = std::make_shared<java::util::LinkedHashMap>();
	//    .local v4, "_Bcp47Keys":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
label_cond_60:
label_goto_60:
	if ( !(keyMapItr->hasNext()) )  
		goto label_cond_274;
	keyMapEntry = keyMapItr->next();
	//    .local v25, "keyMapEntry":Landroid/icu/util/UResourceBundle;
	legacyKeyId = keyMapEntry->getKey();
	//    .local v29, "legacyKeyId":Ljava/lang/String;
	bcpKeyId = keyMapEntry->getString();
	//    .local v9, "bcpKeyId":Ljava/lang/String;
	//    .local v20, "hasSameKey":Z
	if ( bcpKeyId->length() )     
		goto label_cond_7e;
	bcpKeyId = legacyKeyId;
label_cond_7e:
	_bcp47Types = std::make_shared<java::util::LinkedHashSet>();
	//    .local v5, "_bcp47Types":Ljava/util/LinkedHashSet;, "Ljava/util/LinkedHashSet<Ljava/lang/String;>;"
	_Bcp47Keys->put(bcpKeyId, java::util::Collections::unmodifiableSet(_bcp47Types));
	isTZ = legacyKeyId->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("timezone")));
	//    .local v23, "isTZ":Z
	0x0;
	//    .local v35, "typeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	if ( !(typeAliasRes) )  
		goto label_cond_f2;
	typeAliasResByKey = 0x0;
	//    .local v37, "typeAliasResByKey":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_9d:
	//label_try_end_a4:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f0;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_9d .. :try_end_a4} :catch_f0
	typeAliasResByKey = typeAliasRes->get(legacyKeyId);
	//    .end local v37    # "typeAliasResByKey":Landroid/icu/util/UResourceBundle;
label_goto_a5:
	if ( !(typeAliasResByKey) )  
		goto label_cond_f2;
	//    .end local v35    # "typeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	typeAliasMap = std::make_shared<java::util::HashMap>();
	//    .local v35, "typeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	typeAliasResItr = typeAliasResByKey->getIterator();
	//    .local v38, "typeAliasResItr":Landroid/icu/util/UResourceBundleIterator;
label_goto_b0:
	if ( !(typeAliasResItr->hasNext()) )  
		goto label_cond_f2;
	typeAliasDataEntry = typeAliasResItr->next();
	//    .local v34, "typeAliasDataEntry":Landroid/icu/util/UResourceBundle;
	from = typeAliasDataEntry->getKey();
	//    .local v19, "from":Ljava/lang/String;
	to = typeAliasDataEntry->getString();
	//    .local v33, "to":Ljava/lang/String;
	if ( !(isTZ) )  
		goto label_cond_d2;
label_cond_d2:
	aliasSet = typeAliasMap->get(to);
	aliasSet->checkCast("java::util::Set");
	//    .local v8, "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( aliasSet )     
		goto label_cond_ea;
	//    .end local v8    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	aliasSet = std::make_shared<java::util::HashSet>();
	//    .restart local v8    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	typeAliasMap->put(to, aliasSet);
label_cond_ea:
	aliasSet->add(from);
	goto label_goto_b0;
	// 968    .line 268
	// 969    .end local v8    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 970    .end local v19    # "from":Ljava/lang/String;
	// 971    .end local v33    # "to":Ljava/lang/String;
	// 972    .end local v34    # "typeAliasDataEntry":Landroid/icu/util/UResourceBundle;
	// 973    .end local v38    # "typeAliasResItr":Landroid/icu/util/UResourceBundleIterator;
	// 974    .local v35, "typeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	// 975    .restart local v37    # "typeAliasResByKey":Landroid/icu/util/UResourceBundle;
label_catch_f0:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v17, "e":Ljava/util/MissingResourceException;
	goto label_goto_a5;
	// 982    .line 292
	// 983    .end local v17    # "e":Ljava/util/MissingResourceException;
	// 984    .end local v35    # "typeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	// 985    .end local v37    # "typeAliasResByKey":Landroid/icu/util/UResourceBundle;
label_cond_f2:
	0x0;
	//    .local v11, "bcpTypeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	if ( !(bcpTypeAliasRes) )  
		goto label_cond_133;
	bcpTypeAliasResByKey = 0x0;
	//    .local v13, "bcpTypeAliasResByKey":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_f6:
	//label_try_end_f9:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_131;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_f6 .. :try_end_f9} :catch_131
	bcpTypeAliasResByKey = bcpTypeAliasRes->get(bcpKeyId);
	//    .end local v13    # "bcpTypeAliasResByKey":Landroid/icu/util/UResourceBundle;
label_goto_fa:
	if ( !(bcpTypeAliasResByKey) )  
		goto label_cond_133;
	//    .end local v11    # "bcpTypeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	bcpTypeAliasMap = std::make_shared<java::util::HashMap>();
	//    .local v11, "bcpTypeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	bcpTypeAliasResItr = bcpTypeAliasResByKey->getIterator();
	//    .local v14, "bcpTypeAliasResItr":Landroid/icu/util/UResourceBundleIterator;
label_goto_105:
	if ( !(bcpTypeAliasResItr->hasNext()) )  
		goto label_cond_133;
	bcpTypeAliasDataEntry = bcpTypeAliasResItr->next();
	//    .local v10, "bcpTypeAliasDataEntry":Landroid/icu/util/UResourceBundle;
	//    .restart local v19    # "from":Ljava/lang/String;
	to = bcpTypeAliasDataEntry->getString();
	//    .restart local v33    # "to":Ljava/lang/String;
	aliasSet = bcpTypeAliasMap->get(to);
	aliasSet->checkCast("java::util::Set");
	//    .restart local v8    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( aliasSet )     
		goto label_cond_12b;
	//    .end local v8    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	aliasSet = std::make_shared<java::util::HashSet>();
	//    .restart local v8    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	bcpTypeAliasMap->put(to, aliasSet);
label_cond_12b:
	aliasSet->add(bcpTypeAliasDataEntry->getKey());
	goto label_goto_105;
	// 1082    .line 297
	// 1083    .end local v8    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1084    .end local v10    # "bcpTypeAliasDataEntry":Landroid/icu/util/UResourceBundle;
	// 1085    .end local v14    # "bcpTypeAliasResItr":Landroid/icu/util/UResourceBundleIterator;
	// 1086    .end local v19    # "from":Ljava/lang/String;
	// 1087    .end local v33    # "to":Ljava/lang/String;
	// 1088    .local v11, "bcpTypeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	// 1089    .restart local v13    # "bcpTypeAliasResByKey":Landroid/icu/util/UResourceBundle;
label_catch_131:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v17    # "e":Ljava/util/MissingResourceException;
	goto label_goto_fa;
	// 1096    .line 317
	// 1097    .end local v11    # "bcpTypeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	// 1098    .end local v13    # "bcpTypeAliasResByKey":Landroid/icu/util/UResourceBundle;
	// 1099    .end local v17    # "e":Ljava/util/MissingResourceException;
label_cond_133:
	typeDataMap = std::make_shared<java::util::HashMap>();
	//    .local v40, "typeDataMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/locale/KeyTypeData$Type;>;"
	specialTypeSet = 0x0;
	//    .local v31, "specialTypeSet":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/locale/KeyTypeData$SpecialType;>;"
	typeMapResByKey = 0x0;
	//    .local v43, "typeMapResByKey":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_13c:
	//label_try_end_143:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_199;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_13c .. :try_end_143} :catch_199
	typeMapResByKey = keyTypeDataRes->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("typeMap")))->get(legacyKeyId);
	//    .end local v43    # "typeMapResByKey":Landroid/icu/util/UResourceBundle;
label_cond_144:
	if ( !(typeMapResByKey) )  
		goto label_cond_245;
	typeMapResByKeyItr = typeMapResByKey->getIterator();
	//    .end local v31    # "specialTypeSet":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/locale/KeyTypeData$SpecialType;>;"
	//    .local v44, "typeMapResByKeyItr":Landroid/icu/util/UResourceBundleIterator;
label_cond_14a:
label_goto_14a:
	if ( !(typeMapResByKeyItr->hasNext()) )  
		goto label_cond_245;
	typeMapEntry = typeMapResByKeyItr->next();
	//    .local v41, "typeMapEntry":Landroid/icu/util/UResourceBundle;
	legacyTypeId = typeMapEntry->getKey();
	//    .local v30, "legacyTypeId":Ljava/lang/String;
	bcpTypeId = typeMapEntry->getString();
	//    .local v16, "bcpTypeId":Ljava/lang/String;
	first = legacyTypeId->charAt(0x0);
	//    .local v18, "first":C
	if ( 0x39 >= first )
		goto label_cond_1a4;
	if ( first >= 0x61 )
		goto label_cond_1a4;
	if ( bcpTypeId->length() )     
		goto label_cond_1a4;
	//    .local v22, "isSpecialType":Z
label_goto_17e:
	if ( !(isSpecialType) )  
		goto label_cond_1a7;
	if ( specialTypeSet )     
		goto label_cond_188;
	specialTypeSet = java::util::EnumSet::noneOf(android::icu::impl::locale::KeyTypeData_S_SpecialType());
label_cond_188:
	specialTypeSet->add(android::icu::impl::locale::KeyTypeData_S_SpecialType::valueOf(legacyTypeId));
	_bcp47Types->add(legacyTypeId);
	goto label_goto_14a;
	// 1236    .line 324
	// 1237    .end local v16    # "bcpTypeId":Ljava/lang/String;
	// 1238    .end local v18    # "first":C
	// 1239    .end local v22    # "isSpecialType":Z
	// 1240    .end local v30    # "legacyTypeId":Ljava/lang/String;
	// 1241    .end local v41    # "typeMapEntry":Landroid/icu/util/UResourceBundle;
	// 1242    .end local v44    # "typeMapResByKeyItr":Landroid/icu/util/UResourceBundleIterator;
	// 1243    .restart local v31    # "specialTypeSet":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/locale/KeyTypeData$SpecialType;>;"
	// 1244    .restart local v43    # "typeMapResByKey":Landroid/icu/util/UResourceBundle;
label_catch_199:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v17    # "e":Ljava/util/MissingResourceException;
	if ( android::icu::impl::locale::KeyTypeData::_assertionsDisabled )     
		goto label_cond_144;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1260    .line 337
	// 1261    .end local v17    # "e":Ljava/util/MissingResourceException;
	// 1262    .end local v31    # "specialTypeSet":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/locale/KeyTypeData$SpecialType;>;"
	// 1263    .end local v43    # "typeMapResByKey":Landroid/icu/util/UResourceBundle;
	// 1264    .restart local v16    # "bcpTypeId":Ljava/lang/String;
	// 1265    .restart local v18    # "first":C
	// 1266    .restart local v30    # "legacyTypeId":Ljava/lang/String;
	// 1267    .restart local v41    # "typeMapEntry":Landroid/icu/util/UResourceBundle;
	// 1268    .restart local v44    # "typeMapResByKeyItr":Landroid/icu/util/UResourceBundleIterator;
label_cond_1a4:
	//    .restart local v22    # "isSpecialType":Z
	goto label_goto_17e;
	// 1275    .line 347
label_cond_1a7:
	if ( !(isTZ) )  
		goto label_cond_1b7;
	legacyTypeId = legacyTypeId->replace(0x3a, 0x2f);
label_cond_1b7:
	//    .local v21, "hasSameType":Z
	if ( bcpTypeId->length() )     
		goto label_cond_1c3;
	bcpTypeId = legacyTypeId;
label_cond_1c3:
	_bcp47Types->add(bcpTypeId);
	var192 = t(legacyTypeId, bcpTypeId);
	//    .local v32, "t":Landroid/icu/impl/locale/KeyTypeData$Type;
	typeDataMap->put(android::icu::impl::locale::AsciiUtil::toLowerString(legacyTypeId), t);
	if ( 0x0 )     
		goto label_cond_1ef;
	typeDataMap->put(android::icu::impl::locale::AsciiUtil::toLowerString(bcpTypeId), t);
label_cond_1ef:
	if ( !(typeAliasMap) )  
		goto label_cond_21b;
	typeAliasSet = typeAliasMap->get(legacyTypeId);
	typeAliasSet->checkCast("java::util::Set");
	//    .local v39, "typeAliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(typeAliasSet) )  
		goto label_cond_21b;
	alias_S_iterator = typeAliasSet->iterator();
	//    .local v7, "alias$iterator":Ljava/util/Iterator;
label_goto_201:
	if ( !(alias_S_iterator->hasNext()) )  
		goto label_cond_21b;
	alias = alias_S_iterator->next();
	alias->checkCast("java::lang::String");
	//    .local v6, "alias":Ljava/lang/String;
	typeDataMap->put(android::icu::impl::locale::AsciiUtil::toLowerString(alias), t);
	goto label_goto_201;
	// 1413    .line 380
	// 1414    .end local v6    # "alias":Ljava/lang/String;
	// 1415    .end local v7    # "alias$iterator":Ljava/util/Iterator;
	// 1416    .end local v39    # "typeAliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_21b:
	if ( !(bcpTypeAliasMap) )  
		goto label_cond_14a;
	bcpTypeAliasSet = bcpTypeAliasMap->get(bcpTypeId);
	bcpTypeAliasSet->checkCast("java::util::Set");
	//    .local v15, "bcpTypeAliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(bcpTypeAliasSet) )  
		goto label_cond_14a;
	alias_S_iterator = bcpTypeAliasSet->iterator();
	//    .restart local v7    # "alias$iterator":Ljava/util/Iterator;
label_goto_22b:
	if ( !(alias_S_iterator->hasNext()) )  
		goto label_cond_14a;
	alias = alias_S_iterator->next();
	alias->checkCast("java::lang::String");
	//    .restart local v6    # "alias":Ljava/lang/String;
	typeDataMap->put(android::icu::impl::locale::AsciiUtil::toLowerString(alias), t);
	goto label_goto_22b;
	// 1468    .line 391
	// 1469    .end local v6    # "alias":Ljava/lang/String;
	// 1470    .end local v7    # "alias$iterator":Ljava/util/Iterator;
	// 1471    .end local v15    # "bcpTypeAliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1472    .end local v16    # "bcpTypeId":Ljava/lang/String;
	// 1473    .end local v18    # "first":C
	// 1474    .end local v21    # "hasSameType":Z
	// 1475    .end local v22    # "isSpecialType":Z
	// 1476    .end local v30    # "legacyTypeId":Ljava/lang/String;
	// 1477    .end local v32    # "t":Landroid/icu/impl/locale/KeyTypeData$Type;
	// 1478    .end local v41    # "typeMapEntry":Landroid/icu/util/UResourceBundle;
	// 1479    .end local v44    # "typeMapResByKeyItr":Landroid/icu/util/UResourceBundleIterator;
label_cond_245:
	var240 = keyData(legacyKeyId, bcpKeyId, typeDataMap, specialTypeSet);
	//    .local v24, "keyData":Landroid/icu/impl/locale/KeyTypeData$KeyData;
	android::icu::impl::locale::KeyTypeData::KEYMAP->put(android::icu::impl::locale::AsciiUtil::toLowerString(legacyKeyId), keyData);
	if ( 0x0 )     
		goto label_cond_60;
	android::icu::impl::locale::KeyTypeData::KEYMAP->put(android::icu::impl::locale::AsciiUtil::toLowerString(bcpKeyId), keyData);
	goto label_goto_60;
	// 1529    .line 398
	// 1530    .end local v5    # "_bcp47Types":Ljava/util/LinkedHashSet;, "Ljava/util/LinkedHashSet<Ljava/lang/String;>;"
	// 1531    .end local v9    # "bcpKeyId":Ljava/lang/String;
	// 1532    .end local v20    # "hasSameKey":Z
	// 1533    .end local v23    # "isTZ":Z
	// 1534    .end local v24    # "keyData":Landroid/icu/impl/locale/KeyTypeData$KeyData;
	// 1535    .end local v25    # "keyMapEntry":Landroid/icu/util/UResourceBundle;
	// 1536    .end local v29    # "legacyKeyId":Ljava/lang/String;
	// 1537    .end local v40    # "typeDataMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/locale/KeyTypeData$Type;>;"
label_cond_274:
	android::icu::impl::locale::KeyTypeData::BCP47_KEYS = java::util::Collections::unmodifiableMap(_Bcp47Keys);
	return;
	// 1548    .line 238
	// 1549    .end local v4    # "_Bcp47Keys":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	// 1550    .end local v26    # "keyMapItr":Landroid/icu/util/UResourceBundleIterator;
	// 1551    .restart local v12    # "bcpTypeAliasRes":Landroid/icu/util/UResourceBundle;
label_catch_27b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v17    # "e":Ljava/util/MissingResourceException;
	goto label_goto_57;
	// 1558    .line 232
	// 1559    .end local v17    # "e":Ljava/util/MissingResourceException;
	// 1560    .restart local v36    # "typeAliasRes":Landroid/icu/util/UResourceBundle;
label_catch_27e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v17    # "e":Ljava/util/MissingResourceException;
	goto label_goto_4c;

}
// .method private static initFromTables()V
void android::icu::impl::locale::KeyTypeData::initFromTables()
{
	
	std::shared_ptr<std::vector<std::vector<java::lang::Object>>> cVar0;
	int cVar1;
	auto keyDataEntry;
	std::shared_ptr<java::lang::String> legacyKeyId;
	std::shared_ptr<java::lang::String> bcpKeyId;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> typeData;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> typeAliasData;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> bcpTypeAliasData;
	std::shared_ptr<java::util::HashMap> typeAliasMap;
	int cVar2;
	auto typeAliasDataEntry;
	auto to;
	std::shared_ptr<java::util::Set> aliasSet;
	std::shared_ptr<java::util::HashSet> aliasSet;
	std::shared_ptr<java::util::HashMap> bcpTypeAliasMap;
	int cVar4;
	auto bcpTypeAliasDataEntry;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	std::shared_ptr<java::util::HashMap> typeDataMap;
	std::shared_ptr<java::util::Collection> specialTypeSet;
	int cVar7;
	auto typeDataEntry;
	std::shared_ptr<java::lang::String> legacyTypeId;
	std::shared_ptr<java::lang::String> bcpTypeId;
	std::shared_ptr<java::lang::Object> cVar8;
	int cVar9;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> st;
	std::shared_ptr<java::util::HashSet> specialTypeSet;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_Type> t;
	std::shared_ptr<java::util::Set> typeAliasSet;
	std::shared_ptr<java::util::Iterator> alias_S_iterator;
	std::shared_ptr<java::lang::String> alias;
	std::shared_ptr<java::util::Set> bcpTypeAliasSet;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyData> keyData;
	
	cVar0 = android::icu::impl::locale::KeyTypeData::KEY_DATA;
	cVar1 = 0x0;
	//    .local v7, "bcpKeyId":Ljava/lang/String;
	//    .local v8, "bcpTypeAliasData":[[Ljava/lang/String;
	//    .local v14, "hasSameKey":Z
	//    .local v17, "keyData":Landroid/icu/impl/locale/KeyTypeData$KeyData;
	//    .local v18, "keyDataEntry":[Ljava/lang/Object;
	//    .local v19, "legacyKeyId":Ljava/lang/String;
	//    .local v26, "typeAliasData":[[Ljava/lang/String;
	//    .local v30, "typeData":[[Ljava/lang/String;
	//    .local v32, "typeDataMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/locale/KeyTypeData$Type;>;"
label_goto_b:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_1cb;
	keyDataEntry = cVar0[cVar1];
	//    .end local v7    # "bcpKeyId":Ljava/lang/String;
	//    .end local v8    # "bcpTypeAliasData":[[Ljava/lang/String;
	//    .end local v14    # "hasSameKey":Z
	//    .end local v17    # "keyData":Landroid/icu/impl/locale/KeyTypeData$KeyData;
	//    .end local v19    # "legacyKeyId":Ljava/lang/String;
	//    .end local v26    # "typeAliasData":[[Ljava/lang/String;
	//    .end local v30    # "typeData":[[Ljava/lang/String;
	//    .end local v32    # "typeDataMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/locale/KeyTypeData$Type;>;"
	legacyKeyId = keyDataEntry[0x0];
	legacyKeyId->checkCast("java::lang::String");
	//    .restart local v19    # "legacyKeyId":Ljava/lang/String;
	bcpKeyId = keyDataEntry[0x1];
	bcpKeyId->checkCast("java::lang::String");
	//    .restart local v7    # "bcpKeyId":Ljava/lang/String;
	typeData = keyDataEntry[0x2];
	typeData->checkCast("std::vector<std::vector<java::lang::String>>");
	//    .restart local v30    # "typeData":[[Ljava/lang/String;
	typeAliasData = keyDataEntry[0x3];
	typeAliasData->checkCast("std::vector<std::vector<java::lang::String>>");
	//    .restart local v26    # "typeAliasData":[[Ljava/lang/String;
	bcpTypeAliasData = keyDataEntry[0x4];
	bcpTypeAliasData->checkCast("std::vector<std::vector<java::lang::String>>");
	//    .restart local v8    # "bcpTypeAliasData":[[Ljava/lang/String;
	//    .restart local v14    # "hasSameKey":Z
	if ( bcpKeyId )     
		goto label_cond_37;
	bcpKeyId = legacyKeyId;
label_cond_37:
	0x0;
	//    .local v28, "typeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	if ( !(typeAliasData) )  
		goto label_cond_75;
	//    .end local v28    # "typeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	typeAliasMap = std::make_shared<java::util::HashMap>();
	//    .local v28, "typeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	cVar2 = 0x0;
label_goto_47:
	if ( cVar2 >= typeAliasData->size() )
		goto label_cond_75;
	typeAliasDataEntry = typeAliasData[cVar2];
	//    .local v27, "typeAliasDataEntry":[Ljava/lang/String;
	//    .local v13, "from":Ljava/lang/String;
	to = typeAliasDataEntry[0x1];
	//    .local v25, "to":Ljava/lang/String;
	aliasSet = typeAliasMap->get(to);
	aliasSet->checkCast("java::util::Set");
	//    .local v6, "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( aliasSet )     
		goto label_cond_6f;
	//    .end local v6    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	aliasSet = std::make_shared<java::util::HashSet>();
	//    .restart local v6    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	typeAliasMap->put(to, aliasSet);
label_cond_6f:
	aliasSet->add(typeAliasDataEntry[0x0]);
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_47;
	// 1748    .line 572
	// 1749    .end local v6    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1750    .end local v13    # "from":Ljava/lang/String;
	// 1751    .end local v25    # "to":Ljava/lang/String;
	// 1752    .end local v27    # "typeAliasDataEntry":[Ljava/lang/String;
	// 1753    .end local v28    # "typeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
label_cond_75:
	0x0;
	//    .local v10, "bcpTypeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	if ( !(bcpTypeAliasData) )  
		goto label_cond_ac;
	//    .end local v10    # "bcpTypeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	bcpTypeAliasMap = std::make_shared<java::util::HashMap>();
	//    .local v10, "bcpTypeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	cVar4 = 0x0;
label_goto_82:
	if ( cVar4 >= bcpTypeAliasData->size() )
		goto label_cond_ac;
	bcpTypeAliasDataEntry = bcpTypeAliasData[cVar4];
	//    .local v9, "bcpTypeAliasDataEntry":[Ljava/lang/String;
	//    .restart local v13    # "from":Ljava/lang/String;
	to = bcpTypeAliasDataEntry[0x1];
	//    .restart local v25    # "to":Ljava/lang/String;
	aliasSet = bcpTypeAliasMap->get(to);
	aliasSet->checkCast("java::util::Set");
	//    .restart local v6    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( aliasSet )     
		goto label_cond_a6;
	//    .end local v6    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	aliasSet = std::make_shared<java::util::HashSet>();
	//    .restart local v6    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	bcpTypeAliasMap->put(to, aliasSet);
label_cond_a6:
	aliasSet->add(bcpTypeAliasDataEntry[0x0]);
	cVar4 = ( cVar4 + 0x1);
	goto label_goto_82;
	// 1831    .line 588
	// 1832    .end local v6    # "aliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1833    .end local v9    # "bcpTypeAliasDataEntry":[Ljava/lang/String;
	// 1834    .end local v10    # "bcpTypeAliasMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	// 1835    .end local v13    # "from":Ljava/lang/String;
	// 1836    .end local v25    # "to":Ljava/lang/String;
label_cond_ac:
	if ( android::icu::impl::locale::KeyTypeData::_assertionsDisabled )     
		goto label_cond_b8;
	if ( typeData )     
		goto label_cond_b8;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 1850    .line 589
label_cond_b8:
	typeDataMap = std::make_shared<java::util::HashMap>();
	//    .restart local v32    # "typeDataMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/locale/KeyTypeData$Type;>;"
	specialTypeSet = 0x0;
	//    .local v21, "specialTypeSet":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/locale/KeyTypeData$SpecialType;>;"
	cVar7 = 0x0;
	//    .end local v21    # "specialTypeSet":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/locale/KeyTypeData$SpecialType;>;"
label_goto_c8:
	if ( cVar7 >= typeData->size() )
		goto label_cond_190;
	typeDataEntry = typeData[cVar7];
	//    .local v31, "typeDataEntry":[Ljava/lang/String;
	legacyTypeId = typeDataEntry[0x0];
	//    .local v20, "legacyTypeId":Ljava/lang/String;
	bcpTypeId = typeDataEntry[0x1];
	//    .local v12, "bcpTypeId":Ljava/lang/String;
	//    .local v16, "isSpecialType":Z
	cVar8 = android::icu::impl::locale::KeyTypeData_S_SpecialType::values({const[class].FS-Param});
	cVar9 = 0x0;
label_goto_e5:
	if ( cVar9 >= cVar8->size() )
		goto label_cond_10b;
	st = cVar8[cVar9];
	//    .local v23, "st":Landroid/icu/impl/locale/KeyTypeData$SpecialType;
	if ( !(legacyTypeId->equals(st->toString())) )  
		goto label_cond_112;
	if ( specialTypeSet )     
		goto label_cond_104;
	specialTypeSet = std::make_shared<java::util::HashSet>();
label_cond_104:
	specialTypeSet->add(st);
	//    .end local v23    # "st":Landroid/icu/impl/locale/KeyTypeData$SpecialType;
label_cond_10b:
	if ( !(0x0) )  
		goto label_cond_115;
label_cond_10d:
	cVar7 = ( cVar7 + 0x1);
	goto label_goto_c8;
	// 1969    .line 598
	// 1970    .restart local v23    # "st":Landroid/icu/impl/locale/KeyTypeData$SpecialType;
label_cond_112:
	cVar9 = ( cVar9 + 0x1);
	goto label_goto_e5;
	// 1976    .line 612
	// 1977    .end local v23    # "st":Landroid/icu/impl/locale/KeyTypeData$SpecialType;
label_cond_115:
	//    .local v15, "hasSameType":Z
	if ( bcpTypeId )     
		goto label_cond_11b;
	bcpTypeId = legacyTypeId;
label_cond_11b:
	var116 = t(legacyTypeId, bcpTypeId);
	//    .local v24, "t":Landroid/icu/impl/locale/KeyTypeData$Type;
	typeDataMap->put(android::icu::impl::locale::AsciiUtil::toLowerString(legacyTypeId), t);
	if ( 0x0 )     
		goto label_cond_140;
	typeDataMap->put(android::icu::impl::locale::AsciiUtil::toLowerString(bcpTypeId), t);
label_cond_140:
	typeAliasSet = typeAliasMap->get(legacyTypeId);
	typeAliasSet->checkCast("java::util::Set");
	//    .local v29, "typeAliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(typeAliasSet) )  
		goto label_cond_16a;
	alias_S_iterator = typeAliasSet->iterator();
	//    .local v5, "alias$iterator":Ljava/util/Iterator;
label_goto_150:
	if ( !(alias_S_iterator->hasNext()) )  
		goto label_cond_16a;
	alias = alias_S_iterator->next();
	alias->checkCast("java::lang::String");
	//    .local v4, "alias":Ljava/lang/String;
	typeDataMap->put(android::icu::impl::locale::AsciiUtil::toLowerString(alias), t);
	goto label_goto_150;
	// 2082    .line 635
	// 2083    .end local v4    # "alias":Ljava/lang/String;
	// 2084    .end local v5    # "alias$iterator":Ljava/util/Iterator;
label_cond_16a:
	bcpTypeAliasSet = bcpTypeAliasMap->get(bcpTypeId);
	bcpTypeAliasSet->checkCast("java::util::Set");
	//    .local v11, "bcpTypeAliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(bcpTypeAliasSet) )  
		goto label_cond_10d;
	alias_S_iterator = bcpTypeAliasSet->iterator();
	//    .restart local v5    # "alias$iterator":Ljava/util/Iterator;
label_goto_176:
	if ( !(alias_S_iterator->hasNext()) )  
		goto label_cond_10d;
	alias = alias_S_iterator->next();
	alias->checkCast("java::lang::String");
	//    .restart local v4    # "alias":Ljava/lang/String;
	typeDataMap->put(android::icu::impl::locale::AsciiUtil::toLowerString(alias), t);
	goto label_goto_176;
	// 2131    .line 643
	// 2132    .end local v4    # "alias":Ljava/lang/String;
	// 2133    .end local v5    # "alias$iterator":Ljava/util/Iterator;
	// 2134    .end local v11    # "bcpTypeAliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2135    .end local v12    # "bcpTypeId":Ljava/lang/String;
	// 2136    .end local v15    # "hasSameType":Z
	// 2137    .end local v16    # "isSpecialType":Z
	// 2138    .end local v20    # "legacyTypeId":Ljava/lang/String;
	// 2139    .end local v24    # "t":Landroid/icu/impl/locale/KeyTypeData$Type;
	// 2140    .end local v29    # "typeAliasSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2141    .end local v31    # "typeDataEntry":[Ljava/lang/String;
label_cond_190:
	//    .local v22, "specialTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/locale/KeyTypeData$SpecialType;>;"
	if ( !(specialTypeSet) )  
		goto label_cond_198;
	//    .end local v22    # "specialTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/locale/KeyTypeData$SpecialType;>;"
label_cond_198:
	var165 = keyData(legacyKeyId, bcpKeyId, typeDataMap, 0x0);
	//    .restart local v17    # "keyData":Landroid/icu/impl/locale/KeyTypeData$KeyData;
	android::icu::impl::locale::KeyTypeData::KEYMAP->put(android::icu::impl::locale::AsciiUtil::toLowerString(legacyKeyId), keyData);
	if ( 0x0 )     
		goto label_cond_1c5;
	android::icu::impl::locale::KeyTypeData::KEYMAP->put(android::icu::impl::locale::AsciiUtil::toLowerString(bcpKeyId), keyData);
label_cond_1c5:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_b;
	// 2211    .line 655
label_cond_1cb:
	return;

}
// .method public static isDeprecated(Ljava/lang/String;)Z
bool android::icu::impl::locale::KeyTypeData::isDeprecated(std::shared_ptr<java::lang::String> key)
{
	
	//    .param p0, "key"    # Ljava/lang/String;
	return android::icu::impl::locale::KeyTypeData::DEPRECATED_KEYS->contains(key);

}
// .method public static isDeprecated(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::impl::locale::KeyTypeData::isDeprecated(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type)
{
	
	std::shared_ptr<java::util::Set> deprecatedTypes;
	
	//    .param p0, "key"    # Ljava/lang/String;
	//    .param p1, "type"    # Ljava/lang/String;
	deprecatedTypes = android::icu::impl::locale::KeyTypeData::DEPRECATED_KEY_TYPES->get(key);
	deprecatedTypes->checkCast("java::util::Set");
	//    .local v0, "deprecatedTypes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( deprecatedTypes )     
		goto label_cond_c;
	return 0x0;
	// 2255    .line 682
label_cond_c:
	return deprecatedTypes->contains(type);

}
// .method public static toBcpKey(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::KeyTypeData::toBcpKey(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyData> keyData;
	
	//    .param p0, "key"    # Ljava/lang/String;
	keyData = android::icu::impl::locale::KeyTypeData::KEYMAP->get(android::icu::impl::locale::AsciiUtil::toLowerString(key));
	keyData->checkCast("android::icu::impl::locale::KeyTypeData_S_KeyData");
	//    .local v0, "keyData":Landroid/icu/impl/locale/KeyTypeData$KeyData;
	if ( !(keyData) )  
		goto label_cond_12;
	return keyData->bcpId;
	// 2294    .line 129
label_cond_12:
	return 0x0;

}
// .method public static toBcpType(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/Output;Landroid/icu/util/Output;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::KeyTypeData::toBcpType(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isKnownKey,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isSpecialType)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyData> keyData;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_Type> t;
	std::shared_ptr<java::util::Iterator> st_S_iterator;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> st;
	
	//    .param p0, "key"    # Ljava/lang/String;
	//    .param p1, "type"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2304        value = {
	// 2305            "(",
	// 2306            "Ljava/lang/String;",
	// 2307            "Ljava/lang/String;",
	// 2308            "Landroid/icu/util/Output",
	// 2309            "<",
	// 2310            "Ljava/lang/Boolean;",
	// 2311            ">;",
	// 2312            "Landroid/icu/util/Output",
	// 2313            "<",
	// 2314            "Ljava/lang/Boolean;",
	// 2315            ">;)",
	// 2316            "Ljava/lang/String;"
	// 2317        }
	// 2318    .end annotation
	//    .local p2, "isKnownKey":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	//    .local p3, "isSpecialType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	cVar0 = 0x0;
	if ( !(isKnownKey) )  
		goto label_cond_a;
	isKnownKey->value = java::lang::Boolean::valueOf(cVar0);
label_cond_a:
	if ( !(isSpecialType) )  
		goto label_cond_12;
	isSpecialType->value = java::lang::Boolean::valueOf(cVar0);
label_cond_12:
	cVar1 = android::icu::impl::locale::AsciiUtil::toLowerString(type);
	keyData = android::icu::impl::locale::KeyTypeData::KEYMAP->get(android::icu::impl::locale::AsciiUtil::toLowerString(key));
	keyData->checkCast("android::icu::impl::locale::KeyTypeData_S_KeyData");
	//    .local v0, "keyData":Landroid/icu/impl/locale/KeyTypeData$KeyData;
	if ( !(keyData) )  
		goto label_cond_65;
	if ( !(isKnownKey) )  
		goto label_cond_2a;
	isKnownKey->value = java::lang::Boolean::TRUE;
label_cond_2a:
	t = keyData->typeMap->get(cVar1);
	t->checkCast("android::icu::impl::locale::KeyTypeData_S_Type");
	//    .local v3, "t":Landroid/icu/impl/locale/KeyTypeData$Type;
	if ( !(t) )  
		goto label_cond_37;
	return t->bcpId;
	// 2399    .line 163
label_cond_37:
	if ( !(keyData->specialTypes) )  
		goto label_cond_65;
	st_S_iterator = keyData->specialTypes->iterator();
	//    .local v2, "st$iterator":Ljava/util/Iterator;
label_cond_41:
	if ( !(st_S_iterator->hasNext()) )  
		goto label_cond_65;
	st = st_S_iterator->next();
	st->checkCast("android::icu::impl::locale::KeyTypeData_S_SpecialType");
	//    .local v1, "st":Landroid/icu/impl/locale/KeyTypeData$SpecialType;
	if ( !(st->handler->isWellFormed(cVar1)) )  
		goto label_cond_41;
	if ( !(isSpecialType) )  
		goto label_cond_5e;
	isSpecialType->value = java::lang::Boolean::valueOf(0x1);
label_cond_5e:
	return st->handler->canonicalize(cVar1);
	// 2458    .line 174
	// 2459    .end local v1    # "st":Landroid/icu/impl/locale/KeyTypeData$SpecialType;
	// 2460    .end local v2    # "st$iterator":Ljava/util/Iterator;
	// 2461    .end local v3    # "t":Landroid/icu/impl/locale/KeyTypeData$Type;
label_cond_65:
	return 0x0;

}
// .method public static toLegacyKey(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::KeyTypeData::toLegacyKey(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyData> keyData;
	
	//    .param p0, "key"    # Ljava/lang/String;
	keyData = android::icu::impl::locale::KeyTypeData::KEYMAP->get(android::icu::impl::locale::AsciiUtil::toLowerString(key));
	keyData->checkCast("android::icu::impl::locale::KeyTypeData_S_KeyData");
	//    .local v0, "keyData":Landroid/icu/impl/locale/KeyTypeData$KeyData;
	if ( !(keyData) )  
		goto label_cond_12;
	return keyData->legacyId;
	// 2496    .line 138
label_cond_12:
	return 0x0;

}
// .method public static toLegacyType(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/Output;Landroid/icu/util/Output;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::locale::KeyTypeData::toLegacyType(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isKnownKey,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isSpecialType)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyData> keyData;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_Type> t;
	std::shared_ptr<java::util::Iterator> st_S_iterator;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> st;
	
	//    .param p0, "key"    # Ljava/lang/String;
	//    .param p1, "type"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2506        value = {
	// 2507            "(",
	// 2508            "Ljava/lang/String;",
	// 2509            "Ljava/lang/String;",
	// 2510            "Landroid/icu/util/Output",
	// 2511            "<",
	// 2512            "Ljava/lang/Boolean;",
	// 2513            ">;",
	// 2514            "Landroid/icu/util/Output",
	// 2515            "<",
	// 2516            "Ljava/lang/Boolean;",
	// 2517            ">;)",
	// 2518            "Ljava/lang/String;"
	// 2519        }
	// 2520    .end annotation
	//    .local p2, "isKnownKey":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	//    .local p3, "isSpecialType":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/Boolean;>;"
	cVar0 = 0x0;
	if ( !(isKnownKey) )  
		goto label_cond_a;
	isKnownKey->value = java::lang::Boolean::valueOf(cVar0);
label_cond_a:
	if ( !(isSpecialType) )  
		goto label_cond_12;
	isSpecialType->value = java::lang::Boolean::valueOf(cVar0);
label_cond_12:
	cVar1 = android::icu::impl::locale::AsciiUtil::toLowerString(type);
	keyData = android::icu::impl::locale::KeyTypeData::KEYMAP->get(android::icu::impl::locale::AsciiUtil::toLowerString(key));
	keyData->checkCast("android::icu::impl::locale::KeyTypeData_S_KeyData");
	//    .local v0, "keyData":Landroid/icu/impl/locale/KeyTypeData$KeyData;
	if ( !(keyData) )  
		goto label_cond_65;
	if ( !(isKnownKey) )  
		goto label_cond_2a;
	isKnownKey->value = java::lang::Boolean::TRUE;
label_cond_2a:
	t = keyData->typeMap->get(cVar1);
	t->checkCast("android::icu::impl::locale::KeyTypeData_S_Type");
	//    .local v3, "t":Landroid/icu/impl/locale/KeyTypeData$Type;
	if ( !(t) )  
		goto label_cond_37;
	return t->legacyId;
	// 2601    .line 200
label_cond_37:
	if ( !(keyData->specialTypes) )  
		goto label_cond_65;
	st_S_iterator = keyData->specialTypes->iterator();
	//    .local v2, "st$iterator":Ljava/util/Iterator;
label_cond_41:
	if ( !(st_S_iterator->hasNext()) )  
		goto label_cond_65;
	st = st_S_iterator->next();
	st->checkCast("android::icu::impl::locale::KeyTypeData_S_SpecialType");
	//    .local v1, "st":Landroid/icu/impl/locale/KeyTypeData$SpecialType;
	if ( !(st->handler->isWellFormed(cVar1)) )  
		goto label_cond_41;
	if ( !(isSpecialType) )  
		goto label_cond_5e;
	isSpecialType->value = java::lang::Boolean::valueOf(0x1);
label_cond_5e:
	return st->handler->canonicalize(cVar1);
	// 2660    .line 211
	// 2661    .end local v1    # "st":Landroid/icu/impl/locale/KeyTypeData$SpecialType;
	// 2662    .end local v2    # "st$iterator":Ljava/util/Iterator;
	// 2663    .end local v3    # "t":Landroid/icu/impl/locale/KeyTypeData$Type;
label_cond_65:
	return 0x0;

}


