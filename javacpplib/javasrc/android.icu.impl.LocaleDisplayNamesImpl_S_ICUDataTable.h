#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_ICUDataTable__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_ICUDataTable__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$ICUDataTable.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_ICUDataTable : public android::icu::impl::LocaleDisplayNamesImpl_S_DataTable {
protected:
private:
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
public:
	LocaleDisplayNamesImpl_S_ICUDataTable(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::util::ULocale> locale,bool nullIfNotFound);
	std::shared_ptr<java::lang::String> virtual get(std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> subTableName,std::shared_ptr<java::lang::String> code);
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale();
public:
	virtual ~LocaleDisplayNamesImpl_S_ICUDataTable(){
	}

}; // class LocaleDisplayNamesImpl_S_ICUDataTable
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_ICUDataTable__

