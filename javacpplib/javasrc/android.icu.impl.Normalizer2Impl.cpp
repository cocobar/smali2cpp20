// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Normalizer2Impl.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Normalizer2Impl_S_1.h"
#include "android.icu.impl.Normalizer2Impl_S_Hangul.h"
#include "android.icu.impl.Normalizer2Impl_S_IsAcceptable.h"
#include "android.icu.impl.Normalizer2Impl_S_ReorderingBuffer.h"
#include "android.icu.impl.Normalizer2Impl_S_UTF16Plus.h"
#include "android.icu.impl.Normalizer2Impl.h"
#include "android.icu.impl.Trie2_S_Range.h"
#include "android.icu.impl.Trie2_S_ValueMapper.h"
#include "android.icu.impl.Trie2Writable.h"
#include "android.icu.impl.Trie2_16.h"
#include "android.icu.impl.Trie2_32.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "android.icu.util.VersionInfo.h"
#include "java.io.IOException.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.ArrayList.h"
#include "java.util.Iterator.h"

static android::icu::impl::Normalizer2Impl::CANON_HAS_COMPOSITIONS = 0x40000000;
static android::icu::impl::Normalizer2Impl::CANON_HAS_SET = 0x200000;
static android::icu::impl::Normalizer2Impl::CANON_NOT_SEGMENT_STARTER = -0x80000000;
static android::icu::impl::Normalizer2Impl::CANON_VALUE_MASK = 0x1fffff;
static android::icu::impl::Normalizer2Impl::COMP_1_LAST_TUPLE = 0x8000;
static android::icu::impl::Normalizer2Impl::COMP_1_TRAIL_LIMIT = 0x3400;
static android::icu::impl::Normalizer2Impl::COMP_1_TRAIL_MASK = 0x7ffe;
static android::icu::impl::Normalizer2Impl::COMP_1_TRAIL_SHIFT = 0x9;
static android::icu::impl::Normalizer2Impl::COMP_1_TRIPLE = 0x1;
static android::icu::impl::Normalizer2Impl::COMP_2_TRAIL_MASK = 0xffc0;
static android::icu::impl::Normalizer2Impl::COMP_2_TRAIL_SHIFT = 0x6;
static android::icu::impl::Normalizer2Impl::DATA_FORMAT = 0x4e726d32;
static android::icu::impl::Normalizer2Impl::IS_ACCEPTABLE;
static android::icu::impl::Normalizer2Impl::IX_COUNT = 0x10;
static android::icu::impl::Normalizer2Impl::IX_EXTRA_DATA_OFFSET = 0x1;
static android::icu::impl::Normalizer2Impl::IX_LIMIT_NO_NO = 0xc;
static android::icu::impl::Normalizer2Impl::IX_MIN_COMP_NO_MAYBE_CP = 0x9;
static android::icu::impl::Normalizer2Impl::IX_MIN_DECOMP_NO_CP = 0x8;
static android::icu::impl::Normalizer2Impl::IX_MIN_MAYBE_YES = 0xd;
static android::icu::impl::Normalizer2Impl::IX_MIN_NO_NO = 0xb;
static android::icu::impl::Normalizer2Impl::IX_MIN_YES_NO = 0xa;
static android::icu::impl::Normalizer2Impl::IX_MIN_YES_NO_MAPPINGS_ONLY = 0xe;
static android::icu::impl::Normalizer2Impl::IX_NORM_TRIE_OFFSET = 0x0;
static android::icu::impl::Normalizer2Impl::IX_RESERVED3_OFFSET = 0x3;
static android::icu::impl::Normalizer2Impl::IX_SMALL_FCD_OFFSET = 0x2;
static android::icu::impl::Normalizer2Impl::IX_TOTAL_SIZE = 0x7;
static android::icu::impl::Normalizer2Impl::JAMO_L = 0x1;
static android::icu::impl::Normalizer2Impl::JAMO_VT = 0xff00;
static android::icu::impl::Normalizer2Impl::MAPPING_HAS_CCC_LCCC_WORD = 0x80;
static android::icu::impl::Normalizer2Impl::MAPPING_HAS_RAW_MAPPING = 0x40;
static android::icu::impl::Normalizer2Impl::MAPPING_LENGTH_MASK = 0x1f;
static android::icu::impl::Normalizer2Impl::MAPPING_NO_COMP_BOUNDARY_AFTER = 0x20;
static android::icu::impl::Normalizer2Impl::MAX_DELTA = 0x40;
static android::icu::impl::Normalizer2Impl::MIN_CCC_LCCC_CP = 0x300;
static android::icu::impl::Normalizer2Impl::MIN_NORMAL_MAYBE_YES = 0xfe00;
static android::icu::impl::Normalizer2Impl::MIN_YES_YES_WITH_CC = 0xff01;
static android::icu::impl::Normalizer2Impl::segmentStarterMapper;
// .method static constructor <clinit>()V
void android::icu::impl::Normalizer2Impl::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_IsAcceptable> cVar0;
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_1> cVar1;
	
	cVar0 = std::make_shared<android::icu::impl::Normalizer2Impl_S_IsAcceptable>(0x0);
	android::icu::impl::Normalizer2Impl::IS_ACCEPTABLE = cVar0;
	cVar1 = std::make_shared<android::icu::impl::Normalizer2Impl_S_1>();
	android::icu::impl::Normalizer2Impl::segmentStarterMapper = cVar1;
	return;

}
// .method public constructor <init>()V
android::icu::impl::Normalizer2Impl::Normalizer2Impl()
{
	
	// 165    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private addComposites(ILandroid/icu/text/UnicodeSet;)V
void android::icu::impl::Normalizer2Impl::addComposites(int list,std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	int firstUnit;
	int compositeAndFwd;
	int list;
	int composite;
	
	//    .param p1, "list"    # I
	//    .param p2, "set"    # Landroid/icu/text/UnicodeSet;
label_cond_0:
	firstUnit = this->maybeYesCompositions->charAt(list);
	//    .local v2, "firstUnit":I
	if ( ( firstUnit & 0x1) )     
		goto label_cond_2f;
	compositeAndFwd = this->maybeYesCompositions->charAt(( list + 0x1));
	//    .local v1, "compositeAndFwd":I
	list = ( list + 0x2);
label_goto_14:
	composite = _shri(compositeAndFwd,0x1);
	//    .local v0, "composite":I
	if ( !(( compositeAndFwd & 0x1)) )  
		goto label_cond_25;
	this->addComposites(this->getCompositionsListForComposite(this->getNorm16(composite)), set);
label_cond_25:
	set->add(composite);
	if ( !((0x8000 &  firstUnit)) )  
		goto label_cond_0;
	return;
	// 238    .line 1886
	// 239    .end local v0    # "composite":I
	// 240    .end local v1    # "compositeAndFwd":I
label_cond_2f:
	compositeAndFwd = (( (this->maybeYesCompositions->charAt(( list + 0x1)) &  -0xffc1) << 0x10) | this->maybeYesCompositions->charAt(( list + 0x2)));
	//    .restart local v1    # "compositeAndFwd":I
	list = ( list + 0x3);
	goto label_goto_14;

}
// .method private addToStartSet(Landroid/icu/impl/Trie2Writable;II)V
void android::icu::impl::Normalizer2Impl::addToStartSet(std::shared_ptr<android::icu::impl::Trie2Writable> newData,int origin,int decompLead)
{
	
	int cVar0;
	int cVar1;
	int canonValue;
	int firstOrigin;
	std::shared_ptr<android::icu::text::UnicodeSet> set;
	
	//    .param p1, "newData"    # Landroid/icu/impl/Trie2Writable;
	//    .param p2, "origin"    # I
	//    .param p3, "decompLead"    # I
	cVar0 = 0x200000;
	cVar1 = 0x1fffff;
	canonValue = newData->get(decompLead);
	//    .local v0, "canonValue":I
	if ( (0x3fffff &  canonValue) )     
		goto label_cond_17;
	if ( !(origin) )  
		goto label_cond_17;
	newData->set(decompLead, (canonValue | origin));
label_goto_16:
	return;
	// 310    .line 2181
label_cond_17:
	if ( (canonValue & cVar0) )     
		goto label_cond_3f;
	firstOrigin = (canonValue & cVar1);
	//    .local v1, "firstOrigin":I
	newData->set(decompLead, (((-0x200000 &  canonValue) |  cVar0) | this->canonStartSets->size()));
	set = std::make_shared<android::icu::text::UnicodeSet>();
	//    .local v2, "set":Landroid/icu/text/UnicodeSet;
	this->canonStartSets->add(set);
	if ( !(firstOrigin) )  
		goto label_cond_3b;
	set->add(firstOrigin);
	//    .end local v1    # "firstOrigin":I
label_cond_3b:
label_goto_3b:
	set->add(origin);
	goto label_goto_16;
	// 362    .line 2190
	// 363    .end local v2    # "set":Landroid/icu/text/UnicodeSet;
label_cond_3f:
	set = this->canonStartSets->get((cVar1 &  canonValue));
	set->checkCast("android::icu::text::UnicodeSet");
	//    .restart local v2    # "set":Landroid/icu/text/UnicodeSet;
	goto label_goto_3b;

}
// .method private static combine(Ljava/lang/String;II)I
int android::icu::impl::Normalizer2Impl::combine(std::shared_ptr<java::lang::String> compositions,int list,int trail)
{
	
	int key1;
	int firstUnit;
	int list;
	int key2;
	int secondUnit;
	
	//    .param p0, "compositions"    # Ljava/lang/String;
	//    .param p1, "list"    # I
	//    .param p2, "trail"    # I
	if ( trail >= 0x3400 )
		goto label_cond_31;
	key1 = ( trail << 0x1);
	//    .local v1, "key1":I
label_goto_6:
	firstUnit = compositions->charAt(list);
	//    .local v0, "firstUnit":I
	if ( key1 <= firstUnit )
		goto label_cond_12;
	list = (list +  ( ( firstUnit & 0x1) + 0x2));
	goto label_goto_6;
	// 413    .line 1839
label_cond_12:
	if ( key1 != ( firstUnit & 0x7ffe) )
		goto label_cond_5c;
	if ( !(( firstUnit & 0x1)) )  
		goto label_cond_2a;
	return (( compositions->charAt(( list + 0x1)) << 0x10) |  compositions->charAt(( list + 0x2)));
	// 443    .line 1843
label_cond_2a:
	return compositions->charAt(( list + 0x1));
	// 453    .line 1849
	// 454    .end local v0    # "firstUnit":I
	// 455    .end local v1    # "key1":I
label_cond_31:
	key1 = ( ( _shri(trail,0x9) & -0x2) + 0x3400);
	//    .restart local v1    # "key1":I
	key2 = (( trail << 0x6) & 0xffff);
	//    .local v2, "key2":I
label_goto_3e:
	firstUnit = compositions->charAt(list);
	//    .restart local v0    # "firstUnit":I
	if ( key1 <= firstUnit )
		goto label_cond_4a;
	list = (list +  ( ( firstUnit & 0x1) + 0x2));
	goto label_goto_3e;
	// 490    .line 1855
label_cond_4a:
	if ( key1 != ( firstUnit & 0x7ffe) )
		goto label_cond_5c;
	secondUnit = compositions->charAt(( list + 0x1));
	//    .local v3, "secondUnit":I
	if ( key2 <= secondUnit )
		goto label_cond_61;
	if ( !((0x8000 &  firstUnit)) )  
		goto label_cond_5e;
	//    .end local v2    # "key2":I
	//    .end local v3    # "secondUnit":I
label_cond_5c:
	return -0x1;
	// 521    .line 1860
	// 522    .restart local v2    # "key2":I
	// 523    .restart local v3    # "secondUnit":I
label_cond_5e:
	list = ( list + 0x3);
	goto label_goto_3e;
	// 529    .line 1862
label_cond_61:
	if ( key2 != (0xffc0 &  secondUnit) )
		goto label_cond_5c;
	return (( (-0xffc1 &  secondUnit) << 0x10) |  compositions->charAt(( list + 0x2)));

}
// .method private decompose(IILandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)V
void android::icu::impl::Normalizer2Impl::decompose(int c,int norm16,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	int c;
	int norm16;
	int firstUnit;
	int cVar2;
	
	//    .param p1, "c"    # I
	//    .param p2, "norm16"    # I
	//    .param p3, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
label_goto_0:
	if ( !(this->isDecompYes(norm16)) )  
		goto label_cond_e;
	buffer->append(c, android::icu::impl::Normalizer2Impl::getCCFromYesOrMaybe(norm16));
label_goto_d:
	return;
	// 581    .line 1781
label_cond_e:
	if ( !(this->isHangul(norm16)) )  
		goto label_cond_18;
	android::icu::impl::Normalizer2Impl_S_Hangul::decompose(c, buffer);
	goto label_goto_d;
	// 594    .line 1784
label_cond_18:
	if ( !(this->isDecompNoAlgorithmic(norm16)) )  
		goto label_cond_27;
	c = this->mapAlgorithmic(c, norm16);
	norm16 = this->getNorm16(c);
	goto label_goto_0;
	// 614    .line 1790
label_cond_27:
	firstUnit = this->extraData->charAt(norm16);
	//    .local v6, "firstUnit":I
	//    .local v7, "length":I
	//    .local v5, "trailCC":I
	if ( !(( firstUnit & 0x80)) )  
		goto label_cond_4b;
	//    .local v4, "leadCC":I
label_goto_3f:
	cVar2 = ( norm16 + 0x1);
	buffer->append(this->extraData, cVar2, (cVar2 + ( firstUnit & 0x1f)), leadCC, _shri(firstUnit,0x8));
	goto label_goto_d;
	// 665    .line 1797
	// 666    .end local v4    # "leadCC":I
label_cond_4b:
	//    .restart local v4    # "leadCC":I
	goto label_goto_3f;

}
// .method private enumLcccRange(IIILandroid/icu/text/UnicodeSet;)V
void android::icu::impl::Normalizer2Impl::enumLcccRange(int start,int end,int norm16,std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	int cVar0;
	int start;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "norm16"    # I
	//    .param p4, "set"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0xff;
	if ( !(this->isAlgorithmicNoNo(norm16)) )  
		goto label_cond_16;
label_cond_8:
	//    .local v0, "fcd16":I
	if ( this->getFCD16(start) <= cVar0 )
		goto label_cond_11;
	set->add(start);
label_cond_11:
	start = ( start + 0x1);
	if ( start <= end )
		goto label_cond_8;
label_cond_15:
label_goto_15:
	return;
	// 714    .line 512
	// 715    .end local v0    # "fcd16":I
label_cond_16:
	//    .restart local v0    # "fcd16":I
	if ( this->getFCD16(start) <= cVar0 )
		goto label_cond_15;
	set->add(start, end);
	goto label_goto_15;

}
// .method private enumNorm16PropertyStartsRange(IIILandroid/icu/text/UnicodeSet;)V
void android::icu::impl::Normalizer2Impl::enumNorm16PropertyStartsRange(int start,int end,int value,std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	int prevFCD16;
	int start;
	int fcd16;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "value"    # I
	//    .param p4, "set"    # Landroid/icu/text/UnicodeSet;
	set->add(start);
	if ( start == end )
		goto label_cond_1e;
	if ( !(this->isAlgorithmicNoNo(value)) )  
		goto label_cond_1e;
	prevFCD16 = this->getFCD16(start);
	//    .local v1, "prevFCD16":I
label_cond_f:
label_goto_f:
	start = ( start + 0x1);
	if ( start >  end )
		goto label_cond_1e;
	fcd16 = this->getFCD16(start);
	//    .local v0, "fcd16":I
	if ( fcd16 == prevFCD16 )
		goto label_cond_f;
	set->add(start);
	prevFCD16 = fcd16;
	goto label_goto_f;
	// 780    .line 532
	// 781    .end local v0    # "fcd16":I
	// 782    .end local v1    # "prevFCD16":I
label_cond_1e:
	return;

}
// .method private findNextCompBoundary(Ljava/lang/CharSequence;II)I
int android::icu::impl::Normalizer2Impl::findNextCompBoundary(std::shared_ptr<java::lang::CharSequence> s,int p,int limit)
{
	
	int c;
	int p;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "p"    # I
	//    .param p3, "limit"    # I
label_goto_0:
	if ( p >= limit )
		goto label_cond_12;
	c = java::lang::Character::codePointAt(s, p);
	//    .local v0, "c":I
	//    .local v1, "norm16":I
	if ( !(this->hasCompBoundaryBefore(c, this->normTrie->get(c))) )  
		goto label_cond_13;
	//    .end local v0    # "c":I
	//    .end local v1    # "norm16":I
label_cond_12:
	return p;
	// 825    .line 2146
	// 826    .restart local v0    # "c":I
	// 827    .restart local v1    # "norm16":I
label_cond_13:
	p = (p +  java::lang::Character::charCount(c));
	goto label_goto_0;

}
// .method private findNextFCDBoundary(Ljava/lang/CharSequence;II)I
int android::icu::impl::Normalizer2Impl::findNextFCDBoundary(std::shared_ptr<java::lang::CharSequence> s,int p,int limit)
{
	
	int c;
	int p;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "p"    # I
	//    .param p3, "limit"    # I
label_goto_0:
	if ( p >= limit )
		goto label_cond_12;
	c = java::lang::Character::codePointAt(s, p);
	//    .local v0, "c":I
	if ( c <  0x300 )
		goto label_cond_12;
	if ( this->getFCD16(c) >  0xff )
		goto label_cond_13;
	//    .end local v0    # "c":I
label_cond_12:
	return p;
	// 873    .line 2167
	// 874    .restart local v0    # "c":I
label_cond_13:
	p = (p +  java::lang::Character::charCount(c));
	goto label_goto_0;

}
// .method private findPreviousCompBoundary(Ljava/lang/CharSequence;I)I
int android::icu::impl::Normalizer2Impl::findPreviousCompBoundary(std::shared_ptr<java::lang::CharSequence> s,int p)
{
	
	int c;
	int p;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "p"    # I
label_cond_0:
	if ( p <= 0 )
		goto label_cond_11;
	c = java::lang::Character::codePointBefore(s, p);
	//    .local v0, "c":I
	p = (p -  java::lang::Character::charCount(c));
	if ( !(this->hasCompBoundaryBefore(c)) )  
		goto label_cond_0;
	//    .end local v0    # "c":I
label_cond_11:
	return p;

}
// .method private findPreviousFCDBoundary(Ljava/lang/CharSequence;I)I
int android::icu::impl::Normalizer2Impl::findPreviousFCDBoundary(std::shared_ptr<java::lang::CharSequence> s,int p)
{
	
	int c;
	int p;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "p"    # I
label_cond_0:
	if ( p <= 0 )
		goto label_cond_17;
	c = java::lang::Character::codePointBefore(s, p);
	//    .local v0, "c":I
	p = (p -  java::lang::Character::charCount(c));
	if ( c <  0x300 )
		goto label_cond_17;
	if ( this->getFCD16(c) >  0xff )
		goto label_cond_0;
	//    .end local v0    # "c":I
label_cond_17:
	return p;

}
// .method private getCCFromNoNo(I)I
int android::icu::impl::Normalizer2Impl::getCCFromNoNo(int norm16)
{
	
	//    .param p1, "norm16"    # I
	if ( !(( this->extraData->charAt(norm16) & 0x80)) )  
		goto label_cond_16;
	return ( this->extraData->charAt(( norm16 + -0x1)) & 0xff);
	// 994    .line 1697
label_cond_16:
	return 0x0;

}
// .method public static getCCFromYesOrMaybe(I)I
int android::icu::impl::Normalizer2Impl::getCCFromYesOrMaybe(int norm16)
{
	
	int cVar0;
	
	//    .param p0, "norm16"    # I
	if ( norm16 <  0xfe00 )
		goto label_cond_8;
	cVar0 = ( norm16 & 0xff);
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method private getCompositionsList(I)I
int android::icu::impl::Normalizer2Impl::getCompositionsList(int norm16)
{
	
	int cVar0;
	
	//    .param p1, "norm16"    # I
	if ( !(this->isDecompYes(norm16)) )  
		goto label_cond_b;
	cVar0 = this->getCompositionsListForDecompYes(norm16);
label_goto_a:
	return cVar0;
	// 1041    .line 1757
label_cond_b:
	cVar0 = this->getCompositionsListForComposite(norm16);
	goto label_goto_a;

}
// .method private getCompositionsListForComposite(I)I
int android::icu::impl::Normalizer2Impl::getCompositionsListForComposite(int norm16)
{
	
	//    .param p1, "norm16"    # I
	//    .local v0, "firstUnit":I
	return (( ((0xfe00 - this->minMaybeYes) +  norm16) + 0x1) +  ( this->extraData->charAt(norm16) & 0x1f));

}
// .method private getCompositionsListForDecompYes(I)I
int android::icu::impl::Normalizer2Impl::getCompositionsListForDecompYes(int norm16)
{
	
	int cVar0;
	int cVar2;
	
	//    .param p1, "norm16"    # I
	cVar0 = 0xfe00;
	if ( !(norm16) )  
		goto label_cond_7;
	if ( cVar0 >  norm16 )
		goto label_cond_9;
label_cond_7:
	return -0x1;
	// 1101    .line 1731
label_cond_9:
	cVar2 = (norm16 -  this->minMaybeYes);
	if ( cVar2 >= 0 )
		goto label_cond_f;
	cVar2 = (cVar2 +  cVar0);
label_cond_f:
	return cVar2;

}
// .method private hasCompBoundaryBefore(II)Z
bool android::icu::impl::Normalizer2Impl::hasCompBoundaryBefore(int c,int norm16)
{
	
	bool cVar0;
	int c;
	int norm16;
	int firstUnit;
	
	//    .param p1, "c"    # I
	//    .param p2, "norm16"    # I
	cVar0 = 0x0;
label_goto_1:
	if ( !(this->isCompYesAndZeroCC(norm16)) )  
		goto label_cond_9;
	return 0x1;
	// 1138    .line 2109
label_cond_9:
	if ( !(this->isMaybeOrNonZeroCC(norm16)) )  
		goto label_cond_10;
	return cVar0;
	// 1149    .line 2111
label_cond_10:
	if ( !(this->isDecompNoAlgorithmic(norm16)) )  
		goto label_cond_1f;
	c = this->mapAlgorithmic(c, norm16);
	norm16 = this->getNorm16(c);
	goto label_goto_1;
	// 1169    .line 2116
label_cond_1f:
	firstUnit = this->extraData->charAt(norm16);
	//    .local v0, "firstUnit":I
	if ( ( firstUnit & 0x1f) )     
		goto label_cond_2a;
	return cVar0;
	// 1186    .line 2120
label_cond_2a:
	if ( !(( firstUnit & 0x80)) )  
		goto label_cond_3d;
	if ( !((this->extraData->charAt(( norm16 + -0x1)) &  0xff00)) )  
		goto label_cond_3d;
	return cVar0;
	// 1209    .line 2123
label_cond_3d:
	return this->isCompYesAndZeroCC(this->getNorm16(java::lang::Character::codePointAt(this->extraData, ( norm16 + 0x1))));

}
// .method private isCompYesAndZeroCC(I)Z
bool android::icu::impl::Normalizer2Impl::isCompYesAndZeroCC(int norm16)
{
	
	bool cVar0;
	
	//    .param p1, "norm16"    # I
	if ( norm16 >= this->minNoNo )
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method private isDecompNoAlgorithmic(I)Z
bool android::icu::impl::Normalizer2Impl::isDecompNoAlgorithmic(int norm16)
{
	
	bool cVar0;
	
	//    .param p1, "norm16"    # I
	if ( norm16 <  this->limitNoNo )
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method private isDecompYesAndZeroCC(I)Z
bool android::icu::impl::Normalizer2Impl::isDecompYesAndZeroCC(int norm16)
{
	
	bool cVar0;
	
	//    .param p1, "norm16"    # I
	cVar0 = 0x1;
	if ( norm16 <  this->minYesNo )
		goto label_cond_b;
	if ( norm16 != 0xff00 )
		goto label_cond_c;
label_cond_b:
label_goto_b:
	return cVar0;
	// 1296    .line 1676
label_cond_c:
	if ( this->minMaybeYes >  norm16 )
		goto label_cond_15;
	if ( norm16 <= 0xfe00 )
		goto label_cond_b;
label_cond_15:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method private isHangul(I)Z
bool android::icu::impl::Normalizer2Impl::isHangul(int norm16)
{
	
	bool cVar0;
	
	//    .param p1, "norm16"    # I
	if ( norm16 != this->minYesNo )
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method private static isInert(I)Z
bool android::icu::impl::Normalizer2Impl::isInert(int norm16)
{
	
	bool cVar1;
	
	//    .param p0, "norm16"    # I
	cVar1 = 0x0;
	if ( norm16 )     
		goto label_cond_4;
	cVar1 = 0x1;
label_cond_4:
	return cVar1;

}
// .method private static isJamoL(I)Z
bool android::icu::impl::Normalizer2Impl::isJamoL(int norm16)
{
	
	bool cVar0;
	
	//    .param p0, "norm16"    # I
	cVar0 = 0x1;
	if ( norm16 != cVar0 )
		goto label_cond_4;
label_goto_3:
	return cVar0;
label_cond_4:
	cVar0 = 0x0;
	goto label_goto_3;

}
// .method private static isJamoVT(I)Z
bool android::icu::impl::Normalizer2Impl::isJamoVT(int norm16)
{
	
	bool cVar0;
	
	//    .param p0, "norm16"    # I
	if ( norm16 != 0xff00 )
		goto label_cond_7;
	cVar0 = 0x1;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_6;

}
// .method private isMaybe(I)Z
bool android::icu::impl::Normalizer2Impl::isMaybe(int norm16)
{
	
	bool cVar1;
	
	//    .param p1, "norm16"    # I
	cVar1 = 0x0;
	if ( this->minMaybeYes >  norm16 )
		goto label_cond_b;
	if ( norm16 >  0xff00 )
		goto label_cond_b;
	cVar1 = 0x1;
label_cond_b:
	return cVar1;

}
// .method private isMaybeOrNonZeroCC(I)Z
bool android::icu::impl::Normalizer2Impl::isMaybeOrNonZeroCC(int norm16)
{
	
	bool cVar0;
	
	//    .param p1, "norm16"    # I
	if ( norm16 <  this->minMaybeYes )
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method private isMostDecompYesAndZeroCC(I)Z
bool android::icu::impl::Normalizer2Impl::isMostDecompYesAndZeroCC(int norm16)
{
	
	bool cVar0;
	
	//    .param p1, "norm16"    # I
	cVar0 = 0x1;
	if ( norm16 <  this->minYesNo )
		goto label_cond_a;
	if ( norm16 != 0xfe00 )
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
label_cond_b:
	if ( norm16 == 0xff00 )
		goto label_cond_a;
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private mapAlgorithmic(II)I
int android::icu::impl::Normalizer2Impl::mapAlgorithmic(int c,int norm16)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "norm16"    # I
	return ((c + norm16) -  ( ( this->minMaybeYes + -0x40) + -0x1));

}
// .method private recompose(Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;IZ)V
void android::icu::impl::Normalizer2Impl::recompose(std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer,int recomposeStartIndex,bool onlyContiguous)
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int p;
	int compositionsList;
	int starter;
	int prevCC;
	int c;
	int norm16;
	int cc;
	char prev;
	int pRemove;
	char syllable;
	int t;
	int compositeAndFwd;
	int composite;
	
	//    .param p1, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	//    .param p2, "recomposeStartIndex"    # I
	//    .param p3, "onlyContiguous"    # Z
	sb = buffer->getStringBuilder();
	//    .local v12, "sb":Ljava/lang/StringBuilder;
	p = recomposeStartIndex;
	//    .local v8, "p":I
	if ( recomposeStartIndex != sb->length() )
		goto label_cond_11;
	return;
	// 1513    .line 1924
label_cond_11:
	compositionsList = -0x1;
	//    .local v6, "compositionsList":I
	starter = -0x1;
	//    .local v13, "starter":I
	//    .local v14, "starterIsSupplementary":Z
	prevCC = 0x0;
	//    .local v11, "prevCC":I
label_cond_15:
label_goto_15:
	c = sb->codePointAt(p);
	//    .local v2, "c":I
	p = (p + java::lang::Character::charCount(c));
	norm16 = this->getNorm16(c);
	//    .local v7, "norm16":I
	cc = android::icu::impl::Normalizer2Impl::getCCFromYesOrMaybe(norm16);
	//    .local v3, "cc":I
	if ( !(this->isMaybe(norm16)) )  
		goto label_cond_13b;
	if ( compositionsList < 0 ) 
		goto label_cond_13b;
	if ( prevCC <  cc )
		goto label_cond_37;
	if ( prevCC )     
		goto label_cond_13b;
label_cond_37:
	if ( !(android::icu::impl::Normalizer2Impl::isJamoVT(norm16)) )  
		goto label_cond_a6;
	if ( c >= 0x11a7 )
		goto label_cond_97;
	prev = (char)(( sb->charAt(starter) + -0x1100));
	//    .local v10, "prev":C
	if ( prev >= 0x13 )
		goto label_cond_97;
	pRemove = ( p + -0x1);
	//    .local v9, "pRemove":I
	syllable = (char)((( (( prev * 0x15) + ( c + -0x1161)) * 0x1c) + 0xac00));
	//    .local v15, "syllable":C
	if ( p == sb->length() )
		goto label_cond_90;
	t = (char)(( sb->charAt(p) + -0x11a7));
	//    .local v16, "t":C
	if ( t >= 0x1c )
		goto label_cond_90;
	p = ( p + 0x1);
	//    .end local v16    # "t":C
label_cond_90:
	sb->setCharAt(starter, syllable);
	sb->delete(pRemove, p);
	p = pRemove;
	//    .end local v9    # "pRemove":I
	//    .end local v10    # "prev":C
	//    .end local v15    # "syllable":C
label_cond_97:
	if ( p != sb->length() )
		goto label_cond_a3;
label_cond_9f:
	buffer->flush();
	return;
	// 1715    .line 1972
label_cond_a3:
	compositionsList = -0x1;
	goto label_goto_15;
	// 1722    .line 1974
label_cond_a6:
	compositeAndFwd = android::icu::impl::Normalizer2Impl::combine(this->maybeYesCompositions, compositionsList, c);
	//    .local v5, "compositeAndFwd":I
	if ( compositeAndFwd < 0 ) 
		goto label_cond_13b;
	composite = _shri(compositeAndFwd,0x1);
	//    .local v4, "composite":I
	pRemove = (p - java::lang::Character::charCount(c));
	//    .restart local v9    # "pRemove":I
	sb->delete(pRemove, p);
	p = pRemove;
	if ( !(0x0) )  
		goto label_cond_10e;
	if ( composite <= 0xffff )
		goto label_cond_fb;
	sb->setCharAt(starter, android::icu::text::UTF16::getLeadSurrogate(composite));
	sb->setCharAt(( starter + 0x1), android::icu::text::UTF16::getTrailSurrogate(composite));
label_goto_df:
	if ( p == sb->length() )
		goto label_cond_9f;
	if ( !(( compositeAndFwd & 0x1)) )  
		goto label_cond_138;
	compositionsList = this->getCompositionsListForComposite(this->getNorm16(composite));
	goto label_goto_15;
	// 1821    .line 1989
label_cond_fb:
	sb->setCharAt(starter, (char)(c));
	sb->deleteCharAt(( starter + 0x1));
	0x0;
	p = ( pRemove + -0x1);
	goto label_goto_df;
	// 1846    .line 1996
label_cond_10e:
	if ( composite <= 0xffff )
		goto label_cond_12f;
	0x1;
	sb->setCharAt(starter, android::icu::text::UTF16::getLeadSurrogate(composite));
	sb->insert(( starter + 0x1), android::icu::text::UTF16::getTrailSurrogate(composite));
	p = ( pRemove + 0x1);
	goto label_goto_df;
	// 1884    .line 2005
label_cond_12f:
	sb->setCharAt(starter, (char)(composite));
	goto label_goto_df;
	// 1896    .line 2018
label_cond_138:
	compositionsList = -0x1;
	goto label_goto_15;
	// 1902    .line 2027
	// 1903    .end local v4    # "composite":I
	// 1904    .end local v5    # "compositeAndFwd":I
	// 1905    .end local v9    # "pRemove":I
label_cond_13b:
	prevCC = cc;
	if ( p == sb->length() )
		goto label_cond_9f;
	if ( cc )     
		goto label_cond_15f;
	compositionsList = this->getCompositionsListForDecompYes(norm16);
	if ( compositionsList < 0 ) 
		goto label_cond_15;
	if ( c >  0xffff )
		goto label_cond_15a;
	0x0;
	( p + -0x1);
	goto label_goto_15;
	// 1945    .line 2041
label_cond_15a:
	0x1;
	( p + -0x2);
	goto label_goto_15;
	// 1954    .line 2045
label_cond_15f:
	if ( !(onlyContiguous) )  
		goto label_cond_15;
	compositionsList = -0x1;
	goto label_goto_15;

}
// .method public addCanonIterPropertyStarts(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::Normalizer2Impl::addCanonIterPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	this->ensureCanonIterData();
	trieIterator = this->canonIterData->iterator(android::icu::impl::Normalizer2Impl::segmentStarterMapper);
	//    .local v1, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_b:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_23;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v0, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_23;
	set->add(range->startCodePoint);
	goto label_goto_b;
	// 2012    .line 569
	// 2013    .end local v0    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_23:
	return;

}
// .method public addLcccChars(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::Normalizer2Impl::addLcccChars(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	trieIterator = this->normTrie->iterator();
	//    .local v1, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_6:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_22;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v0, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_22;
	this->enumLcccRange(range->startCodePoint, range->endCodePoint, range->value, set);
	goto label_goto_6;
	// 2063    .line 541
	// 2064    .end local v0    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_22:
	return;

}
// .method public addPropertyStarts(Landroid/icu/text/UnicodeSet;)V
void android::icu::impl::Normalizer2Impl::addPropertyStarts(std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	int cVar0;
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	int c;
	
	//    .param p1, "set"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0xd7a4;
	trieIterator = this->normTrie->iterator();
	//    .local v2, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_goto_9:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_25;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v1, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_25;
	this->enumNorm16PropertyStartsRange(range->startCodePoint, range->endCodePoint, range->value, set);
	goto label_goto_9;
	// 2116    .line 552
	// 2117    .end local v1    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_25:
	c = 0xac00;
	//    .local v0, "c":I
label_goto_28:
	if ( c >= cVar0 )
		goto label_cond_35;
	set->add(c);
	set->add(( c + 0x1));
	c = ( c + 0x1c);
	goto label_goto_28;
	// 2138    .line 556
label_cond_35:
	set->add(cVar0);
	return;

}
// .method public compose(Ljava/lang/CharSequence;IIZZLandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)Z
bool android::icu::impl::Normalizer2Impl::compose(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,bool onlyContiguous,bool doCompose,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	int prevBoundary;
	int c;
	int norm16;
	int prevCC;
	int prevSrc;
	int src;
	char prev;
	int t;
	int cc;
	int cVar5;
	char c2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "src"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "onlyContiguous"    # Z
	//    .param p5, "doCompose"    # Z
	//    .param p6, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	//    .local v7, "minNoMaybeCP":I
	prevBoundary = src;
	//    .local v11, "prevBoundary":I
	c = 0x0;
	//    .local v4, "c":I
	norm16 = 0x0;
	//    .local v9, "norm16":I
	prevCC = 0x0;
	//    .local v12, "prevCC":I
label_goto_9:
	prevSrc = src;
	//    .local v13, "prevSrc":I
label_goto_b:
	if ( src == limit )
		goto label_cond_38;
	c = s->charAt(src);
	if ( c <  this->minCompNoMaybeCP )
		goto label_cond_2c;
	norm16 = this->normTrie->getFromU16SingleLead((char)(c));
	if ( !(this->isCompYesAndZeroCC(norm16)) )  
		goto label_cond_2f;
label_cond_2c:
	src = ( src + 0x1);
	goto label_goto_b;
	// 2227    .line 1087
label_cond_2f:
	if ( android::icu::text::UTF16::isSurrogate((char)(c)) )     
		goto label_cond_50;
label_cond_38:
	if ( src == prevSrc )
		goto label_cond_115;
	if ( src != limit )
		goto label_cond_ac;
	if ( !(doCompose) )  
		goto label_cond_4d;
	buffer->flushAndAppendZeroCC(s, prevSrc, src);
label_cond_4d:
label_goto_4d:
	return 0x1;
	// 2271    .line 1091
label_cond_50:
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c)) )  
		goto label_cond_8c;
	if ( ( src + 0x1) == limit )
		goto label_cond_77;
	c2 = s->charAt(( src + 0x1));
	//    .local v5, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_77;
	c = java::lang::Character::toCodePoint((char)(c), c2);
	//    .end local v5    # "c2":C
label_cond_77:
label_goto_77:
	norm16 = this->getNorm16(c);
	if ( !(this->isCompYesAndZeroCC(norm16)) )  
		goto label_cond_38;
	src = (src + java::lang::Character::charCount(c));
	goto label_goto_b;
	// 2343    .line 1096
label_cond_8c:
	if ( prevSrc >= src )
		goto label_cond_77;
	c2 = s->charAt(( src + -0x1));
	//    .restart local v5    # "c2":C
	if ( !(java::lang::Character::isHighSurrogate(c2)) )  
		goto label_cond_77;
	src = ( src + -0x1);
	c = java::lang::Character::toCodePoint(c2, (char)(c));
	goto label_goto_77;
	// 2382    .line 1117
	// 2383    .end local v5    # "c2":C
label_cond_ac:
	prevBoundary = ( src + -0x1);
	if ( !(java::lang::Character::isLowSurrogate(s->charAt(prevBoundary))) )  
		goto label_cond_ce;
	if ( prevSrc >= prevBoundary )
		goto label_cond_ce;
	if ( !(java::lang::Character::isHighSurrogate(s->charAt(( prevBoundary + -0x1)))) )  
		goto label_cond_ce;
	prevBoundary = ( prevBoundary + -0x1);
label_cond_ce:
	if ( !(doCompose) )  
		goto label_cond_113;
	buffer->flushAndAppendZeroCC(s, prevSrc, prevBoundary);
	buffer->append(s, prevBoundary, src);
label_goto_e0:
	prevSrc = src;
label_cond_e2:
	src = (src + java::lang::Character::charCount(c));
	if ( !(android::icu::impl::Normalizer2Impl::isJamoVT(norm16)) )  
		goto label_cond_193;
	if ( prevBoundary == prevSrc )
		goto label_cond_193;
	prev = s->charAt(( prevSrc + -0x1));
	//    .local v10, "prev":C
	//    .local v8, "needToDecompose":Z
	if ( c >= 0x11a7 )
		goto label_cond_16d;
	prev = (char)(( prev + -0x1100));
	if ( prev >= 0x13 )
		goto label_cond_15d;
	if ( doCompose )     
		goto label_cond_11d;
	return 0x0;
	// 2511    .line 1129
	// 2512    .end local v8    # "needToDecompose":Z
	// 2513    .end local v10    # "prev":C
label_cond_113:
	0x0;
	goto label_goto_e0;
	// 2519    .line 1133
label_cond_115:
	if ( src != limit )
		goto label_cond_e2;
	goto label_goto_4d;
	// 2529    .line 1157
	// 2530    .restart local v8    # "needToDecompose":Z
	// 2531    .restart local v10    # "prev":C
label_cond_11d:
	//    .local v15, "syllable":C
	if ( src == limit )
		goto label_cond_15c;
	t = (char)(( s->charAt(src) + -0x11a7));
	//    .local v16, "t":C
	if ( t >= 0x1c )
		goto label_cond_15c;
	src = ( src + 0x1);
	src;
	buffer->setLastChar((char)(((char)((( (( prev * 0x15) + ( c + -0x1161)) * 0x1c) + 0xac00)) + t)));
	goto label_goto_9;
	// 2606    .line 1176
	// 2607    .end local v16    # "t":C
label_cond_15c:
	//    .end local v15    # "syllable":C
label_cond_15d:
	if ( 0x0 )     
		goto label_cond_193;
	if ( !(doCompose) )  
		goto label_cond_190;
	buffer->append((char)(c));
	goto label_goto_9;
	// 2632    .line 1178
label_cond_16d:
	if ( !(android::icu::impl::Normalizer2Impl_S_Hangul::isHangulWithoutJamoT(prev)) )  
		goto label_cond_15d;
	if ( doCompose )     
		goto label_cond_178;
	return 0x0;
	// 2648    .line 1184
label_cond_178:
	buffer->setLastChar((char)(( (prev + c) + -0x11a7)));
	src;
	goto label_goto_9;
	// 2676    .line 1193
label_cond_190:
	0x0;
	goto label_goto_9;
	// 2682    .line 1220
	// 2683    .end local v8    # "needToDecompose":Z
	// 2684    .end local v10    # "prev":C
label_cond_193:
	if ( norm16 <  0xff01 )
		goto label_cond_1cd;
	cc = ( norm16 & 0xff);
	//    .local v6, "cc":I
	if ( !(onlyContiguous) )  
		goto label_cond_1bc;
	if ( !(doCompose) )  
		goto label_cond_1b9;
	cVar5 = buffer->getLastCC();
label_goto_1a4:
	if ( cVar5 )     
		goto label_cond_1bc;
	if ( prevBoundary >= prevSrc )
		goto label_cond_1bc;
	if ( this->getTrailCCFromCompYesAndZeroCC(s, prevBoundary, prevSrc) <= cc )
		goto label_cond_1bc;
	if ( doCompose )     
		goto label_cond_1dc;
	return 0x0;
label_cond_1b9:
	cVar5 = prevCC;
	goto label_goto_1a4;
	// 2739    .line 1238
label_cond_1bc:
	if ( !(doCompose) )  
		goto label_cond_1c5;
	buffer->append(c, cc);
	goto label_goto_9;
	// 2750    .line 1241
label_cond_1c5:
	if ( prevCC >  cc )
		goto label_cond_1ca;
	prevCC = cc;
	goto label_goto_9;
	// 2760    .line 1245
label_cond_1ca:
	return 0x0;
	// 2766    .line 1247
	// 2767    .end local v6    # "cc":I
label_cond_1cd:
	if ( doCompose )     
		goto label_cond_1dc;
	if ( !(( this->isMaybeOrNonZeroCC(norm16) ^ 0x1)) )  
		goto label_cond_1dc;
	return 0x0;
	// 2786    .line 1266
label_cond_1dc:
	if ( !(this->hasCompBoundaryBefore(c, norm16)) )  
		goto label_cond_212;
	prevBoundary = prevSrc;
label_cond_1e5:
label_goto_1e5:
	src = this->findNextCompBoundary(s, src, limit);
	//    .local v14, "recomposeStartIndex":I
	this->decomposeShort(s, prevBoundary, src, buffer);
	this->recompose(buffer, buffer->length(), onlyContiguous);
	if ( doCompose )     
		goto label_cond_222;
	if ( buffer->equals(s, prevBoundary, src) )     
		goto label_cond_21e;
	return 0x0;
	// 2853    .line 1268
	// 2854    .end local v14    # "recomposeStartIndex":I
label_cond_212:
	if ( !(doCompose) )  
		goto label_cond_1e5;
	buffer->removeSuffix((prevSrc - prevBoundary));
	goto label_goto_1e5;
	// 2869    .line 1284
	// 2870    .restart local v14    # "recomposeStartIndex":I
label_cond_21e:
	buffer->remove();
	0x0;
label_cond_222:
	prevBoundary = src;
	goto label_goto_9;

}
// .method public composeAndAppend(Ljava/lang/CharSequence;ZZLandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)V
void android::icu::impl::Normalizer2Impl::composeAndAppend(std::shared_ptr<java::lang::CharSequence> s,bool doCompose,bool onlyContiguous,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	int limit;
	int firstStarterInSrc;
	int lastStarterInDest;
	std::shared_ptr<java::lang::StringBuilder> middle;
	int src;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "doCompose"    # Z
	//    .param p3, "onlyContiguous"    # Z
	//    .param p4, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	//    .local v5, "src":I
	limit = s->length();
	//    .local v12, "limit":I
	if ( buffer->isEmpty() )     
		goto label_cond_53;
	firstStarterInSrc = this->findNextCompBoundary(s, 0x0, limit);
	//    .local v10, "firstStarterInSrc":I
	if ( !(firstStarterInSrc) )  
		goto label_cond_53;
	lastStarterInDest = this->findPreviousCompBoundary(buffer->getStringBuilder(), buffer->length());
	//    .local v11, "lastStarterInDest":I
	middle = std::make_shared<java::lang::StringBuilder>(( ((buffer->length() -  lastStarterInDest) +  firstStarterInSrc) + 0x10));
	//    .local v2, "middle":Ljava/lang/StringBuilder;
	middle->append(buffer->getStringBuilder(), lastStarterInDest, buffer->length());
	buffer->removeSuffix((buffer->length() -  lastStarterInDest));
	middle->append(s, 0x0, firstStarterInSrc);
	this->compose(middle, 0x0, middle->length(), onlyContiguous, 0x1, buffer);
	//    .end local v5    # "src":I
	src = firstStarterInSrc;
	//    .end local v2    # "middle":Ljava/lang/StringBuilder;
	//    .end local v10    # "firstStarterInSrc":I
	//    .end local v11    # "lastStarterInDest":I
	//    .restart local v5    # "src":I
label_cond_53:
	if ( !(doCompose) )  
		goto label_cond_61;
	this->compose(s, src, limit, onlyContiguous, 0x1, buffer);
label_goto_60:
	return;
	// 3026    .line 1419
label_cond_61:
	buffer->append(s, 0x0, limit);
	goto label_goto_60;

}
// .method public composePair(II)I
int android::icu::impl::Normalizer2Impl::composePair(int a,int b)
{
	
	int cVar0;
	int cVar1;
	int norm16;
	int cVar2;
	int cVar3;
	
	//    .param p1, "a"    # I
	//    .param p2, "b"    # I
	cVar0 = 0xfe00;
	cVar1 = -0x1;
	norm16 = this->getNorm16(a);
	//    .local v1, "norm16":I
	if ( !(android::icu::impl::Normalizer2Impl::isInert(norm16)) )  
		goto label_cond_f;
	return cVar1;
	// 3061    .line 2058
label_cond_f:
	if ( norm16 >= this->minYesNoMappingsOnly )
		goto label_cond_65;
	if ( !(android::icu::impl::Normalizer2Impl::isJamoL(norm16)) )  
		goto label_cond_2e;
	cVar2 = ( b + -0x1161);
	if ( cVar2 < 0 ) 
		goto label_cond_2d;
	if ( cVar2 >= 0x15 )
		goto label_cond_2d;
	return (( (( ( a + -0x1100) * 0x15) +  cVar2) * 0x1c) +  0xac00);
	// 3101    .line 2067
label_cond_2d:
	return cVar1;
	// 3105    .line 2069
label_cond_2e:
	if ( !(this->isHangul(norm16)) )  
		goto label_cond_47;
	cVar3 = ( b + -0x11a7);
	if ( !(android::icu::impl::Normalizer2Impl_S_Hangul::isHangulWithoutJamoT((char)(a))) )  
		goto label_cond_46;
	if ( cVar3 <= 0 )
		goto label_cond_46;
	if ( cVar3 >= 0x1c )
		goto label_cond_46;
	return (a + cVar3);
	// 3136    .line 2074
label_cond_46:
	return cVar1;
	// 3140    .line 2078
label_cond_47:
	//    .local v0, "list":I
	if ( norm16 <= this->minYesNo )
		goto label_cond_58;
label_cond_58:
label_goto_5d:
	if ( b < 0 ) 
		goto label_cond_64;
	if ( 0x10ffff >= b )
		goto label_cond_71;
label_cond_64:
	return cVar1;
	// 3185    .line 2087
	// 3186    .end local v0    # "list":I
label_cond_65:
	if ( norm16 <  this->minMaybeYes )
		goto label_cond_6b;
	if ( cVar0 >  norm16 )
		goto label_cond_6c;
label_cond_6b:
	return cVar1;
	// 3198    .line 2090
label_cond_6c:
	(norm16 - this->minMaybeYes);
	//    .restart local v0    # "list":I
	goto label_goto_5d;
	// 3207    .line 2095
label_cond_71:
	return _shri(android::icu::impl::Normalizer2Impl::combine(this->maybeYesCompositions, (norm16 +  (cVar0 - this->minMaybeYes)), b),0x1);

}
// .method public composeQuickCheck(Ljava/lang/CharSequence;IIZZ)I
int android::icu::impl::Normalizer2Impl::composeQuickCheck(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,bool onlyContiguous,bool doSpan)
{
	
	int c;
	int prevSrc;
	int norm16;
	int src;
	int prevBoundary;
	int prevCC;
	int cc;
	char c2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "src"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "onlyContiguous"    # Z
	//    .param p5, "doSpan"    # Z
	//    .local v8, "qcResult":I
	//    .local v3, "minNoMaybeCP":I
	//    .local v5, "prevBoundary":I
	c = 0x0;
	//    .local v0, "c":I
	0x0;
	//    .local v4, "norm16":I
	0x0;
	//    .local v6, "prevCC":I
label_cond_7:
label_goto_7:
	prevSrc = src;
	//    .local v7, "prevSrc":I
label_goto_8:
	if ( src != limit )
		goto label_cond_e;
	return (( src << 0x1) |  0x0);
	// 3270    .line 1322
label_cond_e:
	c = s->charAt(src);
	if ( c <  this->minCompNoMaybeCP )
		goto label_cond_21;
	norm16 = this->normTrie->getFromU16SingleLead((char)(c));
	if ( !(this->isCompYesAndZeroCC(norm16)) )  
		goto label_cond_24;
label_cond_21:
	src = ( src + 0x1);
	goto label_goto_8;
	// 3300    .line 1326
label_cond_24:
	if ( android::icu::text::UTF16::isSurrogate((char)(c)) )     
		goto label_cond_6b;
label_cond_2b:
	if ( src == prevSrc )
		goto label_cond_4b;
	prevBoundary = ( src + -0x1);
	if ( !(java::lang::Character::isLowSurrogate(s->charAt(prevBoundary))) )  
		goto label_cond_49;
	if ( prevSrc >= prevBoundary )
		goto label_cond_49;
	if ( !(java::lang::Character::isHighSurrogate(s->charAt(( prevBoundary + -0x1)))) )  
		goto label_cond_49;
	prevBoundary = ( prevBoundary + -0x1);
label_cond_49:
	prevCC = 0x0;
	prevSrc = src;
label_cond_4b:
	src = (src +  java::lang::Character::charCount(c));
	if ( !(this->isMaybeOrNonZeroCC(norm16)) )  
		goto label_cond_68;
	cc = android::icu::impl::Normalizer2Impl::getCCFromYesOrMaybe(norm16);
	//    .local v2, "cc":I
	if ( !(onlyContiguous) )  
		goto label_cond_ad;
	if ( !(cc) )  
		goto label_cond_ad;
	if ( prevCC )     
		goto label_cond_ad;
	if ( prevBoundary >= prevSrc )
		goto label_cond_ad;
	if ( this->getTrailCCFromCompYesAndZeroCC(s, prevBoundary, prevSrc) <= cc )
		goto label_cond_ad;
	//    .end local v2    # "cc":I
label_cond_68:
	return ( src << 0x1);
	// 3401    .line 1330
label_cond_6b:
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c)) )  
		goto label_cond_97;
	if ( ( src + 0x1) == limit )
		goto label_cond_86;
	c2 = s->charAt(( src + 0x1));
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_86;
	c = java::lang::Character::toCodePoint((char)(c), c2);
	//    .end local v1    # "c2":C
