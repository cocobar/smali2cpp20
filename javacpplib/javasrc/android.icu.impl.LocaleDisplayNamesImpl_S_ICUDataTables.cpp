// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$ICUDataTables.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_ICUDataTable.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_ICUDataTables.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method protected constructor <init>(Ljava/lang/String;)V
android::icu::impl::LocaleDisplayNamesImpl_S_ICUDataTables::LocaleDisplayNamesImpl_S_ICUDataTables(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p1, "path"    # Ljava/lang/String;
	// 028    invoke-direct {p0}, Landroid/icu/impl/LocaleDisplayNamesImpl$DataTables;-><init>()V
	this->path = path;
	return;

}
// .method public get(Landroid/icu/util/ULocale;Z)Landroid/icu/impl/LocaleDisplayNamesImpl$DataTable;
std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTable> android::icu::impl::LocaleDisplayNamesImpl_S_ICUDataTables::get(std::shared_ptr<android::icu::util::ULocale> locale,bool nullIfNotFound)
{
	
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_ICUDataTable> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "nullIfNotFound"    # Z
	cVar0 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_ICUDataTable>(this->path, locale, nullIfNotFound);
	return cVar0;

}


