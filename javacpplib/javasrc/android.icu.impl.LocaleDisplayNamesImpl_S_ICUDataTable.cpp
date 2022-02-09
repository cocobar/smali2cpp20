// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$ICUDataTable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUResourceTableAccess.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_ICUDataTable.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;Landroid/icu/util/ULocale;Z)V
android::icu::impl::LocaleDisplayNamesImpl_S_ICUDataTable::LocaleDisplayNamesImpl_S_ICUDataTable(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::util::ULocale> locale,bool nullIfNotFound)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar0;
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "nullIfNotFound"    # Z
	android::icu::impl::LocaleDisplayNamesImpl_S_DataTable::(nullIfNotFound);
	cVar0 = android::icu::util::UResourceBundle::getBundleInstance(path, locale->getBaseName());
	cVar0->checkCast("android::icu::impl::ICUResourceBundle");
	this->bundle = cVar0;
	return;

}
// .method public get(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl_S_ICUDataTable::get(std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> subTableName,std::shared_ptr<java::lang::String> code)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "tableName"    # Ljava/lang/String;
	//    .param p2, "subTableName"    # Ljava/lang/String;
	//    .param p3, "code"    # Ljava/lang/String;
	if ( !(this->nullIfNotFound) )  
		goto label_cond_c;
	cVar0 = 0x0;
label_goto_7:
	return android::icu::impl::ICUResourceTableAccess::getTableString(this->bundle, tableName, subTableName, code, cVar0);
label_cond_c:
	cVar0 = code;
	goto label_goto_7;

}
// .method public getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::LocaleDisplayNamesImpl_S_ICUDataTable::getLocale()
{
	
	return this->bundle->getULocale();

}


