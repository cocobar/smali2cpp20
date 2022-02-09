#ifndef __android_icu_text_Collator__
#define __android_icu_text_Collator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Collator.smali
#include "java2ctype.h"
#include "android.icu.text.CollationKey.h"
#include "android.icu.text.Collator_S_CollatorFactory.h"
#include "android.icu.text.Collator_S_ServiceShim.h"
#include "android.icu.text.RawCollationKey.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.Freezable.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class Collator : public java::util::Comparator<java::lang::Object>, public android::icu::util::Freezable<android::icu::text::Collator>, public java::lang::Cloneable {
protected:
	Collator();
	int virtual doCompare(std::shared_ptr<java::lang::CharSequence> left,std::shared_ptr<java::lang::CharSequence> right);
private:
	static std::shared_ptr<java::lang::String> BASE;
	static bool DEBUG;
	static std::shared_ptr<std::vector<java::lang::String>> KEYWORDS;
	static std::shared_ptr<java::lang::String> RESOURCE;
	static std::shared_ptr<android::icu::text::Collator_S_ServiceShim> shim;
	void virtual checkNotFrozen();
	static int getIntValue(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> s,std::shared_ptr<std::vector<java::lang::String>> values);
	static int getReorderCode(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<android::icu::text::Collator_S_ServiceShim> getShim();
	static bool getYesOrNo(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> s);
	static void setAttributesFromKeywords(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<android::icu::text::Collator> coll,std::shared_ptr<android::icu::text::RuleBasedCollator> rbc);
public:
	static int CANONICAL_DECOMPOSITION;
	static int FULL_DECOMPOSITION;
	static int IDENTICAL;
	static int NO_DECOMPOSITION;
	static int PRIMARY;
	static int QUATERNARY;
	static int SECONDARY;
	static int TERTIARY;
	static void static_cinit();
	static std::shared_ptr<java::util::Locale> getAvailableLocales();
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<android::icu::util::ULocale> objectLocale);
	static std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<android::icu::util::ULocale> objectLocale,std::shared_ptr<android::icu::util::ULocale> displayLocale);
	static std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<java::util::Locale> objectLocale);
	static std::shared_ptr<java::lang::String> getDisplayName(std::shared_ptr<java::util::Locale> objectLocale,std::shared_ptr<java::util::Locale> displayLocale);
	static int getEquivalentReorderCodes(int reorderCode);
	static std::shared_ptr<android::icu::util::ULocale> getFunctionalEquivalent(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> locID);
	static std::shared_ptr<android::icu::util::ULocale> getFunctionalEquivalent(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> locID,std::shared_ptr<bool[]> isAvailable);
	static std::shared_ptr<android::icu::text::Collator> getInstance();
	static std::shared_ptr<android::icu::text::Collator> getInstance(std::shared_ptr<android::icu::util::ULocale> cVar1);
	static std::shared_ptr<android::icu::text::Collator> getInstance(std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::lang::String> getKeywordValues(std::shared_ptr<java::lang::String> keyword);
	static std::shared_ptr<java::lang::String> getKeywordValuesForLocale(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale,bool commonlyUsed);
	static std::shared_ptr<java::lang::String> getKeywords();
	static std::shared_ptr<java::lang::Object> registerFactory(std::shared_ptr<android::icu::text::Collator_S_CollatorFactory> factory);
	static std::shared_ptr<java::lang::Object> registerInstance(std::shared_ptr<android::icu::text::Collator> collator,std::shared_ptr<android::icu::util::ULocale> locale);
	static bool unregister(std::shared_ptr<java::lang::Object> registryKey);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::text::Collator> virtual cloneAsThawed();
	int virtual compare(std::shared_ptr<java::lang::Object> source,std::shared_ptr<java::lang::Object> target);
	int compare(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1) = 0;
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	bool virtual equals(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target);
	std::shared_ptr<android::icu::text::Collator> virtual freeze();
	std::shared_ptr<android::icu::text::CollationKey> getCollationKey(std::shared_ptr<java::lang::String> var0) = 0;
	int virtual getDecomposition();
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type);
	int virtual getMaxVariable();
	std::shared_ptr<android::icu::text::RawCollationKey> getRawCollationKey(std::shared_ptr<java::lang::String> var0,std::shared_ptr<android::icu::text::RawCollationKey> var1) = 0;
	int virtual getReorderCodes();
	int virtual getStrength();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getTailoredSet();
	std::shared_ptr<android::icu::util::VersionInfo> getUCAVersion() = 0;
	int getVariableTop() = 0;
	std::shared_ptr<android::icu::util::VersionInfo> getVersion() = 0;
	int virtual hashCode();
	bool virtual isFrozen();
	void virtual setDecomposition(int decomposition);
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual);
	std::shared_ptr<android::icu::text::Collator> virtual setMaxVariable(int group);
	void virtual setReorderCodes(std::shared_ptr<int[]> order);
	void virtual setStrength(int newStrength);
	std::shared_ptr<android::icu::text::Collator> virtual setStrength2(int newStrength);
	int setVariableTop(std::shared_ptr<java::lang::String> var0);
	void setVariableTop(int var0);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::Collator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Collator(){
	}

}; // class Collator
}; // namespace android::icu::text

#endif //__android_icu_text_Collator__

