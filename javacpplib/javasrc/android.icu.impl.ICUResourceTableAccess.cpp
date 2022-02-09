// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceTableAccess.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUResourceTableAccess.h"
#include "android.icu.impl.LocaleIDs.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method public constructor <init>()V
android::icu::impl::ICUResourceTableAccess::ICUResourceTableAccess()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getTableString(Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceTableAccess::getTableString(std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle,std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> subtableName,std::shared_ptr<java::lang::String> item,std::shared_ptr<java::lang::String> defaultValue)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> table;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> stable;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::String> currentName;
	std::shared_ptr<java::lang::String> fallbackLocale;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	
	//    .param p0, "bundle"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p1, "tableName"    # Ljava/lang/String;
	//    .param p2, "subtableName"    # Ljava/lang/String;
	//    .param p3, "item"    # Ljava/lang/String;
	//    .param p4, "defaultValue"    # Ljava/lang/String;
	cVar0 = 0x0;
label_goto_1:
	try {
	//label_try_start_1:
	table = bundle->findWithFallback(tableName);
	//    .local v5, "table":Landroid/icu/impl/ICUResourceBundle;
	if ( table )     
		goto label_cond_8;
	return defaultValue;
	// 043    .line 45
label_cond_8:
	//    .local v4, "stable":Landroid/icu/impl/ICUResourceBundle;
	if ( !(subtableName) )  
		goto label_cond_f;
	stable = table->findWithFallback(subtableName);
label_cond_f:
	if ( !(table) )  
		goto label_cond_20;
	//label_try_end_14:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_14} :catch_75
	cVar0 = stable->findStringWithFallback(item);
	//    .local v3, "result":Ljava/lang/String;
	if ( !(cVar0) )  
		goto label_cond_20;
	//    .end local v3    # "result":Ljava/lang/String;
	//    .end local v4    # "stable":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v5    # "table":Landroid/icu/impl/ICUResourceBundle;
	//    .end local p0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
label_cond_17:
label_goto_17:
	if ( !(cVar0) )  
		goto label_cond_73;
	if ( cVar0->length() <= 0 )
		goto label_cond_73;
label_goto_1f:
	return cVar0;
	// 089    .line 57
	// 090    .restart local v4    # "stable":Landroid/icu/impl/ICUResourceBundle;
	// 091    .restart local v5    # "table":Landroid/icu/impl/ICUResourceBundle;
	// 092    .restart local p0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
label_cond_20:
	if ( subtableName )     
		goto label_cond_38;
	//    .local v0, "currentName":Ljava/lang/String;
	try {
	//label_try_start_23:
	if ( !(tableName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Countries")))) )  
		goto label_cond_42;
	currentName = android::icu::impl::LocaleIDs::getCurrentCountryID(item);
	//    .end local v0    # "currentName":Ljava/lang/String;
label_cond_30:
label_goto_30:
	if ( !(0x0) )  
		goto label_cond_38;
	cVar0 = table->findStringWithFallback(currentName);
	//    .restart local v3    # "result":Ljava/lang/String;
	if ( cVar0 )     
		goto label_cond_17;
	//    .end local v3    # "result":Ljava/lang/String;
label_cond_38:
	fallbackLocale = table->findStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("Fallback")));
	//    .local v2, "fallbackLocale":Ljava/lang/String;
	if ( fallbackLocale )     
		goto label_cond_50;
	return defaultValue;
	// 146    .line 62
	// 147    .end local v2    # "fallbackLocale":Ljava/lang/String;
	// 148    .restart local v0    # "currentName":Ljava/lang/String;
label_cond_42:
	if ( !(tableName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Languages")))) )  
		goto label_cond_30;
	//    .local v0, "currentName":Ljava/lang/String;
	goto label_goto_30;
	// 166    .line 79
	// 167    .end local v0    # "currentName":Ljava/lang/String;
	// 168    .restart local v2    # "fallbackLocale":Ljava/lang/String;
label_cond_50:
	if ( fallbackLocale->length() )     
		goto label_cond_59;
	fallbackLocale = std::make_shared<java::lang::String>(std::make_shared<char[]>("root"));
label_cond_59:
	if ( !(fallbackLocale->equals(table->getULocale()->getName())) )  
		goto label_cond_68;
	return defaultValue;
	// 198    .line 88
label_cond_68:
	bundle = android::icu::util::UResourceBundle::getBundleInstance(bundle->getBaseName(), fallbackLocale);
	//    .end local p0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//label_try_end_72:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_75;
	}
	//    .catch Ljava/lang/Exception; {:try_start_23 .. :try_end_72} :catch_75
	//    .restart local p0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	goto label_goto_1;
	// 217    .end local v2    # "fallbackLocale":Ljava/lang/String;
	// 218    .end local v4    # "stable":Landroid/icu/impl/ICUResourceBundle;
	// 219    .end local v5    # "table":Landroid/icu/impl/ICUResourceBundle;
	// 220    .end local p0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
label_cond_73:
	cVar0 = defaultValue;
	goto label_goto_1f;
	// 227    .line 90
label_catch_75:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	goto label_goto_17;

}
// .method public static getTableString(Ljava/lang/String;Landroid/icu/util/ULocale;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceTableAccess::getTableString(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> itemName,std::shared_ptr<java::lang::String> defaultValue)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "tableName"    # Ljava/lang/String;
	//    .param p3, "itemName"    # Ljava/lang/String;
	//    .param p4, "defaultValue"    # Ljava/lang/String;
	bundle = android::icu::util::UResourceBundle::getBundleInstance(path, locale->getBaseName());
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	return android::icu::impl::ICUResourceTableAccess::getTableString(bundle, tableName, 0x0, itemName, defaultValue);

}


