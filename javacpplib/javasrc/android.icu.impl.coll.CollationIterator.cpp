// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.impl.coll.Collation.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationFCD.h"
#include "android.icu.impl.coll.CollationIterator_S_CEBuffer.h"
#include "android.icu.impl.coll.CollationIterator_S_SkippedState.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.UVector32.h"
#include "android.icu.util.BytesTrie_S_Result.h"
#include "android.icu.util.CharsTrie.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static android::icu::impl::coll::CollationIterator::_assertionsDisabled;
static android::icu::impl::coll::CollationIterator::NO_CP_AND_CE32 = -0xffffff40L;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationIterator::static_cinit()
{
	
	android::icu::impl::coll::CollationIterator::_assertionsDisabled = ( android::icu::impl::coll::CollationIterator()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(Landroid/icu/impl/coll/CollationData;)V
android::icu::impl::coll::CollationIterator::CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d)
{
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	// 062    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->trie = d->trie;
	this->data = d;
	this->numCpFwd = -0x1;
	this->isNumeric = 0x0;
	this->ceBuffer = 0x0;
	return;

}
// .method public constructor <init>(Landroid/icu/impl/coll/CollationData;Z)V
android::icu::impl::coll::CollationIterator::CollationIterator(std::shared_ptr<android::icu::impl::coll::CollationData> d,bool numeric)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_CEBuffer> cVar0;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "numeric"    # Z
	// 098    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->trie = d->trie;
	this->data = d;
	this->numCpFwd = -0x1;
	this->isNumeric = numeric;
	cVar0 = std::make_shared<android::icu::impl::coll::CollationIterator_S_CEBuffer>();
	this->ceBuffer = cVar0;
	return;

}
// .method private final appendNumericCEs(IZ)V
void android::icu::impl::coll::CollationIterator::appendNumericCEs(int ce32,bool forward)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::StringBuilder> digits;
	int pos;
	int segmentLength;
	int c;
	int ce32;
	
	//    .param p1, "ce32"    # I
	//    .param p2, "forward"    # Z
	cVar0 = 0xc0;
	cVar1 = 0xa;
	cVar2 = 0x1;
	digits = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "digits":Ljava/lang/StringBuilder;
	if ( !(forward) )  
		goto label_cond_54;
label_cond_c:
label_goto_c:
	//    .local v1, "digit":C
	digits->append(android::icu::impl::coll::Collation::digitFromCE32(ce32));
	if ( this->numCpFwd )     
		goto label_cond_29;
label_cond_17:
label_goto_17:
	pos = 0x0;
	//    .local v3, "pos":I
label_cond_18:
label_goto_18:
	if ( pos >= ( digits->length() + -0x1) )
		goto label_cond_7f;
	if ( digits->charAt(pos) )     
		goto label_cond_7f;
	pos = ( pos + 0x1);
	goto label_goto_18;
	// 191    .line 980
	// 192    .end local v3    # "pos":I
label_cond_29:
	c = this->nextCodePoint();
	//    .local v0, "c":I
	if ( c < 0 ) 
		goto label_cond_17;
	ce32 = this->data->getCE32(c);
	if ( ce32 != cVar0 )
		goto label_cond_3f;
	ce32 = this->data->base->getCE32(c);
label_cond_3f:
	if ( android::icu::impl::coll::Collation::hasCE32Tag(ce32, cVar1) )     
		goto label_cond_49;
	this->backwardNumCodePoints(cVar2);
	goto label_goto_17;
	// 234    .line 990
label_cond_49:
	if ( this->numCpFwd <= 0 )
		goto label_cond_c;
	this->numCpFwd = ( this->numCpFwd + -0x1);
	goto label_goto_c;
	// 248    .line 994
	// 249    .end local v0    # "c":I
	// 250    .end local v1    # "digit":C
label_cond_54:
	//    .restart local v1    # "digit":C
	digits->append(android::icu::impl::coll::Collation::digitFromCE32(ce32));
	c = this->previousCodePoint();
	//    .restart local v0    # "c":I
	if ( c >= 0 )
		goto label_cond_65;
label_goto_61:
	digits->reverse();
	goto label_goto_17;
	// 275    .line 998
label_cond_65:
	ce32 = this->data->getCE32(c);
	if ( ce32 != cVar0 )
		goto label_cond_75;
	ce32 = this->data->base->getCE32(c);
label_cond_75:
	if ( android::icu::impl::coll::Collation::hasCE32Tag(ce32, cVar1) )     
		goto label_cond_54;
	this->forwardNumCodePoints(cVar2);
	goto label_goto_61;
	// 308    .line 1015
	// 309    .end local v0    # "c":I
	// 310    .restart local v3    # "pos":I
label_cond_7f:
	segmentLength = (digits->length() - pos);
	//    .local v4, "segmentLength":I
	if ( segmentLength <= 0xfe )
		goto label_cond_8b;
	segmentLength = 0xfe;
