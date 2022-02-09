#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_DataTables__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_DataTables__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$DataTables.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_DataTables : public java::lang::Object {
protected:
private:
public:
	LocaleDisplayNamesImpl_S_DataTables();
	static std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTables> load(std::shared_ptr<java::lang::String> className);
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTable> get(std::shared_ptr<android::icu::util::ULocale> var0,bool var1) = 0;
public:
	virtual ~LocaleDisplayNamesImpl_S_DataTables(){
	}

}; // class LocaleDisplayNamesImpl_S_DataTables
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_DataTables__