label_cond_86:
label_goto_86:
	norm16 = this->getNorm16(c);
	if ( !(this->isCompYesAndZeroCC(norm16)) )  
		goto label_cond_2b;
	src = (src +  java::lang::Character::charCount(c));
	goto label_goto_8;
	// 3457    .line 1335
label_cond_97:
	if ( prevSrc >= src )
		goto label_cond_86;
	c2 = s->charAt(( src + -0x1));
	//    .restart local v1    # "c2":C
	if ( !(java::lang::Character::isHighSurrogate(c2)) )  
		goto label_cond_86;
	src = ( src + -0x1);
	c = java::lang::Character::toCodePoint(c2, (char)(c));
	goto label_goto_86;
	// 3486    .line 1382
	// 3487    .end local v1    # "c2":C
	// 3488    .restart local v2    # "cc":I
label_cond_ad:
	if ( prevCC <= cc )
		goto label_cond_b1;
	if ( cc )     
		goto label_cond_68;
label_cond_b1:
	cc;
	if ( norm16 >= 0xff01 )
		goto label_cond_7;
	if ( doSpan )     
		goto label_cond_bc;
	0x1;
	goto label_goto_7;
	// 3511    .line 1388
label_cond_bc:
	return ( prevBoundary << 0x1);

}
// .method public decompose(Ljava/lang/CharSequence;IILandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)I
int android::icu::impl::Normalizer2Impl::decompose(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	int c;
	int prevBoundary;
	int prevCC;
	int prevSrc;
	int norm16;
	int src;
	int cc;
	char c2;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "src"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	//    .local v3, "minNoCP":I
	c = 0x0;
	//    .local v0, "c":I
	//    .local v4, "norm16":I
	prevBoundary = src;
	//    .local v5, "prevBoundary":I
	prevCC = 0x0;
	//    .local v6, "prevCC":I
label_cond_6:
label_goto_6:
	prevSrc = src;
	//    .local v7, "prevSrc":I
label_goto_7:
	if ( src == limit )
		goto label_cond_26;
	c = s->charAt(src);
	if ( c <  this->minDecompNoCP )
		goto label_cond_1c;
	norm16 = this->normTrie->getFromU16SingleLead((char)(c));
	if ( !(this->isMostDecompYesAndZeroCC(norm16)) )  
		goto label_cond_1f;
label_cond_1c:
	src = ( src + 0x1);
	goto label_goto_7;
	// 3584    .line 971
label_cond_1f:
	if ( android::icu::text::UTF16::isSurrogate((char)(c)) )     
		goto label_cond_30;
label_cond_26:
	if ( src == prevSrc )
		goto label_cond_2d;
	if ( !(buffer) )  
		goto label_cond_71;
	buffer->flushAndAppendZeroCC(s, prevSrc, src);
label_cond_2d:
label_goto_2d:
	if ( src != limit )
		goto label_cond_74;
	return src;
	// 3612    .line 975
label_cond_30:
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c)) )  
		goto label_cond_5b;
	if ( ( src + 0x1) == limit )
		goto label_cond_4b;
	c2 = s->charAt(( src + 0x1));
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_4b;
	c = java::lang::Character::toCodePoint((char)(c), c2);
	//    .end local v1    # "c2":C
