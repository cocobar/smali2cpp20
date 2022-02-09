#ifndef __android_icu_text_RuleBasedCollator__
#define __android_icu_text_RuleBasedCollator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedCollator.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.impl.coll.SharedObject_S_Reference.h"
#include "android.icu.text.CollationElementIterator.h"
#include "android.icu.text.CollationKey.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.RawCollationKey.h"
#include "android.icu.text.RuleBasedCollator_S_CollationBuffer.h"
#include "android.icu.text.RuleBasedCollator_S_CollationKeyByteSink.h"
#include "android.icu.text.RuleBasedCollator_S_NFDIterator.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"
#include "java.util.concurrent.locks.Lock.h"

namespace android::icu::text{
class RuleBasedCollator : public android::icu::text::Collator {
protected:
	int virtual doCompare(std::shared_ptr<java::lang::CharSequence> left,std::shared_ptr<java::lang::CharSequence> right);
private:
	bool actualLocaleIsSameAsValid;
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> collationBuffer;
	std::shared_ptr<java::util::concurrent::locks::Lock> frozenLock;
	std::shared_ptr<android::icu::util::ULocale> validLocale;
	void virtual adoptTailoring(std::shared_ptr<android::icu::impl::coll::CollationTailoring> t);
	void virtual checkNotFrozen();
	static int compareNFDIter(std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl,std::shared_ptr<android::icu::text::RuleBasedCollator_S_NFDIterator> left,std::shared_ptr<android::icu::text::RuleBasedCollator_S_NFDIterator> right);
	std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> virtual getCollationBuffer();
	std::shared_ptr<android::icu::text::CollationKey> virtual getCollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer);
	std::shared_ptr<android::icu::impl::coll::CollationSettings> virtual getDefaultSettings();
	std::shared_ptr<android::icu::impl::coll::CollationSettings> virtual getOwnedSettings();
	std::shared_ptr<android::icu::text::RawCollationKey> virtual getRawCollationKey(std::shared_ptr<java::lang::CharSequence> source,std::shared_ptr<android::icu::text::RawCollationKey> key,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer);
	void virtual initMaxExpansions();
	void virtual internalBuildTailoring(std::shared_ptr<java::lang::String> rules);
	void virtual internalSetVariableTop(long long varTop);
	void virtual releaseCollationBuffer(std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer);
	void virtual setFastLatinOptions(std::shared_ptr<android::icu::impl::coll::CollationSettings> ownedSettings);
	int virtual simpleKeyLengthEstimate(std::shared_ptr<java::lang::CharSequence> source);
	void virtual writeIdenticalLevel(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationKeyByteSink> sink);
	void virtual writeSortKey(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationKeyByteSink> sink,std::shared_ptr<android::icu::text::RuleBasedCollator_S_CollationBuffer> buffer);
public:
	static bool _assertionsDisabled;
	std::shared_ptr<android::icu::impl::coll::CollationData> data;
	std::shared_ptr<android::icu::impl::coll::SharedObject_S_Reference<android::icu::impl::coll::CollationSettings>> settings;
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> tailoring;
	static void static_cinit();
	RuleBasedCollator(std::shared_ptr<android::icu::impl::coll::CollationTailoring> t,std::shared_ptr<android::icu::util::ULocale> vl);
	RuleBasedCollator(std::shared_ptr<java::lang::String> rules);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<android::icu::text::RuleBasedCollator> virtual cloneAsThawed();
	int virtual compare(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<android::icu::text::Collator> virtual freeze();
	std::shared_ptr<android::icu::text::CollationElementIterator> virtual getCollationElementIterator(std::shared_ptr<android::icu::text::UCharacterIterator> source);
	std::shared_ptr<android::icu::text::CollationElementIterator> virtual getCollationElementIterator(std::shared_ptr<java::lang::String> source);
	std::shared_ptr<android::icu::text::CollationElementIterator> virtual getCollationElementIterator(std::shared_ptr<java::text::CharacterIterator> source);
	std::shared_ptr<android::icu::text::CollationKey> virtual getCollationKey(std::shared_ptr<java::lang::String> source);
	void virtual getContractionsAndExpansions(std::shared_ptr<android::icu::text::UnicodeSet> contractions,std::shared_ptr<android::icu::text::UnicodeSet> expansions,bool addPrefixes);
	int virtual getDecomposition();
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type);
	int virtual getMaxVariable();
	bool virtual getNumericCollation();
	std::shared_ptr<android::icu::text::RawCollationKey> virtual getRawCollationKey(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RawCollationKey> key);
	int virtual getReorderCodes();
	std::shared_ptr<java::lang::String> virtual getRules();
	std::shared_ptr<java::lang::String> virtual getRules(bool fullrules);
	int virtual getStrength();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getTailoredSet();
	std::shared_ptr<android::icu::util::VersionInfo> virtual getUCAVersion();
	int virtual getVariableTop();
	std::shared_ptr<android::icu::util::VersionInfo> virtual getVersion();
	int virtual hashCode();
	void virtual internalAddContractions(int c,std::shared_ptr<android::icu::text::UnicodeSet> set);
	long long virtual internalGetCEs(std::shared_ptr<java::lang::CharSequence> str);
	bool virtual isAlternateHandlingShifted();
	bool virtual isCaseLevel();
	bool virtual isFrenchCollation();
	bool virtual isFrozen();
	bool virtual isHiraganaQuaternary();
	bool virtual isLowerCaseFirst();
	bool virtual isUnsafe(int c);
	bool virtual isUpperCaseFirst();
	void virtual setAlternateHandlingDefault();
	void virtual setAlternateHandlingShifted(bool shifted);
	void virtual setCaseFirstDefault();
	void virtual setCaseLevel(bool flag);
	void virtual setCaseLevelDefault();
	void virtual setDecomposition(int decomposition);
	void virtual setDecompositionDefault();
	void virtual setFrenchCollation(bool flag);
	void virtual setFrenchCollationDefault();
	void virtual setHiraganaQuaternary(bool flag);
	void virtual setHiraganaQuaternaryDefault();
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual);
	void virtual setLowerCaseFirst(bool lowerfirst);
	std::shared_ptr<android::icu::text::RuleBasedCollator> virtual setMaxVariable(int cVar4);
	void virtual setNumericCollation(bool flag);
	void virtual setNumericCollationDefault();
	void virtual setReorderCodes(std::shared_ptr<int[]> order);
	void virtual setStrength(int newStrength);
	void virtual setStrengthDefault();
	void virtual setUpperCaseFirst(bool upperfirst);
	int virtual setVariableTop(std::shared_ptr<java::lang::String> varTop);
	void virtual setVariableTop(int varTop);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RuleBasedCollator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RuleBasedCollator(){
	}

}; // class RuleBasedCollator
}; // namespace android::icu::text

#endif //__android_icu_text_RuleBasedCollator__

