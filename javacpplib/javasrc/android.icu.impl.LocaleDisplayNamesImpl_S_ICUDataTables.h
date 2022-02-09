#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_ICUDataTables__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_ICUDataTables__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$ICUDataTables.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTables.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_ICUDataTables : public android::icu::impl::LocaleDisplayNamesImpl_S_DataTables {
protected:
	LocaleDisplayNamesImpl_S_ICUDataTables(std::shared_ptr<java::lang::String> path);
private:
	std::shared_ptr<java::lang::String> path;
public:
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTable> virtual get(std::shared_ptr<android::icu::util::ULocale> locale,bool nullIfNotFound);
public:
	virtual ~LocaleDisplayNamesImpl_S_ICUDataTables(){
	}

}; // class LocaleDisplayNamesImpl_S_ICUDataTables
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_ICUDataTables__