label_cond_4b:
label_goto_4b:
	norm16 = this->getNorm16(c);
	if ( !(this->isMostDecompYesAndZeroCC(norm16)) )  
		goto label_cond_26;
	src = (src +  java::lang::Character::charCount(c));
	goto label_goto_7;
	// 3668    .line 980
label_cond_5b:
	if ( prevSrc >= src )
		goto label_cond_4b;
	c2 = s->charAt(( src + -0x1));
	//    .restart local v1    # "c2":C
	if ( !(java::lang::Character::isHighSurrogate(c2)) )  
		goto label_cond_4b;
	src = ( src + -0x1);
	c = java::lang::Character::toCodePoint(c2, (char)(c));
	goto label_goto_4b;
	// 3697    .line 997
	// 3698    .end local v1    # "c2":C
label_cond_71:
	0x0;
	prevBoundary = src;
	goto label_goto_2d;
	// 3707    .line 1006
label_cond_74:
	src = (src +  java::lang::Character::charCount(c));
	if ( !(buffer) )  
		goto label_cond_7f;
	this->decompose(c, norm16, buffer);
	goto label_goto_6;
	// 3723    .line 1010
label_cond_7f:
	if ( !(this->isDecompYes(0x0)) )  
		goto label_cond_94;
	cc = android::icu::impl::Normalizer2Impl::getCCFromYesOrMaybe(norm16);
	//    .local v2, "cc":I
	if ( prevCC <= cc )
		goto label_cond_8d;
	if ( cc )     
		goto label_cond_94;
