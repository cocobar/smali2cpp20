#ifndef __android_icu_impl_ICUResourceTableAccess__
#define __android_icu_impl_ICUResourceTableAccess__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceTableAccess.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUResourceTableAccess : public java::lang::Object {
protected:
private:
public:
	ICUResourceTableAccess();
	static std::shared_ptr<java::lang::String> getTableString(std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle,std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> subtableName,std::shared_ptr<java::lang::String> item,std::shared_ptr<java::lang::String> defaultValue);
	static std::shared_ptr<java::lang::String> getTableString(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> tableName,std::shared_ptr<java::lang::String> itemName,std::shared_ptr<java::lang::String> defaultValue);
public:
	virtual ~ICUResourceTableAccess(){
	}

}; // class ICUResourceTableAccess
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceTableAccess__

