// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationWeights.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationWeights_S_WeightRange.h"
#include "android.icu.impl.coll.CollationWeights.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.util.Arrays.h"

static android::icu::impl::coll::CollationWeights::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationWeights::static_cinit()
{
	
	android::icu::impl::coll::CollationWeights::_assertionsDisabled = ( android::icu::impl::coll::CollationWeights()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::impl::coll::CollationWeights::CollationWeights()
{
	
	int cVar0;
	
	cVar0 = 0x5;
	// 058    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->minBytes = std::make_shared<std::vector<int[]>>(cVar0);
	this->maxBytes = std::make_shared<std::vector<int[]>>(cVar0);
	this->ranges = std::make_shared<std::vector<std::vector<android::icu::impl::coll::CollationWeights_S_WeightRange>>>(0x7);
	return;

}
// .method private allocWeightsInMinLengthRanges(II)Z
bool android::icu::impl::coll::CollationWeights::allocWeightsInMinLengthRanges(int n,int minLength)
{
	
	int count;
	int minLengthRangeCount;
	int nextCountBytes;
	long long start;
	long long end;
	int i;
	int count2;
	int count1;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> cVar1;
	
	//    .param p1, "n"    # I
	//    .param p2, "minLength"    # I
	count = 0x0;
	//    .local v2, "count":I
	minLengthRangeCount = 0x0;
	//    .local v8, "minLengthRangeCount":I
label_goto_2:
	if ( minLengthRangeCount >= this->rangeCount )
		goto label_cond_20;
	if ( this->ranges[minLengthRangeCount]->length != minLength )
		goto label_cond_20;
	count = (count +  this->ranges[minLengthRangeCount]->count);
	minLengthRangeCount = ( minLengthRangeCount + 0x1);
	goto label_goto_2;
	// 132    .line 498
label_cond_20:
	nextCountBytes = this->countBytes(( minLength + 0x1));
	//    .local v9, "nextCountBytes":I
	if ( n <= (count * nextCountBytes) )
		goto label_cond_30;
	return 0x0;
	// 154    .line 502
label_cond_30:
	start = this->ranges[0x0]->start;
	//    .local v10, "start":J
	end = this->ranges[0x0]->end;
	//    .local v6, "end":J
	i = 0x1;
	//    .local v5, "i":I
label_goto_43:
	if ( i >= minLengthRangeCount )
		goto label_cond_70;
	if ( (this->ranges[i]->start > start) >= 0 )
		goto label_cond_59;
	start = this->ranges[i]->start;
label_cond_59:
	if ( (this->ranges[i]->end > end) <= 0 )
		goto label_cond_6d;
	end = this->ranges[i]->end;
label_cond_6d:
	i = ( i + 0x1);
	goto label_goto_43;
	// 235    .line 516
label_cond_70:
	count2 = ((n - count) / ( nextCountBytes + -0x1));
	//    .local v4, "count2":I
	count1 = (count - count2);
	//    .local v3, "count1":I
	if ( !(count2) )  
		goto label_cond_81;
	if ( ((count2 * nextCountBytes) +  count1) >= n )
		goto label_cond_96;
label_cond_81:
	count2 = ( count2 + 0x1);
	count1 = ( count1 + -0x1);
	if ( android::icu::impl::coll::CollationWeights::_assertionsDisabled )     
		goto label_cond_96;
	if ( ((count2 * nextCountBytes) +  count1) >= n )
		goto label_cond_96;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 285    .line 525
label_cond_96:
	this->ranges[0x0]->start = start;
	if ( count1 )     
		goto label_cond_c6;
	this->ranges[0x0]->end = end;
	this->ranges[0x0]->count = count;
	this->lengthenRange(this->ranges[0x0]);
	this->rangeCount = 0x1;
label_goto_c4:
	return 0x1;
	// 348    .line 539
label_cond_c6:
	this->ranges[0x0]->end = this->incWeightByOffset(start, minLength, ( count1 + -0x1));
	this->ranges[0x0]->count = count1;
	if ( this->ranges[0x1] )     
		goto label_cond_f8;
	cVar1 = std::make_shared<android::icu::impl::coll::CollationWeights_S_WeightRange>(0x0);
	this->ranges[0x1] = cVar1;
label_cond_f8:
	this->ranges[0x1]->start = this->incWeight(this->ranges[0x0]->end, minLength);
	this->ranges[0x1]->end = end;
	this->ranges[0x1]->length = minLength;
	this->ranges[0x1]->count = count2;
	this->lengthenRange(this->ranges[0x1]);
	this->rangeCount = 0x2;
	goto label_goto_c4;

}
// .method private allocWeightsInShortRanges(II)Z
bool android::icu::impl::coll::CollationWeights::allocWeightsInShortRanges(int n,int minLength)
{
	
	bool cVar0;
	int cVar1;
	int i;
	int n;
	
	//    .param p1, "n"    # I
	//    .param p2, "minLength"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	i = 0x0;
	//    .local v0, "i":I
label_goto_3:
	if ( i >= this->rangeCount )
		goto label_cond_41;
	if ( this->ranges[i]->length >  ( minLength + 0x1) )
		goto label_cond_41;
	if ( n >  this->ranges[i]->count )
		goto label_cond_37;
	if ( this->ranges[i]->length <= minLength )
		goto label_cond_27;
	this->ranges[i]->count = n;
label_cond_27:
	this->rangeCount = ( i + 0x1);
	if ( this->rangeCount <= cVar0 )
		goto label_cond_36;
	java::util::Arrays::sort(this->ranges, cVar1, this->rangeCount);
label_cond_36:
	return cVar0;
	// 571    .line 481
label_cond_37:
	n = (n -  this->ranges[i]->count);
	i = ( i + 0x1);
	goto label_goto_3;
	// 586    .line 483
label_cond_41:
	return cVar1;

}
// .method private countBytes(I)I
int android::icu::impl::coll::CollationWeights::countBytes(int idx)
{
	
	//    .param p1, "idx"    # I
	return ( (this->maxBytes[idx] -  this->minBytes[idx]) + 0x1);

}
// .method private static decWeightTrail(JI)J
long long android::icu::impl::coll::CollationWeights::decWeightTrail(long long weight,int length)
{
	
	//    .param p0, "weight"    # J
	//    .param p2, "length"    # I
	return (weight - (0x1 << ( ( length - 0x4) * 0x8)));

}
// .method private static getWeightByte(JI)I
int android::icu::impl::coll::CollationWeights::getWeightByte(long long weight,int idx)
{
	
	//    .param p0, "weight"    # J
	//    .param p2, "idx"    # I
	return android::icu::impl::coll::CollationWeights::getWeightTrail(weight, idx);

}
// .method private getWeightRanges(JJ)Z
bool android::icu::impl::coll::CollationWeights::getWeightRanges(long long lowerLimit,long long upperLimit)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int lowerLength;
	int upperLength;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared<std::vector<std::vector<android::icu::impl::coll::CollationWeights_S_WeightRange>>> lower;
	std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> middle;
	std::shared<std::vector<std::vector<android::icu::impl::coll::CollationWeights_S_WeightRange>>> upper;
	long long weight;
	int length;
	int trail;
	std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> cVar3;
	std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> cVar4;
	int cVar5;
	int cVar6;
	bool cVar10;
	long long lowerEnd;
	long long upperStart;
	int merged;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	std::shared_ptr<java::lang::Object> cVar9;
	
	//    .param p1, "lowerLimit"    # J
	//    .param p3, "upperLimit"    # J
	if ( android::icu::impl::coll::CollationWeights::_assertionsDisabled )     
		goto label_cond_10;
	if ( (lowerLimit > 0x0) )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 669    .line 291
label_cond_10:
	if ( android::icu::impl::coll::CollationWeights::_assertionsDisabled )     
		goto label_cond_20;
	if ( (upperLimit > 0x0) )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 687    .line 294
label_cond_20:
	lowerLength = android::icu::impl::coll::CollationWeights::lengthOfWeight(lowerLimit);
	//    .local v8, "lowerLength":I
	upperLength = android::icu::impl::coll::CollationWeights::lengthOfWeight(upperLimit);
	//    .local v13, "upperLength":I
	if ( android::icu::impl::coll::CollationWeights::_assertionsDisabled )     
		goto label_cond_3c;
	if ( lowerLength >= this->middleLength )
		goto label_cond_3c;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 721    .line 302
label_cond_3c:
	if ( (lowerLimit > upperLimit) < 0 ) 
		goto label_cond_43;
	return 0x0;
	// 732    .line 308
label_cond_43:
	if ( lowerLength >= upperLength )
		goto label_cond_52;
	if ( (lowerLimit > android::icu::impl::coll::CollationWeights::truncateWeight(upperLimit, lowerLength)) )     
		goto label_cond_52;
	return 0x0;
	// 752    .line 316
label_cond_52:
	lower = std::make_shared<std::vector<std::vector<android::icu::impl::coll::CollationWeights_S_WeightRange>>>(0x5);
	//    .local v5, "lower":[Landroid/icu/impl/coll/CollationWeights$WeightRange;
	middle = std::make_shared<android::icu::impl::coll::CollationWeights_S_WeightRange>(0x0);
	//    .local v10, "middle":Landroid/icu/impl/coll/CollationWeights$WeightRange;
	upper = std::make_shared<std::vector<std::vector<android::icu::impl::coll::CollationWeights_S_WeightRange>>>(0x5);
	//    .local v12, "upper":[Landroid/icu/impl/coll/CollationWeights$WeightRange;
	weight = lowerLimit;
	//    .local v16, "weight":J
	length = lowerLength;
	//    .local v4, "length":I
label_goto_6a:
	if ( length <= this->middleLength )
		goto label_cond_d6;
	trail = android::icu::impl::coll::CollationWeights::getWeightTrail(weight, length);
	//    .local v11, "trail":I
	if ( trail >= this->maxBytes[length] )
		goto label_cond_cd;
	cVar3 = std::make_shared<android::icu::impl::coll::CollationWeights_S_WeightRange>(0x0);
	lower[length] = cVar3;
	lower[length]->start = android::icu::impl::coll::CollationWeights::incWeightTrail(weight, length);
	lower[length]->end = android::icu::impl::coll::CollationWeights::setWeightTrail(weight, length, this->maxBytes[length]);
	lower[length]->length = length;
	lower[length]->count = (this->maxBytes[length] - trail);
label_cond_cd:
	weight = android::icu::impl::coll::CollationWeights::truncateWeight(weight, ( length + -0x1));
	length = ( length + -0x1);
	goto label_goto_6a;
	// 907    .line 346
	// 908    .end local v11    # "trail":I
label_cond_d6:
	if ( (weight > 0xff000000L) >= 0 )
		goto label_cond_15c;
	middle->start = android::icu::impl::coll::CollationWeights::incWeightTrail(weight, this->middleLength);
label_goto_ed:
	weight = upperLimit;
	length = upperLength;
label_goto_f0:
	if ( length <= this->middleLength )
		goto label_cond_166;
	trail = android::icu::impl::coll::CollationWeights::getWeightTrail(weight, length);
	//    .restart local v11    # "trail":I
	if ( trail <= this->minBytes[length] )
		goto label_cond_153;
	cVar4 = std::make_shared<android::icu::impl::coll::CollationWeights_S_WeightRange>(0x0);
	upper[length] = cVar4;
	upper[length]->start = android::icu::impl::coll::CollationWeights::setWeightTrail(weight, length, this->minBytes[length]);
	upper[length]->end = android::icu::impl::coll::CollationWeights::decWeightTrail(weight, length);
	upper[length]->length = length;
	upper[length]->count = (trail - this->minBytes[length]);
label_cond_153:
	weight = android::icu::impl::coll::CollationWeights::truncateWeight(weight, ( length + -0x1));
	length = ( length + -0x1);
	goto label_goto_f0;
	// 1058    .line 351
	// 1059    .end local v11    # "trail":I
label_cond_15c:
	middle->start = 0xffffffffL;
	goto label_goto_ed;
	// 1069    .line 366
label_cond_166:
	middle->end = android::icu::impl::coll::CollationWeights::decWeightTrail(weight, this->middleLength);
	middle->length = this->middleLength;
	if ( (middle->end > middle->start) < 0 ) 
		goto label_cond_228;
	middle->count = ( (int)(_shrll((middle->end - middle->start),( ( this->middleLength - 0x4) * 0x8))) + 0x1);
label_cond_1ab:
	this->rangeCount = 0x0;
	if ( middle->count <= 0 )
		goto label_cond_1cb;
	this->ranges[0x0] = middle;
	this->rangeCount = 0x1;
label_cond_1cb:
	length = ( this->middleLength + 0x1);
label_goto_1d3:
	if ( length >  0x4 )
		goto label_cond_334;
	if ( !(upper[length]) )  
		goto label_cond_1ff;
	if ( upper[length]->count <= 0 )
		goto label_cond_1ff;
	cVar5 = this->rangeCount;
	this->rangeCount = ( cVar5 + 0x1);
	this->ranges[cVar5] = upper[length];
label_cond_1ff:
	if ( !(lower[length]) )  
		goto label_cond_225;
	if ( lower[length]->count <= 0 )
		goto label_cond_225;
	cVar6 = this->rangeCount;
	this->rangeCount = ( cVar6 + 0x1);
	this->ranges[cVar6] = lower[length];
label_cond_225:
	length = ( length + 0x1);
	goto label_goto_1d3;
	// 1285    .line 374
label_cond_228:
	length = 0x4;
label_goto_229:
	if ( length <= this->middleLength )
		goto label_cond_1ab;
	if ( !(lower[length]) )  
		goto label_cond_330;
	if ( !(upper[length]) )  
		goto label_cond_330;
	if ( lower[length]->count <= 0 )
		goto label_cond_330;
	if ( upper[length]->count <= 0 )
		goto label_cond_330;
	lowerEnd = lower[length]->end;
	//    .local v6, "lowerEnd":J
	upperStart = upper[length]->start;
	//    .local v14, "upperStart":J
	merged = 0x0;
	//    .local v9, "merged":Z
	if ( (lowerEnd > upperStart) <= 0 )
		goto label_cond_2d8;
	if ( android::icu::impl::coll::CollationWeights::_assertionsDisabled )     
		goto label_cond_27e;
	if ( !((android::icu::impl::coll::CollationWeights::truncateWeight(lowerEnd, ( length + -0x1)) > android::icu::impl::coll::CollationWeights::truncateWeight(upperStart, ( length + -0x1)))) )  
		goto label_cond_27e;
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 1388    .line 397
label_cond_27e:
	lower[length]->end = upper[length]->end;
	lower[length]->count = ( (android::icu::impl::coll::CollationWeights::getWeightTrail(lower[length]->end, length) - android::icu::impl::coll::CollationWeights::getWeightTrail(lower[length]->start, length)) + 0x1);
	merged = 0x1;
label_cond_2b7:
label_goto_2b7:
	if ( !(merged) )  
		goto label_cond_330;
	upper[length]->count = 0x0;
label_goto_2c3:
	length = ( length + -0x1);
	if ( length <= this->middleLength )
		goto label_cond_1ab;
	upper[length] = 0x0;
	lower[length] = 0x0;
	goto label_goto_2c3;
	// 1495    .line 404
label_cond_2d8:
	if ( (lowerEnd > upperStart) )     
		goto label_cond_2fc;
	if ( android::icu::impl::coll::CollationWeights::_assertionsDisabled )     
		goto label_cond_2b7;
	if ( this->minBytes[length] <  this->maxBytes[length] )
		goto label_cond_2b7;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 1534    .line 408
label_cond_2fc:
	if ( (this->incWeight(lowerEnd, length) > upperStart) )     
		goto label_cond_2b7;
	lower[length]->end = upper[length]->end;
	cVar9 = lower[length];
	cVar9->count = (cVar9->count + upper[length]->count);
	merged = 0x1;
	goto label_goto_2b7;
	// 1593    .line 374
	// 1594    .end local v6    # "lowerEnd":J
	// 1595    .end local v9    # "merged":Z
	// 1596    .end local v14    # "upperStart":J
label_cond_330:
	length = ( length + -0x1);
	goto label_goto_229;
	// 1602    .line 458
label_cond_334:
	if ( this->rangeCount <= 0 )
		goto label_cond_33f;
	cVar10 = 0x1;
label_goto_33e:
	return cVar10;
label_cond_33f:
	cVar10 = 0x0;
	goto label_goto_33e;

}
// .method private static getWeightTrail(JI)I
int android::icu::impl::coll::CollationWeights::getWeightTrail(long long weight,int length)
{
	
	//    .param p0, "weight"    # J
	//    .param p2, "length"    # I
	return ( (int)(_shrll(weight,( ( length - 0x4) * 0x8))) & 0xff);

}
// .method private incWeight(JI)J
long long android::icu::impl::coll::CollationWeights::incWeight(long long weight,int length)
{
	
	int b;
	long long weight;
	int length;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p1, "weight"    # J
	//    .param p3, "length"    # I
label_cond_0:
	b = android::icu::impl::coll::CollationWeights::getWeightByte(weight, length);
	//    .local v0, "b":I
	if ( b >= this->maxBytes[length] )
		goto label_cond_11;
	return android::icu::impl::coll::CollationWeights::setWeightByte(weight, length, ( b + 0x1));
	// 1672    .line 253
label_cond_11:
	weight = android::icu::impl::coll::CollationWeights::setWeightByte(weight, length, this->minBytes[length]);
	length = ( length + -0x1);
	if ( android::icu::impl::coll::CollationWeights::_assertionsDisabled )     
		goto label_cond_0;
	if ( length > 0 ) 
		goto label_cond_0;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;

}
// .method private incWeightByOffset(JII)J
long long android::icu::impl::coll::CollationWeights::incWeightByOffset(long long weight,int length,int offset)
{
	
	int cVar0;
	int cVar1;
	long long weight;
	int offset;
	int length;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	
	//    .param p1, "weight"    # J
	//    .param p3, "length"    # I
	//    .param p4, "offset"    # I
label_cond_0:
	cVar0 = (offset +  android::icu::impl::coll::CollationWeights::getWeightByte(weight, length));
	if ( cVar0 >  this->maxBytes[length] )
		goto label_cond_10;
	return android::icu::impl::coll::CollationWeights::setWeightByte(weight, length, cVar0);
	// 1728    .line 267
label_cond_10:
	cVar1 = (cVar0 -  this->minBytes[length]);
	weight = android::icu::impl::coll::CollationWeights::setWeightByte(weight, length, (this->minBytes[length] +  (cVar1 % this->countBytes(length))));
	offset = (cVar1 /  this->countBytes(length));
	length = ( length + -0x1);
	if ( android::icu::impl::coll::CollationWeights::_assertionsDisabled )     
		goto label_cond_0;
	if ( length > 0 ) 
		goto label_cond_0;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;

}
// .method private static incWeightTrail(JI)J
long long android::icu::impl::coll::CollationWeights::incWeightTrail(long long weight,int length)
{
	
	//    .param p0, "weight"    # J
	//    .param p2, "length"    # I
	return ((0x1 << ( ( length - 0x4) * 0x8)) +  weight);

}
// .method public static lengthOfWeight(J)I
int android::icu::impl::coll::CollationWeights::lengthOfWeight(long long weight)
{
	
	long long cVar0;
	
	//    .param p0, "weight"    # J
	cVar0 = 0x0;
	if ( ((0xffffff &  weight) > cVar0) )     
		goto label_cond_c;
	return 0x1;
	// 1818    .line 184
label_cond_c:
	if ( ((0xffff &  weight) > cVar0) )     
		goto label_cond_16;
	return 0x2;
	// 1833    .line 186
label_cond_16:
	if ( ((0xff &  weight) > cVar0) )     
		goto label_cond_1f;
	return 0x3;
	// 1848    .line 189
label_cond_1f:
	return 0x4;

}
// .method private lengthenRange(Landroid/icu/impl/coll/CollationWeights$WeightRange;)V
void android::icu::impl::coll::CollationWeights::lengthenRange(std::shared_ptr<android::icu::impl::coll::CollationWeights_S_WeightRange> range)
{
	
	int length;
	
	//    .param p1, "range"    # Landroid/icu/impl/coll/CollationWeights$WeightRange;
	length = ( range->length + 0x1);
	//    .local v0, "length":I
	range->start = android::icu::impl::coll::CollationWeights::setWeightTrail(range->start, length, this->minBytes[length]);
	range->end = android::icu::impl::coll::CollationWeights::setWeightTrail(range->end, length, this->maxBytes[length]);
	range->count = (range->count *  this->countBytes(length));
	range->length = length;
	return;

}
// .method private static setWeightByte(JII)J
long long android::icu::impl::coll::CollationWeights::setWeightByte(long long weight,int idx,int b)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p0, "weight"    # J
	//    .param p2, "idx"    # I
	//    .param p3, "b"    # I
	cVar0 = ( idx * 0x8);
	if ( cVar0 >= 0x20 )
		goto label_cond_1c;
	//    .local v0, "mask":J
label_goto_d:
	cVar1 = ( cVar0 - 0x20);
	return ((weight & (mask |  (0xffffff00L << cVar1))) |  ((long long)(b) << cVar1));
	// 1953    .line 222
	// 1954    .end local v0    # "mask":J
label_cond_1c:
	//    .restart local v0    # "mask":J
	goto label_goto_d;

}
// .method private static setWeightTrail(JII)J
long long android::icu::impl::coll::CollationWeights::setWeightTrail(long long weight,int length,int trail)
{
	
	int cVar0;
	
	//    .param p0, "weight"    # J
	//    .param p2, "length"    # I
	//    .param p3, "trail"    # I
	cVar0 = ( ( length - 0x4) * 0x8);
	return (((0xffffff00L << cVar0) &  weight) |  ((long long)(trail) << cVar0));

}
// .method private static truncateWeight(JI)J
long long android::icu::impl::coll::CollationWeights::truncateWeight(long long weight,int length)
{
	
	//    .param p0, "weight"    # J
	//    .param p2, "length"    # I
	return ((0xffffffffL << ( ( length - 0x4) * 0x8)) &  weight);

}
// .method public allocWeights(JJI)Z
bool android::icu::impl::coll::CollationWeights::allocWeights(long long lowerLimit,long long upperLimit,int n)
{
	
	bool cVar0;
	int minLength;
	int i;
	
	//    .param p1, "lowerLimit"    # J
	//    .param p3, "upperLimit"    # J
	//    .param p5, "n"    # I
	cVar0 = 0x0;
	if ( this->getWeightRanges(lowerLimit, upperLimit) )     
		goto label_cond_8;
	return cVar0;
	// 2031    .line 101
label_cond_8:
	minLength = this->ranges[cVar0]->length;
	//    .local v1, "minLength":I
	if ( !(this->allocWeightsInShortRanges(n, minLength)) )  
		goto label_cond_26;
label_cond_14:
	this->rangeIndex = cVar0;
	if ( this->rangeCount >= this->ranges->size() )
		goto label_cond_24;
	this->ranges[this->rangeCount] = 0x0;
label_cond_24:
	return 0x1;
	// 2075    .line 105
label_cond_26:
	if ( minLength != 0x4 )
		goto label_cond_2a;
	return cVar0;
	// 2084    .line 111
label_cond_2a:
	if ( this->allocWeightsInMinLengthRanges(n, minLength) )     
		goto label_cond_14;
	i = 0x0;
	//    .local v0, "i":I
label_goto_31:
	if ( this->ranges[i]->length != minLength )
		goto label_cond_8;
	this->lengthenRange(this->ranges[i]);
	i = ( i + 0x1);
	goto label_goto_31;

}
// .method public initForPrimary(Z)V
void android::icu::impl::coll::CollationWeights::initForPrimary(bool compressible)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	
	//    .param p1, "compressible"    # Z
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x1;
	cVar3 = 0xff;
	cVar4 = 0x2;
	this->middleLength = cVar2;
	this->minBytes[cVar2] = cVar1;
	this->maxBytes[cVar2] = cVar3;
	if ( !(compressible) )  
		goto label_cond_2d;
	this->minBytes[cVar4] = cVar0;
	this->maxBytes[cVar4] = 0xfe;
