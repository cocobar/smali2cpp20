#ifndef __android_icu_impl_locale_KeyTypeData_S_KeyInfoType__
#define __android_icu_impl_locale_KeyTypeData_S_KeyInfoType__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$KeyInfoType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class KeyTypeData_S_KeyInfoType : public java::lang::Enum<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::locale::KeyTypeData_S_KeyInfoType>> _S_VALUES;
	KeyTypeData_S_KeyInfoType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> deprecated;
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> valueType;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_KeyInfoType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::KeyTypeData_S_KeyInfoType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~KeyTypeData_S_KeyInfoType(){
	}

}; // class KeyTypeData_S_KeyInfoType
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_KeyTypeData_S_KeyInfoType__

