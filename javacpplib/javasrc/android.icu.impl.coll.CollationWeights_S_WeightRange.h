#ifndef __android_icu_impl_coll_CollationWeights_S_WeightRange__
#define __android_icu_impl_coll_CollationWeights_S_WeightRange__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationWeights$WeightRange.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"

namespace android::icu::impl::coll{
class CollationWeights_S_WeightRange : public java::lang::Comparable<android::icu::impl::coll::CollationWeights_S_WeightRange> {
protected:
private:
	CollationWeights_S_WeightRange();
public:
	int count;
	long long end;
	int length;
	long long start;
	CollationWeights_S_WeightRange(std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> _this0);
	int virtual compareTo(std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> other);
public:
	virtual ~CollationWeights_S_WeightRange(){
	}

}; // class CollationWeights_S_WeightRange
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationWeights_S_WeightRange__

