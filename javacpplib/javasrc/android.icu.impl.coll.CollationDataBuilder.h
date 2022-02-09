#ifndef __android_icu_impl_coll_CollationDataBuilder__
#define __android_icu_impl_coll_CollationDataBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationDataBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Trie2Writable.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_CEModifier.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_ConditionalCE32.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_CopyHelper.h"
#include "android.icu.impl.coll.CollationDataBuilder_S_DataBuilderCollationIterator.h"
#include "android.icu.impl.coll.CollationFastLatinBuilder.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.impl.coll.UVector64.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.CharsTrieBuilder.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"

namespace android::icu::impl::coll{
class CollationDataBuilder : public java::lang::Object {
protected:
	std::shared_ptr<android::icu::impl::coll::CollationData> base;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> baseSettings;
	std::shared_ptr<android::icu::impl::coll::UVector32> ce32s;
	std::shared_ptr<android::icu::impl::coll::UVector64> ce64s;
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_DataBuilderCollationIterator> collIter;
	std::shared_ptr<java::util::ArrayList<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32>> conditionalCE32s;
	std::shared_ptr<android::icu::text::UnicodeSet> contextChars;
	std::shared_ptr<java::lang::StringBuilder> contexts;
	std::shared_ptr<android::icu::impl::coll::CollationFastLatinBuilder> fastLatinBuilder;
	bool fastLatinEnabled;
	bool modified;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl;
	std::shared_ptr<android::icu::impl::Trie2Writable> trie;
	std::shared_ptr<android::icu::text::UnicodeSet> unsafeBackwardSet;
	static int encodeOneCEAsCE32(long long ce);
	static bool isBuilderContextCE32(int ce32);
	static int jamoCpFromIndex(int i);
	static int makeBuilderContextCE32(int index);
	int virtual addCE(long long ce);
	int virtual addCE32(int ce32);
	int virtual addConditionalCE32(std::shared_ptr<java::lang::String> context,int ce32);
	int virtual addContextTrie(int defaultCE32,std::shared_ptr<android::icu::util::CharsTrieBuilder> trieBuilder);
	int virtual buildContext(std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> head);
	void virtual buildContexts();
	void virtual buildFastLatinTable(std::shared_ptr<android::icu::impl::coll::CollationData> data);
	void virtual buildMappings(std::shared_ptr<android::icu::impl::coll::CollationData> data);
	void virtual clearContexts();
	int virtual copyContractionsFromBaseCE32(std::shared_ptr<java::lang::StringBuilder> context,int c,int ce32,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> cond);
	int virtual copyFromBaseCE32(int c,int ce32,bool withContext);
	int virtual encodeExpansion(std::shared_ptr<long long[]> ces,int start,int length);
	int virtual encodeExpansion32(std::shared_ptr<int[]> newCE32s,int start,int length);
	int virtual encodeOneCE(long long ce);
	int virtual getCE32FromOffsetCE32(bool fromBase,int c,int ce32);
	int virtual getCEs(std::shared_ptr<java::lang::CharSequence> s,int start,std::shared_ptr<long long[]> ces,int cesLength);
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> virtual getConditionalCE32(int index);
	std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_ConditionalCE32> virtual getConditionalCE32ForCE32(int ce32);
	bool virtual getJamoCE32s(std::shared_ptr<int[]> jamoCE32s);
	bool virtual isMutable();
	void virtual setDigitTags();
	void virtual setLeadSurrogates();
private:
	static int IS_BUILDER_JAMO_CE32;
	static void enumRangeForCopy(int start,int end,int value,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_CopyHelper> helper);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationDataBuilder();
	void virtual add(std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<long long[]> ces,int cesLength);
	void virtual addCE32(std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> s,int ce32);
	void virtual build(std::shared_ptr<android::icu::impl::coll::CollationData> data);
	void virtual copyFrom(std::shared_ptr<android::icu::impl::coll::CollationDataBuilder> src,std::shared_ptr<android::icu::impl::coll::CollationDataBuilder_S_CEModifier> modifier);
	void virtual enableFastLatin();
	int virtual encodeCEs(std::shared_ptr<long long[]> ces,int cesLength);
	int virtual getCEs(std::shared_ptr<java::lang::CharSequence> prefix,std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<long long[]> ces,int cesLength);
	int virtual getCEs(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<long long[]> ces,int cesLength);
	bool virtual hasMappings();
	void virtual initForTailoring(std::shared_ptr<android::icu::impl::coll::CollationData> b);
	bool virtual isAssigned(int c);
	bool virtual isCompressibleLeadByte(int b);
	bool virtual isCompressiblePrimary(long long p);
	void virtual optimize(std::shared_ptr<android::icu::text::UnicodeSet> set);
	void virtual suppressContractions(std::shared_ptr<android::icu::text::UnicodeSet> set);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationDataBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationDataBuilder(){
	}

}; // class CollationDataBuilder
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationDataBuilder__