label_cond_8d:
	prevCC = cc;
	if ( cc >  0x1 )
		goto label_cond_6;
	src;
	goto label_goto_6;
	// 3756    .line 1020
	// 3757    .end local v2    # "cc":I
label_cond_94:
	return prevBoundary;

}
// .method public decompose(Ljava/lang/CharSequence;Ljava/lang/StringBuilder;)Ljava/lang/Appendable;
std::shared_ptr<java::lang::Appendable> android::icu::impl::Normalizer2Impl::decompose(std::shared_ptr<java::lang::CharSequence> s,std::shared_ptr<java::lang::StringBuilder> dest)
{
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "dest"    # Ljava/lang/StringBuilder;
	this->decompose(s, 0x0, s->length(), dest, s->length());
	return dest;

}
// .method public decompose(Ljava/lang/CharSequence;IILjava/lang/StringBuilder;I)V
void android::icu::impl::Normalizer2Impl::decompose(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,std::shared_ptr<java::lang::StringBuilder> dest,int cVar0)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "src"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "dest"    # Ljava/lang/StringBuilder;
	//    .param p5, "destLengthEstimate"    # I
	if ( cVar0 >= 0 )
		goto label_cond_5;
	cVar0 = (limit - src);
label_cond_5:
	dest->setLength(0x0);
	buffer = std::make_shared<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer>(this, dest, cVar0);
	//    .local v0, "buffer":Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	this->decompose(s, src, limit, buffer);
	return;

}
// .method public decomposeAndAppend(Ljava/lang/CharSequence;ZLandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)V
void android::icu::impl::Normalizer2Impl::decomposeAndAppend(std::shared_ptr<java::lang::CharSequence> s,bool doDecompose,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	int cVar0;
	int limit;
	int c;
	int src;
	int cc;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "doDecompose"    # Z
	//    .param p3, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	cVar0 = 0x0;
	limit = s->length();
	//    .local v9, "limit":I
	if ( limit )     
		goto label_cond_8;
	return;
	// 3846    .line 1030
label_cond_8:
	if ( !(doDecompose) )  
		goto label_cond_e;
	this->decompose(s, cVar0, limit, buffer);
	return;
	// 3856    .line 1035
label_cond_e:
	c = java::lang::Character::codePointAt(s, cVar0);
	//    .local v6, "c":I
	src = 0x0;
	//    .local v3, "src":I
	cc = this->getCC(this->getNorm16(c));
	//    .local v4, "cc":I
	//    .local v5, "prevCC":I
	cc;
	//    .local v8, "firstCC":I
	cc = cc;
	//    .end local v4    # "cc":I
	//    .local v7, "cc":I
label_goto_1e:
	if ( !(cc) )  
		goto label_cond_28;
	src = (src +  java::lang::Character::charCount(c));
	if ( src <  limit )
		goto label_cond_31;
label_cond_28:
	buffer->append(s, cVar0, src, cc, cc);
	buffer->append(s, src, limit);
	return;
	// 3918    .line 1045
label_cond_31:
	c = java::lang::Character::codePointAt(s, src);
	cc = this->getCC(this->getNorm16(c));
	goto label_goto_1e;

}
// .method public decomposeShort(Ljava/lang/CharSequence;IILandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)V
void android::icu::impl::Normalizer2Impl::decomposeShort(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	int c;
	int src;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "src"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
label_goto_0:
	if ( src >= limit )
		goto label_cond_13;
	c = java::lang::Character::codePointAt(s, src);
	//    .local v0, "c":I
	src = (src +  java::lang::Character::charCount(c));
	this->decompose(c, this->getNorm16(c), buffer);
	goto label_goto_0;
	// 3970    .line 1772
	// 3971    .end local v0    # "c":I
label_cond_13:
	return;

}
// .method public declared-synchronized ensureCanonIterData()Landroid/icu/impl/Normalizer2Impl;
std::shared_ptr<android::icu::impl::Normalizer2Impl> android::icu::impl::Normalizer2Impl::ensureCanonIterData()
{
	
	std::shared_ptr<android::icu::impl::Trie2Writable> newData;
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::util::Iterator> trieIterator;
	std::shared_ptr<android::icu::impl::Trie2_S_Range> range;
	int norm16;
	int c;
	int oldValue;
	int newValue;
	int c2;
	int norm16_2;
	int firstUnit;
	int length;
	int c2Value;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->canonIterData )     
		goto label_cond_d9;
	newData = std::make_shared<android::icu::impl::Trie2Writable>(0x0, 0x0);
	//    .local v6, "newData":Landroid/icu/impl/Trie2Writable;
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->canonStartSets = cVar0;
	trieIterator = this->normTrie->iterator();
	//    .local v12, "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_cond_19:
	if ( !(trieIterator->hasNext()) )  
		goto label_cond_d3;
	range = trieIterator->next();
	range->checkCast("android::icu::impl::Trie2_S_Range");
	//    .local v11, "range":Landroid/icu/impl/Trie2$Range;
	if ( !(( range->leadSurrogate ^ 0x1)) )  
		goto label_cond_d3;
	norm16 = range->value;
	//    .local v8, "norm16":I
	if ( !(norm16) )  
		goto label_cond_19;
	if ( this->minYesNo >  norm16 )
		goto label_cond_37;
	if ( norm16 <  this->minNoNo )
		goto label_cond_19;
