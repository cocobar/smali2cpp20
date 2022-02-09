#ifndef __android_icu_text_Transliterator__
#define __android_icu_text_Transliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Transliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.StringTransform.h"
#include "android.icu.text.Transliterator_S_Factory.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.TransliteratorRegistry.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.CaseInsensitiveString.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Class.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

namespace android::icu::text{
class Transliterator : public android::icu::text::StringTransform {
protected:
	Transliterator(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::UnicodeFilter> filter);
	std::shared_ptr<java::lang::String> virtual baseToRules(bool escapeUnprintable);
	std::shared_ptr<android::icu::text::UnicodeSet> virtual handleGetSourceSet();
	void handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> var0,std::shared_ptr<android::icu::text::Transliterator_S_Position> var1,bool var2) = 0;
	void virtual setID(std::shared_ptr<java::lang::String> id);
	void virtual setMaximumContextLength(int a);
private:
	static std::shared_ptr<java::lang::String> RB_DISPLAY_NAME_PATTERN;
	static std::shared_ptr<java::lang::String> RB_DISPLAY_NAME_PREFIX;
	static std::shared_ptr<java::lang::String> RB_RULE_BASED_IDS;
	static std::shared_ptr<java::lang::String> RB_SCRIPT_DISPLAY_NAME_PREFIX;
	static std::shared_ptr<java::lang::String> ROOT;
	static std::shared_ptr<java::util::Map<android::icu::util::CaseInsensitiveString,java::lang::String>> displayNameCache;
	static std::shared_ptr<android::icu::text::TransliteratorRegistry> registry;
	std::shared_ptr<java::lang::String> ID;
	std::shared_ptr<android::icu::text::UnicodeSet> filter;
	int maximumContextLength;
	void virtual filteredTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental,bool rollback);
public:
	static bool DEBUG;
	static int FORWARD;
	static char ID_DELIM;
	static char ID_SEP;
	static int REVERSE;
	static char VARIANT_SEP;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::Transliterator> createFromRules(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> rules,int dir);
	static std::shared_ptr<java::util::Enumeration<java::lang::String>> getAvailableIDs();
	static std::shared_ptr<java::util::Enumeration<java::lang::String>> getAvailableSources();
	static std::shared_ptr<java::util::Enumeration<java::lang::String>> getAvailableTargets(std::shared_ptr<java::lang::String> source);
	static std::shared_ptr<java::util::Enumeration<java::lang::String>> getAvailableVariants(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target);
	static std::shared_ptr<android::icu::text::Transliterator> getBasicInstance(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::lang::String> canonID);
	static std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<java::lang::String> ID);
	static std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::ULocale> inLocale);
	static std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::util::Locale> inLocale);
	static std::shared_ptr<android::icu::text::Transliterator> getInstance(std::shared_ptr<java::lang::String> ID);
	static std::shared_ptr<android::icu::text::Transliterator> getInstance(std::shared_ptr<java::lang::String> ID,int dir);
	static void registerAlias(std::shared_ptr<java::lang::String> aliasID,std::shared_ptr<java::lang::String> realID);
	static void registerAny();
	static void registerClass(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::Class<android::icu::text::Transliterator>> transClass,std::shared_ptr<java::lang::String> displayName);
	static void registerFactory(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::Transliterator_S_Factory> factory);
	static void registerInstance(std::shared_ptr<android::icu::text::Transliterator> trans);
	static void registerInstance(std::shared_ptr<android::icu::text::Transliterator> trans,bool visible);
	static void registerSpecialInverse(std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> inverseTarget,bool bidirectional);
	static void unregister(std::shared_ptr<java::lang::String> ID);
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
	void virtual filteredTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,bool incremental);
	void virtual finishTransliteration(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index);
	std::shared_ptr<android::icu::text::Transliterator> virtual getElements();
	std::shared_ptr<android::icu::text::UnicodeFilter> virtual getFilter();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getFilterAsUnicodeSet(std::shared_ptr<android::icu::text::UnicodeSet> externalFilter);
	std::shared_ptr<java::lang::String> virtual getID();
	std::shared_ptr<android::icu::text::Transliterator> virtual getInverse();
	int virtual getMaximumContextLength();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getSourceSet();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getTargetSet();
	void virtual setFilter(std::shared_ptr<android::icu::text::UnicodeFilter> filter);
	std::shared_ptr<java::lang::String> virtual toRules(bool escapeUnprintable);
	std::shared_ptr<java::lang::String> virtual transform(std::shared_ptr<java::lang::String> source);
	int virtual transliterate(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit);
	std::shared_ptr<java::lang::String> virtual transliterate(std::shared_ptr<java::lang::String> text);
	void virtual transliterate(std::shared_ptr<android::icu::text::Replaceable> text);
	void virtual transliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index);
	void virtual transliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,int insertion);
	void virtual transliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> index,std::shared_ptr<java::lang::String> insertion);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::Transliterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Transliterator(){
	}

}; // class Transliterator
}; // namespace android::icu::text

#endif //__android_icu_text_Transliterator__

