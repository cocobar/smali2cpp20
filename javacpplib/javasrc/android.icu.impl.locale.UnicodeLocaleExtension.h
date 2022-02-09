#ifndef __android_icu_impl_locale_UnicodeLocaleExtension__
#define __android_icu_impl_locale_UnicodeLocaleExtension__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\UnicodeLocaleExtension.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.Extension.h"
#include "java.lang.String.h"
#include "java.util.Set.h"
#include "java.util.SortedMap.h"
#include "java.util.SortedSet.h"

namespace android::icu::impl::locale{
class UnicodeLocaleExtension : public android::icu::impl::locale::Extension {
protected:
private:
	static std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> EMPTY_SORTED_MAP;
	static std::shared_ptr<java::util::SortedSet<java::lang::String>> EMPTY_SORTED_SET;
	std::shared_ptr<java::util::SortedSet<java::lang::String>> _attributes;
	std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> _keywords;
	UnicodeLocaleExtension();
public:
	static std::shared_ptr<android::icu::impl::locale::UnicodeLocaleExtension> CA_JAPANESE;
	static std::shared_ptr<android::icu::impl::locale::UnicodeLocaleExtension> NU_THAI;
	static char SINGLETON;
	static void static_cinit();
	UnicodeLocaleExtension(std::shared_ptr<java::util::SortedSet<java::lang::String>> attributes,std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> keywords);
	static bool isAttribute(std::shared_ptr<java::lang::String> s);
	static bool isKey(std::shared_ptr<java::lang::String> s);
	static bool isSingletonChar(char c);
	static bool isType(std::shared_ptr<java::lang::String> s);
	static bool isTypeSubtag(std::shared_ptr<java::lang::String> s);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getUnicodeLocaleAttributes();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getUnicodeLocaleKeys();
	std::shared_ptr<java::lang::String> virtual getUnicodeLocaleType(std::shared_ptr<java::lang::String> unicodeLocaleKey);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::UnicodeLocaleExtension::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeLocaleExtension(){
	}

}; // class UnicodeLocaleExtension
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_UnicodeLocaleExtension__