label_cond_37:
	c = range->startCodePoint;
	//    .local v0, "c":I
label_goto_39:
	if ( c >  range->endCodePoint )
		goto label_cond_19;
	oldValue = newData->get(c);
	//    .local v10, "oldValue":I
	newValue = oldValue;
	//    .local v7, "newValue":I
	if ( norm16 <  this->minMaybeYes )
		goto label_cond_5a;
	newValue = (oldValue | -0x80000000);
	if ( norm16 >= 0xfe00 )
		goto label_cond_52;
	newValue = (newValue |  0x40000000);
label_cond_52:
label_goto_52:
	if ( newValue == oldValue )
		goto label_cond_57;
	newData->set(c, newValue);
label_cond_57:
	c = ( c + 0x1);
	goto label_goto_39;
	// 4103    .line 622
label_cond_5a:
	if ( norm16 >= this->minYesNo )
		goto label_cond_63;
	newValue = (oldValue | 0x40000000);
	goto label_goto_52;
	// 4116    .line 626
label_cond_63:
	c2 = c;
	//    .local v1, "c2":I
	norm16_2 = norm16;
	//    .local v9, "norm16_2":I
label_goto_65:
	if ( this->limitNoNo >  norm16_2 )
		goto label_cond_76;
	if ( norm16_2 >= this->minMaybeYes )
		goto label_cond_76;
	c2 = this->mapAlgorithmic(c2, norm16_2);
	norm16_2 = this->getNorm16(c2);
	goto label_goto_65;
	// 4147    .line 632
