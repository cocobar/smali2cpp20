#ifndef __android_icu_impl_coll_CollationWeights__
#define __android_icu_impl_coll_CollationWeights__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationWeights.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationWeights_S_WeightRange.h"
#include "java.lang.Object.h"

namespace android::icu::impl::coll{
class CollationWeights : public java::lang::Object {
protected:
private:
	std::shared_ptr<int[]> maxBytes;
	int middleLength;
	std::shared_ptr<int[]> minBytes;
	int rangeCount;
	int rangeIndex;
	std::shared_ptr<std::vector<android::icu::impl::coll::CollationWeights_S_WeightRange>> ranges;
	bool virtual allocWeightsInMinLengthRanges(int n,int minLength);
	bool virtual allocWeightsInShortRanges(int n,int minLength);
	int virtual countBytes(int idx);
	static long long decWeightTrail(long long weight,int length);
	static int getWeightByte(long long weight,int idx);
	bool virtual getWeightRanges(long long lowerLimit,long long upperLimit);
	static int getWeightTrail(long long weight,int length);
	long long virtual incWeight(long long weight,int length);
	long long virtual incWeightByOffset(long long weight,int length,int offset);
	static long long incWeightTrail(long long weight,int length);
	void virtual lengthenRange(std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> range);
	static long long setWeightByte(long long weight,int idx,int b);
	static long long setWeightTrail(long long weight,int length,int trail);
	static long long truncateWeight(long long weight,int length);
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	CollationWeights();
	static int lengthOfWeight(long long weight);
	bool virtual allocWeights(long long lowerLimit,long long upperLimit,int n);
	void virtual initForPrimary(bool compressible);
	void virtual initForSecondary();
	void virtual initForTertiary();
	long long virtual nextWeight();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationWeights::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationWeights(){
	}

}; // class CollationWeights
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationWeights__

