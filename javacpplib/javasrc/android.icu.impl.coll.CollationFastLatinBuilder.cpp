// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationFastLatinBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationFastLatin.h"
#include "android.icu.impl.coll.CollationFastLatinBuilder.h"
#include "android.icu.impl.coll.UVector64.h"
#include "android.icu.util.CharsTrie_S_Entry.h"
#include "android.icu.util.CharsTrie_S_Iterator.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.reflect.Array.h"

static android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled;
static android::icu::impl::coll::CollationFastLatinBuilder::CONTRACTION_FLAG = 0x80000000L;
static android::icu::impl::coll::CollationFastLatinBuilder::NUM_SPECIAL_GROUPS = 0x4;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationFastLatinBuilder::static_cinit()
{
	
	android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled = ( android::icu::impl::coll::CollationFastLatinBuilder()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>()V
android::icu::impl::coll::CollationFastLatinBuilder::CollationFastLatinBuilder()
{
	
	bool cVar0;
	long long cVar1;
	std::shared_ptr<long long[][]> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<android::icu::impl::coll::UVector64> cVar4;
	std::shared_ptr<android::icu::impl::coll::UVector64> cVar5;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	?;
	cVar2 = java::lang::reflect::Array::newInstance(java::lang::Long::TYPE, ?);
	cVar2->checkCast("long long[][]");
	this->charCEs = cVar2;
	this->lastSpecialPrimaries = std::make_shared<std::vector<long long[]>>(0x4);
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	this->result = cVar3;
	this->ce0 = cVar1;
	this->ce1 = cVar1;
	cVar4 = std::make_shared<android::icu::impl::coll::UVector64>();
	this->contractionCEs = cVar4;
	cVar5 = std::make_shared<android::icu::impl::coll::UVector64>();
	this->uniqueCEs = cVar5;
	this->miniCEs = 0x0;
	this->firstDigitPrimary = cVar1;
	this->firstLatinPrimary = cVar1;
	this->lastLatinPrimary = cVar1;
	this->firstShortPrimary = cVar1;
	this->shortPrimaryOverflow = cVar0;
	this->headerLength = cVar0;
	return;

}
// .method private addContractionEntry(IJJ)V
void android::icu::impl::coll::CollationFastLatinBuilder::addContractionEntry(int x,long long cce0,long long cce1)
{
	
	//    .param p1, "x"    # I
	//    .param p2, "cce0"    # J
	//    .param p4, "cce1"    # J
	this->contractionCEs->addElement((long long)(x));
	this->contractionCEs->addElement(cce0);
	this->contractionCEs->addElement(cce1);
	this->addUniqueCE(cce0);
	this->addUniqueCE(cce1);
	return;

}
// .method private addUniqueCE(J)V
void android::icu::impl::coll::CollationFastLatinBuilder::addUniqueCE(long long ce)
{
	
	long long cVar0;
	int i;
	
	//    .param p1, "ce"    # J
	if ( !((ce > 0x0)) )  
		goto label_cond_10;
	if ( (_ushrll(ce,0x20) > 0x1) )     
		goto label_cond_11;
label_cond_10:
	return;
	// 213    .line 392
label_cond_11:
	cVar0 = (ce &  -0xc001);
	i = android::icu::impl::coll::CollationFastLatinBuilder::binarySearch(this->uniqueCEs->getBuffer(), this->uniqueCEs->size(), cVar0);
	//    .local v0, "i":I
	if ( i >= 0 )
		goto label_cond_2d;
	this->uniqueCEs->insertElementAt(cVar0, (~i));
label_cond_2d:
	return;

}
// .method private static final binarySearch([JIJ)I
int android::icu::impl::coll::CollationFastLatinBuilder::binarySearch(std::shared_ptr<long long[]> list,int limit,long long ce)
{
	
	int start;
	int i;
	int cmp;
	int limit;
	
	//    .param p0, "list"    # [J
	//    .param p1, "limit"    # I
	//    .param p2, "ce"    # J
	if ( limit )     
		goto label_cond_4;
	return -0x1;
	// 266    .line 47
label_cond_4:
	start = 0x0;
	//    .local v2, "start":I
label_goto_5:
	i = (int)((((long long)(start) +  (long long)(limit)) /  0x2));
	//    .local v1, "i":I
	cmp = android::icu::impl::coll::CollationFastLatinBuilder::compareInt64AsUnsigned(ce, list[i]);
	//    .local v0, "cmp":I
	if ( cmp )     
		goto label_cond_15;
	return i;
	// 300    .line 53
label_cond_15:
	if ( cmp >= 0 )
		goto label_cond_1d;
	if ( i != start )
		goto label_cond_1b;
	return (~start);
	// 312    .line 57
label_cond_1b:
	limit = i;
	goto label_goto_5;
	// 318    .line 59
label_cond_1d:
	if ( i != start )
		goto label_cond_23;
	return (~( start + 0x1));
	// 329    .line 62
label_cond_23:
	start = i;
	goto label_goto_5;

}
// .method private static final compareInt64AsUnsigned(JJ)I
int android::icu::impl::coll::CollationFastLatinBuilder::compareInt64AsUnsigned(long long a,long long b)
{
	
	long long cVar0;
	long long cVar1;
	long long cVar2;
	
	//    .param p0, "a"    # J
	//    .param p2, "b"    # J
	cVar0 = -0x8000000000000000L;
	cVar1 = (a +  cVar0);
	cVar2 = (b +  cVar0);
	if ( (cVar1 > cVar2) >= 0 )
		goto label_cond_a;
	return -0x1;
	// 360    .line 32
label_cond_a:
	if ( (cVar1 > cVar2) <= 0 )
		goto label_cond_10;
	return 0x1;
	// 371    .line 35
label_cond_10:
	return 0x0;

}
// .method private encodeCharCEs()V
void android::icu::impl::coll::CollationFastLatinBuilder::encodeCharCEs()
{
	
	int cVar0;
	int cVar1;
	int i;
	long long ce;
	int miniCE;
	int expansionIndex;
	
	cVar0 = 0x1c0;
	cVar1 = 0x0;
	//    .local v6, "miniCEsStart":I
	i = 0x0;
	//    .local v3, "i":I
label_goto_a:
	if ( i >= cVar0 )
		goto label_cond_14;
	this->result->append(cVar1);
	i = ( i + 0x1);
	goto label_goto_a;
	// 411    .line 538
label_cond_14:
	//    .local v4, "indexBase":I
	i = 0x0;
label_goto_1b:
	if ( i >= cVar0 )
		goto label_cond_61;
	ce = this->charCEs[i][cVar1];
	//    .local v0, "ce":J
	if ( !(android::icu::impl::coll::CollationFastLatinBuilder::isContractionCharCE(ce)) )  
		goto label_cond_2c;
label_goto_29:
	i = ( i + 0x1);
	goto label_goto_1b;
	// 447    .line 542
label_cond_2c:
	miniCE = this->encodeTwoCEs(ce, this->charCEs[i][0x1]);
	//    .local v5, "miniCE":I
	if ( _ushri(miniCE,0x10) <= 0 )
		goto label_cond_48;
	expansionIndex = (this->result->length() - this->result->length());
	//    .local v2, "expansionIndex":I
	if ( expansionIndex <= 0x3ff )
		goto label_cond_51;
	miniCE = 0x1;
	//    .end local v2    # "expansionIndex":I
label_cond_48:
label_goto_48:
	this->result->setCharAt((this->result->length() + i), (char)(miniCE));
	goto label_goto_29;
	// 499    .line 551
	// 500    .restart local v2    # "expansionIndex":I
label_cond_51:
	this->result->append((char)(_shri(miniCE,0x10)))->append((char)(miniCE));
	miniCE = ( expansionIndex | 0x800);
	goto label_goto_48;
	// 521    .line 557
	// 522    .end local v0    # "ce":J
	// 523    .end local v2    # "expansionIndex":I
	// 524    .end local v5    # "miniCE":I
label_cond_61:
	return;

}
// .method private encodeContractions()V
void android::icu::impl::coll::CollationFastLatinBuilder::encodeContractions()
{
	
	int i;
	long long ce;
	int contractionIndex;
	int firstTriple;
	int index;
	auto x;
	int miniCE;
	
	//    .local v13, "indexBase":I
	//    .local v9, "firstContractionIndex":I
	i = 0x0;
	//    .local v11, "i":I
label_goto_f:
	if ( i >= 0x1c0 )
		goto label_cond_115;
	ce = this->charCEs[i][0x0];
	//    .local v6, "ce":J
	if ( android::icu::impl::coll::CollationFastLatinBuilder::isContractionCharCE(ce) )     
		goto label_cond_26;
label_goto_23:
	i = ( i + 0x1);
	goto label_goto_f;
	// 585    .line 567
label_cond_26:
	contractionIndex = (this->result->length() - ( this->headerLength + 0x1c0));
	//    .local v8, "contractionIndex":I
	if ( contractionIndex <= 0x3ff )
		goto label_cond_4a;
	this->result->setCharAt((this->headerLength + i), 0x1);
	goto label_goto_23;
	// 626    .line 572
label_cond_4a:
	firstTriple = 0x1;
	//    .local v10, "firstTriple":Z
	index = ((int)(ce) & 0x7fffffff);
	//    .local v12, "index":I
label_goto_51:
	x = this->contractionCEs->elementAti(index);
	//    .local v16, "x":J
	if ( (x > 0x1ff) )     
		goto label_cond_80;
	if ( !(( firstTriple ^ 0x1)) )  
		goto label_cond_80;
	this->result->setCharAt((this->headerLength + i), (char)(( contractionIndex | 0x400)));
	goto label_goto_23;
	// 694    .line 576
label_cond_80:
	//    .local v2, "cce0":J
	//    .local v4, "cce1":J
	miniCE = this->encodeTwoCEs(this->contractionCEs->elementAti(( index + 0x1)), this->contractionCEs->elementAti(( index + 0x2)));
	//    .local v14, "miniCE":I
	if ( miniCE != 0x1 )
		goto label_cond_bc;
	this->result->append((char)((int)((0x200 | x))));
label_goto_b8:
	firstTriple = 0x0;
	index = ( index + 0x3);
	goto label_goto_51;
	// 770    .line 581
label_cond_bc:
	if ( _ushri(miniCE,0x10) )     
		goto label_cond_e4;
	this->result->append((char)((int)((0x400 | x))));
	this->result->append((char)(miniCE));
	goto label_goto_b8;
	// 816    .line 585
label_cond_e4:
	this->result->append((char)((int)((0x600 | x))));
	this->result->append((char)(_shri(miniCE,0x10)))->append((char)(miniCE));
	goto label_goto_b8;
	// 871    .line 596
	// 872    .end local v2    # "cce0":J
	// 873    .end local v4    # "cce1":J
	// 874    .end local v6    # "ce":J
	// 875    .end local v8    # "contractionIndex":I
	// 876    .end local v10    # "firstTriple":Z
	// 877    .end local v12    # "index":I
	// 878    .end local v14    # "miniCE":I
	// 879    .end local v16    # "x":J
label_cond_115:
	if ( this->result->length() <= this->result->length() )
		goto label_cond_12a;
	this->result->append(0x1ff);
label_cond_12a:
	return;

}
// .method private encodeTwoCEs(JJ)I
int android::icu::impl::coll::CollationFastLatinBuilder::encodeTwoCEs(long long first,long long second)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int miniCE;
	int miniCE1;
	int case1;
	int sec1;
	
	//    .param p1, "first"    # J
	//    .param p3, "second"    # J
	if ( (first > 0x0) )     
		goto label_cond_8;
	return 0x0;
	// 925    .line 632
label_cond_8:
	if ( (first > 0x101000100L) )     
		goto label_cond_13;
	return 0x1;
	// 938    .line 635
label_cond_13:
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_27;
	if ( (_ushrll(first,0x20) > 0x1) )     
		goto label_cond_27;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 960    .line 637
label_cond_27:
	miniCE = this->getMiniCE(first);
	//    .local v2, "miniCE":I
	if ( miniCE != 0x1 )
		goto label_cond_2f;
	return miniCE;
	// 974    .line 639
label_cond_2f:
	if ( miniCE <  0x1000 )
		goto label_cond_3d;
	//    .local v0, "c":I
	miniCE = (miniCE |  ( _shri(((int)(first) &  0xc000),0xb) + 0x8));
	//    .end local v0    # "c":I
label_cond_3d:
	if ( (second > 0x0) )     
		goto label_cond_44;
	return miniCE;
	// 1007    .line 649
label_cond_44:
	miniCE1 = this->getMiniCE(second);
	//    .local v3, "miniCE1":I
	if ( miniCE1 != 0x1 )
		goto label_cond_4c;
	return miniCE1;
	// 1021    .line 652
label_cond_4c:
	case1 = ((int)(second) & 0xc000);
	//    .local v1, "case1":I
	if ( miniCE <  0x1000 )
		goto label_cond_6c;
	if ( ( miniCE & 0x3e0) != 0xa0 )
		goto label_cond_6c;
	sec1 = ( miniCE1 & 0x3e0);
	//    .local v4, "sec1":I
	//    .local v5, "ter1":I
	if ( sec1 <  0x180 )
		goto label_cond_6c;
	if ( case1 )     
		goto label_cond_6c;
	if ( ( miniCE1 & 0x7) )     
		goto label_cond_6c;
	return (( miniCE & -0x3e1) |  sec1);
	// 1067    .line 665
	// 1068    .end local v4    # "sec1":I
	// 1069    .end local v5    # "ter1":I
label_cond_6c:
	if ( miniCE1 <= 0x3e0 )
		goto label_cond_74;
	if ( 0x1000 >  miniCE1 )
		goto label_cond_79;
label_cond_74:
label_cond_79:
	return (( miniCE << 0x10) |  miniCE1);

}
// .method private encodeUniqueCEs()V
void android::icu::impl::coll::CollationFastLatinBuilder::encodeUniqueCEs()
{
	
	int group;
	auto lastGroupPrimary;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	auto prevPrimary;
	int pri;
	int sec;
	int ter;
	int i;
	auto ce;
	long long p;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int lower32;
	int s;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	this->miniCEs = std::make_shared<std::vector<char[]>>(this->uniqueCEs->size());
	group = 0x0;
	//    .local v4, "group":I
	lastGroupPrimary = this->lastSpecialPrimaries[group];
	//    .local v6, "lastGroupPrimary":J
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_3e;
	if ( _ushri((int)(this->uniqueCEs->elementAti(0x0)),0x10) )     
		goto label_cond_3e;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1171    .line 412
label_cond_3e:
	prevPrimary = 0x0;
	//    .local v12, "prevPrimary":J
	//    .local v9, "prevSecondary":I
	pri = 0x0;
	//    .local v14, "pri":I
	sec = 0x0;
	//    .local v16, "sec":I
	ter = 0x0;
	//    .local v18, "ter":I
	i = 0x0;
	//    .local v5, "i":I
label_goto_47:
	if ( i >= this->uniqueCEs->size() )
		goto label_cond_1e5;
	ce = this->uniqueCEs->elementAti(i);
	//    .local v2, "ce":J
	p = _ushrll(ce,0x20);
	//    .local v10, "p":J
	if ( !((p > prevPrimary)) )  
		goto label_cond_b6;
label_goto_69:
	if ( (p > lastGroupPrimary) <= 0 )
		goto label_cond_a1;
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_7d;
	if ( pri <= 0xff8 )
		goto label_cond_7d;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1259    .line 427
label_cond_7d:
	this->result->setCharAt(( group + 0x1), (char)(pri));
	group = ( group + 0x1);
	if ( group >= 0x4 )
		goto label_cond_9c;
	lastGroupPrimary = this->lastSpecialPrimaries[group];
	goto label_goto_69;
	// 1295    .line 431
label_cond_9c:
	lastGroupPrimary = 0xffffffffL;
label_cond_a1:
	if ( (p > this->firstShortPrimary) >= 0 )
		goto label_cond_ef;
	if ( pri )     
		goto label_cond_d8;
	pri = 0xc00;
label_goto_af:
	prevPrimary = p;
	sec = 0xa0;
	ter = 0x0;
label_cond_b6:
	lower32 = (int)(ce);
	//    .local v8, "lower32":I
	s = _ushri(lower32,0x10);
	//    .local v15, "s":I
	if ( s == 0x0 )
		goto label_cond_c7;
	if ( pri )     
		goto label_cond_12b;
	if ( sec )     
		goto label_cond_115;
	sec = 0x180;
label_goto_c1:
	s;
	0x0;
label_goto_c4:
	s;
	ter = 0x0;
label_cond_c7:
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_181;
	if ( !((0xc000 & lower32)) )  
		goto label_cond_181;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1383    .line 438
	// 1384    .end local v8    # "lower32":I
	// 1385    .end local v15    # "s":I
label_cond_d8:
	if ( pri >= 0xff8 )
		goto label_cond_e1;
	pri = ( pri + 0x8);
	goto label_goto_af;
	// 1398    .line 444
label_cond_e1:
	this->miniCEs[i] = 0x1;
label_goto_eb:
	i = ( i + 0x1);
	goto label_goto_47;
	// 1416    .line 448
label_cond_ef:
	if ( pri >= 0x1000 )
		goto label_cond_f8;
	pri = 0x1000;
	goto label_goto_af;
	// 1429    .line 450
label_cond_f8:
	if ( pri >= 0xf800 )
		goto label_cond_102;
	pri = ( pri + 0x400);
	goto label_goto_af;
	// 1442    .line 457
label_cond_102:
	this->shortPrimaryOverflow = 0x1;
	this->miniCEs[i] = 0x1;
	goto label_goto_eb;
	// 1465    .line 473
	// 1466    .restart local v8    # "lower32":I
	// 1467    .restart local v15    # "s":I
label_cond_115:
	if ( sec >= 0x3e0 )
		goto label_cond_120;
	sec = ( sec + 0x20);
	goto label_goto_c1;
	// 1482    .line 476
label_cond_120:
	this->miniCEs[i] = 0x1;
	goto label_goto_eb;
	// 1496    .line 481
label_cond_12b:
	if ( s >= 0x500 )
		goto label_cond_153;
	if ( sec != 0xa0 )
		goto label_cond_13c;
	sec = 0x0;
	goto label_goto_c4;
	// 1518    .line 484
label_cond_13c:
	if ( sec >= 0x80 )
		goto label_cond_148;
	sec = ( sec + 0x20);
	goto label_goto_c4;
	// 1533    .line 487
label_cond_148:
	this->miniCEs[i] = 0x1;
	goto label_goto_eb;
	// 1547    .line 490
label_cond_153:
	if ( s != 0x500 )
		goto label_cond_15d;
	sec = 0xa0;
	goto label_goto_c4;
	// 1560    .line 493
label_cond_15d:
	if ( sec >= 0xc0 )
		goto label_cond_169;
	sec = 0xc0;
	goto label_goto_c4;
	// 1575    .line 495
label_cond_169:
	if ( sec >= 0x160 )
		goto label_cond_175;
	sec = ( sec + 0x20);
	goto label_goto_c4;
	// 1590    .line 498
label_cond_175:
	this->miniCEs[i] = 0x1;
	goto label_goto_eb;
	// 1604    .line 506
label_cond_181:
	//    .local v17, "t":I
	if ( ( lower32 & 0x3f3f) <= 0x500 )
		goto label_cond_197;
	if ( ter >= 0x7 )
		goto label_cond_1b5;
	ter = ( ter + 0x1);
label_cond_197:
	if ( 0xc00 >  pri )
		goto label_cond_1d2;
	if ( pri >  0xff8 )
		goto label_cond_1d2;
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_1c1;
	if ( sec == 0xa0 )
		goto label_cond_1c1;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 1665    .line 511
label_cond_1b5:
	this->miniCEs[i] = 0x1;
	goto label_goto_eb;
	// 1679    .line 517
label_cond_1c1:
	this->miniCEs[i] = (char)((pri | ter));
	goto label_goto_eb;
	// 1699    .line 519
label_cond_1d2:
	this->miniCEs[i] = (char)(((pri | sec) | ter));
	goto label_goto_eb;
	// 1721    .line 531
	// 1722    .end local v2    # "ce":J
	// 1723    .end local v8    # "lower32":I
	// 1724    .end local v10    # "p":J
	// 1725    .end local v15    # "s":I
	// 1726    .end local v17    # "t":I
label_cond_1e5:
	return;

}
// .method private getCEs(Landroid/icu/impl/coll/CollationData;)V
void android::icu::impl::coll::CollationFastLatinBuilder::getCEs(std::shared_ptr<android::icu::impl::coll::CollationData> data)
{
	
	int i;
	int cVar0;
	int ce32;
	std::shared_ptr<android::icu::impl::coll::CollationData> d;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	i = 0x0;
	//    .local v9, "i":I
	cVar0 = 0x0;
label_goto_2:
	if ( cVar0 != 0x180 )
		goto label_cond_56;
	cVar0 = 0x2000;
label_cond_8:
	ce32 = data->getCE32(cVar0);
	//    .local v7, "ce32":I
	if ( ce32 != 0xc0 )
		goto label_cond_62;
	d = data->base;
	//    .local v8, "d":Landroid/icu/impl/coll/CollationData;
label_goto_16:
	if ( !(this->getCEsFromCE32(d, cVar0, ce32)) )  
		goto label_cond_64;
	this->charCEs[i][0x0] = this->ce0;
	this->charCEs[i][0x1] = this->ce1;
	this->addUniqueCE(this->ce0);
	this->addUniqueCE(this->ce1);
label_goto_38:
	if ( cVar0 )     
		goto label_cond_a6;
	if ( !(( android::icu::impl::coll::CollationFastLatinBuilder::isContractionCharCE(this->ce0) ^ 0x1)) )  
		goto label_cond_a6;
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_85;
	if ( this->contractionCEs->isEmpty() )     
		goto label_cond_85;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 1846    .line 199
	// 1847    .end local v7    # "ce32":I
	// 1848    .end local v8    # "d":Landroid/icu/impl/coll/CollationData;
label_cond_56:
	if ( cVar0 != 0x2040 )
		goto label_cond_8;
	this->contractionCEs->addElement(0x1ff);
	return;
	// 1864    .line 208
	// 1865    .restart local v7    # "ce32":I
label_cond_62:
	//    .restart local v8    # "d":Landroid/icu/impl/coll/CollationData;
	goto label_goto_16;
	// 1872    .line 217
label_cond_64:
	this->ce0 = 0x101000100L;
	this->charCEs[i][0x0] = 0x101000100L;
	this->ce1 = 0x0;
	this->charCEs[i][0x1] = 0x0;
	goto label_goto_38;
	// 1905    .line 224
label_cond_85:
	this->addContractionEntry(0x1ff, this->ce0, this->ce1);
	this->charCEs[0x0][0x0] = 0x180000000L;
	this->charCEs[0x0][0x1] = 0x0;
label_cond_a6:
	i = ( i + 0x1);
	cVar0 = (char)(( cVar0 + 0x1));
	//    .local v6, "c":C
	goto label_goto_2;

}
// .method private getCEsFromCE32(Landroid/icu/impl/coll/CollationData;II)Z
bool android::icu::impl::coll::CollationFastLatinBuilder::getCEsFromCE32(std::shared_ptr<android::icu::impl::coll::CollationData> data,int c,int ce32)
{
	
	int cVar0;
	bool cVar1;
	long long p0;
	int lower32_0;
	long long p1;
	int lower32_1;
	int index;
	int length;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "c"    # I
	//    .param p3, "ce32"    # I
	cVar0 = data->getFinalCE32(ce32);
	this->ce1 = 0x0;
	if ( !(android::icu::impl::coll::Collation::isSimpleOrLongCE32(cVar0)) )  
		goto label_cond_32;
	this->ce0 = android::icu::impl::coll::Collation::ceFromCE32(cVar0);
label_cond_1c:
label_goto_1c:
	if ( (this->ce0 > 0x0) )     
		goto label_cond_d3;
	if ( (this->ce1 > 0x0) )     
		goto label_cond_d0;
	cVar1 = 0x1;
label_goto_31:
	return cVar1;
	// 2022    .line 239
label_cond_32:
	// switch
	{
	auto item = ( android::icu::impl::coll::Collation::tagFromCE32(cVar0) );
	if (item == 4) goto label_pswitch_3b;
	if (item == 5) goto label_pswitch_4c;
	if (item == 6) goto label_pswitch_7b;
	if (item == 7) goto label_pswitch_39;
	if (item == 8) goto label_pswitch_39;
	if (item == 9) goto label_pswitch_a3;
	if (item == 10) goto label_pswitch_39;
	if (item == 11) goto label_pswitch_39;
	if (item == 12) goto label_pswitch_39;
	if (item == 13) goto label_pswitch_39;
	if (item == 14) goto label_pswitch_ba;
	}
label_pswitch_39:
	return 0x0;
	// 2036    .line 241
label_pswitch_3b:
	this->ce0 = android::icu::impl::coll::Collation::latinCE0FromCE32(cVar0);
	this->ce1 = android::icu::impl::coll::Collation::latinCE1FromCE32(cVar0);
	goto label_goto_1c;
	// 2057    .line 245
label_pswitch_4c:
	index = android::icu::impl::coll::Collation::indexFromCE32(cVar0);
	//    .local v4, "index":I
	length = android::icu::impl::coll::Collation::lengthFromCE32(cVar0);
	//    .local v5, "length":I
	if ( length >  0x2 )
		goto label_cond_79;
	this->ce0 = android::icu::impl::coll::Collation::ceFromCE32(data->ce32s[index]);
	if ( length != 0x2 )
		goto label_cond_1c;
	this->ce1 = android::icu::impl::coll::Collation::ceFromCE32(data->ce32s[( index + 0x1)]);
	goto label_goto_1c;
	// 2114    .line 254
label_cond_79:
	return 0x0;
	// 2120    .line 258
	// 2121    .end local v4    # "index":I
	// 2122    .end local v5    # "length":I
label_pswitch_7b:
	index = android::icu::impl::coll::Collation::indexFromCE32(cVar0);
	//    .restart local v4    # "index":I
	length = android::icu::impl::coll::Collation::lengthFromCE32(cVar0);
	//    .restart local v5    # "length":I
	if ( length >  0x2 )
		goto label_cond_a1;
	this->ce0 = data->ces[index];
	if ( length != 0x2 )
		goto label_cond_1c;
	this->ce1 = data->ces[( index + 0x1)];
	goto label_goto_1c;
	// 2171    .line 267
label_cond_a1:
	return 0x0;
	// 2177    .line 276
	// 2178    .end local v4    # "index":I
	// 2179    .end local v5    # "length":I
label_pswitch_a3:
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_af;
	if ( c >= 0 )
		goto label_cond_af;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 2193    .line 277
label_cond_af:
	return this->getCEsFromContractionCE32(data, cVar0);
	// 2207    .line 279
label_pswitch_ba:
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_c6;
	if ( c >= 0 )
		goto label_cond_c6;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 2221    .line 280
label_cond_c6:
	this->ce0 = data->getCEFromOffsetCE32(c, cVar0);
	goto label_goto_1c;
	// 2233    .line 287
label_cond_d0:
	cVar1 = 0x0;
	goto label_goto_31;
	// 2239    .line 289
label_cond_d3:
	p0 = _ushrll(this->ce0,0x20);
	//    .local v8, "p0":J
	if ( (p0 > 0x0) )     
		goto label_cond_e3;
	return 0x0;
	// 2261    .line 292
label_cond_e3:
	if ( (p0 > this->lastLatinPrimary) <= 0 )
		goto label_cond_ed;
	return 0x0;
	// 2275    .line 294
label_cond_ed:
	lower32_0 = (int)(this->ce0);
	//    .local v6, "lower32_0":I
	if ( (p0 > this->firstShortPrimary) >= 0 )
		goto label_cond_102;
	//    .local v12, "sc0":I
	if ( ( lower32_0 & -0x4000) == 0x5000000 )
		goto label_cond_102;
	return 0x0;
	// 2306    .line 300
	// 2307    .end local v12    # "sc0":I
label_cond_102:
	if ( ( lower32_0 & 0x3f3f) >= 0x500 )
		goto label_cond_10a;
	return 0x0;
	// 2319    .line 301
label_cond_10a:
	if ( !((this->ce1 > 0x0)) )  
		goto label_cond_15f;
	p1 = _ushrll(this->ce1,0x20);
	//    .local v10, "p1":J
	if ( (p1 > 0x0) )     
		goto label_cond_12c;
	if ( (p0 > this->firstShortPrimary) >= 0 )
		goto label_cond_136;
label_cond_12a:
	return 0x0;
label_cond_12c:
	if ( ( this->inSameGroup(p0, p1) ^ 0x1) )     
		goto label_cond_12a;
label_cond_136:
	lower32_1 = (int)(this->ce1);
	//    .local v7, "lower32_1":I
	if ( _ushri(lower32_1,0x10) )     
		goto label_cond_141;
	return 0x0;
	// 2390    .line 314
label_cond_141:
	if ( !((p1 > 0x0)) )  
		goto label_cond_157;
	if ( (p1 > this->firstShortPrimary) >= 0 )
		goto label_cond_157;
	//    .local v13, "sc1":I
	if ( ( lower32_1 & -0x4000) == 0x5000000 )
		goto label_cond_157;
	return 0x0;
	// 2419    .line 319
	// 2420    .end local v13    # "sc1":I
label_cond_157:
	if ( ( lower32_0 & 0x3f3f) >= 0x500 )
		goto label_cond_15f;
	return 0x0;
	// 2432    .line 322
	// 2433    .end local v7    # "lower32_1":I
	// 2434    .end local v10    # "p1":J
label_cond_15f:
	if ( !((((this->ce0 | this->ce1) & 0xc0) > 0x0)) )  
		goto label_cond_177;
	return 0x0;
	// 2462    .line 323
label_cond_177:
	return 0x1;
	// 2468    .line 239
	// 2469    nop
	// 2471    :pswitch_data_17a
	// 2472    .packed-switch 0x4
	// 2473        :pswitch_3b
	// 2474        :pswitch_4c
	// 2475        :pswitch_7b
	// 2476        :pswitch_39
	// 2477        :pswitch_39
	// 2478        :pswitch_a3
	// 2479        :pswitch_39
	// 2480        :pswitch_39
	// 2481        :pswitch_39
	// 2482        :pswitch_39
	// 2483        :pswitch_ba
	// 2484    .end packed-switch

}
// .method private getCEsFromContractionCE32(Landroid/icu/impl/coll/CollationData;I)Z
bool android::icu::impl::coll::CollationFastLatinBuilder::getCEsFromContractionCE32(std::shared_ptr<android::icu::impl::coll::CollationData> data,int ce32)
{
	
	int trieIndex;
	int cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int prevX;
	int addContraction;
	std::shared_ptr<android::icu::util::CharsTrie_S_Iterator> suffixes;
	std::shared_ptr<java::lang::CharSequence> entry;
	std::shared_ptr<java::lang::CharSequence> suffix;
	int x;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "ce32"    # I
	trieIndex = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .local v18, "trieIndex":I
	cVar0 = data->getCE32FromContexts(trieIndex);
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_1c;
	if ( !(android::icu::impl::coll::Collation::isContractionCE32(cVar0)) )  
		goto label_cond_1c;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2525    .line 332
label_cond_1c:
	//    .local v13, "contractionIndex":I
	if ( !(this->getCEsFromCE32(data, -0x1, cVar0)) )  
		goto label_cond_7a;
	this->addContractionEntry(0x1ff, this->ce0, this->ce1);
label_goto_40:
	prevX = -0x1;
	//    .local v15, "prevX":I
	addContraction = 0x0;
	//    .local v12, "addContraction":Z
	suffixes = android::icu::util::CharsTrie::iterator(data->contexts, ( trieIndex + 0x2), 0x0);
	//    .local v17, "suffixes":Landroid/icu/util/CharsTrie$Iterator;
label_cond_4d:
label_goto_4d:
	if ( !(suffixes->hasNext()) )  
		goto label_cond_c2;
	entry = suffixes->next();
	//    .local v14, "entry":Landroid/icu/util/CharsTrie$Entry;
	suffix = entry->chars;
	//    .local v16, "suffix":Ljava/lang/CharSequence;
	x = android::icu::impl::coll::CollationFastLatin::getCharIndex(suffix->charAt(0x0));
	//    .local v5, "x":I
	if ( x < 0 ) 
		goto label_cond_4d;
	if ( x != prevX )
		goto label_cond_89;
	if ( !(addContraction) )  
		goto label_cond_4d;
	this->addContractionEntry(x, 0x101000100L, 0x0);
	addContraction = 0x0;
	goto label_goto_4d;
	// 2647    .line 337
	// 2648    .end local v5    # "x":I
	// 2649    .end local v12    # "addContraction":Z
	// 2650    .end local v14    # "entry":Landroid/icu/util/CharsTrie$Entry;
	// 2651    .end local v15    # "prevX":I
	// 2652    .end local v16    # "suffix":Ljava/lang/CharSequence;
	// 2653    .end local v17    # "suffixes":Landroid/icu/util/CharsTrie$Iterator;
label_cond_7a:
	this->addContractionEntry(0x1ff, 0x101000100L, 0x0);
	goto label_goto_40;
	// 2667    .line 357
	// 2668    .restart local v5    # "x":I
	// 2669    .restart local v12    # "addContraction":Z
	// 2670    .restart local v14    # "entry":Landroid/icu/util/CharsTrie$Entry;
	// 2671    .restart local v15    # "prevX":I
	// 2672    .restart local v16    # "suffix":Ljava/lang/CharSequence;
	// 2673    .restart local v17    # "suffixes":Landroid/icu/util/CharsTrie$Iterator;
label_cond_89:
	if ( !(addContraction) )  
		goto label_cond_99;
	this->addContractionEntry(prevX, this->ce0, this->ce1);
label_cond_99:
	if ( suffix->length() != 0x1 )
		goto label_cond_b4;
	if ( !(this->getCEsFromCE32(data, -0x1, entry->value)) )  
		goto label_cond_b4;
	addContraction = 0x1;
label_goto_b2:
	prevX = x;
	goto label_goto_4d;
	// 2730    .line 364
label_cond_b4:
	this->addContractionEntry(x, 0x101000100L, 0x0);
	addContraction = 0x0;
	goto label_goto_b2;
	// 2745    .line 369
	// 2746    .end local v5    # "x":I
	// 2747    .end local v14    # "entry":Landroid/icu/util/CharsTrie$Entry;
	// 2748    .end local v16    # "suffix":Ljava/lang/CharSequence;
label_cond_c2:
	if ( !(addContraction) )  
		goto label_cond_d2;
	this->addContractionEntry(prevX, this->ce0, this->ce1);
label_cond_d2:
	this->ce0 = ((long long)(this->contractionCEs->size()) |  0x180000000L);
	this->ce1 = 0x0;
	return 0x1;

}
// .method private getMiniCE(J)I
int android::icu::impl::coll::CollationFastLatinBuilder::getMiniCE(long long ce)
{
	
	int index;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "ce"    # J
	index = android::icu::impl::coll::CollationFastLatinBuilder::binarySearch(this->uniqueCEs->getBuffer(), this->uniqueCEs->size(), (ce &  -0xc001));
	//    .local v0, "index":I
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_20;
	if ( index >= 0 )
		goto label_cond_20;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2833    .line 403
label_cond_20:
	return this->miniCEs[index];

}
// .method private inSameGroup(JJ)Z
bool android::icu::impl::coll::CollationFastLatinBuilder::inSameGroup(long long p,long long q)
{
	
	bool cVar0;
	auto lastVariablePrimary;
	bool cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	int i;
	auto lastPrimary;
	bool cVar5;
	
	//    .param p1, "p"    # J
	//    .param p3, "q"    # J
	if ( (p > this->firstShortPrimary) < 0 ) 
		goto label_cond_10;
	if ( (q > this->firstShortPrimary) < 0 ) 
		goto label_cond_e;
	cVar0 = 0x1;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;
	// 2872    .line 162
label_cond_10:
	if ( (q > this->firstShortPrimary) < 0 ) 
		goto label_cond_18;
	return 0x0;
	// 2885    .line 167
label_cond_18:
	lastVariablePrimary = this->lastSpecialPrimaries[0x3];
	//    .local v4, "lastVariablePrimary":J
	if ( (p > lastVariablePrimary) <= 0 )
		goto label_cond_29;
	if ( (q > lastVariablePrimary) <= 0 )
		goto label_cond_27;
	cVar2 = 0x1;
label_goto_26:
	return cVar2;
label_cond_27:
	cVar2 = 0x0;
	goto label_goto_26;
	// 2914    .line 170
label_cond_29:
	if ( (q > lastVariablePrimary) <= 0 )
		goto label_cond_2f;
	return 0x0;
	// 2925    .line 176
label_cond_2f:
	if ( android::icu::impl::coll::CollationFastLatinBuilder::_assertionsDisabled )     
		goto label_cond_45;
	if ( !((p > 0x0)) )  
		goto label_cond_3f;
	if ( (q > 0x0) )     
		goto label_cond_45;
label_cond_3f:
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 2950    .line 177
label_cond_45:
	i = 0x0;
	//    .local v0, "i":I
label_goto_46:
	lastPrimary = this->lastSpecialPrimaries[i];
	//    .local v2, "lastPrimary":J
	if ( (p > lastPrimary) > 0 ) 
		goto label_cond_56;
	if ( (q > lastPrimary) > 0 ) 
		goto label_cond_54;
	cVar5 = 0x1;
label_goto_53:
	return cVar5;
label_cond_54:
	cVar5 = 0x0;
	goto label_goto_53;
	// 2982    .line 181
label_cond_56:
	if ( (q > lastPrimary) > 0 ) 
		goto label_cond_5c;
	return 0x0;
	// 2993    .line 177
label_cond_5c:
	i = ( i + 0x1);
	goto label_goto_46;

}
// .method private static isContractionCharCE(J)Z
bool android::icu::impl::coll::CollationFastLatinBuilder::isContractionCharCE(long long ce)
{
	
	bool cVar1;
	
	//    .param p0, "ce"    # J
	cVar1 = 0x0;
	if ( (_ushrll(ce,0x20) > 0x1) )     
		goto label_cond_15;
	if ( !((ce > 0x101000100L)) )  
		goto label_cond_15;
	cVar1 = 0x1;
label_cond_15:
	return cVar1;

}
// .method private loadGroups(Landroid/icu/impl/coll/CollationData;)Z
bool android::icu::impl::coll::CollationFastLatinBuilder::loadGroups(std::shared_ptr<android::icu::impl::coll::CollationData> data)
{
	
	int cVar0;
	long long cVar1;
	bool cVar2;
	int i;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	cVar0 = 0x19;
	cVar1 = 0x0;
	cVar2 = 0x0;
	this->headerLength = 0x5;
	//    .local v1, "r0":I
	this->result->append((char)(( this->headerLength | 0x200)));
	i = 0x0;
	//    .local v0, "i":I
label_goto_13:
	if ( i >= 0x4 )
		goto label_cond_31;
	this->lastSpecialPrimaries[i] = data->getLastPrimaryForGroup(( i + 0x1000));
	if ( (this->lastSpecialPrimaries[i] > cVar1) )     
		goto label_cond_29;
	return cVar2;
	// 3091    .line 144
label_cond_29:
	this->result->append(cVar2);
	i = ( i + 0x1);
	goto label_goto_13;
	// 3102    .line 147
label_cond_31:
	this->firstDigitPrimary = data->getFirstPrimaryForGroup(0x1004);
	this->firstLatinPrimary = data->getFirstPrimaryForGroup(cVar0);
	this->lastLatinPrimary = data->getLastPrimaryForGroup(cVar0);
	if ( !((this->firstDigitPrimary > cVar1)) )  
		goto label_cond_51;
	if ( (this->firstLatinPrimary > cVar1) )     
		goto label_cond_52;
label_cond_51:
	return cVar2;
	// 3143    .line 154
label_cond_52:
	return 0x1;

}
// .method private resetCEs()V
void android::icu::impl::coll::CollationFastLatinBuilder::resetCEs()
{
	
	this->contractionCEs->removeAllElements();
	this->uniqueCEs->removeAllElements();
	this->shortPrimaryOverflow = 0x0;
	this->result->setLength(this->headerLength);
	return;

}
// .method forData(Landroid/icu/impl/coll/CollationData;)Z
bool android::icu::impl::coll::CollationFastLatinBuilder::forData(std::shared_ptr<android::icu::impl::coll::CollationData> data)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	bool ok;
	
	//    .param p1, "data"    # Landroid/icu/impl/coll/CollationData;
	if ( !(this->result->length()) )  
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("attempt to reuse a CollationFastLatinBuilder")));
	// throw
	throw cVar0;
	// 3207    .line 85