label_cond_8b:
	this->appendNumericSegmentCEs(digits->subSequence(pos, (pos + segmentLength)));
	pos = (pos +  segmentLength);
	if ( pos <  digits->length() )
		goto label_cond_18;
	return;

}
// .method private final appendNumericSegmentCEs(Ljava/lang/CharSequence;)V
void android::icu::impl::coll::CollationIterator::appendNumericSegmentCEs(std::shared_ptr<java::lang::CharSequence> digits)
{
	
	int length;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	long long numericPrimary;
	int value;
	int i;
	long long primary;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int pair;
	int pos;
	int shift;
	auto primary;
	
	//    .param p1, "digits"    # Ljava/lang/CharSequence;
	length = digits->length();
	//    .local v4, "length":I
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_15;
	if ( 0x1 >  length )
		goto label_cond_f;
	if ( length <= 0xfe )
		goto label_cond_15;
label_cond_f:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 381    .line 1029
label_cond_15:
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_2b;
	if ( length == 0x1 )
		goto label_cond_2b;
	if ( digits->charAt(0x0) )     
		goto label_cond_2b;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 407    .line 1030
label_cond_2b:
	numericPrimary = this->data->numericPrimary;
	//    .local v8, "numericPrimary":J
	if ( length >  0x7 )
		goto label_cond_cd;
	value = digits->charAt(0x0);
	//    .local v14, "value":I
	i = 0x1;
	//    .local v3, "i":I
label_goto_3c:
	if ( i >= length )
		goto label_cond_4b;
	value = (( value * 0xa) + digits->charAt(i));
	i = ( i + 0x1);
	goto label_goto_3c;
	// 454    .line 1043
label_cond_4b:
	0x2;
	//    .local v2, "firstByte":I
	0x4a;
	//    .local v5, "numBytes":I
	if ( value >= 0x4a )
		goto label_cond_67;
	primary = (numericPrimary | (long long)(( ( value + 0x2) << 0x10)));
	//    .local v12, "primary":J
	this->ceBuffer->append(android::icu::impl::coll::Collation::makeCE(primary));
	return;
	// 494    .line 1051
	// 495    .end local v12    # "primary":J
label_cond_67:
	value = ( value + -0x4a);
	0x28;
	if ( value >= 0x27b0 )
		goto label_cond_93;
	primary = (((long long)(( ( ( value / 0xfe) + 0x4c) << 0x10)) | numericPrimary) | (long long)(( ( ( value % 0xfe) + 0x2) << 0x8)));
	//    .restart local v12    # "primary":J
	this->ceBuffer->append(android::icu::impl::coll::Collation::makeCE(primary));
	return;
	// 553    .line 1061
	// 554    .end local v12    # "primary":J
label_cond_93:
	value = ( value + -0x27b0);
	( 0x4c + 0x28);
	0x10;
	if ( value >= 0xfc040 )
		goto label_cond_cd;
	primary = (numericPrimary | (long long)(( ( value % 0xfe) + 0x2)));
	//    .restart local v12    # "primary":J
	value = ( value / 0xfe);
	primary = (primary | (long long)(( ( ( value % 0xfe) + 0x2) << 0x8)));
	value = ( value / 0xfe);
	primary = (primary | (long long)(( ( ( value % 0xfe) + 0x74) << 0x10)));
	this->ceBuffer->append(android::icu::impl::coll::Collation::makeCE(primary));
	return;
	// 627    .line 1076
	// 628    .end local v2    # "firstByte":I
	// 629    .end local v3    # "i":I
	// 630    .end local v5    # "numBytes":I
	// 631    .end local v12    # "primary":J
	// 632    .end local v14    # "value":I
label_cond_cd:
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_da;
	if ( length >= 0x7 )
		goto label_cond_da;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 648    .line 1084
label_cond_da:
	//    .local v6, "numPairs":I
	primary = (numericPrimary | (long long)(( ( ( ( length + 0x1) / 0x2) + 0x80) << 0x10)));
	//    .restart local v12    # "primary":J
label_goto_e7:
	if ( digits->charAt(( length + -0x1)) )     
		goto label_cond_fe;
	if ( digits->charAt(( length + -0x2)) )     
		goto label_cond_fe;
	length = ( length + -0x2);
	goto label_goto_e7;
	// 694    .line 1093
label_cond_fe:
	if ( !(( length & 0x1)) )  
		goto label_cond_142;
	pair = digits->charAt(0x0);
	//    .local v7, "pair":I
	pos = 0x1;
	//    .local v10, "pos":I
label_goto_10a:
	pair = ( ( pair * 0x2) + 0xb);
	shift = 0x8;
	//    .local v11, "shift":I
label_goto_110:
	if ( pos >= length )
		goto label_cond_163;
	if ( shift )     
		goto label_cond_159;
	primary = (primary | (long long)(pair));
	this->ceBuffer->append(android::icu::impl::coll::Collation::makeCE(primary));
	primary = numericPrimary;
	shift = 0x10;
label_goto_127:
	pair = ( ( (( digits->charAt(pos) * 0xa) + digits->charAt(( pos + 0x1))) * 0x2) + 0xb);
	pos = ( pos + 0x2);
	goto label_goto_110;
	// 786    .line 1098
	// 787    .end local v7    # "pair":I
	// 788    .end local v10    # "pos":I
	// 789    .end local v11    # "shift":I
label_cond_142:
	pair = (( digits->charAt(0x0) * 0xa) + digits->charAt(0x1));
	//    .restart local v7    # "pair":I
	pos = 0x2;
	//    .restart local v10    # "pos":I
	goto label_goto_10a;
	// 820    .line 1113
	// 821    .restart local v11    # "shift":I
label_cond_159:
	primary = (primary | (long long)((pair << shift)));
	shift = ( shift + -0x8);
	goto label_goto_127;
	// 836    .line 1119
label_cond_163:
	primary = (primary | (long long)((( pair + -0x1) << shift)));
	this->ceBuffer->append(android::icu::impl::coll::Collation::makeCE(primary));
	return;

}
// .method private final backwardNumSkipped(I)V
void android::icu::impl::coll::CollationIterator::backwardNumSkipped(int cVar0)
{
	
	int cVar0;
	
	//    .param p1, "n"    # I
	if ( !(this->skipped) )  
		goto label_cond_14;
	if ( !(( this->skipped->isEmpty() ^ 0x1)) )  
		goto label_cond_14;
	cVar0 = this->skipped->backwardNumCodePoints(cVar0);
label_cond_14:
	this->backwardNumCodePoints(cVar0);
	if ( this->numCpFwd < 0 ) 
		goto label_cond_20;
	this->numCpFwd = (this->numCpFwd +  cVar0);
label_cond_20:
	return;

}
// .method private final getCE32FromPrefix(Landroid/icu/impl/coll/CollationData;I)I
int android::icu::impl::coll::CollationIterator::getCE32FromPrefix(std::shared_ptr<android::icu::impl::coll::CollationData> d,int ce32)
{
	
	int index;
	int cVar0;
	int lookBehind;
	std::shared_ptr<android::icu::util::CharsTrie> prefixes;
	int c;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> match;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "ce32"    # I
	index = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .local v1, "index":I
	cVar0 = d->getCE32FromContexts(index);
	lookBehind = 0x0;
	//    .local v2, "lookBehind":I
	prefixes = std::make_shared<android::icu::util::CharsTrie>(d->contexts, ( index + 0x2));
	//    .local v4, "prefixes":Landroid/icu/util/CharsTrie;
label_cond_12:
	c = this->previousCodePoint();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_1c;
label_goto_18:
	this->forwardNumCodePoints(lookBehind);
	return cVar0;
	// 959    .line 680
label_cond_1c:
	lookBehind = ( lookBehind + 0x1);
	match = prefixes->nextForCodePoint(c);
	//    .local v3, "match":Landroid/icu/util/BytesTrie$Result;
	if ( !(match->hasValue()) )  
		goto label_cond_2c;
	cVar0 = prefixes->getValue();
label_cond_2c:
	if ( match->hasNext() )     
		goto label_cond_12;
	goto label_goto_18;

}
// .method protected static final isLeadSurrogate(I)Z
bool android::icu::impl::coll::CollationIterator::isLeadSurrogate(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	if ( ( c & -0x400) != 0xd800 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method private static final isSurrogate(I)Z
bool android::icu::impl::coll::CollationIterator::isSurrogate(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	if ( ( c & -0x800) != 0xd800 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method protected static final isTrailSurrogate(I)Z
bool android::icu::impl::coll::CollationIterator::isTrailSurrogate(int c)
{
	
	bool cVar0;
	
	//    .param p0, "c"    # I
	if ( ( c & -0x400) != 0xdc00 )
		goto label_cond_9;
	cVar0 = 0x1;
label_goto_8:
	return cVar0;
label_cond_9:
	cVar0 = 0x0;
	goto label_goto_8;

}
// .method private final nextCE32FromContraction(Landroid/icu/impl/coll/CollationData;ILjava/lang/CharSequence;III)I
int android::icu::impl::coll::CollationIterator::nextCE32FromContraction(std::shared_ptr<android::icu::impl::coll::CollationData> d,int contractionCE32,std::shared_ptr<java::lang::CharSequence> trieChars,int trieOffset,int ce32,int cVar1)
{
	
	int lookAhead;
	int sinceMatch;
	std::shared_ptr<android::icu::util::CharsTrie> suffixes;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> match;
	int cVar0;
	int nextCp;
	int cVar1;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "contractionCE32"    # I
	//    .param p3, "trieChars"    # Ljava/lang/CharSequence;
	//    .param p4, "trieOffset"    # I
	//    .param p5, "ce32"    # I
	//    .param p6, "c"    # I
	lookAhead = 0x1;
	//    .local v4, "lookAhead":I
	sinceMatch = 0x1;
	//    .local v8, "sinceMatch":I
	suffixes = std::make_shared<android::icu::util::CharsTrie>(trieChars, trieOffset);
	//    .local v2, "suffixes":Landroid/icu/util/CharsTrie;
	if ( !(this->skipped) )  
		goto label_cond_1a;
	if ( !(( this->skipped->isEmpty() ^ 0x1)) )  
		goto label_cond_1a;
	this->skipped->saveTrieState(suffixes);
label_cond_1a:
	match = suffixes->firstForCodePoint(cVar1);
	//    .local v6, "match":Landroid/icu/util/BytesTrie$Result;
label_goto_1e:
	if ( !(match->hasValue()) )  
		goto label_cond_50;
	if ( !(match->hasNext()) )  
		goto label_cond_34;
	cVar0 = this->nextSkippedCodePoint();
	if ( cVar0 >= 0 )
		goto label_cond_35;
label_cond_34:
	return suffixes->getValue();
	// 1141    .line 731
label_cond_35:
	if ( !(this->skipped) )  
		goto label_cond_48;
	if ( !(( this->skipped->isEmpty() ^ 0x1)) )  
		goto label_cond_48;
	this->skipped->saveTrieState(suffixes);
label_cond_48:
	0x1;
label_goto_49:
	lookAhead = ( lookAhead + 0x1);
	match = suffixes->nextForCodePoint(cVar0);
	goto label_goto_1e;
	// 1176    .line 733
label_cond_50:
	if ( match == android::icu::util::BytesTrie_S_Result::NO_MATCH )
		goto label_cond_5a;
	nextCp = this->nextSkippedCodePoint();
	//    .local v7, "nextCp":I
	if ( nextCp >= 0 )
		goto label_cond_83;
	//    .end local v7    # "nextCp":I
label_cond_5a:
	if ( !(( contractionCE32 & 0x400)) )  
		goto label_cond_87;
	if ( !(( contractionCE32 & 0x100)) )  
		goto label_cond_64;
	if ( sinceMatch >= lookAhead )
		goto label_cond_87;
label_cond_64:
	if ( sinceMatch <= 0x1 )
		goto label_cond_72;
	this->backwardNumSkipped(sinceMatch);
	cVar1 = this->nextSkippedCodePoint();
	lookAhead = (lookAhead -  ( sinceMatch + -0x1));
	sinceMatch = 0x1;
label_cond_72:
	if ( d->getFCD16(cVar1) <= 0xff )
		goto label_cond_87;
	return this->nextCE32FromDiscontiguousContraction(d, suffixes, ce32, lookAhead, cVar1);
	// 1251    .line 764
	// 1252    .restart local v7    # "nextCp":I
label_cond_83:
	cVar0 = nextCp;
	sinceMatch = ( sinceMatch + 0x1);
	goto label_goto_49;
	// 1261    .line 770
	// 1262    .end local v7    # "nextCp":I
label_cond_87:
	this->backwardNumSkipped(sinceMatch);
	return ce32;

}
// .method private final nextCE32FromDiscontiguousContraction(Landroid/icu/impl/coll/CollationData;Landroid/icu/util/CharsTrie;III)I
int android::icu::impl::coll::CollationIterator::nextCE32FromDiscontiguousContraction(std::shared_ptr<android::icu::impl::coll::CollationData> d,std::shared_ptr<android::icu::util::CharsTrie> suffixes,int cVar4,int lookAhead,int c)
{
	
	int fcd16;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	int nextCp;
	int cVar1;
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_SkippedState> cVar2;
	int i;
	int sinceMatch;
	int cVar3;
	std::shared_ptr<android::icu::util::BytesTrie_S_Result> match;
	int cVar4;
	int cVar5;
	std::shared_ptr<android::icu::impl::coll::CollationData> d;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "suffixes"    # Landroid/icu/util/CharsTrie;
	//    .param p3, "ce32"    # I
	//    .param p4, "lookAhead"    # I
	//    .param p5, "c"    # I
	fcd16 = d->getFCD16(c);
	//    .local v0, "fcd16":I
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_12;
	if ( fcd16 >  0xff )
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 1300    .line 796
label_cond_12:
	nextCp = this->nextSkippedCodePoint();
	//    .local v4, "nextCp":I
	if ( nextCp >= 0 )
		goto label_cond_1d;
	this->backwardNumSkipped(0x1);
	return cVar4;
	// 1318    .line 802
label_cond_1d:
	cVar1 = ( lookAhead + 0x1);
	//    .local v5, "prevCC":I
	fcd16 = d->getFCD16(nextCp);
	if ( fcd16 >  0xff )
		goto label_cond_2e;
	this->backwardNumSkipped(0x2);
	return cVar4;
	// 1344    .line 814
label_cond_2e:
	if ( !(this->skipped) )  
		goto label_cond_3a;
	if ( !(this->skipped->isEmpty()) )  
		goto label_cond_be;
label_cond_3a:
	if ( this->skipped )     
		goto label_cond_45;
	cVar2 = std::make_shared<android::icu::impl::coll::CollationIterator_S_SkippedState>();
	this->skipped = cVar2;
label_cond_45:
	suffixes->reset();
	if ( cVar1 <= 0x2 )
		goto label_cond_66;
	this->backwardNumCodePoints(cVar1);
	suffixes->firstForCodePoint(this->nextCodePoint());
	i = 0x3;
	//    .local v1, "i":I
label_goto_56:
	if ( i >= cVar1 )
		goto label_cond_62;
	suffixes->nextForCodePoint(this->nextCodePoint());
	i = ( i + 0x1);
	goto label_goto_56;
	// 1409    .line 827
label_cond_62:
	this->forwardNumCodePoints(0x2);
	//    .end local v1    # "i":I
label_cond_66:
	this->skipped->saveTrieState(suffixes);
label_goto_6b:
	this->skipped->setFirstSkipped(c);
	sinceMatch = 0x2;
	//    .local v6, "sinceMatch":I
	cVar3 = nextCp;
label_cond_72:
	if ( ( fcd16 & 0xff) >= _shri(fcd16,0x8) )
		goto label_cond_da;
	match = suffixes->nextForCodePoint(cVar3);
	//    .local v3, "match":Landroid/icu/util/BytesTrie$Result;
	if ( !(match->hasValue()) )  
		goto label_cond_da;
	cVar4 = suffixes->getValue();
	sinceMatch = 0x0;
	this->skipped->recordMatch();
	if ( match->hasNext() )     
		goto label_cond_c4;
	//    .end local v3    # "match":Landroid/icu/util/BytesTrie$Result;
label_cond_90:
label_goto_90:
	this->backwardNumSkipped(sinceMatch);
	//    .local v2, "isTopDiscontiguous":Z
	this->skipped->replaceMatch();
	if ( !(this->skipped->isEmpty()) )  
		goto label_cond_bd;
	if ( !(( this->skipped->isEmpty() ^ 0x1)) )  
		goto label_cond_bd;
	cVar5 = -0x1;
label_goto_ab:
	this->appendCEsFromCE32(d, cVar5, cVar4, 0x1);
	if ( this->skipped->hasNext() )     
		goto label_cond_e7;
	this->skipped->clear();
	cVar4 = 0x1;
label_cond_bd:
	return cVar4;
	// 1534    .line 832
	// 1535    .end local v2    # "isTopDiscontiguous":Z
	// 1536    .end local v6    # "sinceMatch":I
label_cond_be:
	this->skipped->resetToTrieState(suffixes);
	goto label_goto_6b;
	// 1544    .line 849
	// 1545    .restart local v3    # "match":Landroid/icu/util/BytesTrie$Result;
	// 1546    .restart local v6    # "sinceMatch":I
label_cond_c4:
	this->skipped->saveTrieState(suffixes);
	//    .end local v3    # "match":Landroid/icu/util/BytesTrie$Result;
label_goto_c9:
	cVar3 = this->nextSkippedCodePoint();
	if ( cVar3 < 0 ) 
		goto label_cond_90;
	sinceMatch = ( sinceMatch + 0x1);
	fcd16 = d->getFCD16(cVar3);
	if ( fcd16 >  0xff )
		goto label_cond_72;
	goto label_goto_90;
	// 1576    .line 852
label_cond_da:
	this->skipped->skip(cVar3);
	this->skipped->resetToTrieState(suffixes);
	( fcd16 & 0xff);
	goto label_goto_c9;
	// 1592    .line 878
	// 1593    .restart local v2    # "isTopDiscontiguous":Z
label_cond_e7:
	cVar5 = this->skipped->next();
	cVar4 = this->getDataCE32(cVar5);
	if ( cVar4 != 0xc0 )
		goto label_cond_fe;
	d = this->data->base;
	cVar4 = d->getCE32(cVar5);
	goto label_goto_ab;
	// 1623    .line 884
label_cond_fe:
	d = this->data;
	goto label_goto_ab;

}
// .method private final nextCEFromCE32(Landroid/icu/impl/coll/CollationData;II)J
long long android::icu::impl::coll::CollationIterator::nextCEFromCE32(std::shared_ptr<android::icu::impl::coll::CollationData> d,int c,int ce32)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_CEBuffer> cVar0;
	int cVar1;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "c"    # I
	//    .param p3, "ce32"    # I
	cVar0 = this->ceBuffer;
	cVar0->length = ( cVar0->length + -0x1);
	this->appendCEsFromCE32(d, c, ce32, 0x1);
	cVar1 = this->cesIndex;
	this->cesIndex = ( cVar1 + 0x1);
	return this->ceBuffer->get(cVar1);

}
// .method private final nextSkippedCodePoint()I
int android::icu::impl::coll::CollationIterator::nextSkippedCodePoint()
{
	
	int c;
	
	if ( !(this->skipped) )  
		goto label_cond_13;
	if ( !(this->skipped->hasNext()) )  
		goto label_cond_13;
	return this->skipped->next();
	// 1692    .line 693
label_cond_13:
	if ( this->numCpFwd )     
		goto label_cond_19;
	return -0x1;
	// 1702    .line 694
label_cond_19:
	c = this->nextCodePoint();
	//    .local v0, "c":I
	if ( !(this->skipped) )  
		goto label_cond_32;
	if ( !(( this->skipped->isEmpty() ^ 0x1)) )  
		goto label_cond_32;
	if ( c < 0 ) 
		goto label_cond_32;
	this->skipped->incBeyond();
label_cond_32:
	if ( this->numCpFwd <= 0 )
		goto label_cond_3e;
	if ( c < 0 ) 
		goto label_cond_3e;
	this->numCpFwd = ( this->numCpFwd + -0x1);
label_cond_3e:
	return c;

}
// .method private final previousCEUnsafe(ILandroid/icu/impl/coll/UVector32;)J
long long android::icu::impl::coll::CollationIterator::previousCEUnsafe(int c,std::shared_ptr<android::icu::impl::coll::UVector32> offsets)
{
	
	int cVar0;
	int numBackward;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int offset;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar5;
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_CEBuffer> cVar6;
	int cVar7;
	
	//    .param p1, "c"    # I
	//    .param p2, "offsets"    # Landroid/icu/impl/coll/UVector32;
	cVar0 = 0x0;
	numBackward = 0x1;
	//    .local v0, "numBackward":I
label_cond_2:
	cVar1 = this->previousCodePoint();
	if ( cVar1 < 0 ) 
		goto label_cond_14;
	numBackward = ( numBackward + 0x1);
	if ( this->data->isUnsafeBackward(cVar1, this->isNumeric) )     
		goto label_cond_2;
label_cond_14:
	this->numCpFwd = numBackward;
	this->cesIndex = cVar0;
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_28;
	if ( !(this->ceBuffer->length) )  
		goto label_cond_28;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 1807    .line 930
label_cond_28:
	offset = this->getOffset();
	//    .local v1, "offset":I
label_cond_2c:
	if ( this->numCpFwd <= 0 )
		goto label_cond_87;
	this->numCpFwd = ( this->numCpFwd + -0x1);
	this->nextCE();
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_58;
	if ( (this->ceBuffer->get(( this->ceBuffer->length + -0x1)) > 0x101000100L) )     
		goto label_cond_58;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 1859    .line 939
label_cond_58:
	this->cesIndex = this->ceBuffer->length;
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_72;
	if ( offsets->size() <  this->ceBuffer->length )
		goto label_cond_72;
	cVar4 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar4;
	// 1888    .line 944
label_cond_72:
	offsets->addElement(offset);
	offset = this->getOffset();
label_goto_79:
	if ( offsets->size() >= this->ceBuffer->length )
		goto label_cond_2c;
	offsets->addElement(offset);
	goto label_goto_79;
	// 1914    .line 952
label_cond_87:
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_9b;
	if ( offsets->size() == this->ceBuffer->length )
		goto label_cond_9b;
	cVar5 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar5;
	// 1936    .line 954
label_cond_9b:
	offsets->addElement(offset);
	this->numCpFwd = -0x1;
	this->backwardNumCodePoints(numBackward);
	this->cesIndex = cVar0;
	cVar6 = this->ceBuffer;
	cVar7 = ( cVar6->length + -0x1);
	cVar6->length = cVar7;
	return this->ceBuffer->get(cVar7);

}
// .method protected final appendCEsFromCE32(Landroid/icu/impl/coll/CollationData;IIZ)V
void android::icu::impl::coll::CollationIterator::appendCEsFromCE32(std::shared_ptr<android::icu::impl::coll::CollationData> d,int c,int ce32,bool forward)
{
	
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_CEBuffer> cVar1;
	int index;
	int length;
	int ce32;
	int defaultCE32;
	int nextCp;
	std::shared_ptr<java::lang::AssertionError> cVar12;
	std::shared_ptr<int[]> jamoCE32s;
	int cVar14;
	int t;
	int cVar15;
	int v;
	int cVar16;
	int cVar17;
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_CEBuffer> cVar18;
	int c;
	std::shared_ptr<java::lang::AssertionError> cVar22;
	std::shared_ptr<java::lang::AssertionError> cVar23;
	char trail;
	int cVar25;
	std::shared_ptr<android::icu::impl::coll::CollationData> d;
	std::shared_ptr<java::lang::AssertionError> cVar31;
	std::shared_ptr<java::lang::AssertionError> cVar32;
	
	//    .param p1, "d"    # Landroid/icu/impl/coll/CollationData;
	//    .param p2, "c"    # I
	//    .param p3, "ce32"    # I
	//    .param p4, "forward"    # Z
label_cond_0:
label_goto_0:
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(ce32)) )  
		goto label_cond_2bd;
	// switch
	{
	auto item = ( android::icu::impl::coll::Collation::tagFromCE32(ce32) );
	if (item == 0) goto label_pswitch_e;
	if (item == 1) goto label_pswitch_17;
	if (item == 2) goto label_pswitch_23;
	if (item == 3) goto label_pswitch_e;
	if (item == 4) goto label_pswitch_2f;
	if (item == 5) goto label_pswitch_66;
	if (item == 6) goto label_pswitch_8f;
	if (item == 7) goto label_pswitch_b4;
	if (item == 8) goto label_pswitch_d0;
	if (item == 9) goto label_pswitch_ec;
	if (item == 10) goto label_pswitch_162;
	if (item == 11) goto label_pswitch_17e;
	if (item == 12) goto label_pswitch_193;
	if (item == 13) goto label_pswitch_221;
	if (item == 14) goto label_pswitch_27c;
	if (item == 15) goto label_pswitch_294;
	}
	goto label_goto_0;
	// 1997    .line 466
label_pswitch_e:
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("internal program error: should be unreachable")));
	// throw
	throw cVar0;
	// 2007    .line 468
