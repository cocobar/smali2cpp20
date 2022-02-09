#ifndef __android_icu_impl_coll_CollationBuilder__
#define __android_icu_impl_coll_CollationBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationDataBuilder.h"
#include "android.icu.impl.coll.CollationRootElements.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Sink.h"
#include "android.icu.impl.coll.CollationTailoring.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.impl.coll.UVector64.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::impl::coll{
class CollationBuilder : public android::icu::impl::coll::CollationRuleParser_S_Sink {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_impl_coll_CollationRuleParser_S_PositionSwitchesValues;
	static std::shared_ptr<android::icu::text::UnicodeSet> COMPOSITES;
	static bool DEBUG;
	static int HAS_BEFORE2;
	static int HAS_BEFORE3;
	static int IS_TAILORED;
	static int MAX_INDEX;
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> base;
	std::shared_ptr<android::icu::impl::coll::CollationData> baseData;
	std::shared_ptr<long long[]> ces;
	int cesLength;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> dataBuilder;
	bool fastLatinEnabled;
	std::shared_ptr<android::icu::text::Normalizer2> fcd;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl;
	std::shared_ptr<android::icu::text::Normalizer2> nfd;
	std::shared_ptr<android::icu::impl::coll::UVector64> nodes;
	std::shared_ptr<android::icu::text::UnicodeSet> optimizeSet;
	std::shared_ptr<android::icu::impl::coll::CollationRootElements> rootElements;
	std::shared_ptr<android::icu::impl::coll::UVector32> rootPrimaryIndexes;
	long long variableTop;
	static int _getandroid_icu_impl_coll_CollationRuleParser_S_PositionSwitchesValues();
	int virtual addIfDifferent(std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> str,std::shared_ptr<long long[]> newCEs,int newCEsLength,int cVar0);
	int virtual addOnlyClosure(std::shared_ptr<java::lang::CharSequence> nfdPrefix,std::shared_ptr<java::lang::CharSequence> nfdString,std::shared_ptr<long long[]> newCEs,int newCEsLength,int ce32);
	void virtual addTailComposites(std::shared_ptr<java::lang::CharSequence> nfdPrefix,std::shared_ptr<java::lang::CharSequence> nfdString);
	int virtual addWithClosure(std::shared_ptr<java::lang::CharSequence> nfdPrefix,std::shared_ptr<java::lang::CharSequence> nfdString,std::shared_ptr<long long[]> newCEs,int newCEsLength,int ce32);
	static int alignWeightRight(int w);
	static int binarySearchForRootPrimaryNode(std::shared_ptr<int[]> rootPrimaryIndexes,int length,std::shared_ptr<long long[]> nodes,long long p);
	static int ceStrength(long long ce);
	static long long changeNodeNextIndex(long long node,int next);
	static long long changeNodePreviousIndex(long long node,int previous);
	void virtual closeOverComposites();
	static int countTailoredNodes(std::shared_ptr<long long[]> nodesArray,int i,int strength);
	bool virtual equalSubSequences(std::shared_ptr<java::lang::CharSequence> left,int leftStart,std::shared_ptr<java::lang::CharSequence> right,int rightStart);
	void virtual finalizeCEs();
	int virtual findCommonNode(int index,int strength);
	int virtual findOrInsertNodeForCEs(int strength);
	int virtual findOrInsertNodeForPrimary(long long p);
	int virtual findOrInsertNodeForRootCE(long long ce,int strength);
	int virtual findOrInsertWeakNode(int index,int weight16,int level);
	long long virtual getSpecialResetPosition(std::shared_ptr<java::lang::CharSequence> str);
	int virtual getWeight16Before(int index,long long node,int level);
	bool virtual ignorePrefix(std::shared_ptr<java::lang::CharSequence> s);
	bool virtual ignoreString(std::shared_ptr<java::lang::CharSequence> s);
	static int indexFromTempCE(long long tempCE);
	static int indexFromTempCE32(int tempCE32);
	int virtual insertNodeBetween(int index,int nextIndex,long long node);
	int virtual insertTailoredNodeAfter(int cVar4,int strength);
	bool virtual isFCD(std::shared_ptr<java::lang::CharSequence> s);
	static bool isTailoredNode(long long node);
	static bool isTempCE(long long ce);
	static bool isTempCE32(int ce32);
	void virtual makeTailoredCEs();
	bool virtual mergeCompositeIntoString(std::shared_ptr<java::lang::CharSequence> nfdString,int indexAfterLastStarter,int composite,std::shared_ptr<java::lang::CharSequence> decomp,std::shared_ptr<java::lang::StringBuilder> newNFDString,std::shared_ptr<java::lang::StringBuilder> newString);
	static int nextIndexFromNode(long long node);
	static long long nodeFromNextIndex(int next);
	static long long nodeFromPreviousIndex(int previous);
	static long long nodeFromStrength(int strength);
	static long long nodeFromWeight16(int weight16);
	static long long nodeFromWeight32(long long weight32);
	static bool nodeHasAnyBefore(long long node);
	static bool nodeHasBefore2(long long node);
	static bool nodeHasBefore3(long long node);
	static int previousIndexFromNode(long long node);
	static bool sameCEs(std::shared_ptr<long long[]> ces1,int ces1Length,std::shared_ptr<long long[]> ces2,int ces2Length);
	void virtual setCaseBits(std::shared_ptr<java::lang::CharSequence> nfdString);
	static int strengthFromNode(long long node);
	static int strengthFromTempCE(long long tempCE);
	static long long tempCEFromIndexAndStrength(int index,int strength);
	static int weight16FromNode(long long node);
	static long long weight32FromNode(long long node);
public:
	static bool _assertionsDisabled;
	static bool _wrap0(int ce32);
	static bool _wrap1(long long ce);
	static int _wrap2(int tempCE32);
	static int _wrap3(long long tempCE);
	static void static_cinit();
	CollationBuilder(std::shared_ptr<android::icu::impl::coll::CollationTailoring> b);
	void virtual addRelation(int strength,std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> str,std::shared_ptr<java::lang::CharSequence> extension);
	void virtual addReset(int strength,std::shared_ptr<java::lang::CharSequence> str);
	void virtual optimize(std::shared_ptr<android::icu::text::UnicodeSet> set);
	std::shared_ptr<android::icu::impl::coll::CollationTailoring> virtual parseAndBuild(std::shared_ptr<java::lang::String> ruleString);
	void virtual suppressContractions(std::shared_ptr<android::icu::text::UnicodeSet> set);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationBuilder(){
	}

}; // class CollationBuilder
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationBuilder__

