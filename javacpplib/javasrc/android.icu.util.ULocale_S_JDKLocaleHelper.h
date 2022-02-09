#ifndef __android_icu_util_ULocale_S_JDKLocaleHelper__
#define __android_icu_util_ULocale_S_JDKLocaleHelper__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$JDKLocaleHelper.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Method.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class ULocale_S_JDKLocaleHelper : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_util_ULocale_S_CategorySwitchesValues;
	static std::shared_ptr<std::vector<std::vector<java::lang::String>>> JAVA6_MAPDATA;
	static std::shared_ptr<java::lang::Object> eDISPLAY;
	static std::shared_ptr<java::lang::Object> eFORMAT;
	static bool hasLocaleCategories;
	static bool hasScriptsAndUnicodeExtensions;
	static std::shared_ptr<java::lang::reflect::Method> mForLanguageTag;
	static std::shared_ptr<java::lang::reflect::Method> mGetDefault;
	static std::shared_ptr<java::lang::reflect::Method> mGetExtension;
	static std::shared_ptr<java::lang::reflect::Method> mGetExtensionKeys;
	static std::shared_ptr<java::lang::reflect::Method> mGetScript;
	static std::shared_ptr<java::lang::reflect::Method> mGetUnicodeLocaleAttributes;
	static std::shared_ptr<java::lang::reflect::Method> mGetUnicodeLocaleKeys;
	static std::shared_ptr<java::lang::reflect::Method> mGetUnicodeLocaleType;
	static std::shared_ptr<java::lang::reflect::Method> mSetDefault;
	static int _getandroid_icu_util_ULocale_S_CategorySwitchesValues();
	ULocale_S_JDKLocaleHelper();
	static std::shared_ptr<java::util::Locale> toLocale6(std::shared_ptr<android::icu::util::ULocale> uloc);
	static std::shared_ptr<java::util::Locale> toLocale7(std::shared_ptr<android::icu::util::ULocale> uloc);
	static std::shared_ptr<android::icu::util::ULocale> toULocale6(std::shared_ptr<java::util::Locale> loc);
	static std::shared_ptr<android::icu::util::ULocale> toULocale7(std::shared_ptr<java::util::Locale> loc);
public:
	static void static_cinit();
	static std::shared_ptr<java::util::Locale> getDefault(std::shared_ptr<android::icu::util::ULocale_S_Category> category);
	static std::shared_ptr<java::lang::String> getSystemProperty(std::shared_ptr<java::lang::String> key);
	static bool hasLocaleCategories();
	static bool isOriginalDefaultLocale(std::shared_ptr<java::util::Locale> loc);
	static void setDefault(std::shared_ptr<android::icu::util::ULocale_S_Category> category,std::shared_ptr<java::util::Locale> newLocale);
	static std::shared_ptr<java::util::Locale> toLocale(std::shared_ptr<android::icu::util::ULocale> uloc);
	static std::shared_ptr<android::icu::util::ULocale> toULocale(std::shared_ptr<java::util::Locale> loc);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::ULocale_S_JDKLocaleHelper::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ULocale_S_JDKLocaleHelper(){
	}

}; // class ULocale_S_JDKLocaleHelper
}; // namespace android::icu::util

#endif //__android_icu_util_ULocale_S_JDKLocaleHelper__

