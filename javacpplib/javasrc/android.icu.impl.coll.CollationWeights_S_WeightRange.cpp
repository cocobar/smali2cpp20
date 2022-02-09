// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationWeights$WeightRange.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationWeights_S_WeightRange.h"

// .method private constructor <init>()V
android::icu::impl::coll::CollationWeights_S_WeightRange::CollationWeights_S_WeightRange()
{
	
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/coll/CollationWeights$WeightRange;)V
android::icu::impl::coll::CollationWeights_S_WeightRange::CollationWeights_S_WeightRange(std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/coll/CollationWeights$WeightRange;
	// 056    invoke-direct {p0}, Landroid/icu/impl/coll/CollationWeights$WeightRange;-><init>()V
	return;

}
// .method public compareTo(Landroid/icu/impl/coll/CollationWeights$WeightRange;)I
int android::icu::impl::coll::CollationWeights_S_WeightRange::compareTo(std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> other)
{
	
	long long l;
	long long r;
	
	//    .param p1, "other"    # Landroid/icu/impl/coll/CollationWeights$WeightRange;
	l = this->start;
	//    .local v0, "l":J
	r = other->start;
	//    .local v2, "r":J
	if ( (l > r) >= 0 )
		goto label_cond_a;
	return -0x1;
	// 086    .line 171
label_cond_a:
	if ( (l > r) <= 0 )
		goto label_cond_10;
	return 0x1;
	// 097    .line 174
label_cond_10:
	return 0x0;

}


