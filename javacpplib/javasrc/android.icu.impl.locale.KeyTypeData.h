#ifndef __android_icu_impl_locale_KeyTypeData__
#define __android_icu_impl_locale_KeyTypeData__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_KeyData.h"
#include "android.icu.impl.locale.KeyTypeData_S_ValueType.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::impl::locale{
class KeyTypeData : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_impl_locale_KeyTypeData_S_KeyInfoTypeSwitchesValues;
	static std::shared_ptr<int[]> _android_icu_impl_locale_KeyTypeData_S_TypeInfoTypeSwitchesValues;
	static std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<java::lang::String>>> BCP47_KEYS;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::locale::KeyTypeData_S_KeyData>> KEYMAP;
	static std::shared_ptr<std::vector<std::vector<java::lang::Object>>> KEY_DATA;
	static int _getandroid_icu_impl_locale_KeyTypeData_S_KeyInfoTypeSwitchesValues();
	static int _getandroid_icu_impl_locale_KeyTypeData_S_TypeInfoTypeSwitchesValues();
	static void getKeyInfo(std::shared_ptr<android::icu::util::UResourceBundle> keyInfoRes);
	static void getTypeInfo(std::shared_ptr<android::icu::util::UResourceBundle> typeInfoRes);
	static void initFromResourceBundle();
	static void initFromTables();
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<java::util::Set<java::lang::String>> DEPRECATED_KEYS;
	static std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<java::lang::String>>> DEPRECATED_KEY_TYPES;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::locale::KeyTypeData_S_ValueType>> VALUE_TYPES;
	static void static_cinit();
	KeyTypeData();
	static std::shared_ptr<java::util::Set<java::lang::String>> getBcp47KeyTypes(std::shared_ptr<java::lang::String> key);
	static std::shared_ptr<java::util::Set<java::lang::String>> getBcp47Keys();
	static std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ValueType> getValueType(std::shared_ptr<java::lang::String> key);
	static bool isDeprecated(std::shared_ptr<java::lang::String> key);
	static bool isDeprecated(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type);
	static std::shared_ptr<java::lang::String> toBcpKey(std::shared_ptr<java::lang::String> key);
	static std::shared_ptr<java::lang::String> toBcpType(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isKnownKey,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isSpecialType);
	static std::shared_ptr<java::lang::String> toLegacyKey(std::shared_ptr<java::lang::String> key);
	static std::shared_ptr<java::lang::String> toLegacyType(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isKnownKey,std::shared_ptr<android::icu::util::Output<java::lang::Boolean>> isSpecialType);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::KeyTypeData::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~KeyTypeData(){
	}

}; // class KeyTypeData
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_KeyTypeData__