label_pswitch_17:
	this->ceBuffer->append(android::icu::impl::coll::Collation::ceFromLongPrimaryCE32(ce32));
	return;
	// 2022    .line 471
label_pswitch_23:
	this->ceBuffer->append(android::icu::impl::coll::Collation::ceFromLongSecondaryCE32(ce32));
	return;
	// 2037    .line 474
label_pswitch_2f:
	this->ceBuffer->ensureAppendCapacity(0x2);
	this->ceBuffer->set(this->ceBuffer->length, android::icu::impl::coll::Collation::latinCE0FromCE32(ce32));
	this->ceBuffer->set(( this->ceBuffer->length + 0x1), android::icu::impl::coll::Collation::latinCE1FromCE32(ce32));
	cVar1 = this->ceBuffer;
	cVar1->length = ( cVar1->length + 0x2);
	return;
	// 2097    .line 480
label_pswitch_66:
	index = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .local v11, "index":I
	length = android::icu::impl::coll::Collation::lengthFromCE32(ce32);
	//    .local v14, "length":I
	this->ceBuffer->ensureAppendCapacity(length);
label_goto_75:
	//    .end local v11    # "index":I
	//    .local v12, "index":I
	this->ceBuffer->appendUnsafe(android::icu::impl::coll::Collation::ceFromCE32(d->ce32s[index]));
	length = ( length + -0x1);
	if ( length <= 0 )
		goto label_cond_8e;
	index = ( index + 0x1);
	//    .end local v12    # "index":I
	//    .restart local v11    # "index":I
	goto label_goto_75;
	// 2150    .line 486
	// 2151    .end local v11    # "index":I
	// 2152    .restart local v12    # "index":I
