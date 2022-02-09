#ifndef __android_icu_impl_LocaleDisplayNamesImpl_S_DataTable__
#define __android_icu_impl_LocaleDisplayNamesImpl_S_DataTable__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$DataTable.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class LocaleDisplayNamesImpl_S_DataTable : public java::lang::Object {
protected:
private:
public:
	bool nullIfNotFound;
	LocaleDisplayNamesImpl_S_DataTable(bool nullIfNotFound);
	std::shared_ptr<java::lang::String> virtual get(std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> code);
	std::shared_ptr<java::lang::String> virtual get(std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> subTableName,std::shared_ptr<java::lang::String> cVar0);
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale();
public:
	virtual ~LocaleDisplayNamesImpl_S_DataTable(){
	}

}; // class LocaleDisplayNamesImpl_S_DataTable
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleDisplayNamesImpl_S_DataTable__

