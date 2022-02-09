// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\UResourceBundle.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.ResourceBundleWrapper.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle_S_RootType.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "android.icu.util.UResourceTypeMismatchException.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.ResourceBundle.h"
#include "java.util.Set.h"
#include "java.util.TreeSet.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static android::icu::util::UResourceBundle::_android_icu_util_UResourceBundle_S_RootTypeSwitchesValues = nullptr;
static android::icu::util::UResourceBundle::ARRAY = 0x8;
static android::icu::util::UResourceBundle::BINARY = 0x1;
static android::icu::util::UResourceBundle::INT = 0x7;
static android::icu::util::UResourceBundle::INT_VECTOR = 0xe;
static android::icu::util::UResourceBundle::NONE = -0x1;
static android::icu::util::UResourceBundle::ROOT_CACHE = nullptr;
static android::icu::util::UResourceBundle::STRING = 0x0;
static android::icu::util::UResourceBundle::TABLE = 0x2;
// .method private static synthetic -getandroid-icu-util-UResourceBundle$RootTypeSwitchesValues()[I
int android::icu::util::UResourceBundle::_getandroid_icu_util_UResourceBundle_S_RootTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::util::UResourceBundle::_android_icu_util_UResourceBundle_S_RootTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::util::UResourceBundle::_android_icu_util_UResourceBundle_S_RootTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::util::UResourceBundle_S_RootType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::util::UResourceBundle_S_RootType::ICU->ordinal()] = 0x1;
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
	cVar0[android::icu::util::UResourceBundle_S_RootType::JAVA->ordinal()] = 0x2;
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
	cVar0[android::icu::util::UResourceBundle_S_RootType::MISSING->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_2c
label_goto_29:
	android::icu::util::UResourceBundle::_android_icu_util_UResourceBundle_S_RootTypeSwitchesValues = cVar0;
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
void android::icu::util::UResourceBundle::static_cinit()
{
	
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar0;
	
	cVar0 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	android::icu::util::UResourceBundle::ROOT_CACHE = cVar0;
	return;

}
// .method public constructor <init>()V
android::icu::util::UResourceBundle::UResourceBundle()
{
	
	// 147    invoke-direct {p0}, Ljava/util/ResourceBundle;-><init>()V
	return;

}
// .method public static getBundleInstance(Landroid/icu/util/ULocale;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::getBundleInstance(std::shared_ptr<android::icu::util::ULocale> cVar0)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = android::icu::util::ULocale::getDefault({const[class].FS-Param});
label_cond_6:
	return android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), cVar0->getBaseName(), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x0);

}
// .method public static getBundleInstance(Ljava/lang/String;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"));
label_cond_5:
	//    .local v0, "uloc":Landroid/icu/util/ULocale;
	return android::icu::util::UResourceBundle::getBundleInstance(cVar0, android::icu::util::ULocale::getDefault(cVar0, android::icu::util::ULocale::getDefault(cVar0, android::icu::util::ULocale::getDefault(cVar0, android::icu::util::ULocale::getDefault({const[class].FS-Param})->getBaseName(), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x0)->getBaseName(), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x0)->getBaseName(), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x0)->getBaseName(), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x0);

}
// .method public static getBundleInstance(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<android::icu::util::ULocale> cVar1)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"));
label_cond_5:
	if ( cVar1 )     
		goto label_cond_b;
	cVar1 = android::icu::util::ULocale::getDefault({const[class].FS-Param});
label_cond_b:
	return android::icu::util::UResourceBundle::getBundleInstance(cVar0, cVar1->getBaseName(), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x0);

}
// .method public static getBundleInstance(Ljava/lang/String;Landroid/icu/util/ULocale;Ljava/lang/ClassLoader;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<android::icu::util::ULocale> cVar1,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"));
label_cond_5:
	if ( cVar1 )     
		goto label_cond_b;
	cVar1 = android::icu::util::ULocale::getDefault({const[class].FS-Param});