label_cond_76:
	if ( this->minYesNo >  norm16_2 )
		goto label_cond_cf;
	if ( norm16_2 >= this->limitNoNo )
		goto label_cond_cf;
	firstUnit = this->extraData->charAt(norm16_2);
	//    .local v3, "firstUnit":I
	length = ( firstUnit & 0x1f);
	//    .local v4, "length":I
	if ( !(( firstUnit & 0x80)) )  
		goto label_cond_9c;
	if ( c != c2 )
		goto label_cond_9c;
	if ( !(( this->extraData->charAt(( norm16_2 + -0x1)) & 0xff)) )  
		goto label_cond_9c;
	newValue = (oldValue | -0x80000000);
label_cond_9c:
	if ( !(length) )  
		goto label_cond_52;
	norm16_2 = ( norm16_2 + 0x1);
	//    .local v5, "limit":I
	c2 = this->extraData->codePointAt(norm16_2);
	this->addToStartSet(newData, c, c2);
	if ( norm16_2 <  this->minNoNo )
		goto label_cond_52;
label_cond_af:
label_goto_af:
	norm16_2 = (norm16_2 +  java::lang::Character::charCount(c2));
	if ( norm16_2 >= (norm16_2 + length) )
		goto label_cond_52;
	c2 = this->extraData->codePointAt(norm16_2);
	c2Value = newData->get(c2);
	//    .local v2, "c2Value":I
	if ( (-0x80000000 &  c2Value) )     
		goto label_cond_af;
	newData->set(c2, (-0x80000000 |  c2Value));
	//label_try_end_cb:
	}
	catch (...){
		goto label_catchall_cc;
	}
	//    .catchall {:try_start_1 .. :try_end_cb} :catchall_cc
	goto label_goto_af;
	// 4262    .end local v0    # "c":I
	// 4263    .end local v1    # "c2":I
	// 4264    .end local v2    # "c2Value":I
	// 4265    .end local v3    # "firstUnit":I
	// 4266    .end local v4    # "length":I
	// 4267    .end local v5    # "limit":I
	// 4268    .end local v6    # "newData":Landroid/icu/impl/Trie2Writable;
	// 4269    .end local v7    # "newValue":I
	// 4270    .end local v8    # "norm16":I
	// 4271    .end local v9    # "norm16_2":I
	// 4272    .end local v10    # "oldValue":I
	// 4273    .end local v11    # "range":Landroid/icu/impl/Trie2$Range;
	// 4274    .end local v12    # "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_catchall_cc:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 4282    .line 663
	// 4283    .restart local v0    # "c":I
	// 4284    .restart local v1    # "c2":I
	// 4285    .restart local v6    # "newData":Landroid/icu/impl/Trie2Writable;
	// 4286    .restart local v7    # "newValue":I
	// 4287    .restart local v8    # "norm16":I
	// 4288    .restart local v9    # "norm16_2":I
	// 4289    .restart local v10    # "oldValue":I
	// 4290    .restart local v11    # "range":Landroid/icu/impl/Trie2$Range;
	// 4291    .restart local v12    # "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_cond_cf:
	try {
	//label_try_start_cf:
	this->addToStartSet(newData, c, c2);
	goto label_goto_52;
	// 4298    .line 671
	// 4299    .end local v0    # "c":I
	// 4300    .end local v1    # "c2":I
	// 4301    .end local v7    # "newValue":I
	// 4302    .end local v8    # "norm16":I
	// 4303    .end local v9    # "norm16_2":I
	// 4304    .end local v10    # "oldValue":I
	// 4305    .end local v11    # "range":Landroid/icu/impl/Trie2$Range;
label_cond_d3:
	this->canonIterData = newData->toTrie2_32();
	//label_try_end_d9:
	}
	catch (...){
		goto label_catchall_cc;
	}
	//    .catchall {:try_start_cf .. :try_end_d9} :catchall_cc
	//    .end local v6    # "newData":Landroid/icu/impl/Trie2Writable;
	//    .end local v12    # "trieIterator":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/impl/Trie2$Range;>;"
