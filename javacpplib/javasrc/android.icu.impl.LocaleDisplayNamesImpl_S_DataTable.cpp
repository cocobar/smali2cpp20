// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$DataTable.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

// .method constructor <init>(Z)V
android::icu::impl::LocaleDisplayNamesImpl_S_DataTable::LocaleDisplayNamesImpl_S_DataTable(bool nullIfNotFound)
{
	
	//    .param p1, "nullIfNotFound"    # Z
	// 028    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->nullIfNotFound = nullIfNotFound;
	return;

}
// .method get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl_S_DataTable::get(std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> code)
{
	
	//    .param p1, "tableName"    # Ljava/lang/String;
	//    .param p2, "code"    # Ljava/lang/String;
	return this->get(tableName, 0x0, code);

}
// .method get(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl_S_DataTable::get(std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> subTableName,std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "tableName"    # Ljava/lang/String;
	//    .param p2, "subTableName"    # Ljava/lang/String;
	//    .param p3, "code"    # Ljava/lang/String;
	if ( !(this->nullIfNotFound) )  
		goto label_cond_5;
	cVar0 = 0x0;
	//    .end local p3    # "code":Ljava/lang/String;
label_cond_5:
	return cVar0;

}
// .method getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::LocaleDisplayNamesImpl_S_DataTable::getLocale()
{
	
	return android::icu::util::ULocale::ROOT;

}


