#ifndef __android_icu_impl_locale_LocaleExtensions__
#define __android_icu_impl_locale_LocaleExtensions__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LocaleExtensions.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.Extension.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.SortedMap.h"

namespace android::icu::impl::locale{
class LocaleExtensions : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::SortedMap<java::lang::Character,android::icu::impl::locale::Extension>> EMPTY_MAP;
	std::shared_ptr<java::lang::String> _id;
	std::shared_ptr<java::util::SortedMap<java::lang::Character,android::icu::impl::locale::Extension>> _map;
	LocaleExtensions();
	static std::shared_ptr<java::lang::String> toID(std::shared_ptr<java::util::SortedMap<java::lang::Character,android::icu::impl::locale::Extension>> map);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<android::icu::impl::locale::LocaleExtensions> CALENDAR_JAPANESE;
	static std::shared_ptr<android::icu::impl::locale::LocaleExtensions> EMPTY_EXTENSIONS;
	static std::shared_ptr<android::icu::impl::locale::LocaleExtensions> NUMBER_THAI;
	static void static_cinit();
	LocaleExtensions(std::shared_ptr<java::util::Map<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar,java::lang::String>> extensions,std::shared_ptr<java::util::Set<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString>> uattributes,std::shared_ptr<java::util::Map<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString,java::lang::String>> ukeywords);
	static bool isValidKey(char c);
	static bool isValidUnicodeLocaleKey(std::shared_ptr<java::lang::String> ukey);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<android::icu::impl::locale::Extension> virtual getExtension(std::shared_ptr<java::lang::Character> key);
	std::shared_ptr<java::lang::String> virtual getExtensionValue(std::shared_ptr<java::lang::Character> key);
	std::shared_ptr<java::lang::String> virtual getID();
	std::shared_ptr<java::util::Set<java::lang::Character>> virtual getKeys();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getUnicodeLocaleAttributes();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getUnicodeLocaleKeys();
	std::shared_ptr<java::lang::String> virtual getUnicodeLocaleType(std::shared_ptr<java::lang::String> unicodeLocaleKey);
	int virtual hashCode();
	bool virtual isEmpty();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::LocaleExtensions::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleExtensions(){
	}

}; // class LocaleExtensions
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_LocaleExtensions__