label_cond_d9:
	this->monitor_exit();
	return this;

}
// .method public getCC(I)I
int android::icu::impl::Normalizer2Impl::getCC(int norm16)
{
	
	//    .param p1, "norm16"    # I
	if ( norm16 <  0xfe00 )
		goto label_cond_8;
	return ( norm16 & 0xff);
	// 4339    .line 695
label_cond_8:
	if ( norm16 <  this->minNoNo )
		goto label_cond_10;
	if ( this->limitNoNo >  norm16 )
		goto label_cond_12;
label_cond_10:
	return 0x0;
	// 4355    .line 698
label_cond_12:
	return this->getCCFromNoNo(norm16);

}
// .method public getCanonStartSet(ILandroid/icu/text/UnicodeSet;)Z
bool android::icu::impl::Normalizer2Impl::getCanonStartSet(int c,std::shared_ptr<android::icu::text::UnicodeSet> set)
{
	
	bool cVar0;
	int canonValue;
	int value;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	int norm16;
	int syllable;
	
	//    .param p1, "c"    # I
	//    .param p2, "set"    # Landroid/icu/text/UnicodeSet;
	cVar0 = 0x1;
	canonValue = (this->canonIterData->get(c) & 0x7fffffff);
	//    .local v0, "canonValue":I
	if ( canonValue )     
		goto label_cond_10;
	return 0x0;
	// 4392    .line 864
label_cond_10:
	set->clear();
	value = (canonValue & 0x1fffff);
	//    .local v3, "value":I
	if ( !((0x200000 &  canonValue)) )  
		goto label_cond_44;
	cVar1 = this->canonStartSets->get(value);
	cVar1->checkCast("android::icu::text::UnicodeSet");
	set->addAll(cVar1);
label_cond_28:
label_goto_28:
	if ( !((0x40000000 &  canonValue)) )  
		goto label_cond_43;
	norm16 = this->getNorm16(c);
	//    .local v1, "norm16":I
	if ( norm16 != cVar0 )
		goto label_cond_4a;
	syllable = (0xac00 + ( ( c + -0x1100) * 0x24c));
	//    .local v2, "syllable":I
	set->add(syllable, ( ( syllable + 0x24c) + -0x1));
	//    .end local v1    # "norm16":I
	//    .end local v2    # "syllable":I
label_cond_43:
label_goto_43:
	return cVar0;
	// 4462    .line 868
label_cond_44:
	if ( !(value) )  
		goto label_cond_28;
	set->add(value);
	goto label_goto_28;
	// 4471    .line 877
	// 4472    .restart local v1    # "norm16":I
label_cond_4a:
	this->addComposites(this->getCompositionsList(norm16), set);
	goto label_goto_43;

}
// .method public getCompQuickCheck(I)I
int android::icu::impl::Normalizer2Impl::getCompQuickCheck(int norm16)
{
	
	//    .param p1, "norm16"    # I
	if ( norm16 <  this->minNoNo )
		goto label_cond_9;
	if ( 0xff01 >  norm16 )
		goto label_cond_b;
label_cond_9:
	return 0x1;
	// 4503    .line 681
label_cond_b:
	if ( this->minMaybeYes >  norm16 )
		goto label_cond_11;
	return 0x2;
	// 4514    .line 684
label_cond_11:
	return 0x0;

}
// .method public getDecomposition(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Normalizer2Impl::getDecomposition(int c)
{
	
	int decomp;
	int norm16;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	int c;
	
	//    .param p1, "c"    # I
	decomp = -0x1;
	//    .local v1, "decomp":I
label_goto_1:
	if ( c <  this->minDecompNoCP )
		goto label_cond_f;
	norm16 = this->getNorm16(c);
	//    .local v3, "norm16":I
	if ( !(this->isDecompYes(norm16)) )  
		goto label_cond_13;
	//    .end local v3    # "norm16":I
label_cond_f:
	if ( decomp >= 0 )
		goto label_cond_45;
	return 0x0;
	// 4557    .line 775
	// 4558    .restart local v3    # "norm16":I
label_cond_13:
	if ( !(this->isHangul(norm16)) )  
		goto label_cond_26;
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	android::icu::impl::Normalizer2Impl_S_Hangul::decompose(c, buffer);
	return buffer->toString();
	// 4582    .line 780
	// 4583    .end local v0    # "buffer":Ljava/lang/StringBuilder;
label_cond_26:
	if ( !(this->isDecompNoAlgorithmic(norm16)) )  
		goto label_cond_32;
	c = this->mapAlgorithmic(c, norm16);
	c;
	goto label_goto_1;
	// 4601    .line 785
label_cond_32:
	norm16 = ( norm16 + 0x1);
	//    .end local v3    # "norm16":I
	//    .local v4, "norm16":I
	//    .local v2, "length":I
	return this->extraData->substring(norm16, (norm16 + ( this->extraData->charAt(norm16) & 0x1f)));
	// 4627    .line 791
	// 4628    .end local v2    # "length":I
	// 4629    .end local v4    # "norm16":I
label_cond_45:
	return android::icu::text::UTF16::valueOf(decomp);

}
// .method public getFCD16(I)I
int android::icu::impl::Normalizer2Impl::getFCD16(int c)
{
	
	int cVar0;
	
	//    .param p1, "c"    # I
	cVar0 = 0x0;
	if ( c >= 0 )
		goto label_cond_4;
	return cVar0;
	// 4651    .line 712
label_cond_4:
	if ( c >= 0x180 )
		goto label_cond_d;
	return this->tccc180[c];
	// 4664    .line 714
label_cond_d:
	if ( c >  0xffff )
		goto label_cond_19;
	if ( this->singleLeadMightHaveNonZeroFCD16(c) )     
		goto label_cond_19;
	return cVar0;
	// 4679    .line 717
label_cond_19:
	return this->getFCD16FromNormData(c);

}
// .method public getFCD16FromBelow180(I)I
int android::icu::impl::Normalizer2Impl::getFCD16FromBelow180(int c)
{
	
	//    .param p1, "c"    # I
	return this->tccc180[c];

}
// .method public getFCD16FromNormData(I)I
int android::icu::impl::Normalizer2Impl::getFCD16FromNormData(int c)
{
	
	int cVar0;
	int norm16;
	int c;
	int firstUnit;
	int fcd16;
	
	//    .param p1, "c"    # I
	cVar0 = 0x0;
label_goto_1:
	norm16 = this->getNorm16(c);
	//    .local v2, "norm16":I
	if ( norm16 >  this->minYesNo )
		goto label_cond_a;
	return cVar0;
	// 4723    .line 737
label_cond_a:
	if ( norm16 <  0xfe00 )
		goto label_cond_15;
	norm16 = ( norm16 & 0xff);
	return (( norm16 << 0x8) |  norm16);
	// 4739    .line 741
label_cond_15:
	if ( norm16 <  this->minMaybeYes )
		goto label_cond_1a;
	return cVar0;
	// 4748    .line 743
label_cond_1a:
	if ( !(this->isDecompNoAlgorithmic(norm16)) )  
		goto label_cond_25;
	c = this->mapAlgorithmic(c, norm16);
	goto label_goto_1;
	// 4763    .line 747
label_cond_25:
	firstUnit = this->extraData->charAt(norm16);
	//    .local v1, "firstUnit":I
	if ( ( firstUnit & 0x1f) )     
		goto label_cond_32;
	return 0x1ff;
	// 4782    .line 754
label_cond_32:
	fcd16 = _shri(firstUnit,0x8);
	//    .local v0, "fcd16":I
	if ( !(( firstUnit & 0x80)) )  
		goto label_cond_45;
label_cond_45:
	return fcd16;

}
// .method public getNorm16(I)I
int android::icu::impl::Normalizer2Impl::getNorm16(int c)
{
	
	//    .param p1, "c"    # I
	return this->normTrie->get(c);

}
// .method public getNormTrie()Landroid/icu/impl/Trie2_16;
std::shared_ptr<android::icu::impl::Trie2_16> android::icu::impl::Normalizer2Impl::getNormTrie()
{
	
	return this->normTrie;

}
// .method public getRawDecomposition(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::Normalizer2Impl::getRawDecomposition(int c)
{
	
	int norm16;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	int firstUnit;
	int mLength;
	int rawMapping;
	char rm0;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "c"    # I
	if ( c <  this->minDecompNoCP )
		goto label_cond_e;
	norm16 = this->getNorm16(c);
	//    .local v3, "norm16":I
	if ( !(this->isDecompYes(norm16)) )  
		goto label_cond_10;
	//    .end local v3    # "norm16":I
label_cond_e:
	return 0x0;
	// 4865    .line 808
	// 4866    .restart local v3    # "norm16":I
label_cond_10:
	if ( !(this->isHangul(norm16)) )  
		goto label_cond_23;
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	android::icu::impl::Normalizer2Impl_S_Hangul::getRawDecomposition(c, buffer);
	return buffer->toString();
	// 4890    .line 813
	// 4891    .end local v0    # "buffer":Ljava/lang/StringBuilder;
label_cond_23:
	if ( !(this->isDecompNoAlgorithmic(norm16)) )  
		goto label_cond_32;
	return android::icu::text::UTF16::valueOf(this->mapAlgorithmic(c, norm16));
	// 4910    .line 817
label_cond_32:
	firstUnit = this->extraData->charAt(norm16);
	//    .local v1, "firstUnit":I
	mLength = ( firstUnit & 0x1f);
	//    .local v2, "mLength":I
	if ( !(( firstUnit & 0x40)) )  
		goto label_cond_75;
	rawMapping = ( (norm16 - ( _shri(firstUnit,0x7) & 0x1)) + -0x1);
	//    .local v4, "rawMapping":I
	rm0 = this->extraData->charAt(rawMapping);
	//    .local v5, "rm0":C
	if ( rm0 >  0x1f )
		goto label_cond_59;
	return this->extraData->substring((rawMapping - rm0), rawMapping);
	// 4962    .line 828
label_cond_59:
	cVar0 = std::make_shared<java::lang::StringBuilder>(( mLength + -0x1));
	//    .restart local v0    # "buffer":Ljava/lang/StringBuilder;
	norm16 = ( norm16 + 0x3);
	return cVar0->append(rm0)->append(this->extraData, norm16, ( (norm16 + mLength) + -0x2))->toString();
	// 4995    .line 833
	// 4996    .end local v0    # "buffer":Ljava/lang/StringBuilder;
	// 4997    .end local v4    # "rawMapping":I
	// 4998    .end local v5    # "rm0":C
label_cond_75:
	norm16 = ( norm16 + 0x1);
	return this->extraData->substring(norm16, (norm16 + mLength));

}
// .method getTrailCCFromCompYesAndZeroCC(Ljava/lang/CharSequence;II)I
int android::icu::impl::Normalizer2Impl::getTrailCCFromCompYesAndZeroCC(std::shared_ptr<java::lang::CharSequence> s,int cpStart,int cpLimit)
{
	
	int prevNorm16;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "cpStart"    # I
	//    .param p3, "cpLimit"    # I
	if ( cpStart != ( cpLimit + -0x1) )
		goto label_cond_12;
	//    .local v0, "c":I
label_goto_8:
	prevNorm16 = this->getNorm16(c);
	//    .local v1, "prevNorm16":I
	if ( prevNorm16 >  this->minYesNo )
		goto label_cond_17;
	return 0x0;
	// 5049    .line 1706
	// 5050    .end local v0    # "c":I
	// 5051    .end local v1    # "prevNorm16":I
label_cond_12:
	//    .restart local v0    # "c":I
	goto label_goto_8;
	// 5060    .line 1712
	// 5061    .restart local v1    # "prevNorm16":I
label_cond_17:
	return _shri(this->extraData->charAt(prevNorm16),0x8);

}
// .method public hasCompBoundaryAfter(IZZ)Z
bool android::icu::impl::Normalizer2Impl::hasCompBoundaryAfter(int c,bool onlyContiguous,bool testInert)
{
	
	bool cVar0;
	bool cVar2;
	int norm16;
	int cVar3;
	int c;
	int firstUnit;
	
	//    .param p1, "c"    # I
	//    .param p2, "onlyContiguous"    # Z
	//    .param p3, "testInert"    # Z
	cVar0 = 0x1;
	cVar2 = 0x0;
label_goto_2:
	norm16 = this->getNorm16(c);
	//    .local v1, "norm16":I
	if ( !(android::icu::impl::Normalizer2Impl::isInert(norm16)) )  
		goto label_cond_d;
	return cVar0;
	// 5102    .line 1623
label_cond_d:
	if ( norm16 >  this->minYesNo )
		goto label_cond_1f;
	if ( !(this->isHangul(norm16)) )  
		goto label_cond_1e;
	cVar2 = ( android::icu::impl::Normalizer2Impl_S_Hangul::isHangulWithoutJamoT((char)(c)) ^ 0x1);
label_cond_1e:
	return cVar2;
	// 5126    .line 1628
label_cond_1f:
	if ( !(testInert) )  
		goto label_cond_26;
	cVar3 = this->minNoNo;
label_goto_23:
	if ( norm16 <  cVar3 )
		goto label_cond_29;
	return cVar2;
	// 5138    .line 1628
label_cond_26:
	cVar3 = this->minMaybeYes;
	goto label_goto_23;
	// 5144    .line 1630
label_cond_29:
	if ( !(this->isDecompNoAlgorithmic(norm16)) )  
		goto label_cond_34;
	c = this->mapAlgorithmic(c, norm16);
	goto label_goto_2;
	// 5159    .line 1636
label_cond_34:
	firstUnit = this->extraData->charAt(norm16);
	//    .local v0, "firstUnit":I
	if ( ( firstUnit & 0x20) )     
		goto label_cond_45;
	if ( !(onlyContiguous) )  
		goto label_cond_44;
	if ( firstUnit >  0x1ff )
		goto label_cond_45;
label_cond_44:
	cVar2 = cVar0;
label_cond_45:
	return cVar2;

}
// .method public hasCompBoundaryBefore(I)Z
bool android::icu::impl::Normalizer2Impl::hasCompBoundaryBefore(int c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	if ( c <  this->minCompNoMaybeCP )
		goto label_cond_d;
	cVar0 = this->hasCompBoundaryBefore(c, this->getNorm16(c));
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x1;
	goto label_goto_c;

}
// .method public hasDecompBoundary(IZ)Z
bool android::icu::impl::Normalizer2Impl::hasDecompBoundary(int c,bool before)
{
	
	bool cVar0;
	bool cVar1;
	int norm16;
	int c;
	int firstUnit;
	
	//    .param p1, "c"    # I
	//    .param p2, "before"    # Z
	cVar0 = 0x1;
	cVar1 = 0x0;
label_goto_2:
	if ( c >= this->minDecompNoCP )
		goto label_cond_7;
	return cVar0;
	// 5234    .line 1584
label_cond_7:
	norm16 = this->getNorm16(c);
	//    .local v1, "norm16":I
	if ( this->isHangul(norm16) )     
		goto label_cond_17;
	if ( !(this->isDecompYesAndZeroCC(norm16)) )  
		goto label_cond_18;
label_cond_17:
	return cVar0;
	// 5258    .line 1587
label_cond_18:
	if ( norm16 <= 0xfe00 )
		goto label_cond_1e;
	return cVar1;
	// 5267    .line 1589
label_cond_1e:
	if ( !(this->isDecompNoAlgorithmic(norm16)) )  
		goto label_cond_29;
	c = this->mapAlgorithmic(c, norm16);
	goto label_goto_2;
	// 5282    .line 1593
label_cond_29:
	firstUnit = this->extraData->charAt(norm16);
	//    .local v0, "firstUnit":I
	if ( ( firstUnit & 0x1f) )     
		goto label_cond_34;
	return cVar1;
	// 5299    .line 1597
label_cond_34:
	if ( before )     
		goto label_cond_40;
	if ( firstUnit <= 0x1ff )
		goto label_cond_3b;
	return cVar1;
	// 5311    .line 1603
label_cond_3b:
	if ( firstUnit >  0xff )
		goto label_cond_40;
	return cVar0;
	// 5320    .line 1609
label_cond_40:
	if ( !(( firstUnit & 0x80)) )  
		goto label_cond_52;
	if ( (this->extraData->charAt(( norm16 + -0x1)) &  0xff00) )     
		goto label_cond_53;
label_cond_52:
label_goto_52:
	return cVar0;
label_cond_53:
	cVar0 = cVar1;
	goto label_goto_52;

}
// .method public hasFCDBoundaryAfter(I)Z
bool android::icu::impl::Normalizer2Impl::hasFCDBoundaryAfter(int c)
{
	
	bool cVar0;
	int fcd16;
	
	//    .param p1, "c"    # I
	cVar0 = 0x1;
	fcd16 = this->getFCD16(c);
	//    .local v0, "fcd16":I
	if ( fcd16 <= cVar0 )
		goto label_cond_c;
	if ( ( fcd16 & 0xff) )     
		goto label_cond_d;
label_cond_c:
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_c;

}
// .method public hasFCDBoundaryBefore(I)Z
bool android::icu::impl::Normalizer2Impl::hasFCDBoundaryBefore(int c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	cVar0 = 0x1;
	if ( c <  0x300 )
		goto label_cond_d;
	if ( this->getFCD16(c) >  0xff )
		goto label_cond_e;
label_cond_d:
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method public isAlgorithmicNoNo(I)Z
bool android::icu::impl::Normalizer2Impl::isAlgorithmicNoNo(int norm16)
{
	
	bool cVar1;
	
	//    .param p1, "norm16"    # I
	cVar1 = 0x0;
	if ( this->limitNoNo >  norm16 )
		goto label_cond_a;
	if ( norm16 >= this->minMaybeYes )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method public isCanonSegmentStarter(I)Z
bool android::icu::impl::Normalizer2Impl::isCanonSegmentStarter(int c)
{
	
	bool cVar1;
	
	//    .param p1, "c"    # I
	cVar1 = 0x0;
	if ( this->canonIterData->get(c) < 0 ) 
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method public isCompNo(I)Z
bool android::icu::impl::Normalizer2Impl::isCompNo(int norm16)
{
	
	bool cVar1;
	
	//    .param p1, "norm16"    # I
	cVar1 = 0x0;
	if ( this->minNoNo >  norm16 )
		goto label_cond_a;
	if ( norm16 >= this->minMaybeYes )
		goto label_cond_a;
	cVar1 = 0x1;
label_cond_a:
	return cVar1;

}
// .method public isDecompInert(I)Z
bool android::icu::impl::Normalizer2Impl::isDecompInert(int c)
{
	
	//    .param p1, "c"    # I
	return this->isDecompYesAndZeroCC(this->getNorm16(c));

}
// .method public isDecompYes(I)Z
bool android::icu::impl::Normalizer2Impl::isDecompYes(int norm16)
{
	
	bool cVar0;
	
	//    .param p1, "norm16"    # I
	cVar0 = 0x1;
	if ( norm16 <  this->minYesNo )
		goto label_cond_9;
	if ( this->minMaybeYes >  norm16 )
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public isFCDInert(I)Z
bool android::icu::impl::Normalizer2Impl::isFCDInert(int c)
{
	
	bool cVar0;
	
	//    .param p1, "c"    # I
	cVar0 = 0x1;
	if ( this->getFCD16(c) >  cVar0 )
		goto label_cond_8;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method public load(Ljava/lang/String;)Landroid/icu/impl/Normalizer2Impl;
std::shared_ptr<android::icu::impl::Normalizer2Impl> android::icu::impl::Normalizer2Impl::load(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	return this->load(android::icu::impl::ICUBinary::getRequiredData(name));

}
// .method public load(Ljava/nio/ByteBuffer;)Landroid/icu/impl/Normalizer2Impl;
std::shared_ptr<android::icu::impl::Normalizer2Impl> android::icu::impl::Normalizer2Impl::load(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar1;
	int indexesLength;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar0;
	std::shared<std::vector<int[]>> inIndexes;
	int i;
	int offset;
	int nextOffset;
	int trieLength;
	std::shared_ptr<android::icu::util::ICUUncheckedIOException> cVar2;
	int numChars;
	int bits;
	int c;
	unsigned char bits;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	try {
	//label_try_start_4:
	this->dataVersion = android::icu::impl::ICUBinary::readHeaderAndDataVersion(bytes, 0x4e726d32, android::icu::impl::Normalizer2Impl::IS_ACCEPTABLE);
	indexesLength = ( bytes->getInt() / 0x4);
	//    .local v5, "indexesLength":I
	if ( indexesLength >  0xd )
		goto label_cond_27;
	cVar0 = std::make_shared<android::icu::util::ICUUncheckedIOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Normalizer2 data: not enough indexes")));
	// throw
	throw cVar0;
	// 5601    :try_end_20
	// 5602    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_20} :catch_20
	// 5604    .line 495
	// 5605    .end local v5    # "indexesLength":I
label_catch_20:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	cVar1 = std::make_shared<android::icu::util::ICUUncheckedIOException>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 5617    .line 438
	// 5618    .end local v2    # "e":Ljava/io/IOException;
	// 5619    .restart local v5    # "indexesLength":I
label_cond_27:
	try {
	//label_try_start_27:
	inIndexes = std::make_shared<std::vector<int[]>>(indexesLength);
	//    .local v4, "inIndexes":[I
	inIndexes[0x0] = ( indexesLength * 0x4);
	i = 0x1;
	//    .local v3, "i":I
label_goto_2f:
	if ( i >= indexesLength )
		goto label_cond_3a;
	inIndexes[i] = bytes->getInt();
	i = ( i + 0x1);
	goto label_goto_2f;
	// 5651    .line 444
label_cond_3a:
	this->minDecompNoCP = inIndexes[0x8];
	this->minCompNoMaybeCP = inIndexes[0x9];
	this->minYesNo = inIndexes[0xa];
	this->minYesNoMappingsOnly = inIndexes[0xe];
	this->minNoNo = inIndexes[0xb];
	this->limitNoNo = inIndexes[0xc];
	this->minMaybeYes = inIndexes[0xd];
	offset = inIndexes[0x0];
	//    .local v8, "offset":I
	nextOffset = inIndexes[0x1];
	//    .local v6, "nextOffset":I
	this->normTrie = android::icu::impl::Trie2_16::createFromSerialized(bytes);
	trieLength = this->normTrie->getSerializedLength();
	//    .local v9, "trieLength":I
	if ( trieLength <= (nextOffset - offset) )
		goto label_cond_83;
	cVar2 = std::make_shared<android::icu::util::ICUUncheckedIOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Normalizer2 data: not enough bytes for normTrie")));
	// throw
	throw cVar2;
	// 5742    .line 461
label_cond_83:
	android::icu::impl::ICUBinary::skipBytes(bytes, ((nextOffset - offset) -  trieLength));
	nextOffset = inIndexes[0x2];
	numChars = ( (nextOffset - nextOffset) / 0x2);
	//    .local v7, "numChars":I
	if ( !(numChars) )  
		goto label_cond_a9;
	this->maybeYesCompositions = android::icu::impl::ICUBinary::getString(bytes, numChars, 0x0);
	this->extraData = this->maybeYesCompositions->substring((0xfe00 - this->minMaybeYes));
label_cond_a9:
	nextOffset;
	this->smallFCD = std::make_shared<std::vector<unsigned char[]>>(0x100);
	bytes->get(this->smallFCD);
	this->tccc180 = std::make_shared<std::vector<int[]>>(0x180);
	bits = 0x0;
	//    .local v0, "bits":I
	c = 0x0;
	//    .local v1, "c":I
label_goto_bd:
	if ( c >= 0x180 )
		goto label_cond_e6;
	if ( ( c & 0xff) )     
		goto label_cond_c9;
	bits = this->smallFCD[_shri(c,0x8)];
label_cond_c9:
	if ( !(( bits & 0x1)) )  
		goto label_cond_e1;
	i = 0x0;
label_goto_ce:
	if ( i >= 0x20 )
		goto label_cond_e3;
	this->tccc180[c] = ( this->getFCD16FromNormData(c) & 0xff);
	//label_try_end_dc:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/io/IOException; {:try_start_27 .. :try_end_dc} :catch_20
	i = ( i + 0x1);
	c = ( c + 0x1);
	goto label_goto_ce;
	// 5871    .line 490
label_cond_e1:
	c = ( c + 0x20);
label_cond_e3:
	bits = _shri(bits,0x1);
	goto label_goto_bd;
	// 5881    .line 494
label_cond_e6:
	return this;

}
// .method public makeFCD(Ljava/lang/CharSequence;IILandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)I
int android::icu::impl::Normalizer2Impl::makeFCD(std::shared_ptr<java::lang::CharSequence> s,int src,int limit,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	int cVar0;
	int prevBoundary;
	int c;
	int prevFCD16;
	int prevSrc;
	int src;
	char c2;
	int fcd16;
	int prev;
	int p;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "src"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	cVar0 = 0x1;
	prevBoundary = src;
	//    .local v5, "prevBoundary":I
	c = 0x0;
	//    .local v0, "c":I
	prevFCD16 = 0x0;
	//    .local v6, "prevFCD16":I
	//    .local v2, "fcd16":I
label_goto_5:
	prevSrc = src;
	//    .local v7, "prevSrc":I
label_goto_6:
	if ( src == limit )
		goto label_cond_65;
	c = s->charAt(src);
	if ( c >= 0x300 )
		goto label_cond_14;
	(~c);
	src = ( src + 0x1);
	goto label_goto_6;
	// 5937    .line 1446
label_cond_14:
	if ( this->singleLeadMightHaveNonZeroFCD16(c) )     
		goto label_cond_1e;
	0x0;
	src = ( src + 0x1);
	goto label_goto_6;
	// 5953    .line 1450
label_cond_1e:
	if ( !(android::icu::text::UTF16::isSurrogate((char)(c))) )  
		goto label_cond_40;
	if ( !(android::icu::impl::Normalizer2Impl_S_UTF16Plus::isSurrogateLead(c)) )  
		goto label_cond_4f;
	if ( ( src + 0x1) == limit )
		goto label_cond_40;
	c2 = s->charAt(( src + 0x1));
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_40;
	c = java::lang::Character::toCodePoint((char)(c), c2);
	//    .end local v1    # "c2":C
label_cond_40:
label_goto_40:
	fcd16 = this->getFCD16FromNormData(c);
	if ( fcd16 >  0xff )
		goto label_cond_65;
	fcd16;
	src = (src +  java::lang::Character::charCount(c));
	goto label_goto_6;
	// 6019    .line 1457
label_cond_4f:
	if ( prevSrc >= src )
		goto label_cond_40;
	c2 = s->charAt(( src + -0x1));
	//    .restart local v1    # "c2":C
	if ( !(java::lang::Character::isHighSurrogate(c2)) )  
		goto label_cond_40;
	src = ( src + -0x1);
	c = java::lang::Character::toCodePoint(c2, (char)(c));
	goto label_goto_40;
	// 6048    .line 1472
	// 6049    .end local v1    # "c2":C
label_cond_65:
	if ( src == prevSrc )
		goto label_cond_d7;
	if ( src != limit )
		goto label_cond_6f;
	if ( !(buffer) )  
		goto label_cond_6e;
	buffer->flushAndAppendZeroCC(s, prevSrc, src);
label_cond_6e:
label_goto_6e:
	return src;
	// 6067    .line 1479
label_cond_6f:
	prevBoundary = src;
	if ( prevFCD16 >= 0 )
		goto label_cond_a5;
	prev = (~prevFCD16);
	//    .local v4, "prev":I
	if ( prev >= 0x180 )
		goto label_cond_a0;
	prevFCD16 = this->tccc180[prev];
label_goto_7b:
	if ( prevFCD16 <= cVar0 )
		goto label_cond_7f;
	prevBoundary = ( prevBoundary + -0x1);
	//    .end local v4    # "prev":I
label_cond_7f:
label_goto_7f:
	if ( !(buffer) )  
		goto label_cond_87;
	buffer->flushAndAppendZeroCC(s, prevSrc, prevBoundary);
	buffer->append(s, prevBoundary, src);
label_cond_87:
label_cond_88:
	src = (src +  java::lang::Character::charCount(c));
	if ( ( prevFCD16 & 0xff) >  _shri(0x0,0x8) )
		goto label_cond_da;
	if ( ( fcd16 & 0xff) >  cVar0 )
		goto label_cond_98;
	src;
label_cond_98:
	if ( !(buffer) )  
		goto label_cond_9d;
	buffer->appendZeroCC(c);
label_cond_9d:
	prevFCD16 = fcd16;
	goto label_goto_5;
	// 6147    .line 1484
	// 6148    .restart local v4    # "prev":I
label_cond_a0:
	prevFCD16 = this->getFCD16FromNormData(prev);
	goto label_goto_7b;
	// 6156    .line 1489
	// 6157    .end local v4    # "prev":I
label_cond_a5:
	p = ( src + -0x1);
	//    .local v3, "p":I
	if ( !(java::lang::Character::isLowSurrogate(s->charAt(p))) )  
		goto label_cond_d3;
	if ( prevSrc >= p )
		goto label_cond_d3;
	if ( !(java::lang::Character::isHighSurrogate(s->charAt(( p + -0x1)))) )  
		goto label_cond_d3;
	p = ( p + -0x1);
	prevFCD16 = this->getFCD16FromNormData(java::lang::Character::toCodePoint(s->charAt(p), s->charAt(( p + 0x1))));
label_cond_d3:
	if ( prevFCD16 <= cVar0 )
		goto label_cond_7f;
	prevBoundary = p;
	goto label_goto_7f;
	// 6220    .line 1511
	// 6221    .end local v3    # "p":I
label_cond_d7:
	if ( src != limit )
		goto label_cond_88;
	goto label_goto_6e;
	// 6227    .line 1528
label_cond_da:
	if ( buffer )     
		goto label_cond_dd;
	return prevBoundary;
	// 6234    .line 1536
label_cond_dd:
	buffer->removeSuffix((prevSrc - prevBoundary));
	src = this->findNextFCDBoundary(s, src, limit);
	this->decomposeShort(s, prevBoundary, src, buffer);
	prevBoundary = src;
	prevFCD16 = 0x0;
	goto label_goto_5;

}
// .method public makeFCDAndAppend(Ljava/lang/CharSequence;ZLandroid/icu/impl/Normalizer2Impl$ReorderingBuffer;)V
void android::icu::impl::Normalizer2Impl::makeFCDAndAppend(std::shared_ptr<java::lang::CharSequence> s,bool doMakeFCD,std::shared_ptr<android::icu::impl::Normalizer2Impl_S_ReorderingBuffer> buffer)
{
	
	int cVar0;
	int limit;
	int firstBoundaryInSrc;
	int lastBoundaryInDest;
	std::shared_ptr<java::lang::StringBuilder> middle;
	int src;
	
	//    .param p1, "s"    # Ljava/lang/CharSequence;
	//    .param p2, "doMakeFCD"    # Z
	//    .param p3, "buffer"    # Landroid/icu/impl/Normalizer2Impl$ReorderingBuffer;
	cVar0 = 0x0;
	//    .local v4, "src":I
	limit = s->length();
	//    .local v2, "limit":I
	if ( buffer->isEmpty() )     
		goto label_cond_49;
	firstBoundaryInSrc = this->findNextFCDBoundary(s, cVar0, limit);
	//    .local v0, "firstBoundaryInSrc":I
	if ( !(firstBoundaryInSrc) )  
		goto label_cond_49;
	lastBoundaryInDest = this->findPreviousFCDBoundary(buffer->getStringBuilder(), buffer->length());
	//    .local v1, "lastBoundaryInDest":I
	middle = std::make_shared<java::lang::StringBuilder>(( ((buffer->length() -  lastBoundaryInDest) +  firstBoundaryInSrc) + 0x10));
	//    .local v3, "middle":Ljava/lang/StringBuilder;
	middle->append(buffer->getStringBuilder(), lastBoundaryInDest, buffer->length());
	buffer->removeSuffix((buffer->length() -  lastBoundaryInDest));
	middle->append(s, cVar0, firstBoundaryInSrc);
	this->makeFCD(middle, cVar0, middle->length(), buffer);
	src = firstBoundaryInSrc;
	//    .end local v0    # "firstBoundaryInSrc":I
	//    .end local v1    # "lastBoundaryInDest":I
	//    .end local v3    # "middle":Ljava/lang/StringBuilder;
label_cond_49:
	if ( !(doMakeFCD) )  
		goto label_cond_4f;
	this->makeFCD(s, src, limit, buffer);
label_goto_4e:
	return;
	// 6370    .line 1572
label_cond_4f:
	buffer->append(s, 0x0, limit);
	goto label_goto_4e;

}
// .method public singleLeadMightHaveNonZeroFCD16(I)Z
bool android::icu::impl::Normalizer2Impl::singleLeadMightHaveNonZeroFCD16(int lead)
{
	
	bool cVar1;
	unsigned char bits;
	
	//    .param p1, "lead"    # I
	cVar1 = 0x0;
	bits = this->smallFCD[_shri(lead,0x8)];
	//    .local v0, "bits":B
	if ( bits )     
		goto label_cond_a;
	return cVar1;
	// 6397    .line 726
label_cond_a:
	if ( !(( _shri(bits,( _shri(lead,0x5) & 0x7)) & 0x1)) )  
		goto label_cond_15;
	cVar1 = 0x1;
label_cond_15:
	return cVar1;

}


