#ifndef __android_icu_impl_ICUResourceBundle__
#define __android_icu_impl_ICUResourceBundle__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.ICUResourceBundle_S_AvailEntry.h"
#include "android.icu.impl.ICUResourceBundle_S_Loader.h"
#include "android.icu.impl.ICUResourceBundle_S_OpenType.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderValue.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.Locale.h"
#include "java.util.ResourceBundle.h"
#include "java.util.Set.h"

namespace android::icu::impl{
class ICUResourceBundle : public android::icu::util::UResourceBundle {
protected:
	static std::shared_ptr<java::lang::String> INSTALLED_LOCALES;
	std::shared_ptr<java::lang::String> key;
	ICUResourceBundle(std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle);
	ICUResourceBundle(std::shared_ptr<android::icu::impl::ICUResourceBundle> container,std::shared_ptr<java::lang::String> key);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> getAliasedResource(std::shared_ptr<android::icu::impl::ICUResourceBundle> base,std::shared_ptr<std::vector<java::lang::String>> keys,int depth,std::shared_ptr<java::lang::String> key,int _resource,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	std::shared_ptr<java::lang::String> virtual getBaseName();
	std::shared_ptr<java::lang::String> virtual getLocaleID();
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual handleGetKeys();
	bool virtual isTopLevelResource();
	void virtual setParent(std::shared_ptr<java::util::ResourceBundle> parent);
private:
	static std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,android::icu::impl::ICUResourceBundle,android::icu::impl::ICUResourceBundle_S_Loader>> BUNDLE_CACHE;
	static bool DEBUG;
	static std::shared_ptr<java::lang::String> DEFAULT_TAG;
	static std::shared_ptr<java::lang::String> FULL_LOCALE_NAMES_LIST;
	static std::shared_ptr<android::icu::impl::CacheBase<java::lang::String,android::icu::impl::ICUResourceBundle_S_AvailEntry,java::lang::ClassLoader>> GET_AVAILABLE_CACHE;
	static char HYPHEN;
	static std::shared_ptr<java::lang::String> ICUDATA;
	static std::shared_ptr<java::lang::String> ICU_RESOURCE_INDEX;
	static std::shared_ptr<java::lang::String> LOCALE;
	static char RES_PATH_SEP_CHAR;
	static std::shared_ptr<java::lang::String> RES_PATH_SEP_STR;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> container;
	static void addBundleBaseNamesFromClassLoader(std::shared_ptr<java::lang::String> bn,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<java::util::Set<java::lang::String>> names);
	static void addLocaleIDsFromIndexBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<java::util::Set<java::lang::String>> locales);
	static void addLocaleIDsFromListFile(std::shared_ptr<java::lang::String> bn,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<java::util::Set<java::lang::String>> locales);
	static int countPathKeys(std::shared_ptr<java::lang::String> path);
	static std::shared_ptr<java::util::Set<java::lang::String>> createFullLocaleNameSet(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<java::util::Set<java::lang::String>> createLocaleNameSet(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<android::icu::util::ULocale> createULocaleList(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> root);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> findResourceWithFallback(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::util::UResourceBundle> actualBundle,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> findResourceWithFallback(std::shared_ptr<std::vector<java::lang::String>> keys,int depth,std::shared_ptr<android::icu::impl::ICUResourceBundle> base,std::shared_ptr<android::icu::util::UResourceBundle> cVar1);
	static std::shared_ptr<java::lang::String> findStringWithFallback(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::util::UResourceBundle> actualBundle,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	void virtual getAllItemsWithFallback(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderValue> readerValue,std::shared_ptr<android::icu::impl::UResource_S_Sink> sink);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle_S_AvailEntry> getAvailEntry(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> getBundle(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> loader);
	bool virtual getNoFallback();
	int virtual getResDepth();
	static void getResPathKeys(std::shared_ptr<java::lang::String> path,int num,std::shared_ptr<std::vector<java::lang::String>> keys,int start);
	void virtual getResPathKeys(std::shared_ptr<std::vector<java::lang::String>> keys,int depth);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> instantiateBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> defaultID,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> openType);
	static bool localeIDStartsWithLangSubtag(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> lang);
public:
	static bool _assertionsDisabled;
	static int ALIAS;
	static int ARRAY16;
	static std::shared_ptr<java::lang::ClassLoader> ICU_DATA_CLASS_LOADER;
	static std::shared_ptr<java::lang::String> NO_INHERITANCE_MARKER;
	static int RES_BOGUS;
	static int STRING_V2;
	static int TABLE16;
	static int TABLE32;
	std::shared_ptr<android::icu::impl::ICUResourceBundle_S_WholeBundle> wholeBundle;
	static bool _get0();
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> _wrap0(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> defaultID,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> openType);
	static std::shared_ptr<android::icu::util::ULocale> _wrap1(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> root);
	static bool _wrap2(std::shared_ptr<android::icu::impl::ICUResourceBundle> _this);
	static bool _wrap3(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> lang);
	static std::shared_ptr<java::util::Set> _wrap4(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<java::util::Set> _wrap5(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader);
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> createBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> root);
	static std::shared_ptr<java::util::Set<java::lang::String>> getAvailableLocaleNameSet();
	static std::shared_ptr<java::util::Set<java::lang::String>> getAvailableLocaleNameSet(std::shared_ptr<java::lang::String> bundlePrefix,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<java::util::Locale> getAvailableLocales();
	static std::shared_ptr<java::util::Locale> getAvailableLocales(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<android::icu::util::ULocale> cVar0,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> openType);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> cVar0,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> root,std::shared_ptr<android::icu::impl::ICUResourceBundle_S_OpenType> openType);
	static std::shared_ptr<android::icu::impl::ICUResourceBundle> getBundleInstance(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> root,bool disableFallback);
	static std::shared_ptr<java::util::Set<java::lang::String>> getFullLocaleNameSet();
	static std::shared_ptr<java::util::Set<java::lang::String>> getFullLocaleNameSet(std::shared_ptr<java::lang::String> bundlePrefix,std::shared_ptr<java::lang::ClassLoader> loader);
	static std::shared_ptr<android::icu::util::ULocale> getFunctionalEquivalent(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resName,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> locID,std::shared_ptr<bool[]> isAvailable,bool omitDefault);
	static std::shared_ptr<java::lang::String> getKeywordValues(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> keyword);
	static std::shared_ptr<java::util::Locale> getLocaleList(std::shared_ptr<std::vector<android::icu::util::ULocale>> ulocales);
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual at(int index);
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual at(std::shared_ptr<java::lang::String> key);
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	std::shared_ptr<java::lang::String> virtual findStringWithFallback(std::shared_ptr<java::lang::String> path);
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual findTopLevel(int index);
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual findTopLevel(std::shared_ptr<java::lang::String> aKey);
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual findWithFallback(std::shared_ptr<java::lang::String> path);
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual get(std::shared_ptr<java::lang::String> aKey,std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::String>> aliasesVisited,std::shared_ptr<android::icu::util::UResourceBundle> requested);
	void virtual getAllItemsWithFallback(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::impl::UResource_S_Sink> sink);
	std::shared_ptr<java::lang::String> virtual getKey();
	std::shared_ptr<java::util::Locale> virtual getLocale();
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual getParent();
	std::shared_ptr<java::lang::String> virtual getStringWithFallback(std::shared_ptr<java::lang::String> path);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getTopLevelKeySet();
	std::shared_ptr<android::icu::util::ULocale> virtual getULocale();
	std::shared_ptr<android::icu::impl::ICUResourceBundle> virtual getWithFallback(std::shared_ptr<java::lang::String> path);
	int virtual hashCode();
	bool virtual isRoot();
	void virtual setTopLevelKeySet(std::shared_ptr<java::util::Set<java::lang::String>> keySet);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUResourceBundle::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUResourceBundle(){
	}

}; // class ICUResourceBundle
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUResourceBundle__

