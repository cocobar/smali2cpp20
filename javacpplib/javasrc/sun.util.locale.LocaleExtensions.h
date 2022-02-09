#ifndef __sun_util_locale_LocaleExtensions__
#define __sun_util_locale_LocaleExtensions__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\LocaleExtensions.smali
#include "java2ctype.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.SortedMap.h"
#include "sun.util.locale.Extension.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"

namespace sun::util::locale{
class LocaleExtensions : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Map<java::lang::Character,sun::util::locale::Extension>> extensionMap;
	std::shared_ptr<java::lang::String> id;
	LocaleExtensions(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::lang::Character> key,std::shared_ptr<sun::util::locale::Extension> value);
	static std::shared_ptr<java::lang::String> toID(std::shared_ptr<java::util::SortedMap<java::lang::Character,sun::util::locale::Extension>> map);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<sun::util::locale::LocaleExtensions> CALENDAR_JAPANESE;
	static std::shared_ptr<sun::util::locale::LocaleExtensions> NUMBER_THAI;
	static void static_cinit();
	LocaleExtensions(std::shared_ptr<java::util::Map<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar,java::lang::String>> extensions,std::shared_ptr<java::util::Set<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString>> uattributes,std::shared_ptr<java::util::Map<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString,java::lang::String>> ukeywords);
	static bool isValidKey(char c);
	static bool isValidUnicodeLocaleKey(std::shared_ptr<java::lang::String> ukey);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<sun::util::locale::Extension> virtual getExtension(std::shared_ptr<java::lang::Character> key);
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
			sun::util::locale::LocaleExtensions::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleExtensions(){
	}

}; // class LocaleExtensions
}; // namespace sun::util::locale

#endif //__sun_util_locale_LocaleExtensions__