label_cond_8e:
	return;
	// 2156    .line 489
	// 2157    .end local v12    # "index":I
	// 2158    .end local v14    # "length":I
label_pswitch_8f:
	index = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .restart local v11    # "index":I
	length = android::icu::impl::coll::Collation::lengthFromCE32(ce32);
	//    .restart local v14    # "length":I
	this->ceBuffer->ensureAppendCapacity(length);
label_goto_9e:
	//    .end local v11    # "index":I
	//    .restart local v12    # "index":I
	this->ceBuffer->appendUnsafe(d->ces[index]);
	length = ( length + -0x1);
	if ( length <= 0 )
		goto label_cond_b3;
	index = ( index + 0x1);
	//    .end local v12    # "index":I
	//    .restart local v11    # "index":I
	goto label_goto_9e;
	// 2207    .line 495
	// 2208    .end local v11    # "index":I
	// 2209    .restart local v12    # "index":I
label_cond_b3:
	return;
	// 2213    .line 498
	// 2214    .end local v12    # "index":I
	// 2215    .end local v14    # "length":I
label_pswitch_b4:
	ce32 = this->getCE32FromBuilderData(ce32);
	if ( ce32 != 0xc0 )
		goto label_cond_0;
	ce32 = this->data->base->getCE32(c);
	goto label_goto_0;
	// 2248    .line 505
