#ifndef __android_icu_impl_locale_KeyTypeData_S_Type__
#define __android_icu_impl_locale_KeyTypeData_S_Type__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$Type.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class KeyTypeData_S_Type : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> bcpId;
	std::shared_ptr<java::lang::String> legacyId;
	KeyTypeData_S_Type(std::shared_ptr<java::lang::String> legacyId,std::shared_ptr<java::lang::String> bcpId);
public:
	virtual ~KeyTypeData_S_Type(){
	}

}; // class KeyTypeData_S_Type
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_KeyTypeData_S_Type__

