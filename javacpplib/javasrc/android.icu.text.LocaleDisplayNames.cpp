// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUConfig.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "android.icu.text.LocaleDisplayNames_S_LastResortLocaleDisplayNames.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem.h"
#include "android.icu.text.LocaleDisplayNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Class.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.NoSuchMethodException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.lang.reflect.Method.h"
#include "java.util.Comparator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

static android::icu::text::LocaleDisplayNames::FACTORY_DIALECTHANDLING;
static android::icu::text::LocaleDisplayNames::FACTORY_DISPLAYCONTEXT;
// .method static constructor <clinit>()V
void android::icu::text::LocaleDisplayNames::static_cinit()
{
	
	std::shared_ptr<java::lang::reflect::Method> factoryDialectHandling;
	std::shared_ptr<java::lang::reflect::Method> factoryDisplayContext;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Class> implClass;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar1;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar0;
	
	//    .local v5, "implClassName":Ljava/lang/String;
	factoryDialectHandling = 0x0;
	//    .local v2, "factoryDialectHandling":Ljava/lang/reflect/Method;
	factoryDisplayContext = 0x0;
	//    .local v3, "factoryDisplayContext":Ljava/lang/reflect/Method;
	try {
	//label_try_start_c:
	//label_try_end_f:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3d;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_c .. :try_end_f} :catch_3d
	implClass = java::lang::Class::forName(android::icu::impl::ICUConfig::get(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.text.LocaleDisplayNames.impl")), std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.LocaleDisplayNamesImpl"))));
	//    .local v4, "implClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	try {
	//label_try_start_10:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x2);
	cVar0[0x0] = android::icu::util::ULocale();
	cVar0[0x1] = android::icu::text::LocaleDisplayNames_S_DialectHandling();
	//label_try_end_23:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_41;
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3d;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_10 .. :try_end_23} :catch_41
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_10 .. :try_end_23} :catch_3d
	factoryDialectHandling = implClass->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("getInstance")), cVar0);
	//    .end local v2    # "factoryDialectHandling":Ljava/lang/reflect/Method;
label_goto_24:
	try {
	//label_try_start_24:
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x2);
	cVar1[0x0] = android::icu::util::ULocale();
	cVar1[0x1] = std::vector<android::icu::text::DisplayContext>();
	//label_try_end_37:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3f;
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3d;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_24 .. :try_end_37} :catch_3f
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_24 .. :try_end_37} :catch_3d
	factoryDisplayContext = implClass->getMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("getInstance")), cVar1);
	//    .end local v3    # "factoryDisplayContext":Ljava/lang/reflect/Method;
	//    .end local v4    # "implClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_38:
	android::icu::text::LocaleDisplayNames::FACTORY_DIALECTHANDLING = factoryDialectHandling;
	android::icu::text::LocaleDisplayNames::FACTORY_DISPLAYCONTEXT = factoryDisplayContext;
	return;
	// 126    .line 406
	// 127    .restart local v3    # "factoryDisplayContext":Ljava/lang/reflect/Method;
label_catch_3d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/ClassNotFoundException;
	goto label_goto_38;
	// 134    .line 403
	// 135    .end local v0    # "e":Ljava/lang/ClassNotFoundException;
	// 136    .restart local v4    # "implClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_catch_3f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/NoSuchMethodException;
	goto label_goto_38;
	// 143    .line 398
	// 144    .end local v1    # "e":Ljava/lang/NoSuchMethodException;
	// 145    .restart local v2    # "factoryDialectHandling":Ljava/lang/reflect/Method;
label_catch_41:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v1    # "e":Ljava/lang/NoSuchMethodException;
	goto label_goto_24;

}
// .method protected constructor <init>()V
android::icu::text::LocaleDisplayNames::LocaleDisplayNames()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 156    .end annotation
	// 160    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::text::LocaleDisplayNames::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::LocaleDisplayNames::getInstance(locale, android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES);

}
// .method public static getInstance(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;)Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::text::LocaleDisplayNames::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling)
{
	
	std::shared_ptr<android::icu::text::LocaleDisplayNames> result;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames> result;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::shared_ptr<android::icu::text::LocaleDisplayNames> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "dialectHandling"    # Landroid/icu/text/LocaleDisplayNames$DialectHandling;
	result = 0x0;
	//    .local v3, "result":Landroid/icu/text/LocaleDisplayNames;
	if ( !(android::icu::text::LocaleDisplayNames::FACTORY_DIALECTHANDLING) )  
		goto label_cond_1a;
	try {
	//label_try_start_6:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar0[0x0] = locale;
	cVar0[0x1] = dialectHandling;
	cVar1 = android::icu::text::LocaleDisplayNames::FACTORY_DIALECTHANDLING->invoke(0x0, cVar0);
	cVar1->checkCast("android::icu::text::LocaleDisplayNames");
	result = cVar1;
	//label_try_end_1a:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_22;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_6 .. :try_end_1a} :catch_22
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_6 .. :try_end_1a} :catch_24
	//    .end local v3    # "result":Landroid/icu/text/LocaleDisplayNames;
label_cond_1a:
label_goto_1a:
	if ( result )     
		goto label_cond_21;
	result = std::make_shared<android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames>(locale, dialectHandling, 0x0);
label_cond_21:
	return result;
	// 246    .line 82
	// 247    .restart local v3    # "result":Landroid/icu/text/LocaleDisplayNames;
label_catch_22:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/reflect/InvocationTargetException;
	goto label_goto_1a;
	// 254    .line 84
	// 255    .end local v2    # "e":Ljava/lang/reflect/InvocationTargetException;
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/IllegalAccessException;
	goto label_goto_1a;

}
// .method public static varargs getInstance(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::text::LocaleDisplayNames::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts)
{
	
	std::shared_ptr<android::icu::text::LocaleDisplayNames> result;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames> result;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::shared_ptr<android::icu::text::LocaleDisplayNames> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "contexts"    # [Landroid/icu/text/DisplayContext;
	result = 0x0;
	//    .local v3, "result":Landroid/icu/text/LocaleDisplayNames;
	if ( !(android::icu::text::LocaleDisplayNames::FACTORY_DISPLAYCONTEXT) )  
		goto label_cond_1a;
	try {
	//label_try_start_6:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar0[0x0] = locale;
	cVar0[0x1] = contexts;
	cVar1 = android::icu::text::LocaleDisplayNames::FACTORY_DISPLAYCONTEXT->invoke(0x0, cVar0);
	cVar1->checkCast("android::icu::text::LocaleDisplayNames");
	result = cVar1;
	//label_try_end_1a:
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_22;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_6 .. :try_end_1a} :catch_22
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_6 .. :try_end_1a} :catch_24
	//    .end local v3    # "result":Landroid/icu/text/LocaleDisplayNames;
