// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\Collation.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.Collation.h"
#include "java.lang.AssertionError.h"

static android::icu::impl::coll::Collation::_assertionsDisabled;
static android::icu::impl::coll::Collation::BEFORE_WEIGHT16 = 0x100;
static android::icu::impl::coll::Collation::BUILDER_DATA_TAG = 0x7;
static android::icu::impl::coll::Collation::CASE_AND_QUATERNARY_MASK = 0xc0c0;
static android::icu::impl::coll::Collation::CASE_AND_TERTIARY_MASK = 0xff3f;
static android::icu::impl::coll::Collation::CASE_LEVEL = 0x3;
static android::icu::impl::coll::Collation::CASE_LEVEL_FLAG = 0x8;
static android::icu::impl::coll::Collation::CASE_MASK = 0xc000;
static android::icu::impl::coll::Collation::COMMON_BYTE = 0x5;
static android::icu::impl::coll::Collation::COMMON_SECONDARY_CE = 0x5000000;
static android::icu::impl::coll::Collation::COMMON_SEC_AND_TER_CE = 0x5000500;
static android::icu::impl::coll::Collation::COMMON_TERTIARY_CE = 0x500;
static android::icu::impl::coll::Collation::COMMON_WEIGHT16 = 0x500;
static android::icu::impl::coll::Collation::CONTRACTION_TAG = 0x9;
static android::icu::impl::coll::Collation::CONTRACT_NEXT_CCC = 0x200;
static android::icu::impl::coll::Collation::CONTRACT_SINGLE_CP_NO_MATCH = 0x100;
static android::icu::impl::coll::Collation::CONTRACT_TRAILING_CCC = 0x400;
static android::icu::impl::coll::Collation::DIGIT_TAG = 0xa;
static android::icu::impl::coll::Collation::EQUAL = 0x0;
static android::icu::impl::coll::Collation::EXPANSION32_TAG = 0x5;
static android::icu::impl::coll::Collation::EXPANSION_TAG = 0x6;
static android::icu::impl::coll::Collation::FALLBACK_CE32 = 0xc0;
static android::icu::impl::coll::Collation::FALLBACK_TAG = 0x0;
static android::icu::impl::coll::Collation::FFFD_CE32 = -0x2fafb;
static android::icu::impl::coll::Collation::FFFD_PRIMARY = 0xfffd0000L;
static android::icu::impl::coll::Collation::FIRST_TRAILING_PRIMARY = 0xff020200L;
static android::icu::impl::coll::Collation::FIRST_UNASSIGNED_PRIMARY = 0xfe040200L;
static android::icu::impl::coll::Collation::GREATER = 0x1;
static android::icu::impl::coll::Collation::HANGUL_NO_SPECIAL_JAMO = 0x100;
static android::icu::impl::coll::Collation::HANGUL_TAG = 0xc;
static android::icu::impl::coll::Collation::IDENTICAL_LEVEL = 0x6;
static android::icu::impl::coll::Collation::IDENTICAL_LEVEL_FLAG = 0x40;
static android::icu::impl::coll::Collation::IMPLICIT_TAG = 0xf;
static android::icu::impl::coll::Collation::LATIN_EXPANSION_TAG = 0x4;
static android::icu::impl::coll::Collation::LEAD_ALL_FALLBACK = 0x100;
static android::icu::impl::coll::Collation::LEAD_ALL_UNASSIGNED = 0x0;
static android::icu::impl::coll::Collation::LEAD_MIXED = 0x200;
static android::icu::impl::coll::Collation::LEAD_SURROGATE_TAG = 0xd;
static android::icu::impl::coll::Collation::LEAD_TYPE_MASK = 0x300;
static android::icu::impl::coll::Collation::LESS = -0x1;
static android::icu::impl::coll::Collation::LEVEL_SEPARATOR_BYTE = 0x1;
static android::icu::impl::coll::Collation::LONG_PRIMARY_CE32_LOW_BYTE = 0xc1;
static android::icu::impl::coll::Collation::LONG_PRIMARY_TAG = 0x1;
static android::icu::impl::coll::Collation::LONG_SECONDARY_TAG = 0x2;
static android::icu::impl::coll::Collation::MAX_EXPANSION_LENGTH = 0x1f;
static android::icu::impl::coll::Collation::MAX_INDEX = 0x7ffff;
static android::icu::impl::coll::Collation::MAX_PRIMARY = 0xffff0000L;
static android::icu::impl::coll::Collation::MAX_REGULAR_CE32 = -0xfafb;
static android::icu::impl::coll::Collation::MERGE_SEPARATOR_BYTE = 0x2;
static android::icu::impl::coll::Collation::MERGE_SEPARATOR_CE32 = 0x2000505;
static android::icu::impl::coll::Collation::MERGE_SEPARATOR_PRIMARY = 0x2000000L;
static android::icu::impl::coll::Collation::NO_CE = 0x101000100L;
static android::icu::impl::coll::Collation::NO_CE32 = 0x1;
static android::icu::impl::coll::Collation::NO_CE_PRIMARY = 0x1L;
static android::icu::impl::coll::Collation::NO_CE_WEIGHT16 = 0x100;
static android::icu::impl::coll::Collation::NO_LEVEL = 0x0;
static android::icu::impl::coll::Collation::NO_LEVEL_FLAG = 0x1;
static android::icu::impl::coll::Collation::OFFSET_TAG = 0xe;
static android::icu::impl::coll::Collation::ONLY_SEC_TER_MASK = -0xc0c1;
static android::icu::impl::coll::Collation::ONLY_TERTIARY_MASK = 0x3f3f;
static android::icu::impl::coll::Collation::PREFIX_TAG = 0x8;
static android::icu::impl::coll::Collation::PRIMARY_COMPRESSION_HIGH_BYTE = 0xff;
static android::icu::impl::coll::Collation::PRIMARY_COMPRESSION_LOW_BYTE = 0x3;
static android::icu::impl::coll::Collation::PRIMARY_LEVEL = 0x1;
static android::icu::impl::coll::Collation::PRIMARY_LEVEL_FLAG = 0x2;
static android::icu::impl::coll::Collation::QUATERNARY_LEVEL = 0x5;
static android::icu::impl::coll::Collation::QUATERNARY_LEVEL_FLAG = 0x20;
static android::icu::impl::coll::Collation::QUATERNARY_MASK = 0xc0;
static android::icu::impl::coll::Collation::RESERVED_TAG_3 = 0x3;
static android::icu::impl::coll::Collation::SECONDARY_AND_CASE_MASK = -0x4000;
static android::icu::impl::coll::Collation::SECONDARY_LEVEL = 0x2;
static android::icu::impl::coll::Collation::SECONDARY_LEVEL_FLAG = 0x4;
static android::icu::impl::coll::Collation::SECONDARY_MASK = -0x10000;
static android::icu::impl::coll::Collation::SENTINEL_CP = -0x1;
static android::icu::impl::coll::Collation::SPECIAL_CE32_LOW_BYTE = 0xc0;
static android::icu::impl::coll::Collation::TERMINATOR_BYTE = 0x0;
static android::icu::impl::coll::Collation::TERTIARY_LEVEL = 0x4;
static android::icu::impl::coll::Collation::TERTIARY_LEVEL_FLAG = 0x10;
static android::icu::impl::coll::Collation::TRAIL_WEIGHT_BYTE = 0xff;
static android::icu::impl::coll::Collation::U0000_TAG = 0xb;
static android::icu::impl::coll::Collation::UNASSIGNED_CE32 = -0x1;
static android::icu::impl::coll::Collation::UNASSIGNED_IMPLICIT_BYTE = 0xfe;
static android::icu::impl::coll::Collation::ZERO_LEVEL = 0x7;
static android::icu::impl::coll::Collation::ZERO_LEVEL_FLAG = 0x80;
// .method static constructor <clinit>()V
void android::icu::impl::coll::Collation::static_cinit()
{
	
	android::icu::impl::coll::Collation::_assertionsDisabled = ( android::icu::impl::coll::Collation()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::impl::coll::Collation::Collation()
{
	
	// 200    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static ce32HasContext(I)Z
bool android::icu::impl::coll::Collation::ce32HasContext(int ce32)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p0, "ce32"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(ce32)) )  
		goto label_cond_1b;
	if ( android::icu::impl::coll::Collation::tagFromCE32(ce32) == 0x8 )
		goto label_cond_18;
	if ( android::icu::impl::coll::Collation::tagFromCE32(ce32) != 0x9 )
		goto label_cond_19;
label_cond_18:
label_goto_18:
	return cVar0;
label_cond_19:
	cVar0 = cVar1;
	goto label_goto_18;
label_cond_1b:
	cVar0 = cVar1;
	goto label_goto_18;

}
// .method static ceFromCE32(I)J
long long android::icu::impl::coll::Collation::ceFromCE32(int ce32)
{
	
	int cVar0;
	int tertiary;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	
	//    .param p0, "ce32"    # I
	cVar0 = 0x20;
	tertiary = ( ce32 & 0xff);
	//    .local v0, "tertiary":I
	if ( tertiary >= 0xc0 )
		goto label_cond_1b;
	return ((((long long)((-0x10000 &  ce32)) << cVar0) |  ((long long)((0xff00 &  ce32)) << 0x10)) |  (long long)(( tertiary << 0x8)));
	// 302    .line 436
label_cond_1b:
	cVar1 = (ce32 -  tertiary);
	if ( ( tertiary & 0xf) != 0x1 )
		goto label_cond_28;
	return (((long long)(cVar1) << cVar0) |  0x5000500);
	// 324    .line 442
label_cond_28:
	if ( android::icu::impl::coll::Collation::_assertionsDisabled )     
		goto label_cond_37;
	if ( ( tertiary & 0xf) == 0x2 )
		goto label_cond_37;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 342    .line 443
label_cond_37:
	return ((long long)(cVar1) &  0xffffffffL);

}
// .method static ceFromLongPrimaryCE32(I)J
long long android::icu::impl::coll::Collation::ceFromLongPrimaryCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return (((long long)(( ce32 & -0x100)) << 0x20) |  0x5000500);

}
// .method static ceFromLongSecondaryCE32(I)J
long long android::icu::impl::coll::Collation::ceFromLongSecondaryCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return ((long long)(ce32) &  0xffffff00L);

}
// .method static ceFromSimpleCE32(I)J
long long android::icu::impl::coll::Collation::ceFromSimpleCE32(int ce32)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "ce32"    # I
	if ( android::icu::impl::coll::Collation::_assertionsDisabled )     
		goto label_cond_10;
	if ( ( ce32 & 0xff) <  0xc0 )
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 411    .line 426
label_cond_10:
	return ((((long long)((-0x10000 &  ce32)) << 0x20) |  ((long long)((0xff00 &  ce32)) << 0x10)) |  (long long)(( ( ce32 & 0xff) << 0x8)));

}
// .method static decThreeBytePrimaryByOneStep(JZI)J
long long android::icu::impl::coll::Collation::decThreeBytePrimaryByOneStep(long long cVar3,bool isCompressible,int step)
{
	
	long long cVar0;
	int cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int byte3;
	int byte2;
	long long cVar3;
	
	//    .param p0, "basePrimary"    # J
	//    .param p2, "isCompressible"    # Z
	//    .param p3, "step"    # I
	cVar0 = 0x1000000;
	cVar1 = 0x2;
	if ( android::icu::impl::coll::Collation::_assertionsDisabled )     
		goto label_cond_14;
	if ( step <= 0 )
		goto label_cond_e;
	if ( step <= 0x7f )
		goto label_cond_14;
label_cond_e:
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 475    .line 538
label_cond_14:
	byte3 = (( (int)(_shrll(cVar3,0x8)) & 0xff) - step);
	//    .local v1, "byte3":I
	if ( byte3 <  cVar1 )
		goto label_cond_2a;
	return ((0xffff0000L &  cVar3) |  (long long)(( byte3 << 0x8)));
	// 504    .line 542
label_cond_2a:
	byte2 = ( ( (int)(_shrll(cVar3,0x10)) & 0xff) + -0x1);
	//    .local v0, "byte2":I
	if ( !(isCompressible) )  
		goto label_cond_4c;
	if ( byte2 >= 0x4 )
		goto label_cond_3d;
	byte2 = 0xfe;
	cVar3 = (cVar3 -  cVar0);
label_cond_3d:
label_goto_3d:
	return (((0xff000000L &  cVar3) |  (long long)(( byte2 << 0x10))) |  (long long)(( ( byte3 + 0xfe) << 0x8)));
	// 555    .line 552
label_cond_4c:
	if ( byte2 >= cVar1 )
		goto label_cond_3d;
	byte2 = 0xff;
	cVar3 = (cVar3 -  cVar0);
	goto label_goto_3d;

}
// .method static decTwoBytePrimaryByOneStep(JZI)J
long long android::icu::impl::coll::Collation::decTwoBytePrimaryByOneStep(long long cVar2,bool isCompressible,int step)
{
	
	long long cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int byte2;
	long long cVar2;
	
	//    .param p0, "basePrimary"    # J
	//    .param p2, "isCompressible"    # Z
	//    .param p3, "step"    # I
	cVar0 = 0x1000000;
	if ( android::icu::impl::coll::Collation::_assertionsDisabled )     
		goto label_cond_13;
	if ( step <= 0 )
		goto label_cond_d;
	if ( step <= 0x7f )
		goto label_cond_13;
label_cond_d:
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 595    .line 516
label_cond_13:
	byte2 = (( (int)(_shrll(cVar2,0x10)) & 0xff) - step);
	//    .local v0, "byte2":I
	if ( !(isCompressible) )  
		goto label_cond_2f;
	if ( byte2 >= 0x4 )
		goto label_cond_24;
	byte2 = ( byte2 + 0xfb);
	cVar2 = (cVar2 -  cVar0);
label_cond_24:
label_goto_24:
	return ((0xff000000L &  cVar2) |  (long long)(( byte2 << 0x10)));
	// 637    .line 523
label_cond_2f:
	if ( byte2 >= 0x2 )
		goto label_cond_24;
	byte2 = ( byte2 + 0xfe);
	cVar2 = (cVar2 -  cVar0);
	goto label_goto_24;

}
// .method static digitFromCE32(I)C
char android::icu::impl::coll::Collation::digitFromCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return (char)(( _shri(ce32,0x8) & 0xf));

}
// .method static getThreeBytePrimaryForOffsetData(IJ)J
long long android::icu::impl::coll::Collation::getThreeBytePrimaryForOffsetData(int c,long long dataCE)
{
	
	int lower32;
	
	//    .param p0, "c"    # I
	//    .param p1, "dataCE"    # J
	//    .local v4, "p":J
	lower32 = (int)(dataCE);
	//    .local v1, "lower32":I
	//    .local v2, "offset":I
	if ( !(( lower32 & 0x80)) )  
		goto label_cond_17;
	//    .local v0, "isCompressible":Z
label_goto_12:
	return android::icu::impl::coll::Collation::incThreeBytePrimaryByOffset(_ushrll(dataCE,0x20), isCompressible, ((c - _shri(lower32,0x8)) * ( lower32 & 0x7f)));
	// 709    .line 568
	// 710    .end local v0    # "isCompressible":Z
label_cond_17:
	//    .restart local v0    # "isCompressible":Z
	goto label_goto_12;

}
// .method static hasCE32Tag(II)Z
bool android::icu::impl::coll::Collation::hasCE32Tag(int ce32,int tag)
{
	
	bool cVar1;
	
	//    .param p0, "ce32"    # I
	//    .param p1, "tag"    # I
	cVar1 = 0x0;
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(ce32)) )  
		goto label_cond_e;
	if ( android::icu::impl::coll::Collation::tagFromCE32(ce32) != tag )
		goto label_cond_e;
	cVar1 = 0x1;