label_cond_b:
	return android::icu::util::UResourceBundle::getBundleInstance(cVar0, cVar1->getBaseName(), loader, 0x0);

}
// .method public static getBundleInstance(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeName"    # Ljava/lang/String;
	return android::icu::util::UResourceBundle::getBundleInstance(baseName, localeName, android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x0);

}
// .method public static getBundleInstance(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<java::lang::ClassLoader> root)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeName"    # Ljava/lang/String;
	//    .param p2, "root"    # Ljava/lang/ClassLoader;
	return android::icu::util::UResourceBundle::getBundleInstance(baseName, localeName, root, 0x0);

}
// .method protected static getBundleInstance(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeName"    # Ljava/lang/String;
	//    .param p2, "root"    # Ljava/lang/ClassLoader;
	//    .param p3, "disableFallback"    # Z
	return android::icu::util::UResourceBundle::instantiateBundle(baseName, localeName, root, disableFallback);

}
// .method public static getBundleInstance(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::util::Locale> locale)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "locale"    # Ljava/util/Locale;
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"));
label_cond_5:
	if ( locale )     
		goto label_cond_17;
	//    .local v0, "uloc":Landroid/icu/util/ULocale;
label_goto_b:
	return android::icu::util::UResourceBundle::getBundleInstance(cVar0, uloc->getBaseName(), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, 0x0);
	// 392    .line 203
	// 393    .end local v0    # "uloc":Landroid/icu/util/ULocale;
label_cond_17:
	//    .restart local v0    # "uloc":Landroid/icu/util/ULocale;
	goto label_goto_b;

}
// .method public static getBundleInstance(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::util::Locale> locale,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	if ( cVar0 )     
		goto label_cond_5;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b"));
label_cond_5:
	if ( locale )     
		goto label_cond_15;
	//    .local v0, "uloc":Landroid/icu/util/ULocale;
label_goto_b:
	return android::icu::util::UResourceBundle::getBundleInstance(cVar0, uloc->getBaseName(), loader, 0x0);
	// 439    .line 244
	// 440    .end local v0    # "uloc":Landroid/icu/util/ULocale;
label_cond_15:
	//    .restart local v0    # "uloc":Landroid/icu/util/ULocale;
	goto label_goto_b;

}
// .method private static getRootType(Ljava/lang/String;Ljava/lang/ClassLoader;)Landroid/icu/util/UResourceBundle$RootType;
std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> android::icu::util::UResourceBundle::getRootType(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> root)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> rootType;
	std::shared_ptr<java::lang::String> rootLocale;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "root"    # Ljava/lang/ClassLoader;
	rootType = android::icu::util::UResourceBundle::ROOT_CACHE->get(baseName);
	rootType->checkCast("android::icu::util::UResourceBundle_S_RootType");
	//    .local v3, "rootType":Landroid/icu/util/UResourceBundle$RootType;
	if ( rootType )     
		goto label_cond_21;
	if ( baseName->indexOf(0x2e) != -0x1 )
		goto label_cond_22;
	rootLocale = std::make_shared<java::lang::String>(std::make_shared<char[]>("root"));
	//    .local v2, "rootLocale":Ljava/lang/String;