label_pswitch_d0:
	if ( !(forward) )  
		goto label_cond_d8;
	this->backwardNumCodePoints(0x1);
label_cond_d8:
	ce32 = this->getCE32FromPrefix(d, ce32);
	if ( !(forward) )  
		goto label_cond_0;
	this->forwardNumCodePoints(0x1);
	goto label_goto_0;
	// 2281    .line 510
label_pswitch_ec:
	index = android::icu::impl::coll::Collation::indexFromCE32(ce32);
	//    .restart local v11    # "index":I
	defaultCE32 = d->getCE32FromContexts(index);
	//    .local v9, "defaultCE32":I
	if ( forward )     
		goto label_cond_fc;
	ce32 = defaultCE32;
	goto label_goto_0;
	// 2305    .line 519
label_cond_fc:
	if ( this->skipped )     
		goto label_cond_12a;
	if ( this->numCpFwd >= 0 )
		goto label_cond_12a;
	nextCp = this->nextCodePoint();
	//    .local v10, "nextCp":I
	if ( nextCp >= 0 )
		goto label_cond_112;
	ce32 = defaultCE32;
	goto label_goto_0;
	// 2334    .line 527
label_cond_112:
	if ( !(( ce32 & 0x200)) )  
		goto label_cond_14c;
	if ( !(( android::icu::impl::coll::CollationFCD::mayHaveLccc(nextCp) ^ 0x1)) )  
		goto label_cond_14c;
	this->backwardNumCodePoints(0x1);
	ce32 = defaultCE32;
	goto label_goto_0;
	// 2365    .line 536
	// 2366    .end local v10    # "nextCp":I
