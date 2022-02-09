#ifndef __android_icu_impl_locale_KeyTypeData_S_PrivateUseKeyValueTypeHandler__
#define __android_icu_impl_locale_KeyTypeData_S_PrivateUseKeyValueTypeHandler__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$PrivateUseKeyValueTypeHandler.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialTypeHandler.h"
#include "java.lang.String.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::impl::locale{
class KeyTypeData_S_PrivateUseKeyValueTypeHandler : public android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler {
protected:
private:
	static std::shared_ptr<java::util::regex::Pattern> pat;
	KeyTypeData_S_PrivateUseKeyValueTypeHandler();
public:
	static void static_cinit();
	KeyTypeData_S_PrivateUseKeyValueTypeHandler(std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler> _this0);
	bool virtual isWellFormed(std::shared_ptr<java::lang::String> value);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~KeyTypeData_S_PrivateUseKeyValueTypeHandler(){
	}

}; // class KeyTypeData_S_PrivateUseKeyValueTypeHandler
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_KeyTypeData_S_PrivateUseKeyValueTypeHandler__

