#ifndef __sun_util_locale_InternalLocaleBuilder__
#define __sun_util_locale_InternalLocaleBuilder__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\InternalLocaleBuilder.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "sun.util.locale.BaseLocale.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "sun.util.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"
#include "sun.util.locale.LanguageTag.h"
#include "sun.util.locale.LocaleExtensions.h"

namespace sun::util::locale{
class InternalLocaleBuilder : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> PRIVATEUSE_KEY;
	std::shared_ptr<java::util::Map<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveChar,java::lang::String>> extensions;
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::util::Set<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString>> uattributes;
	std::shared_ptr<java::util::Map<sun::util::locale::InternalLocaleBuilder_S_CaseInsensitiveString,java::lang::String>> ukeywords;
	std::shared_ptr<java::lang::String> variant;
	int virtual checkVariants(std::shared_ptr<java::lang::String> variants,std::shared_ptr<java::lang::String> sep);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setExtensions(std::shared_ptr<java::util::List<java::lang::String>> bcpExtensions,std::shared_ptr<java::lang::String> privateuse);
	void virtual setUnicodeLocaleExtension(std::shared_ptr<java::lang::String> subtags);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	InternalLocaleBuilder();
	static std::shared_ptr<java::lang::String> removePrivateuseVariant(std::shared_ptr<java::lang::String> privuseVal);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual addUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual clear();
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual clearExtensions();
	std::shared_ptr<sun::util::locale::BaseLocale> virtual getBaseLocale();
	std::shared_ptr<sun::util::locale::LocaleExtensions> virtual getLocaleExtensions();
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual removeUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setExtension(char singleton,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setExtensions(std::shared_ptr<java::lang::String> subtags);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setLanguage(std::shared_ptr<java::lang::String> language);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setLanguageTag(std::shared_ptr<sun::util::locale::LanguageTag> langtag);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setLocale(std::shared_ptr<sun::util::locale::BaseLocale> base,std::shared_ptr<sun::util::locale::LocaleExtensions> localeExtensions);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setRegion(std::shared_ptr<java::lang::String> region);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setScript(std::shared_ptr<java::lang::String> script);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setUnicodeLocaleKeyword(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type);
	std::shared_ptr<sun::util::locale::InternalLocaleBuilder> virtual setVariant(std::shared_ptr<java::lang::String> variant);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::locale::InternalLocaleBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~InternalLocaleBuilder(){
	}

}; // class InternalLocaleBuilder
}; // namespace sun::util::locale

#endif //__sun_util_locale_InternalLocaleBuilder__