label_cond_12a:
	nextCp = this->nextSkippedCodePoint();
	//    .restart local v10    # "nextCp":I
	if ( nextCp >= 0 )
		goto label_cond_134;
	ce32 = defaultCE32;
	goto label_goto_0;
	// 2382    .line 541
label_cond_134:
	if ( !(( ce32 & 0x200)) )  
		goto label_cond_14c;
	if ( !(( android::icu::impl::coll::CollationFCD::mayHaveLccc(nextCp) ^ 0x1)) )  
		goto label_cond_14c;
	this->backwardNumSkipped(0x1);
	ce32 = defaultCE32;
	goto label_goto_0;
	// 2413    .line 550
label_cond_14c:
	ce32 = this->nextCE32FromContraction(d, ce32, d->contexts, ( index + 0x2), defaultCE32, nextCp);
	if ( ce32 != 0x1 )
		goto label_cond_0;
	return;
	// 2441    .line 559
	// 2442    .end local v9    # "defaultCE32":I
	// 2443    .end local v10    # "nextCp":I
	// 2444    .end local v11    # "index":I
label_pswitch_162:
	if ( !(this->isNumeric) )  
		goto label_cond_172;
	this->appendNumericCEs(ce32, forward);
	return;
	// 2464    .line 564
label_cond_172:
	ce32 = d->ce32s[android::icu::impl::coll::Collation::indexFromCE32(ce32)];
	goto label_goto_0;
	// 2478    .line 568
label_pswitch_17e:
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_18a;
	if ( !(c) )  
		goto label_cond_18a;
	cVar12 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar12;
	// 2492    .line 571
label_cond_18a:
	ce32 = d->ce32s[0x0];
	goto label_goto_0;
	// 2504    .line 574
label_pswitch_193:
	jamoCE32s = d->jamoCE32s;
	//    .local v13, "jamoCE32s":[I
	cVar14 = (c - 0xac00);
	t = ( cVar14 % 0x1c);
	//    .local v15, "t":I
	cVar15 = ( cVar14 / 0x1c);
	v = ( cVar15 % 0x15);
	//    .local v17, "v":I
	cVar16 = ( cVar15 / 0x15);
	if ( !(( ce32 & 0x100)) )  
		goto label_cond_1fc;
	if ( t )     
		goto label_cond_1fa;
	cVar17 = 0x2;
label_goto_1b1:
	this->ceBuffer->ensureAppendCapacity(cVar17);
	this->ceBuffer->set(this->ceBuffer->length, android::icu::impl::coll::Collation::ceFromCE32(jamoCE32s[cVar16]));
	this->ceBuffer->set(( this->ceBuffer->length + 0x1), android::icu::impl::coll::Collation::ceFromCE32(jamoCE32s[( v + 0x13)]));
	cVar18 = this->ceBuffer;
	cVar18->length = ( cVar18->length + 0x2);
	if ( !(t) )  
		goto label_cond_1f9;
	this->ceBuffer->appendUnsafe(android::icu::impl::coll::Collation::ceFromCE32(jamoCE32s[( t + 0x27)]));
label_cond_1f9:
	return;
	// 2624    .line 583
label_cond_1fa:
	cVar17 = 0x3;
	goto label_goto_1b1;
	// 2630    .line 594
label_cond_1fc:
	this->appendCEsFromCE32(d, -0x1, jamoCE32s[cVar16], forward);
	this->appendCEsFromCE32(d, -0x1, jamoCE32s[( v + 0x13)], forward);
	if ( t )     
		goto label_cond_219;
	return;
	// 2664    .line 601
label_cond_219:
	ce32 = jamoCE32s[( t + 0x27)];
	c = -0x1;
	goto label_goto_0;
	// 2676    .line 607
	// 2677    .end local v13    # "jamoCE32s":[I
	// 2678    .end local v15    # "t":I
	// 2679    .end local v17    # "v":I
label_pswitch_221:
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_22d;
	if ( forward )     
		goto label_cond_22d;
	cVar22 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar22;
	// 2693    .line 608
label_cond_22d:
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_23d;
	if ( android::icu::impl::coll::CollationIterator::isLeadSurrogate(c) )     
		goto label_cond_23d;
	cVar23 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar23;
	// 2711    .line 610
label_cond_23d:
	trail = this->handleGetTrailSurrogate();
	//    .local v16, "trail":C
	if ( !(java::lang::Character::isLowSurrogate(trail)) )  
		goto label_cond_278;
	c = java::lang::Character::toCodePoint((char)(c), trail);
	cVar25 = ( ce32 & 0x300);
	if ( cVar25 )     
		goto label_cond_25c;
	ce32 = -0x1;
	goto label_goto_0;
	// 2750    .line 615
label_cond_25c:
	if ( cVar25 == 0x100 )
		goto label_cond_26c;
	ce32 = d->getCE32FromSupplementary(c);
	if ( ce32 != 0xc0 )
		goto label_cond_0;
label_cond_26c:
	d = d->base;
	ce32 = d->getCE32FromSupplementary(c);
	goto label_goto_0;
	// 2784    .line 623
label_cond_278:
	ce32 = -0x1;
	goto label_goto_0;
	// 2790    .line 628
	// 2791    .end local v16    # "trail":C