label_goto_16:
	try {
	//label_try_start_17:
	android::icu::impl::ICUResourceBundle::getBundleInstance(baseName, rootLocale, root, 0x1);
	rootType = android::icu::util::UResourceBundle_S_RootType::ICU;
	//label_try_end_1c:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_26;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_17 .. :try_end_1c} :catch_26
label_goto_1c:
	android::icu::util::UResourceBundle::ROOT_CACHE->put(baseName, rootType);
	//    .end local v2    # "rootLocale":Ljava/lang/String;
label_cond_21:
	return rootType;
	// 506    .line 318
label_cond_22:
	//    .restart local v2    # "rootLocale":Ljava/lang/String;
	goto label_goto_16;
	// 513    .line 322
label_catch_26:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/util/MissingResourceException;
	try {
	//label_try_start_28:
	android::icu::impl::ResourceBundleWrapper::getBundleInstance(baseName, rootLocale, root, 0x1);
	rootType = android::icu::util::UResourceBundle_S_RootType::JAVA;
	//label_try_end_2d:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_28 .. :try_end_2d} :catch_2e
	goto label_goto_1c;
	// 531    .line 326
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	rootType = android::icu::util::UResourceBundle_S_RootType::MISSING;
	goto label_goto_1c;

}
// .method private handleGetObjectImpl(Ljava/lang/String;Landroid/icu/util/UResourceBundle;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::UResourceBundle::handleGetObjectImpl(std::shared_ptr<java::lang::String> aKey,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	std::shared_ptr<java::lang::Object> obj;
	std::shared_ptr<android::icu::util::UResourceBundle> parentBundle;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "aKey"    # Ljava/lang/String;
	//    .param p2, "requested"    # Landroid/icu/util/UResourceBundle;
	obj = this->resolveObject(aKey, requested);
	//    .local v0, "obj":Ljava/lang/Object;
	if ( obj )     
		goto label_cond_47;
	parentBundle = this->getParent();
	//    .local v1, "parentBundle":Landroid/icu/util/UResourceBundle;
	if ( !(parentBundle) )  
		goto label_cond_10;
	obj = parentBundle->handleGetObjectImpl(aKey, requested);
label_cond_10:
	if ( obj )     
		goto label_cond_47;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::util::MissingResourceException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t find resource for bundle ")))->append(this->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", key ")))->append(aKey)->toString(), this->getClass()->getName(), aKey);
	// throw
	throw cVar0;
	// 633    .line 835
	// 634    .end local v1    # "parentBundle":Landroid/icu/util/UResourceBundle;
label_cond_47:
	return obj;

}
// .method protected static instantiateBundle(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::instantiateBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeName,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "localeName"    # Ljava/lang/String;
	//    .param p2, "root"    # Ljava/lang/ClassLoader;
	//    .param p3, "disableFallback"    # Z
	//    .local v2, "rootType":Landroid/icu/util/UResourceBundle$RootType;
	// switch
	{
	auto item = ( android::icu::util::UResourceBundle::-getandroid-icu-util-UResourceBundle$RootTypeSwitchesValues({const[class].FS-Param})[android::icu::util::UResourceBundle::getRootType(baseName, root)->ordinal()] );
	if (item == 1) goto label_pswitch_1b;
	if (item == 2) goto label_pswitch_20;
	}
	try {
	//label_try_start_11:
	//    .local v0, "b":Landroid/icu/util/UResourceBundle;
	android::icu::util::UResourceBundle::setRootType(baseName, android::icu::util::UResourceBundle_S_RootType::ICU);
	//label_try_end_1a:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_11 .. :try_end_1a} :catch_25
label_goto_1a:
	return b;
	// 684    .line 360
	// 685    .end local v0    # "b":Landroid/icu/util/UResourceBundle;
label_pswitch_1b:
	return android::icu::impl::ICUResourceBundle::getBundleInstance(baseName, localeName, root, disableFallback);
	// 693    .line 363
label_pswitch_20:
	return android::icu::impl::ResourceBundleWrapper::getBundleInstance(baseName, localeName, root, disableFallback);
	// 701    .line 373
label_catch_25:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/util/MissingResourceException;
	//    .restart local v0    # "b":Landroid/icu/util/UResourceBundle;
	android::icu::util::UResourceBundle::setRootType(baseName, android::icu::util::UResourceBundle_S_RootType::JAVA);
	goto label_goto_1a;
	// 719    .line 358
	// 720    :pswitch_data_30
	// 721    .packed-switch 0x1
	// 722        :pswitch_1b
	// 723        :pswitch_20
	// 724    .end packed-switch

}
// .method private resolveObject(Ljava/lang/String;Landroid/icu/util/UResourceBundle;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::UResourceBundle::resolveObject(std::shared_ptr<java::lang::String> aKey,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle> obj;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "aKey"    # Ljava/lang/String;
	//    .param p2, "requested"    # Landroid/icu/util/UResourceBundle;
	if ( this->getType() )     
		goto label_cond_c;
	return this->getString();
	// 749    .line 844
label_cond_c:
	obj = this->handleGet(aKey, 0x0, requested);
	//    .local v1, "obj":Landroid/icu/util/UResourceBundle;
	if ( !(obj) )  
		goto label_cond_2c;
	if ( obj->getType() )     
		goto label_cond_1d;
	return obj->getString();
	// 773    .line 850
