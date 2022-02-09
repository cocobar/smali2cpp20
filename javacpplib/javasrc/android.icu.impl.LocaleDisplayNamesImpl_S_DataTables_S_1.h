#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_DataTables_S_1__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_DataTables_S_1__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$DataTables$1.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTables.h"
#include "android.icu.util.ULocale.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_DataTables_S_1 : public android::icu::impl::LocaleDisplayNamesImpl_S_DataTables {
protected:
private:
public:
	LocaleDisplayNamesImpl_S_DataTables_S_1();
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTable> virtual get(std::shared_ptr<android::icu::util::ULocale> locale,bool nullIfNotFound);
public:
	virtual ~LocaleDisplayNamesImpl_S_DataTables_S_1(){
	}

}; // class LocaleDisplayNamesImpl_S_DataTables_S_1
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_DataTables_S_1__