label_cond_e:
	return cVar1;

}
// .method public static incThreeBytePrimaryByOffset(JZI)J
long long android::icu::impl::coll::Collation::incThreeBytePrimaryByOffset(long long basePrimary,bool isCompressible,int offset)
{
	
	int cVar0;
	int cVar1;
	long long primary;
	int cVar2;
	int cVar3;
	int cVar4;
	int cVar5;
	
	//    .param p0, "basePrimary"    # J
	//    .param p2, "isCompressible"    # Z
	//    .param p3, "offset"    # I
	cVar0 = 0x10;
	cVar1 = (offset +  ( ( (int)(_shrll(basePrimary,0x8)) & 0xff) + -0x2));
	primary = (long long)(( ( ( cVar1 % 0xfe) + 0x2) << 0x8));
	//    .local v0, "primary":J
	cVar2 = ( cVar1 / 0xfe);
	if ( !(isCompressible) )  
		goto label_cond_36;
	cVar3 = (cVar2 +  ( ( (int)(_shrll(basePrimary,cVar0)) & 0xff) + -0x4));
	primary = (primary |  (long long)(( ( ( cVar3 % 0xfb) + 0x4) << 0x10)));
	cVar4 = ( cVar3 / 0xfb);
label_goto_29:
	return (((0xff000000L &  basePrimary) +  ((long long)(cVar4) << 0x18)) |  primary);
	// 826    .line 499
label_cond_36:
	cVar5 = (cVar2 +  ( ( (int)(_shrll(basePrimary,cVar0)) & 0xff) + -0x2));
	primary = (primary |  (long long)(( ( ( cVar5 % 0xfe) + 0x2) << 0x10)));
	cVar4 = ( cVar5 / 0xfe);
	goto label_goto_29;

}
// .method public static incTwoBytePrimaryByOffset(JZI)J
long long android::icu::impl::coll::Collation::incTwoBytePrimaryByOffset(long long basePrimary,bool isCompressible,int offset)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	
	//    .param p0, "basePrimary"    # J
	//    .param p2, "isCompressible"    # Z
	//    .param p3, "offset"    # I
	cVar0 = 0x10;
	if ( !(isCompressible) )  
		goto label_cond_22;
	cVar1 = (offset +  ( ( (int)(_shrll(basePrimary,cVar0)) & 0xff) + -0x4));
	//    .local v0, "primary":J
	cVar2 = ( cVar1 / 0xfb);
