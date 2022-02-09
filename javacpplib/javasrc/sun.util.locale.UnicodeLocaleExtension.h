#ifndef __sun_util_locale_UnicodeLocaleExtension__
#define __sun_util_locale_UnicodeLocaleExtension__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\UnicodeLocaleExtension.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.SortedMap.h"
#include "java.util.SortedSet.h"
#include "sun.util.locale.Extension.h"

namespace sun::util::locale{
class UnicodeLocaleExtension : public sun::util::locale::Extension {
protected:
private:
	std::shared_ptr<java::util::Set<java::lang::String>> attributes;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywords;
	UnicodeLocaleExtension(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> value);
public:
	static std::shared_ptr<sun::util::locale::UnicodeLocaleExtension> CA_JAPANESE;
	static std::shared_ptr<sun::util::locale::UnicodeLocaleExtension> NU_THAI;
	static char SINGLETON;
	static void static_cinit();
	UnicodeLocaleExtension(std::shared_ptr<java::util::SortedSet<java::lang::String>> attributes,std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> keywords);
	static bool isAttribute(std::shared_ptr<java::lang::String> s);
	static bool isKey(std::shared_ptr<java::lang::String> s);
	static bool isSingletonChar(char c);
	static bool isTypeSubtag(std::shared_ptr<java::lang::String> s);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getUnicodeLocaleAttributes();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getUnicodeLocaleKeys();
	std::shared_ptr<java::lang::String> virtual getUnicodeLocaleType(std::shared_ptr<java::lang::String> unicodeLocaleKey);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::locale::UnicodeLocaleExtension::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeLocaleExtension(){
	}

}; // class UnicodeLocaleExtension
}; // namespace sun::util::locale

#endif //__sun_util_locale_UnicodeLocaleExtension__

