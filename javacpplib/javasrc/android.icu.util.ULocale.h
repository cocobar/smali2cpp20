#ifndef __android_icu_util_ULocale__
#define __android_icu_util_ULocale__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "android.icu.impl.locale.LocaleExtensions.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Minimize.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "java.io.Serializable.h"
#include "java.lang.Character.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Void.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

namespace android::icu::util{
class ULocale : public java::io::Serializable, public java::lang::Comparable<android::icu::util::ULocale> {
protected:
private:
	static std::shared_ptr<android::icu::impl::SoftCache<java::util::Locale,android::icu::util::ULocale,java::lang::Void>> CACHE;
	static std::shared_ptr<std::vector<std::vector<java::lang::String>>> CANONICALIZE_MAP;
	static std::shared_ptr<java::util::Locale> EMPTY_LOCALE;
	static std::shared_ptr<java::lang::String> EMPTY_STRING;
	static std::shared_ptr<java::lang::String> LANG_DIR_STRING;
	static std::shared_ptr<java::lang::String> LOCALE_ATTRIBUTE_KEY;
	static std::shared_ptr<java::lang::String> UNDEFINED_LANGUAGE;
	static std::shared_ptr<java::lang::String> UNDEFINED_REGION;
	static std::shared_ptr<java::lang::String> UNDEFINED_SCRIPT;
	static char UNDERSCORE;
	static std::shared_ptr<std::vector<java::util::Locale>> defaultCategoryLocales;
	static std::shared_ptr<std::vector<android::icu::util::ULocale>> defaultCategoryULocales;
	static std::shared_ptr<java::util::Locale> defaultLocale;
	static std::shared_ptr<android::icu::util::ULocale> defaultULocale;
	static std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,java::lang::String,java::lang::Void>> nameCache;
	static long long serialVersionUID;
	static std::shared_ptr<std::vector<std::vector<java::lang::String>>> variantsToKeywords;
	std::shared_ptr<android::icu::impl::locale::BaseLocale> baseLocale;
	std::shared_ptr<android::icu::impl::locale::LocaleExtensions> extensions;
	std::shared_ptr<java::util::Locale> locale;
	std::shared_ptr<java::lang::String> localeID;
	ULocale(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::util::Locale> locale);
	ULocale(std::shared_ptr<java::util::Locale> loc);
	static void appendTag(std::shared_ptr<java::lang::String> tag,std::shared_ptr<java::lang::StringBuilder> buffer);
	std::shared_ptr<android::icu::impl::locale::BaseLocale> virtual base();
	static std::shared_ptr<java::lang::String> createLikelySubtagsString(std::shared_ptr<java::lang::String> lang,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variants);
	static std::shared_ptr<java::lang::String> createTagString(std::shared_ptr<java::lang::String> lang,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> trailing,std::shared_ptr<java::lang::String> alternateTags);
	std::shared_ptr<android::icu::impl::locale::LocaleExtensions> virtual extensions();
	static std::shared_ptr<java::lang::String> getDisplayCountryInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayKeywordInternal(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayKeywordValueInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayLanguageInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale,bool useDialect);
	static std::shared_ptr<java::lang::String> getDisplayNameInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayNameWithDialectInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayScriptInContextInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayScriptInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayVariantInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getFallbackString(std::shared_ptr<java::lang::String> fallback);
	static std::shared_ptr<android::icu::util::ULocale> getInstance(std::shared_ptr<android::icu::impl::locale::BaseLocale> base,std::shared_ptr<android::icu::impl::locale::LocaleExtensions> exts);
	static int getShortestSubtagLength(std::shared_ptr<java::lang::String> localeID);
	static void initCANONICALIZE_MAP();
	static bool isEmptyString(std::shared_ptr<java::lang::String> string);
	static std::shared_ptr<java::lang::String> lookupLikelySubtags(std::shared_ptr<java::lang::String> localeId);
	static std::shared_ptr<java::lang::String> lscvToID(std::shared_ptr<java::lang::String> lang,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> country,std::shared_ptr<java::lang::String> variant);
	static int parseTagString(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<std::vector<java::lang::String>> tags);
public:
	static std::shared_ptr<android::icu::util::ULocale_S_Type> ACTUAL_LOCALE;
	static std::shared_ptr<android::icu::util::ULocale> CANADA;
	static std::shared_ptr<android::icu::util::ULocale> CANADA_FRENCH;
	static std::shared_ptr<android::icu::util::ULocale> CHINA;
	static std::shared_ptr<android::icu::util::ULocale> CHINESE;
	static std::shared_ptr<android::icu::util::ULocale> ENGLISH;
	static std::shared_ptr<android::icu::util::ULocale> FRANCE;
	static std::shared_ptr<android::icu::util::ULocale> FRENCH;
	static std::shared_ptr<android::icu::util::ULocale> GERMAN;
	static std::shared_ptr<android::icu::util::ULocale> GERMANY;
	static std::shared_ptr<android::icu::util::ULocale> ITALIAN;
	static std::shared_ptr<android::icu::util::ULocale> ITALY;
	static std::shared_ptr<android::icu::util::ULocale> JAPAN;
	static std::shared_ptr<android::icu::util::ULocale> JAPANESE;
	static std::shared_ptr<android::icu::util::ULocale> KOREA;
	static std::shared_ptr<android::icu::util::ULocale> KOREAN;
	static std::shared_ptr<android::icu::util::ULocale> PRC;
	static char PRIVATE_USE_EXTENSION;
	static std::shared_ptr<android::icu::util::ULocale> ROOT;
	static std::shared_ptr<android::icu::util::ULocale> SIMPLIFIED_CHINESE;
	static std::shared_ptr<android::icu::util::ULocale> TAIWAN;
	static std::shared_ptr<android::icu::util::ULocale> TRADITIONAL_CHINESE;
	static std::shared_ptr<android::icu::util::ULocale> UK;
	static char UNICODE_LOCALE_EXTENSION;
	static std::shared_ptr<android::icu::util::ULocale> US;
	static std::shared_ptr<android::icu::util::ULocale_S_Type> VALID_LOCALE;
	static std::shared_ptr<android::icu::impl::locale::BaseLocale> _wrap0(std::shared_ptr<android::icu::util::ULocale> _this);
	static std::shared_ptr<android::icu::impl::locale::LocaleExtensions> _wrap1(std::shared_ptr<android::icu::util::ULocale> _this);
	static std::shared_ptr<android::icu::util::ULocale> _wrap2(std::shared_ptr<android::icu::impl::locale::BaseLocale> base,std::shared_ptr<android::icu::impl::locale::LocaleExtensions> exts);
	static void static_cinit();
	ULocale(std::shared_ptr<java::lang::String> localeID);
	ULocale(std::shared_ptr<java::lang::String> a,std::shared_ptr<java::lang::String> b);
	ULocale(std::shared_ptr<java::lang::String> a,std::shared_ptr<java::lang::String> b,std::shared_ptr<java::lang::String> c);
	ULocale(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::util::ULocale> _this2);
	static std::shared_ptr<android::icu::util::ULocale> acceptLanguage(std::shared_ptr<java::lang::String> acceptLanguageList,std::shared_ptr<std::vector<android::icu::util::ULocale>> availableLocales,std::shared_ptr<bool[]> fallback);
	static std::shared_ptr<android::icu::util::ULocale> acceptLanguage(std::shared_ptr<java::lang::String> acceptLanguageList,std::shared_ptr<bool[]> fallback);
	static std::shared_ptr<android::icu::util::ULocale> acceptLanguage(std::shared_ptr<std::vector<android::icu::util::ULocale>> acceptLanguageList,std::shared_ptr<std::vector<android::icu::util::ULocale>> availableLocales,std::shared_ptr<bool[]> fallback);
	static std::shared_ptr<android::icu::util::ULocale> acceptLanguage(std::shared_ptr<std::vector<android::icu::util::ULocale>> acceptLanguageList,std::shared_ptr<bool[]> fallback);
	static std::shared_ptr<android::icu::util::ULocale> addLikelySubtags(std::shared_ptr<android::icu::util::ULocale> loc);
	static std::shared_ptr<java::lang::String> canonicalize(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<android::icu::util::ULocale> createCanonical(std::shared_ptr<java::lang::String> nonCanonicalID);
	static std::shared_ptr<java::lang::String> createTagString(std::shared_ptr<java::lang::String> lang,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> trailing);
	static std::shared_ptr<android::icu::util::ULocale> forLanguageTag(std::shared_ptr<java::lang::String> languageTag);
	static std::shared_ptr<android::icu::util::ULocale> forLocale(std::shared_ptr<java::util::Locale> loc);
	static std::shared_ptr<android::icu::util::ULocale> getAvailableLocales();
	static std::shared_ptr<java::lang::String> getBaseName(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<java::lang::String> getCountry(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<android::icu::util::ULocale> getDefault();
	static std::shared_ptr<android::icu::util::ULocale> getDefault(std::shared_ptr<android::icu::util::ULocale_S_Category> category);
	static std::shared_ptr<java::lang::String> getDisplayCountry(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayCountry(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getDisplayKeyword(std::shared_ptr<java::lang::String> keyword);
	static std::shared_ptr<java::lang::String> getDisplayKeyword(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayKeyword(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getDisplayKeywordValue(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayKeywordValue(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getDisplayLanguage(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayLanguage(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getDisplayLanguageWithDialect(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayLanguageWithDialect(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getDisplayNameWithDialect(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayNameWithDialect(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getDisplayScript(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayScript(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getDisplayScriptInContext(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayScriptInContext(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getDisplayVariant(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayVariant(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID);
	static std::shared_ptr<java::lang::String> getFallback(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<java::lang::String> getISO3Country(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<java::lang::String> getISO3Language(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<java::lang::String> getISOCountries();
	static std::shared_ptr<java::lang::String> getISOLanguages();
	static std::shared_ptr<java::lang::String> getKeywordValue(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> keywordName);
	static std::shared_ptr<java::util::Iterator<java::lang::String>> getKeywords(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<java::lang::String> getLanguage(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<java::lang::String> getName(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<java::lang::String> getRegionForSupplementalData(std::shared_ptr<android::icu::util::ULocale> locale,bool inferRegion);
	static std::shared_ptr<java::lang::String> getScript(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<java::lang::String> getVariant(std::shared_ptr<java::lang::String> localeID);
	static std::shared_ptr<android::icu::util::ULocale> minimizeSubtags(std::shared_ptr<android::icu::util::ULocale> loc);
	static std::shared_ptr<android::icu::util::ULocale> minimizeSubtags(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<android::icu::util::ULocale_S_Minimize> fieldToFavor);
	static std::shared_ptr<android::icu::util::ULocale> parseAcceptLanguage(std::shared_ptr<java::lang::String> acceptLanguage,bool isLenient);
	static void setDefault(std::shared_ptr<android::icu::util::ULocale_S_Category> category,std::shared_ptr<android::icu::util::ULocale> newLocale);
	static void setDefault(std::shared_ptr<android::icu::util::ULocale> newLocale);
	static std::shared_ptr<java::lang::String> setKeywordValue(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> value);
	static std::shared_ptr<java::lang::String> toLegacyKey(std::shared_ptr<java::lang::String> keyword);
	static std::shared_ptr<java::lang::String> toLegacyType(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> value);
	static std::shared_ptr<java::lang::String> toUnicodeLocaleKey(std::shared_ptr<java::lang::String> keyword);
	static std::shared_ptr<java::lang::String> toUnicodeLocaleType(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<java::lang::Object> virtual clone();
	int virtual compareTo(std::shared_ptr<android::icu::util::ULocale> other);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual getBaseName();
	std::shared_ptr<java::lang::String> virtual getCharacterOrientation();
	std::shared_ptr<java::lang::String> virtual getCountry();
	std::shared_ptr<java::lang::String> virtual getDisplayCountry();
	std::shared_ptr<java::lang::String> virtual getDisplayCountry(std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getDisplayKeywordValue(std::shared_ptr<java::lang::String> keyword);
	std::shared_ptr<java::lang::String> virtual getDisplayKeywordValue(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getDisplayLanguage();
	std::shared_ptr<java::lang::String> virtual getDisplayLanguage(std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getDisplayLanguageWithDialect();
	std::shared_ptr<java::lang::String> virtual getDisplayLanguageWithDialect(std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getDisplayName();
	std::shared_ptr<java::lang::String> virtual getDisplayName(std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getDisplayNameWithDialect();
	std::shared_ptr<java::lang::String> virtual getDisplayNameWithDialect(std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getDisplayScript();
	std::shared_ptr<java::lang::String> virtual getDisplayScript(std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getDisplayScriptInContext();
	std::shared_ptr<java::lang::String> virtual getDisplayScriptInContext(std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getDisplayVariant();
	std::shared_ptr<java::lang::String> virtual getDisplayVariant(std::shared_ptr<android::icu::util::ULocale> displayLocale);
	std::shared_ptr<java::lang::String> virtual getExtension(char key);
	std::shared_ptr<java::util::Set<java::lang::Character>> virtual getExtensionKeys();
	std::shared_ptr<android::icu::util::ULocale> virtual getFallback();
	std::shared_ptr<java::lang::String> virtual getISO3Country();
	std::shared_ptr<java::lang::String> virtual getISO3Language();
	std::shared_ptr<java::lang::String> virtual getKeywordValue(std::shared_ptr<java::lang::String> keywordName);
	std::shared_ptr<java::util::Iterator<java::lang::String>> virtual getKeywords();
	std::shared_ptr<java::lang::String> virtual getLanguage();
	std::shared_ptr<java::lang::String> virtual getLineOrientation();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::lang::String> virtual getScript();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getUnicodeLocaleAttributes();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getUnicodeLocaleKeys();
	std::shared_ptr<java::lang::String> virtual getUnicodeLocaleType(std::shared_ptr<java::lang::String> key);
	std::shared_ptr<java::lang::String> virtual getVariant();
	int virtual hashCode();
	bool virtual isRightToLeft();
	std::shared_ptr<android::icu::util::ULocale> virtual setKeywordValue(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<java::lang::String> virtual toLanguageTag();
	std::shared_ptr<java::util::Locale> virtual toLocale();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::ULocale::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ULocale(){
	}

}; // class ULocale
}; // namespace android::icu::util

#endif //__android_icu_util_ULocale__

