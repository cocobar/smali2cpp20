// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$DataTables$1.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTables_S_1.h"
#include "android.icu.util.ULocale.h"

// .method constructor <init>()V
android::icu::impl::LocaleDisplayNamesImpl_S_DataTables_S_1::LocaleDisplayNamesImpl_S_DataTables_S_1()
{
	
	// 023    invoke-direct {p0}, Landroid/icu/impl/LocaleDisplayNamesImpl$DataTables;-><init>()V
	return;

}
// .method public get(Landroid/icu/util/ULocale;Z)Landroid/icu/impl/LocaleDisplayNamesImpl$DataTable;
std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTable> android::icu::impl::LocaleDisplayNamesImpl_S_DataTables_S_1::get(std::shared_ptr<android::icu::util::ULocale> locale,bool nullIfNotFound)
{
	
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTable> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "nullIfNotFound"    # Z
	cVar0 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_DataTable>(nullIfNotFound);
	return cVar0;

}