label_goto_1c:
	this->minBytes[cVar1] = cVar4;
	this->maxBytes[cVar1] = cVar3;
	this->minBytes[cVar0] = cVar4;
	this->maxBytes[cVar0] = cVar3;
	return;
	// 2185    .line 37
label_cond_2d:
	this->minBytes[cVar4] = cVar4;
	this->maxBytes[cVar4] = cVar3;
	goto label_goto_1c;

}
// .method public initForSecondary()V
void android::icu::impl::coll::CollationWeights::initForSecondary()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	
	cVar0 = 0x4;
	cVar1 = 0x1;
	cVar2 = 0x3;
	cVar3 = 0x2;
	cVar4 = 0x0;
	this->middleLength = cVar2;
	this->minBytes[cVar1] = cVar4;
	this->maxBytes[cVar1] = cVar4;
	this->minBytes[cVar3] = cVar4;
	this->maxBytes[cVar3] = cVar4;
	this->minBytes[cVar2] = cVar3;
	this->maxBytes[cVar2] = 0xff;
	this->minBytes[cVar0] = cVar3;
	this->maxBytes[cVar0] = 0xff;
	return;

}
// .method public initForTertiary()V
void android::icu::impl::coll::CollationWeights::initForTertiary()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	
	cVar0 = 0x4;
	cVar1 = 0x1;
	cVar2 = 0x3;
	cVar3 = 0x2;
	cVar4 = 0x0;
	this->middleLength = cVar2;
	this->minBytes[cVar1] = cVar4;
	this->maxBytes[cVar1] = cVar4;
	this->minBytes[cVar3] = cVar4;
	this->maxBytes[cVar3] = cVar4;
	this->minBytes[cVar2] = cVar3;
	this->maxBytes[cVar2] = 0x3f;
	this->minBytes[cVar0] = cVar3;
	this->maxBytes[cVar0] = 0x3f;
	return;

}
// .method public nextWeight()J
long long android::icu::impl::coll::CollationWeights::nextWeight()
{
	
	long long range;
	long long weight;
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	if ( this->rangeIndex <  this->rangeCount )
		goto label_cond_c;
	return 0xffffffffL;
	// 2345    .line 145
label_cond_c:
	range = this->ranges[this->rangeIndex];
	//    .local v0, "range":Landroid/icu/impl/coll/CollationWeights$WeightRange;
	weight = range->start;
	//    .local v2, "weight":J
	cVar0 = ( range->count + -0x1);
	range->count = cVar0;
	if ( cVar0 )     
		goto label_cond_23;
	this->rangeIndex = ( this->rangeIndex + 0x1);
label_cond_22:
	return weight;
	// 2378    .line 152
label_cond_23:
	range->start = this->incWeight(weight, range->length);
	if ( android::icu::impl::coll::CollationWeights::_assertionsDisabled )     
		goto label_cond_22;
	if ( (range->start > range->end) <= 0 )
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;

}