label_goto_15:
	return (((0xff000000L &  basePrimary) +  ((long long)(cVar2) << 0x18)) |  primary);
	// 909    .line 474
	// 910    .end local v0    # "primary":J
label_cond_22:
	cVar3 = (offset +  ( ( (int)(_shrll(basePrimary,cVar0)) & 0xff) + -0x2));
	//    .restart local v0    # "primary":J
	cVar2 = ( cVar3 / 0xfe);
	goto label_goto_15;

}
// .method static indexFromCE32(I)I
int android::icu::impl::coll::Collation::indexFromCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return _ushri(ce32,0xd);

}
// .method static isAssignedCE32(I)Z
bool android::icu::impl::coll::Collation::isAssignedCE32(int ce32)
{
	
	bool cVar1;
	
	//    .param p0, "ce32"    # I
	cVar1 = 0x0;
	if ( ce32 == 0xc0 )
		goto label_cond_9;
	if ( ce32 == -0x1 )
		goto label_cond_9;
	cVar1 = 0x1;
label_cond_9:
	return cVar1;

}
// .method static isContractionCE32(I)Z
bool android::icu::impl::coll::Collation::isContractionCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return android::icu::impl::coll::Collation::hasCE32Tag(ce32, 0x9);

}
// .method static isLongPrimaryCE32(I)Z
bool android::icu::impl::coll::Collation::isLongPrimaryCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return android::icu::impl::coll::Collation::hasCE32Tag(ce32, 0x1);

}
// .method static isPrefixCE32(I)Z
bool android::icu::impl::coll::Collation::isPrefixCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return android::icu::impl::coll::Collation::hasCE32Tag(ce32, 0x8);

}
// .method static isSelfContainedCE32(I)Z
bool android::icu::impl::coll::Collation::isSelfContainedCE32(int ce32)
{
	
	bool cVar0;
	
	//    .param p0, "ce32"    # I
	cVar0 = 0x1;
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(ce32)) )  
		goto label_cond_d;
	if ( android::icu::impl::coll::Collation::tagFromCE32(ce32) != cVar0 )
		goto label_cond_e;
