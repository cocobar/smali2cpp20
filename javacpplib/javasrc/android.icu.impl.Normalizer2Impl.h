#ifndef __android_icu_impl_Normalizer2Impl__
#define __android_icu_impl_Normalizer2Impl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Normalizer2Impl.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl_S_IsAcceptable.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Trie2_S_ValueMapper.h"
#include "android.icu.impl.Trie2Writable.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.ArrayList.h"

namespace android::icu::impl{
class Normalizer2Impl : public java::lang::Object {
protected:
private:
	static int CANON_HAS_COMPOSITIONS;
	static int CANON_HAS_SET;
	static int CANON_NOT_SEGMENT_STARTER;
	static int CANON_VALUE_MASK;
	static int DATA_FORMAT;
	static std::shared_ptr<android::icu::impl::Normalizer2Impl_S_IsAcceptable> IS_ACCEPTABLE;
	static std::shared_ptr<android::icu::impl::Trie2_S_ValueMapper> segmentStarterMapper;
	std::shared_ptr<android::icu::impl::Trie2_32> canonIterData;
	std::shared_ptr<java::util::ArrayList<android::icu::text::UnicodeSet>> canonStartSets;
	std::shared_ptr<android::icu::util::VersionInfo> dataVersion;
	std::shared_ptr<java::lang::String> extraData;
	int limitNoNo;
	std::shared_ptr<java::lang::String> maybeYesCompositions;
	int minCompNoMaybeCP;
	int minDecompNoCP;
	int minMaybeYes;
	int minNoNo;
	int minYesNo;
	int minYesNoMappingsOnly;
	std::shared_ptr<android::icu::impl::Trie2_16> normTrie;
	std::shared_ptr<unsigned char[]> smallFCD;
	std::shared_ptr<int[]> tccc180;
	void virtual addComposites(int list,std::shared_ptr<android::icu::text::UnicodeSet> set);
	void virtual addToStartSet(std::shared_ptr<android::icu::impl::Trie2Writable> newData,int origin,int decompLead);
	static int combine(std::shared_ptr<java::lang::String> compositions,int list,int trail);
	void virtual decompose(int c,int norm16,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	void virtual enumLcccRange(int start,int end,int norm16,std::shared_ptr<android::icu::text::UnicodeSet> set);
	void virtual enumNorm16PropertyStartsRange(int start,int end,int value,std::shared_ptr<android::icu::text::UnicodeSet> set);
	int virtual findNextCompBoundary(std::shared_ptr<java::lang::CharSequence> s,int p,int limit);
	int virtual findNextFCDBoundary(std::shared_ptr<java::lang::CharSequence> s,int p,int limit);
	int virtual findPreviousCompBoundary(std::shared_ptr<java::lang::CharSequence> s,int p);
	int virtual findPreviousFCDBoundary(std::shared_ptr<java::lang::CharSequence> s,int p);
	int virtual getCCFromNoNo(int norm16);
	int virtual getCompositionsList(int norm16);
	int virtual getCompositionsListForComposite(int norm16);
	int virtual getCompositionsListForDecompYes(int norm16);
	bool virtual hasCompBoundaryBefore(int c,int norm16);
	bool virtual isCompYesAndZeroCC(int norm16);
	bool virtual isDecompNoAlgorithmic(int norm16);
	bool virtual isDecompYesAndZeroCC(int norm16);
	bool virtual isHangul(int norm16);
	static bool isInert(int norm16);
	static bool isJamoL(int norm16);
	static bool isJamoVT(int norm16);
	bool virtual isMaybe(int norm16);
	bool virtual isMaybeOrNonZeroCC(int norm16);
	bool virtual isMostDecompYesAndZeroCC(int norm16);
	int virtual mapAlgorithmic(int c,int norm16);
	void virtual recompose(std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer,int recomposeStartIndex,bool onlyContiguous);
public:
	static int COMP_1_LAST_TUPLE;
	static int COMP_1_TRAIL_LIMIT;
	static int COMP_1_TRAIL_MASK;
	static int COMP_1_TRAIL_SHIFT;
	static int COMP_1_TRIPLE;
	static int COMP_2_TRAIL_MASK;
	static int COMP_2_TRAIL_SHIFT;
	static int IX_COUNT;
	static int IX_EXTRA_DATA_OFFSET;
	static int IX_LIMIT_NO_NO;
	static int IX_MIN_COMP_NO_MAYBE_CP;
	static int IX_MIN_DECOMP_NO_CP;
	static int IX_MIN_MAYBE_YES;
	static int IX_MIN_NO_NO;
	static int IX_MIN_YES_NO;
	static int IX_MIN_YES_NO_MAPPINGS_ONLY;
	static int IX_NORM_TRIE_OFFSET;
	static int IX_RESERVED3_OFFSET;
	static int IX_SMALL_FCD_OFFSET;
	static int IX_TOTAL_SIZE;
	static int JAMO_L;
	static int JAMO_VT;
	static int MAPPING_HAS_CCC_LCCC_WORD;
	static int MAPPING_HAS_RAW_MAPPING;
	static int MAPPING_LENGTH_MASK;
	static int MAPPING_NO_COMP_BOUNDARY_AFTER;
	static int MAX_DELTA;
	static int MIN_CCC_LCCC_CP;
	static int MIN_NORMAL_MAYBE_YES;
	static int MIN_YES_YES_WITH_CC;
	static void static_cinit();
	Normalizer2Impl();
	static int getCCFromYesOrMaybe(int norm16);
	void virtual addCanonIterPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set);
	void virtual addLcccChars(std::shared_ptr<android::icu::text::UnicodeSet> set);
	void virtual addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set);
	bool virtual compose(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,bool onlyContiguous,bool doCompose,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	void virtual composeAndAppend(std::shared_ptr<java::lang::CharSequence> s,bool doCompose,bool onlyContiguous,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	int virtual composePair(int a,int b);
	int virtual composeQuickCheck(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,bool onlyContiguous,bool doSpan);
	int virtual decompose(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	std::shared_ptr<java::lang::Appendable> virtual decompose(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<java::lang::StringBuilder> dest);
	void virtual decompose(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,std::shared_ptr<java::lang::StringBuilder> dest,int cVar0);
	void virtual decomposeAndAppend(std::shared_ptr<java::lang::CharSequence> s,bool doDecompose,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	void virtual decomposeShort(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	std::shared_ptr<android::icu::impl::Normalizer2Impl> virtual ensureCanonIterData();
	int virtual getCC(int norm16);
	bool virtual getCanonStartSet(int c,std::shared_ptr<android::icu::text::UnicodeSet> set);
	int virtual getCompQuickCheck(int norm16);
	std::shared_ptr<java::lang::String> virtual getDecomposition(int c);
	int virtual getFCD16(int c);
	int virtual getFCD16FromBelow180(int c);
	int virtual getFCD16FromNormData(int c);
	int virtual getNorm16(int c);
	std::shared_ptr<android::icu::impl::Trie2_16> virtual getNormTrie();
	std::shared_ptr<java::lang::String> virtual getRawDecomposition(int c);
	int virtual getTrailCCFromCompYesAndZeroCC(std::shared_ptr<java::lang::CharSequence> s,int cpStart,int cpLimit);
	bool virtual hasCompBoundaryAfter(int c,bool onlyContiguous,bool testInert);
	bool virtual hasCompBoundaryBefore(int c);
	bool virtual hasDecompBoundary(int c,bool before);
	bool virtual hasFCDBoundaryAfter(int c);
	bool virtual hasFCDBoundaryBefore(int c);
	bool virtual isAlgorithmicNoNo(int norm16);
	bool virtual isCanonSegmentStarter(int c);
	bool virtual isCompNo(int norm16);
	bool virtual isDecompInert(int c);
	bool virtual isDecompYes(int norm16);
	bool virtual isFCDInert(int c);
	std::shared_ptr<android::icu::impl::Normalizer2Impl> virtual load(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<android::icu::impl::Normalizer2Impl> virtual load(std::shared_ptr<java::nio::ByteBuffer> bytes);
	int virtual makeFCD(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	void virtual makeFCDAndAppend(std::shared_ptr<java::lang::CharSequence> s,bool doMakeFCD,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer);
	bool virtual singleLeadMightHaveNonZeroFCD16(int lead);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Normalizer2Impl::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Normalizer2Impl(){
	}

}; // class Normalizer2Impl
}; // namespace android::icu::impl

#endif //__android_icu_impl_Normalizer2Impl__