label_pswitch_27c:
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_288;
	if ( c >= 0 )
		goto label_cond_288;
	cVar31 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar31;
	// 2805    .line 629
label_cond_288:
	this->ceBuffer->append(d->getCEFromOffsetCE32(c, ce32));
	return;
	// 2820    .line 632
label_pswitch_294:
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_2a0;
	if ( c >= 0 )
		goto label_cond_2a0;
	cVar32 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar32;
	// 2834    .line 633
label_cond_2a0:
	if ( !(android::icu::impl::coll::CollationIterator::isSurrogate(c)) )  
		goto label_cond_2b1;
	if ( !(this->forbidSurrogateCodePoints()) )  
		goto label_cond_2b1;
	ce32 = -0x2fafb;
	goto label_goto_0;
	// 2854    .line 637
label_cond_2b1:
	this->ceBuffer->append(android::icu::impl::coll::Collation::unassignedCEFromCodePoint(c));
	return;
	// 2869    .line 642
label_cond_2bd:
	this->ceBuffer->append(android::icu::impl::coll::Collation::ceFromSimpleCE32(ce32));
	return;
	// 2884    .line 463
	// 2885    nop
	// 2887    :pswitch_data_2ca
	// 2888    .packed-switch 0x0
	// 2889        :pswitch_e
	// 2890        :pswitch_17
	// 2891        :pswitch_23
	// 2892        :pswitch_e
	// 2893        :pswitch_2f
	// 2894        :pswitch_66
	// 2895        :pswitch_8f
	// 2896        :pswitch_b4
	// 2897        :pswitch_d0
	// 2898        :pswitch_ec
	// 2899        :pswitch_162
	// 2900        :pswitch_17e
	// 2901        :pswitch_193
	// 2902        :pswitch_221
	// 2903        :pswitch_27c
	// 2904        :pswitch_294
	// 2905    .end packed-switch

}
// .method final clearCEs()V
void android::icu::impl::coll::CollationIterator::clearCEs()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->ceBuffer->length = cVar0;
	this->cesIndex = cVar0;
	return;

}
// .method public final clearCEsIfNoneRemaining()V
void android::icu::impl::coll::CollationIterator::clearCEsIfNoneRemaining()
{
	
	if ( this->cesIndex != this->ceBuffer->length )
		goto label_cond_b;
	this->clearCEs();
label_cond_b:
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::coll::CollationIterator::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::coll::CollationIterator> o;
	int i;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( other )     
		goto label_cond_4;
	return cVar0;
	// 2960    .line 210
label_cond_4:
	if ( this->getClass()->equals(other->getClass()) )     
		goto label_cond_13;
	return cVar0;
label_cond_13:
	o = other;
	o->checkCast("android::icu::impl::coll::CollationIterator");
	//    .local v1, "o":Landroid/icu/impl/coll/CollationIterator;
	if ( this->ceBuffer->length != o->ceBuffer->length )
		goto label_cond_26;
	if ( this->cesIndex == o->cesIndex )
		goto label_cond_27;
label_cond_26:
	return cVar0;
	// 3007    .line 214
label_cond_27:
	if ( this->numCpFwd != o->numCpFwd )
		goto label_cond_26;
	if ( this->isNumeric != o->isNumeric )
		goto label_cond_26;
	i = 0x0;
	//    .local v0, "i":I
label_goto_34:
	if ( i >= this->ceBuffer->length )
		goto label_cond_4e;
	if ( !((this->ceBuffer->get(i) > o->ceBuffer->get(i))) )  
		goto label_cond_4b;
	return cVar0;
	// 3052    .line 218
label_cond_4b:
	i = ( i + 0x1);
	goto label_goto_34;
	// 3058    .line 221
label_cond_4e:
	return 0x1;

}
// .method public final fetchCEs()I
int android::icu::impl::coll::CollationIterator::fetchCEs()
{
	
label_goto_0:
	if ( !((this->nextCE() > 0x101000100L)) )  
		goto label_cond_14;
	this->cesIndex = this->ceBuffer->length;
	goto label_goto_0;
	// 3090    .line 294
label_cond_14:
	return this->ceBuffer->length;

}
// .method protected forbidSurrogateCodePoints()Z
bool android::icu::impl::coll::CollationIterator::forbidSurrogateCodePoints()
{
	
	return 0x0;

}
// .method public final getCE(I)J
long long android::icu::impl::coll::CollationIterator::getCE(int i)
{
	
	//    .param p1, "i"    # I
	return this->ceBuffer->get(i);

}
// .method protected getCE32FromBuilderData(I)I
int android::icu::impl::coll::CollationIterator::getCE32FromBuilderData(int ce32)
{
	
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	
	//    .param p1, "ce32"    # I
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("internal program error: should be unreachable")));
	// throw
	throw cVar0;

}
// .method public final getCEs()[J
long long android::icu::impl::coll::CollationIterator::getCEs()
{
	
	return this->ceBuffer->getCEs();

}
// .method public final getCEsLength()I
int android::icu::impl::coll::CollationIterator::getCEsLength()
{
	
	return this->ceBuffer->length;

}
// .method protected getDataCE32(I)I
int android::icu::impl::coll::CollationIterator::getDataCE32(int c)
{
	
	//    .param p1, "c"    # I
	return this->data->getCE32(c);

}
// .method protected handleGetTrailSurrogate()C
char android::icu::impl::coll::CollationIterator::handleGetTrailSurrogate()
{
	
	return 0x0;

}
// .method protected handleNextCE32()J
long long android::icu::impl::coll::CollationIterator::handleNextCE32()
{
	
	int c;
	
	c = this->nextCodePoint();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_c;
	return -0xffffff40L;
	// 3213    .line 409
label_cond_c:
	return this->makeCodePointAndCE32Pair(c, this->data->getCE32(c));

}
// .method public hashCode()I
int android::icu::impl::coll::CollationIterator::hashCode()
{
	
	return 0x0;

}
// .method protected makeCodePointAndCE32Pair(II)J
long long android::icu::impl::coll::CollationIterator::makeCodePointAndCE32Pair(int c,int ce32)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "ce32"    # I
	return (((long long)(c) << 0x20) |  ((long long)(ce32) &  0xffffffffL));

}
// .method public final nextCE()J
long long android::icu::impl::coll::CollationIterator::nextCE()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int cVar5;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	auto cAndCE32;
	int c;
	int ce32;
	int t;
	int cVar7;
	int cVar8;
	std::shared_ptr<android::icu::impl::coll::CollationData> d;
	int cVar9;
	int cVar10;
	
	cVar0 = 0xff00;
	cVar1 = 0x10;
	cVar2 = -0x10000;
	cVar3 = 0xc0;
	cVar4 = 0x20;
	if ( this->cesIndex >= this->ceBuffer->length )
		goto label_cond_20;
	cVar5 = this->cesIndex;
	this->cesIndex = ( cVar5 + 0x1);
	return this->ceBuffer->get(cVar5);
	// 3300    .line 247
