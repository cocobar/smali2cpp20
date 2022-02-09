#ifndef __android_icu_impl_coll_CollationData__
#define __android_icu_impl_coll_CollationData__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationData.smali
#include "java2ctype.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl::coll{
class CollationData : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> EMPTY_INT_ARRAY;
	int virtual addHighScriptRange(std::shared_ptr<short[]> table,int index,int cVar1);
	int virtual addLowScriptRange(std::shared_ptr<short[]> table,int index,int cVar1);
	int virtual getScriptIndex(int script);
	void virtual makeReorderRanges(std::shared_ptr<int[]> reorder,bool latinMustMove,std::shared_ptr<android::icu::impl::coll::UVector32> ranges);
	static std::shared_ptr<java::lang::String> scriptCodeString(int script);
public:
	static bool _assertionsDisabled;
	static int JAMO_CE32S_LENGTH;
	static int MAX_NUM_SPECIAL_REORDER_CODES;
	static int REORDER_RESERVED_AFTER_LATIN;
	static int REORDER_RESERVED_BEFORE_LATIN;
	std::shared_ptr<android::icu::impl::coll::CollationData> base;
	std::shared_ptr<int[]> ce32s;
	std::shared_ptr<long long[]> ces;
	std::shared_ptr<bool[]> compressibleBytes;
	std::shared_ptr<java::lang::String> contexts;
	std::shared_ptr<char[]> fastLatinTable;
	std::shared_ptr<char[]> fastLatinTableHeader;
	std::shared_ptr<int[]> jamoCE32s;
	std::shared_ptr<android::icu::impl::Normalizer2Impl> nfcImpl;
	int numScripts;
	long long numericPrimary;
	std::shared_ptr<long long[]> rootElements;
	std::shared_ptr<char[]> scriptStarts;
	std::shared_ptr<char[]> scriptsIndex;
	std::shared_ptr<android::icu::impl::Trie2_32> trie;
	std::shared_ptr<android::icu::text::UnicodeSet> unsafeBackwardSet;
	static void static_cinit();
	CollationData(std::shared_ptr<android::icu::impl::Normalizer2Impl> nfc);
	int virtual getCE32(int c);
	int virtual getCE32FromContexts(int index);
	int virtual getCE32FromSupplementary(int c);
	long long virtual getCEFromOffsetCE32(int c,int ce32);
	int virtual getEquivalentScripts(int script);
	int virtual getFCD16(int c);
	int virtual getFinalCE32(int cVar0);
	long long virtual getFirstPrimaryForGroup(int script);
	int virtual getGroupForPrimary(long long p);
	int virtual getIndirectCE32(int cVar1);
	long long virtual getLastPrimaryForGroup(int script);
	long long virtual getSingleCE(int c);
	bool virtual isCompressibleLeadByte(int b);
	bool virtual isCompressiblePrimary(long long p);
	bool virtual isDigit(int c);
	bool virtual isUnsafeBackward(int c,bool numeric);
	void virtual makeReorderRanges(std::shared_ptr<int[]> reorder,std::shared_ptr<android::icu::impl::coll::UVector32> ranges);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationData::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationData(){
	}

}; // class CollationData
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationData__