label_cond_1d:
	try {
	//label_try_start_1d:
	if ( obj->getType() != 0x8 )
		goto label_cond_2c;
	//label_try_end_28:
	}
	catch (android::icu::util::UResourceTypeMismatchException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	//    .catch Landroid/icu/util/UResourceTypeMismatchException; {:try_start_1d .. :try_end_28} :catch_2a
	return obj->handleGetStringArray();
	// 793    .line 853
label_catch_2a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Landroid/icu/util/UResourceTypeMismatchException;
	return obj;
	// 801    .line 857
	// 802    .end local v0    # "ex":Landroid/icu/util/UResourceTypeMismatchException;
label_cond_2c:
	return obj;

}
// .method private static setRootType(Ljava/lang/String;Landroid/icu/util/UResourceBundle$RootType;)V
void android::icu::util::UResourceBundle::setRootType(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<android::icu::util::UResourceBundle_S_RootType> rootType)
{
	
	//    .param p0, "baseName"    # Ljava/lang/String;
	//    .param p1, "rootType"    # Landroid/icu/util/UResourceBundle$RootType;
	android::icu::util::UResourceBundle::ROOT_CACHE->put(baseName, rootType);
	return;

}
// .method protected findTopLevel(I)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::findTopLevel(int index)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<android::icu::util::UResourceBundle> res;
	std::shared_ptr<android::icu::util::UResourceBundle> obj;
	
	//    .param p1, "index"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 828    .end annotation
	cVar0 = 0x0;
	res = this;
	//    .local v1, "res":Landroid/icu/util/UResourceBundle;
label_goto_2:
	if ( !(res) )  
		goto label_cond_10;
	obj = res->handleGet(index, cVar0, this);
	//    .local v0, "obj":Landroid/icu/util/UResourceBundle;
	if ( !(obj) )  
		goto label_cond_b;
	return obj;
	// 852    .line 578
label_cond_b:
	res = res->getParent();
	goto label_goto_2;
	// 860    .line 584
	// 861    .end local v0    # "obj":Landroid/icu/util/UResourceBundle;
label_cond_10:
	return cVar0;

}
// .method protected findTopLevel(Ljava/lang/String;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::findTopLevel(std::shared_ptr<java::lang::String> aKey)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<android::icu::util::UResourceBundle> res;
	std::shared_ptr<android::icu::util::UResourceBundle> obj;
	
	//    .param p1, "aKey"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 870    .end annotation
	cVar0 = 0x0;
	res = this;
	//    .local v1, "res":Landroid/icu/util/UResourceBundle;
label_goto_2:
	if ( !(res) )  
		goto label_cond_10;
	obj = res->handleGet(aKey, cVar0, this);
	//    .local v0, "obj":Landroid/icu/util/UResourceBundle;
	if ( !(obj) )  
		goto label_cond_b;
	return obj;
	// 894    .line 511
label_cond_b:
	res = res->getParent();
	goto label_goto_2;
	// 902    .line 517
	// 903    .end local v0    # "obj":Landroid/icu/util/UResourceBundle;
label_cond_10:
	return cVar0;

}
// .method public get(I)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::get(int index)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle> obj;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "index"    # I
	obj = this->handleGet(index, 0x0, this);
	//    .local v0, "obj":Landroid/icu/util/UResourceBundle;
	if ( obj )     
		goto label_cond_50;
	obj = this->getParent();
	if ( !(obj) )  
		goto label_cond_11;
	obj = obj->get(index);
label_cond_11:
	if ( obj )     
		goto label_cond_50;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::util::MissingResourceException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t find resource for bundle ")))->append(this->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", key ")))->append(this->getKey())->toString(), this->getClass()->getName(), this->getKey());
	// throw
	throw cVar0;
	// 1009    .line 557
label_cond_50:
	return obj;

}
// .method public get(Ljava/lang/String;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::get(std::shared_ptr<java::lang::String> aKey)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle> obj;
	std::shared_ptr<java::util::MissingResourceException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "aKey"    # Ljava/lang/String;
	obj = this->findTopLevel(aKey);
	//    .local v1, "obj":Landroid/icu/util/UResourceBundle;
	if ( obj )     
		goto label_cond_3f;
	//    .local v0, "fullName":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::util::MissingResourceException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t find resource for bundle ")))->append(android::icu::impl::ICUResourceBundleReader::getFullName(this->getBaseName(), this->getLocaleID()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", key ")))->append(aKey)->toString(), this->getClass()->getName(), aKey);
	// throw
	throw cVar0;
	// 1088    .line 493
	// 1089    .end local v0    # "fullName":Ljava/lang/String;
