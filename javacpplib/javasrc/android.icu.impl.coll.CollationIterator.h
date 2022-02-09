#ifndef __android_icu_impl_coll_CollationIterator__
#define __android_icu_impl_coll_CollationIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationIterator_S_CEBuffer.h"
#include "android.icu.impl.coll.CollationIterator_S_SkippedState.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationIterator : public java::lang::Object {
protected:
	static long long NO_CP_AND_CE32;
	std::shared_ptr<android::icu::impl::coll::CollationData> data;
	std::shared_ptr<android::icu::impl::Trie2_32> trie;
	static bool isLeadSurrogate(int c);
	static bool isTrailSurrogate(int c);
	void virtual appendCEsFromCE32(std::shared_ptr<android::icu::impl::coll::CollationData> d,int c,int ce32,bool forward);
	void backwardNumCodePoints(int var0) = 0;
	bool virtual forbidSurrogateCodePoints();
	void forwardNumCodePoints(int var0) = 0;
	int virtual getCE32FromBuilderData(int ce32);
	int virtual getDataCE32(int c);
	char virtual handleGetTrailSurrogate();
	long long virtual handleNextCE32();
	long long virtual makeCodePointAndCE32Pair(int c,int ce32);
	void virtual reset();
	void virtual reset(bool numeric);
private:
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_CEBuffer> ceBuffer;
	int cesIndex;
	bool isNumeric;
	int numCpFwd;
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_SkippedState> skipped;
	void virtual appendNumericCEs(int ce32,bool forward);
	void virtual appendNumericSegmentCEs(std::shared_ptr<java::lang::CharSequence> digits);
	void virtual backwardNumSkipped(int cVar0);
	int virtual getCE32FromPrefix(std::shared_ptr<android::icu::impl::coll::CollationData> d,int ce32);
	static bool isSurrogate(int c);
	int virtual nextCE32FromContraction(std::shared_ptr<android::icu::impl::coll::CollationData> d,int contractionCE32,std::shared_ptr<java::lang::CharSequence> trieChars,int trieOffset,int ce32,int cVar1);
	int virtual nextCE32FromDiscontiguousContraction(std::shared_ptr<android::icu::impl::coll::CollationData> d,std::shared_ptr<android::icu::util::CharsTrie> suffixes,int cVar4,int lookAhead,int c);
	long long virtual nextCEFromCE32(std::shared_ptr<android::icu::impl::coll::CollationData> d,int c,int ce32);
	int virtual nextSkippedCodePoint();
	long long virtual previousCEUnsafe(int c,std::shared_ptr<android::icu::impl::coll::UVector32> offsets);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d);
	CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d,bool numeric);
	void virtual clearCEs();
	void virtual clearCEsIfNoneRemaining();
	bool virtual equals(std::shared_ptr<java::lang::Object> other);
	int virtual fetchCEs();
	long long virtual getCE(int i);
	long long virtual getCEs();
	int virtual getCEsLength();
	int getOffset() = 0;
	int virtual hashCode();
	long long virtual nextCE();
	int nextCodePoint() = 0;
	long long virtual previousCE(std::shared_ptr<android::icu::impl::coll::UVector32> offsets);
	int previousCodePoint() = 0;
	void resetToOffset(int var0) = 0;
	void virtual setCurrentCE(long long ce);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationIterator(){
	}

}; // class CollationIterator
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationIterator__

