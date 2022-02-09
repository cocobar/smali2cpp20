#ifndef __android_icu_impl_locale_KeyTypeData_S_SpecialTypeHandler__
#define __android_icu_impl_locale_KeyTypeData_S_SpecialTypeHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$SpecialTypeHandler.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class KeyTypeData_S_SpecialTypeHandler : public java::lang::Object {
protected:
private:
	KeyTypeData_S_SpecialTypeHandler();
public:
	KeyTypeData_S_SpecialTypeHandler(std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler> _this0);
	std::shared_ptr<java::lang::String> virtual canonicalize(std::shared_ptr<java::lang::String> value);
	bool isWellFormed(std::shared_ptr<java::lang::String> var0) = 0;
public:
	virtual ~KeyTypeData_S_SpecialTypeHandler(){
	}

}; // class KeyTypeData_S_SpecialTypeHandler
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_KeyTypeData_S_SpecialTypeHandler__