label_cond_12:
	if ( this->loadGroups(data) )     
		goto label_cond_19;
	return 0x0;
	// 3217    .line 88
label_cond_19:
	this->firstShortPrimary = this->firstDigitPrimary;
	this->getCEs(data);
	this->encodeUniqueCEs();
	if ( !(this->shortPrimaryOverflow) )  
		goto label_cond_34;
	this->firstShortPrimary = this->firstLatinPrimary;
	this->resetCEs();
	this->getCEs(data);
	this->encodeUniqueCEs();
label_cond_34:
	ok = ( this->shortPrimaryOverflow ^ 0x1);
	//    .local v0, "ok":Z
	if ( !(ok) )  
		goto label_cond_40;
	this->encodeCharCEs();
	this->encodeContractions();
label_cond_40:
	this->contractionCEs->removeAllElements();
	this->uniqueCEs->removeAllElements();
	return ok;

}
// .method getHeader()[C
char android::icu::impl::coll::CollationFastLatinBuilder::getHeader()
{
	
	int cVar0;
	std::shared<std::vector<char[]>> resultArray;
	
	cVar0 = 0x0;
	resultArray = std::make_shared<std::vector<char[]>>(this->headerLength);
	//    .local v0, "resultArray":[C
	this->result->getChars(cVar0, this->headerLength, resultArray, cVar0);
	return resultArray;

}
// .method getTable()[C
char android::icu::impl::coll::CollationFastLatinBuilder::getTable()
{
	
	std::shared<std::vector<char[]>> resultArray;
	
	resultArray = std::make_shared<std::vector<char[]>>((this->result->length() -  this->headerLength));
	//    .local v0, "resultArray":[C
	this->result->getChars(this->headerLength, this->result->length(), resultArray, 0x0);
	return resultArray;

}