label_cond_3f:
	return obj;

}
// .method public getBinary()Ljava/nio/ByteBuffer;
std::shared_ptr<java::nio::ByteBuffer> android::icu::util::UResourceBundle::getBinary()
{
	
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;

}
// .method public getBinary([B)[B
unsigned char android::icu::util::UResourceBundle::getBinary(std::shared_ptr<unsigned char[]> ba)
{
	
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	//    .param p1, "ba"    # [B
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;

}
// .method public getInt()I
int android::icu::util::UResourceBundle::getInt()
{
	
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;

}
// .method public getIntVector()[I
int android::icu::util::UResourceBundle::getIntVector()
{
	
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;

}
// .method public getIterator()Landroid/icu/util/UResourceBundleIterator;
std::shared_ptr<android::icu::util::UResourceBundleIterator> android::icu::util::UResourceBundle::getIterator()
{
	
	std::shared_ptr<android::icu::util::UResourceBundleIterator> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::UResourceBundleIterator>(this);
	return cVar0;

}
// .method public getKey()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::UResourceBundle::getKey()
{
	
	return 0x0;

}
// .method public getKeys()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::util::UResourceBundle::getKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1179        value = {
	// 1180            "()",
	// 1181            "Ljava/util/Enumeration",
	// 1182            "<",
	// 1183            "Ljava/lang/String;",
	// 1184            ">;"
	// 1185        }
	// 1186    .end annotation
	return java::util::Collections::enumeration(this->keySet());

}
// .method public getLocale()Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::util::UResourceBundle::getLocale()
{
	
	return this->getULocale()->toLocale();

}
// .method public getSize()I
int android::icu::util::UResourceBundle::getSize()
{
	
	return 0x1;

}
// .method public getString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::UResourceBundle::getString()
{
	
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;

}
// .method public getString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::UResourceBundle::getString(int index)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> temp;
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	//    .param p1, "index"    # I
	temp = this->get(index);
	temp->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "temp":Landroid/icu/impl/ICUResourceBundle;
	if ( temp->getType() )     
		goto label_cond_11;
	return temp->getString();
	// 1274    .line 533
