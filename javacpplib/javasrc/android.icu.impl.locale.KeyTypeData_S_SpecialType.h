#ifndef __android_icu_impl_locale_KeyTypeData_S_SpecialType__
#define __android_icu_impl_locale_KeyTypeData_S_SpecialType__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$SpecialType.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialTypeHandler.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class KeyTypeData_S_SpecialType : public java::lang::Enum<android::icu::impl::locale::KeyTypeData_S_SpecialType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::locale::KeyTypeData_S_SpecialType>> _S_VALUES;
	KeyTypeData_S_SpecialType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler> handler);
public:
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> CODEPOINTS;
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> PRIVATE_USE;
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> REORDER_CODE;
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> RG_KEY_VALUE;
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> SUBDIVISION_CODE;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler> handler;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::KeyTypeData_S_SpecialType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~KeyTypeData_S_SpecialType(){
	}

}; // class KeyTypeData_S_SpecialType
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_KeyTypeData_S_SpecialType__