label_cond_d:
label_goto_d:
	return cVar0;
	// 1042    .line 367
label_cond_e:
	if ( android::icu::impl::coll::Collation::tagFromCE32(ce32) == 0x2 )
		goto label_cond_d;
	if ( android::icu::impl::coll::Collation::tagFromCE32(ce32) == 0x4 )
		goto label_cond_d;
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method static isSimpleOrLongCE32(I)Z
bool android::icu::impl::coll::Collation::isSimpleOrLongCE32(int ce32)
{
	
	bool cVar0;
	
	//    .param p0, "ce32"    # I
	cVar0 = 0x1;
	if ( !(android::icu::impl::coll::Collation::isSpecialCE32(ce32)) )  
		goto label_cond_d;
	if ( android::icu::impl::coll::Collation::tagFromCE32(ce32) != cVar0 )
		goto label_cond_e;
label_cond_d:
label_goto_d:
	return cVar0;
	// 1092    .line 358
label_cond_e:
	if ( android::icu::impl::coll::Collation::tagFromCE32(ce32) == 0x2 )
		goto label_cond_d;
	cVar0 = 0x0;
	goto label_goto_d;

}
// .method static isSpecialCE32(I)Z
bool android::icu::impl::coll::Collation::isSpecialCE32(int ce32)
{
	
	bool cVar0;
	
	//    .param p0, "ce32"    # I
	if ( ( ce32 & 0xff) <  0xc0 )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method static latinCE0FromCE32(I)J
long long android::icu::impl::coll::Collation::latinCE0FromCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return ((((long long)((-0x1000000 &  ce32)) << 0x20) |  0x5000000) |  (long long)(_shri((0xff0000 &  ce32),0x8)));

}
// .method static latinCE1FromCE32(I)J
long long android::icu::impl::coll::Collation::latinCE1FromCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return ((((long long)(ce32) &  0xff00) << 0x10) |  0x500);

}
// .method static lengthFromCE32(I)I
int android::icu::impl::coll::Collation::lengthFromCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return ( _shri(ce32,0x8) & 0x1f);

}
// .method public static makeCE(J)J
long long android::icu::impl::coll::Collation::makeCE(long long p)
{
	
	//    .param p0, "p"    # J
	return ((p << 0x20) |  0x5000500);

}
// .method static makeCE(JIII)J
long long android::icu::impl::coll::Collation::makeCE(long long p,int s,int t,int q)
{
	
	//    .param p0, "p"    # J
	//    .param p2, "s"    # I
	//    .param p3, "t"    # I
	//    .param p4, "q"    # I
	return ((((p << 0x20) |  ((long long)(s) << 0x10)) |  (long long)(t)) |  (long long)(( q << 0x6)));

}
// .method static makeCE32FromTagAndIndex(II)I
int android::icu::impl::coll::Collation::makeCE32FromTagAndIndex(int tag,int index)
{
	
	//    .param p0, "tag"    # I
	//    .param p1, "index"    # I
	return (( ( index << 0xd) | 0xc0) |  tag);

}
// .method static makeCE32FromTagIndexAndLength(III)I
int android::icu::impl::coll::Collation::makeCE32FromTagIndexAndLength(int tag,int index,int length)
{
	
	//    .param p0, "tag"    # I
	//    .param p1, "index"    # I
	//    .param p2, "length"    # I
	return (( (( index << 0xd) |  ( length << 0x8)) | 0xc0) |  tag);

}
// .method static makeLongPrimaryCE32(J)I
int android::icu::impl::coll::Collation::makeLongPrimaryCE32(long long p)
{
	
	//    .param p0, "p"    # J
	return (int)((0xc1 |  p));

}
// .method static makeLongSecondaryCE32(I)I
int android::icu::impl::coll::Collation::makeLongSecondaryCE32(int lower32)
{
	
	//    .param p0, "lower32"    # I
	return ( ( lower32 | 0xc0) | 0x2);

}
// .method static primaryFromLongPrimaryCE32(I)J
long long android::icu::impl::coll::Collation::primaryFromLongPrimaryCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return ((long long)(ce32) &  0xffffff00L);

}
// .method static tagFromCE32(I)I
int android::icu::impl::coll::Collation::tagFromCE32(int ce32)
{
	
	//    .param p0, "ce32"    # I
	return ( ce32 & 0xf);

}
// .method static unassignedCEFromCodePoint(I)J
long long android::icu::impl::coll::Collation::unassignedCEFromCodePoint(int c)
{
	
	//    .param p0, "c"    # I
	return android::icu::impl::coll::Collation::makeCE(android::icu::impl::coll::Collation::unassignedPrimaryFromCodePoint(c));

}
// .method static unassignedPrimaryFromCodePoint(I)J
long long android::icu::impl::coll::Collation::unassignedPrimaryFromCodePoint(int c)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p0, "c"    # I
	cVar0 = ( c + 0x1);
	//    .local v0, "primary":J
	cVar1 = ( cVar0 / 0x12);
	return (0xfe000000L |  (((long long)(( ( ( cVar0 % 0x12) * 0xe) + 0x2)) |  (long long)(( ( ( cVar1 % 0xfe) + 0x2) << 0x8))) |  (long long)(( ( ( ( cVar1 / 0xfe) % 0xfb) + 0x4) << 0x10))));

}


