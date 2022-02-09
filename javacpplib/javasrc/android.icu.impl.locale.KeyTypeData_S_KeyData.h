#ifndef __android_icu_impl_locale_KeyTypeData_S_KeyData__
#define __android_icu_impl_locale_KeyTypeData_S_KeyData__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$KeyData.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialType.h"
#include "android.icu.impl.locale.KeyTypeData_S_Type.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.EnumSet.h"
#include "java.util.Map.h"

namespace android::icu::impl::locale{
class KeyTypeData_S_KeyData : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> bcpId;
	std::shared_ptr<java::lang::String> legacyId;
	std::shared_ptr<java::util::EnumSet<android::icu::impl::locale::KeyTypeData_S_SpecialType>> specialTypes;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::locale::KeyTypeData_S_Type>> typeMap;
	KeyTypeData_S_KeyData(std::shared_ptr<java::lang::String> legacyId,std::shared_ptr<java::lang::String> bcpId,std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::locale::KeyTypeData_S_Type>> typeMap,std::shared_ptr<java::util::EnumSet<android::icu::impl::locale::KeyTypeData_S_SpecialType>> specialTypes);
public:
	virtual ~KeyTypeData_S_KeyData(){
	}

}; // class KeyTypeData_S_KeyData
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_KeyTypeData_S_KeyData__

