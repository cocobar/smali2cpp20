#ifndef __android_icu_impl_locale_LanguageTag__
#define __android_icu_impl_locale_LanguageTag__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\LanguageTag.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.AsciiUtil_S_CaseInsensitiveKey.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "android.icu.impl.locale.LocaleExtensions.h"
#include "android.icu.impl.locale.ParseStatus.h"
#include "android.icu.impl.locale.StringTokenIterator.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Map.h"

namespace android::icu::impl::locale{
class LanguageTag : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::Map<android::icu::impl::locale::AsciiUtil_S_CaseInsensitiveKey,std::vector<java::lang::String>>> GRANDFATHERED;
	static bool JDKIMPL;
	std::shared_ptr<java::util::List<java::lang::String>> _extensions;
	std::shared_ptr<java::util::List<java::lang::String>> _extlangs;
	std::shared_ptr<java::lang::String> _language;
	std::shared_ptr<java::lang::String> _privateuse;
	std::shared_ptr<java::lang::String> _region;
	std::shared_ptr<java::lang::String> _script;
	std::shared_ptr<java::util::List<java::lang::String>> _variants;
	LanguageTag();
	bool virtual parseExtensions(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts);
	bool virtual parseExtlangs(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts);
	bool virtual parseLanguage(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts);
	bool virtual parsePrivateuse(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts);
	bool virtual parseRegion(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts);
	bool virtual parseScript(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts);
	bool virtual parseVariants(std::shared_ptr<android::icu::impl::locale::StringTokenIterator> itr,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<java::lang::String> PRIVATEUSE;
	static std::shared_ptr<java::lang::String> PRIVUSE_VARIANT_PREFIX;
	static std::shared_ptr<java::lang::String> SEP;
	static std::shared_ptr<java::lang::String> UNDETERMINED;
	static void static_cinit();
	static std::shared_ptr<java::lang::String> canonicalizeExtension(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> canonicalizeExtensionSingleton(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> canonicalizeExtensionSubtag(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> canonicalizeExtlang(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> canonicalizeLanguage(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> canonicalizePrivateuse(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> canonicalizePrivateuseSubtag(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> canonicalizeRegion(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> canonicalizeScript(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> canonicalizeVariant(std::shared_ptr<java::lang::String> s);
	static bool isExtensionSingleton(std::shared_ptr<java::lang::String> s);
	static bool isExtensionSingletonChar(char c);
	static bool isExtensionSubtag(std::shared_ptr<java::lang::String> s);
	static bool isExtlang(std::shared_ptr<java::lang::String> s);
	static bool isLanguage(std::shared_ptr<java::lang::String> s);
	static bool isPrivateusePrefix(std::shared_ptr<java::lang::String> s);
	static bool isPrivateusePrefixChar(char c);
	static bool isPrivateuseSubtag(std::shared_ptr<java::lang::String> s);
	static bool isRegion(std::shared_ptr<java::lang::String> s);
	static bool isScript(std::shared_ptr<java::lang::String> s);
	static bool isVariant(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<android::icu::impl::locale::LanguageTag> parse(std::shared_ptr<java::lang::String> languageTag,std::shared_ptr<android::icu::impl::locale::ParseStatus> sts);
	static std::shared_ptr<android::icu::impl::locale::LanguageTag> parseLocale(std::shared_ptr<android::icu::impl::locale::BaseLocale> baseLocale,std::shared_ptr<android::icu::impl::locale::LocaleExtensions> localeExtensions);
	std::shared_ptr<java::util::List<java::lang::String>> virtual getExtensions();
	std::shared_ptr<java::util::List<java::lang::String>> virtual getExtlangs();
	std::shared_ptr<java::lang::String> virtual getLanguage();
	std::shared_ptr<java::lang::String> virtual getPrivateuse();
	std::shared_ptr<java::lang::String> virtual getRegion();
	std::shared_ptr<java::lang::String> virtual getScript();
	std::shared_ptr<java::util::List<java::lang::String>> virtual getVariants();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::locale::LanguageTag::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LanguageTag(){
	}

}; // class LanguageTag
}; // namespace android::icu::impl::locale

#endif //__android_icu_impl_locale_LanguageTag__

