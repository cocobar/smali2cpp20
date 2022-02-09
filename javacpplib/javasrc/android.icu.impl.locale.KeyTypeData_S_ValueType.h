#ifndef __android_icu_impl_locale_KeyTypeData_S_ValueType__
#define __android_icu_impl_locale_KeyTypeData_S_ValueType__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$ValueType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl::locale{
class KeyTypeData_S_ValueType : public java::lang::Enum<android::icu::impl::locale::KeyTypeData_S_ValueType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::locale::KeyTypeData_S_ValueType>> _S_VALUES;
	KeyTypeData_S_ValueType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> any;
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> incremental;
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> multiple;
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> single;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::KeyTypeData_S_ValueType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~KeyTypeData_S_ValueType(){
	}

}; // class KeyTypeData_S_ValueType
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_KeyTypeData_S_ValueType__