label_cond_11:
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;

}
// .method public getStringArray()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::UResourceBundle::getStringArray()
{
	
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;

}
// .method public getType()I
int android::icu::util::UResourceBundle::getType()
{
	
	return -0x1;

}
// .method public getUInt()I
int android::icu::util::UResourceBundle::getUInt()
{
	
	std::shared_ptr<android::icu::util::UResourceTypeMismatchException> cVar0;
	
	cVar0 = std::make_shared<android::icu::util::UResourceTypeMismatchException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	// throw
	throw cVar0;

}
// .method public getVersion()Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::util::UResourceBundle::getVersion()
{
	
	return 0x0;

}
// .method protected handleGet(ILjava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::handleGet(int index,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	//    .param p1, "index"    # I
	//    .param p3, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1341        value = {
	// 1342            "(I",
	// 1343            "Ljava/util/HashMap",
	// 1344            "<",
	// 1345            "Ljava/lang/String;",
	// 1346            "Ljava/lang/String;",
	// 1347            ">;",
	// 1348            "Landroid/icu/util/UResourceBundle;",
	// 1349            ")",
	// 1350            "Landroid/icu/util/UResourceBundle;"
	// 1351        }
	// 1352    .end annotation
	//    .local p2, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	return 0x0;

}
// .method protected handleGet(Ljava/lang/String;Ljava/util/HashMap;Landroid/icu/util/UResourceBundle;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::UResourceBundle::handleGet(std::shared_ptr<java::lang::String> aKey,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested)
{
	
	//    .param p1, "aKey"    # Ljava/lang/String;
	//    .param p3, "requested"    # Landroid/icu/util/UResourceBundle;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1367        value = {
	// 1368            "(",
	// 1369            "Ljava/lang/String;",
	// 1370            "Ljava/util/HashMap",
	// 1371            "<",
	// 1372            "Ljava/lang/String;",
	// 1373            "Ljava/lang/String;",
	// 1374            ">;",
	// 1375            "Landroid/icu/util/UResourceBundle;",
	// 1376            ")",
	// 1377            "Landroid/icu/util/UResourceBundle;"
	// 1378        }
	// 1379    .end annotation
	//    .local p2, "aliasesVisited":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	return 0x0;

}
// .method protected handleGetKeys()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> android::icu::util::UResourceBundle::handleGetKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1392        value = {
	// 1393            "()",
	// 1394            "Ljava/util/Enumeration",
	// 1395            "<",
	// 1396            "Ljava/lang/String;",
	// 1397            ">;"
	// 1398        }
	// 1399    .end annotation
	return 0x0;

}
// .method protected handleGetObject(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::UResourceBundle::handleGetObject(std::shared_ptr<java::lang::String> aKey)
{
	
	//    .param p1, "aKey"    # Ljava/lang/String;
	return this->handleGetObjectImpl(aKey, this);

}
// .method protected handleGetStringArray()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::UResourceBundle::handleGetStringArray()
{
	
	return 0x0;

}
// .method protected handleKeySet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::util::UResourceBundle::handleKeySet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1434        value = {
	// 1435            "()",
	// 1436            "Ljava/util/Set",
	// 1437            "<",
	// 1438            "Ljava/lang/String;",
	// 1439            ">;"
	// 1440        }
	// 1441    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1444    .end annotation
	return java::util::Collections::emptySet({const[class].FS-Param});

}
// .method protected isTopLevelResource()Z
bool android::icu::util::UResourceBundle::isTopLevelResource()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1458    .end annotation
	return 0x1;

}
// .method public keySet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::util::UResourceBundle::keySet()
{
	
	std::shared_ptr<java::util::Set> keys;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> icurb;
	std::shared_ptr<java::util::TreeSet> newKeySet;
	std::shared_ptr<java::util::ResourceBundle> cVar0;
	std::shared_ptr<java::util::Enumeration> parentKeys;
	std::shared_ptr<java::lang::String> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1470        value = {
	// 1471            "()",
	// 1472            "Ljava/util/Set",
	// 1473            "<",
	// 1474            "Ljava/lang/String;",
	// 1475            ">;"
	// 1476        }
	// 1477    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1480    .end annotation
	keys = 0x0;
	//    .local v1, "keys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	0x0;
	//    .local v0, "icurb":Landroid/icu/impl/ICUResourceBundle;
	if ( !(this->isTopLevelResource()) )  
		goto label_cond_13;
	if ( !(this->instanceOf("android::icu::impl::ICUResourceBundle")) )  
		goto label_cond_13;
	icurb = this;
	icurb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "icurb":Landroid/icu/impl/ICUResourceBundle;
	keys = icurb->getTopLevelKeySet();
	//    .end local v0    # "icurb":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v1    # "keys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_13:
	if ( keys )     
		goto label_cond_34;
	if ( !(this->isTopLevelResource()) )  
		goto label_cond_64;
	if ( this->parent )     
		goto label_cond_35;
	newKeySet = std::make_shared<java::util::TreeSet>();
	//    .local v2, "newKeySet":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
label_cond_24:
label_goto_24:
	newKeySet->addAll(this->handleKeySet());
	keys = java::util::Collections::unmodifiableSet(newKeySet);
	//    .local v1, "keys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(icurb) )  
		goto label_cond_34;
	icurb->setTopLevelKeySet(keys);
	//    .end local v1    # "keys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .end local v2    # "newKeySet":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
label_cond_34:
	return keys;
	// 1564    .line 625
label_cond_35:
	if ( !(this->parent->instanceOf("android::icu::util::UResourceBundle")) )  
		goto label_cond_49;
	cVar0 = this->parent;
	cVar0->checkCast("android::icu::util::UResourceBundle");
	newKeySet = std::make_shared<java::util::TreeSet>(cVar0->keySet());
	//    .restart local v2    # "newKeySet":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	goto label_goto_24;
	// 1588    .line 630
	// 1589    .end local v2    # "newKeySet":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
label_cond_49:
	newKeySet = std::make_shared<java::util::TreeSet>();
	//    .restart local v2    # "newKeySet":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	parentKeys = this->parent->getKeys();
	//    .local v3, "parentKeys":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_goto_54:
	if ( !(parentKeys->hasMoreElements()) )  
		goto label_cond_24;
	cVar1 = parentKeys->nextElement();
	cVar1->checkCast("java::lang::String");
	newKeySet->add(cVar1);
	goto label_goto_54;
	// 1623    .line 642
	// 1624    .end local v2    # "newKeySet":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	// 1625    .end local v3    # "parentKeys":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
label_cond_64:
	return this->handleKeySet();

}