label_cond_1a:
label_goto_1a:
	if ( result )     
		goto label_cond_21;
	result = std::make_shared<android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames>(locale, contexts, 0x0);
label_cond_21:
	return result;
	// 328    .line 108
	// 329    .restart local v3    # "result":Landroid/icu/text/LocaleDisplayNames;
label_catch_22:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/reflect/InvocationTargetException;
	goto label_goto_1a;
	// 336    .line 110
	// 337    .end local v2    # "e":Ljava/lang/reflect/InvocationTargetException;
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/IllegalAccessException;
	goto label_goto_1a;

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::text::LocaleDisplayNames::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::LocaleDisplayNames::getInstance(android::icu::util::ULocale::forLocale(locale));

}
// .method public static varargs getInstance(Ljava/util/Locale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::text::LocaleDisplayNames::getInstance(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	//    .param p1, "contexts"    # [Landroid/icu/text/DisplayContext;
	return android::icu::text::LocaleDisplayNames::getInstance(android::icu::util::ULocale::forLocale(locale), contexts);

}
// .method public getUiList(Ljava/util/Set;ZLjava/util/Comparator;)Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::LocaleDisplayNames_S_UiListItem>> android::icu::text::LocaleDisplayNames::getUiList(std::shared_ptr<java::util::Set<android::icu::util::ULocale>> localeSet,bool inSelf,std::shared_ptr<java::util::Comparator<java::lang::Object>> collator)
{
	
	//    .param p2, "inSelf"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 395        value = {
	// 396            "(",
	// 397            "Ljava/util/Set",
	// 398            "<",
	// 399            "Landroid/icu/util/ULocale;",
	// 400            ">;Z",
	// 401            "Ljava/util/Comparator",
	// 402            "<",
	// 403            "Ljava/lang/Object;",
	// 404            ">;)",
	// 405            "Ljava/util/List",
	// 406            "<",
	// 407            "Landroid/icu/text/LocaleDisplayNames$UiListItem;",
	// 408            ">;"
	// 409        }
	// 410    .end annotation
	//    .local p1, "localeSet":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	//    .local p3, "collator":Ljava/util/Comparator;, "Ljava/util/Comparator<Ljava/lang/Object;>;"
	return this->getUiListCompareWholeItems(localeSet, android::icu::text::LocaleDisplayNames_S_UiListItem::getComparator(collator, inSelf));

}
// .method public abstract getUiListCompareWholeItems(Ljava/util/Set;Ljava/util/Comparator;)Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::LocaleDisplayNames_S_UiListItem>> android::icu::text::LocaleDisplayNames::getUiListCompareWholeItems(std::shared_ptr<java::util::Set<android::icu::util::ULocale>> var0,std::shared_ptr<java::util::Comparator<android::icu::text::LocaleDisplayNames_S_UiListItem>> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 429        value = {
	// 430            "(",
	// 431            "Ljava/util/Set",
	// 432            "<",
	// 433            "Landroid/icu/util/ULocale;",
	// 434            ">;",
	// 435            "Ljava/util/Comparator",
	// 436            "<",
	// 437            "Landroid/icu/text/LocaleDisplayNames$UiListItem;",
	// 438            ">;)",
	// 439            "Ljava/util/List",
	// 440            "<",
	// 441            "Landroid/icu/text/LocaleDisplayNames$UiListItem;",
	// 442            ">;"
	// 443        }
	// 444    .end annotation

}
// .method public scriptDisplayNameInContext(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames::scriptDisplayNameInContext(std::shared_ptr<java::lang::String> script)
{
	
	//    .param p1, "script"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 478    .end annotation
	return this->scriptDisplayName(script);

}


