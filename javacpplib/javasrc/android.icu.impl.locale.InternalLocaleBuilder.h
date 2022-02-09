#ifndef __android_icu_impl_locale_InternalLocaleBuilder__
#define __android_icu_impl_locale_InternalLocaleBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\InternalLocaleBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveChar.h"
#include "android.icu.impl.locale.InternalLocaleBuilder_S_CaseInsensitiveString.h"
#include "android.icu.impl.locale.LanguageTag.h"
#include "android.icu.impl.locale.LocaleExtensions.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.List.h"

namespace android::icu::impl::locale{
class InternalLocaleBuilder : public java::lang::Object {
protected:
private:
	static bool JDKIMPL;
	static std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar> PRIVUSE_KEY;
	std::shared_ptr<java::util::HashMap<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveChar,java::lang::String>> _extensions;
	std::shared_ptr<java::lang::String> _language;
	std::shared_ptr<java::lang::String> _region;
	std::shared_ptr<java::lang::String> _script;
	std::shared_ptr<java::util::HashSet<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString>> _uattributes;
	std::shared_ptr<java::util::HashMap<android::icu::impl::locale::InternalLocaleBuilder_S_CaseInsensitiveString,java::lang::String>> _ukeywords;
	std::shared_ptr<java::lang::String> _variant;
	int virtual checkVariants(std::shared_ptr<java::lang::String> variants,std::shared_ptr<java::lang::String> sep);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setExtensions(std::shared_ptr<java::util::List<java::lang::String>> bcpExtensions,std::shared_ptr<java::lang::String> privateuse);
	void virtual setUnicodeLocaleExtension(std::shared_ptr<java::lang::String> subtags);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	InternalLocaleBuilder();
	static std::shared_ptr<java::lang::String> removePrivateuseVariant(std::shared_ptr<java::lang::String> privuseVal);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual addUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual clear();
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual clearExtensions();
	std::shared_ptr<android::icu::impl::locale::BaseLocale> virtual getBaseLocale();
	std::shared_ptr<android::icu::impl::locale::LocaleExtensions> virtual getLocaleExtensions();
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual removeUnicodeLocaleAttribute(std::shared_ptr<java::lang::String> attribute);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setExtension(char singleton,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setExtensions(std::shared_ptr<java::lang::String> subtags);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setLanguage(std::shared_ptr<java::lang::String> language);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setLanguageTag(std::shared_ptr<android::icu::impl::locale::LanguageTag> langtag);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setLocale(std::shared_ptr<android::icu::impl::locale::BaseLocale> base,std::shared_ptr<android::icu::impl::locale::LocaleExtensions> extensions);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setRegion(std::shared_ptr<java::lang::String> region);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setScript(std::shared_ptr<java::lang::String> script);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setUnicodeLocaleKeyword(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> type);
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> virtual setVariant(std::shared_ptr<java::lang::String> variant);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::InternalLocaleBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~InternalLocaleBuilder(){
	}

}; // class InternalLocaleBuilder
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_InternalLocaleBuilder__