label_cond_20:
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_32;
	if ( this->cesIndex == this->ceBuffer->length )
		goto label_cond_32;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 3320    .line 248
label_cond_32:
	this->ceBuffer->incLength();
	cAndCE32 = this->handleNextCE32();
	//    .local v2, "cAndCE32":J
	c = (int)(_shrll(cAndCE32,cVar4));
	//    .local v0, "c":I
	ce32 = (int)(cAndCE32);
	//    .local v1, "ce32":I
	t = ( ce32 & 0xff);
	//    .local v5, "t":I
	if ( t >= cVar3 )
		goto label_cond_5d;
	cVar7 = this->cesIndex;
	this->cesIndex = ( cVar7 + 0x1);
	return this->ceBuffer->set(cVar7, ((((long long)((ce32 & cVar2)) << cVar4) |  ((long long)((ce32 & cVar0)) << cVar1)) |  (long long)(( t << 0x8))));
	// 3386    .line 262
label_cond_5d:
	if ( t != cVar3 )
		goto label_cond_99;
	if ( c >= 0 )
		goto label_cond_73;
	cVar8 = this->cesIndex;
	this->cesIndex = ( cVar8 + 0x1);
	return this->ceBuffer->set(cVar8, 0x101000100L);
	// 3410    .line 266
label_cond_73:
	d = this->data->base;
	//    .local v4, "d":Landroid/icu/impl/coll/CollationData;
	ce32 = d->getCE32(c);
	t = ( ce32 & 0xff);
	if ( t >= cVar3 )
		goto label_cond_9b;
	cVar9 = this->cesIndex;
	this->cesIndex = ( cVar9 + 0x1);
	return this->ceBuffer->set(cVar9, ((((long long)((ce32 & cVar2)) << cVar4) |  ((long long)((ce32 & cVar0)) << cVar1)) |  (long long)(( t << 0x8))));
	// 3465    .line 275
	// 3466    .end local v4    # "d":Landroid/icu/impl/coll/CollationData;
label_cond_99:
	//    .restart local v4    # "d":Landroid/icu/impl/coll/CollationData;
label_cond_9b:
	if ( t != 0xc1 )
		goto label_cond_b4;
	cVar10 = this->cesIndex;
	this->cesIndex = ( cVar10 + 0x1);
	return this->ceBuffer->set(cVar10, (((long long)((ce32 - t)) << cVar4) |  0x5000500));
	// 3504    .line 282
label_cond_b4:
	return this->nextCEFromCE32(d, c, ce32);

}
// .method public final previousCE(Landroid/icu/impl/coll/UVector32;)J
long long android::icu::impl::coll::CollationIterator::previousCE(std::shared_ptr<android::icu::impl::coll::UVector32> offsets)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_CEBuffer> cVar0;
	int cVar1;
	int c;
	int ce32;
	std::shared_ptr<android::icu::impl::coll::CollationData> d;
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_CEBuffer> cVar2;
	int cVar3;
	
	//    .param p1, "offsets"    # Landroid/icu/impl/coll/UVector32;
	if ( this->ceBuffer->length <= 0 )
		goto label_cond_16;
	cVar0 = this->ceBuffer;
	cVar1 = ( cVar0->length + -0x1);
	cVar0->length = cVar1;
	return this->ceBuffer->get(cVar1);
	// 3547    .line 313
label_cond_16:
	offsets->removeAllElements();
	//    .local v3, "limitOffset":I
	c = this->previousCodePoint();
	//    .local v0, "c":I
	if ( c >= 0 )
		goto label_cond_29;
	return 0x101000100L;
	// 3570    .line 317
label_cond_29:
	if ( !(this->data->isUnsafeBackward(c, this->isNumeric)) )  
		goto label_cond_38;
	return this->previousCEUnsafe(c, offsets);
	// 3589    .line 322
label_cond_38:
	ce32 = this->data->getCE32(c);
	//    .local v1, "ce32":I
	if ( ce32 != 0xc0 )
		goto label_cond_55;
	d = this->data->base;
	//    .local v2, "d":Landroid/icu/impl/coll/CollationData;
	ce32 = d->getCE32(c);
label_goto_4a:
	if ( !(android::icu::impl::coll::Collation::isSimpleOrLongCE32(ce32)) )  
		goto label_cond_58;
	return android::icu::impl::coll::Collation::ceFromCE32(ce32);
	// 3629    .line 328
	// 3630    .end local v2    # "d":Landroid/icu/impl/coll/CollationData;
label_cond_55:
	//    .restart local v2    # "d":Landroid/icu/impl/coll/CollationData;
	goto label_goto_4a;
	// 3637    .line 333
label_cond_58:
	this->appendCEsFromCE32(d, c, ce32, 0x0);
	if ( this->ceBuffer->length <= 0x1 )
		goto label_cond_77;
	offsets->addElement(this->getOffset());
label_goto_69:
	if ( offsets->size() >  this->ceBuffer->length )
		goto label_cond_77;
	offsets->addElement(this->getOffset());
	goto label_goto_69;
	// 3674    .line 342
label_cond_77:
	cVar2 = this->ceBuffer;
	cVar3 = ( cVar2->length + -0x1);
	cVar2->length = cVar3;
	return this->ceBuffer->get(cVar3);

}
// .method protected final reset()V
void android::icu::impl::coll::CollationIterator::reset()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	this->ceBuffer->length = cVar0;
	this->cesIndex = cVar0;
	if ( !(this->skipped) )  
		goto label_cond_10;
	this->skipped->clear();
label_cond_10:
	return;

}
// .method protected final reset(Z)V
void android::icu::impl::coll::CollationIterator::reset(bool numeric)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationIterator_S_CEBuffer> cVar0;
	
	//    .param p1, "numeric"    # Z
	if ( this->ceBuffer )     
		goto label_cond_b;
	cVar0 = std::make_shared<android::icu::impl::coll::CollationIterator_S_CEBuffer>();
	this->ceBuffer = cVar0;
label_cond_b:
	this->reset();
	this->isNumeric = numeric;
	return;

}
// .method final setCurrentCE(J)V
void android::icu::impl::coll::CollationIterator::setCurrentCE(long long ce)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "ce"    # J
	if ( android::icu::impl::coll::CollationIterator::_assertionsDisabled )     
		goto label_cond_e;
	if ( this->cesIndex > 0 ) 
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 3774    .line 302
label_cond_e:
	this->ceBuffer->set(( this->cesIndex + -0x1), ce);
	return;

}


