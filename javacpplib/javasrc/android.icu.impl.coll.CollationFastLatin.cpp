// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationFastLatin.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationFastLatin.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"

static android::icu::impl::coll::CollationFastLatin::_assertionsDisabled;
static android::icu::impl::coll::CollationFastLatin::BAIL_OUT = 0x1;
static android::icu::impl::coll::CollationFastLatin::BAIL_OUT_RESULT = -0x2;
static android::icu::impl::coll::CollationFastLatin::CASE_AND_TERTIARY_MASK = 0x1f;
static android::icu::impl::coll::CollationFastLatin::CASE_MASK = 0x18;
static android::icu::impl::coll::CollationFastLatin::COMMON_SEC = 0xa0;
static android::icu::impl::coll::CollationFastLatin::COMMON_SEC_PLUS_OFFSET = 0xc0;
static android::icu::impl::coll::CollationFastLatin::COMMON_TER = 0x0;
static android::icu::impl::coll::CollationFastLatin::COMMON_TER_PLUS_OFFSET = 0x20;
static android::icu::impl::coll::CollationFastLatin::CONTRACTION = 0x400;
static android::icu::impl::coll::CollationFastLatin::CONTR_CHAR_MASK = 0x1ff;
static android::icu::impl::coll::CollationFastLatin::CONTR_LENGTH_SHIFT = 0x9;
static android::icu::impl::coll::CollationFastLatin::EOS = 0x2;
static android::icu::impl::coll::CollationFastLatin::EXPANSION = 0x800;
static android::icu::impl::coll::CollationFastLatin::INDEX_MASK = 0x3ff;
static android::icu::impl::coll::CollationFastLatin::LATIN_LIMIT = 0x180;
static android::icu::impl::coll::CollationFastLatin::LATIN_MAX = 0x17f;
static android::icu::impl::coll::CollationFastLatin::LATIN_MAX_UTF8_LEAD = 0xc5;
static android::icu::impl::coll::CollationFastLatin::LONG_INC = 0x8;
static android::icu::impl::coll::CollationFastLatin::LONG_PRIMARY_MASK = 0xfff8;
static android::icu::impl::coll::CollationFastLatin::LOWER_CASE = 0x8;
static android::icu::impl::coll::CollationFastLatin::MAX_LONG = 0xff8;
static android::icu::impl::coll::CollationFastLatin::MAX_SEC_AFTER = 0x160;
static android::icu::impl::coll::CollationFastLatin::MAX_SEC_BEFORE = 0x80;
static android::icu::impl::coll::CollationFastLatin::MAX_SEC_HIGH = 0x3e0;
static android::icu::impl::coll::CollationFastLatin::MAX_SHORT = 0xfc00;
static android::icu::impl::coll::CollationFastLatin::MAX_TER_AFTER = 0x7;
static android::icu::impl::coll::CollationFastLatin::MERGE_WEIGHT = 0x3;
static android::icu::impl::coll::CollationFastLatin::MIN_LONG = 0xc00;
static android::icu::impl::coll::CollationFastLatin::MIN_SEC_AFTER = 0xc0;
static android::icu::impl::coll::CollationFastLatin::MIN_SEC_BEFORE = 0x0;
static android::icu::impl::coll::CollationFastLatin::MIN_SEC_HIGH = 0x180;
static android::icu::impl::coll::CollationFastLatin::MIN_SHORT = 0x1000;
static android::icu::impl::coll::CollationFastLatin::NUM_FAST_CHARS = 0x1c0;
static android::icu::impl::coll::CollationFastLatin::PUNCT_LIMIT = 0x2040;
static android::icu::impl::coll::CollationFastLatin::PUNCT_START = 0x2000;
static android::icu::impl::coll::CollationFastLatin::SECONDARY_MASK = 0x3e0;
static android::icu::impl::coll::CollationFastLatin::SEC_INC = 0x20;
static android::icu::impl::coll::CollationFastLatin::SEC_OFFSET = 0x20;
static android::icu::impl::coll::CollationFastLatin::SHORT_INC = 0x400;
static android::icu::impl::coll::CollationFastLatin::SHORT_PRIMARY_MASK = 0xfc00;
static android::icu::impl::coll::CollationFastLatin::TERTIARY_MASK = 0x7;
static android::icu::impl::coll::CollationFastLatin::TER_OFFSET = 0x20;
static android::icu::impl::coll::CollationFastLatin::TWO_CASES_MASK = 0x180018;
static android::icu::impl::coll::CollationFastLatin::TWO_COMMON_SEC_PLUS_OFFSET = 0xc000c0;
static android::icu::impl::coll::CollationFastLatin::TWO_COMMON_TER_PLUS_OFFSET = 0x200020;
static android::icu::impl::coll::CollationFastLatin::TWO_LONG_PRIMARIES_MASK = -0x70008;
static android::icu::impl::coll::CollationFastLatin::TWO_LOWER_CASES = 0x80008;
static android::icu::impl::coll::CollationFastLatin::TWO_SECONDARIES_MASK = 0x3e003e0;
static android::icu::impl::coll::CollationFastLatin::TWO_SEC_OFFSETS = 0x200020;
static android::icu::impl::coll::CollationFastLatin::TWO_SHORT_PRIMARIES_MASK = -0x3ff0400;
static android::icu::impl::coll::CollationFastLatin::TWO_TERTIARIES_MASK = 0x70007;
static android::icu::impl::coll::CollationFastLatin::TWO_TER_OFFSETS = 0x200020;
static android::icu::impl::coll::CollationFastLatin::VERSION = 0x2;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationFastLatin::static_cinit()
{
	
	android::icu::impl::coll::CollationFastLatin::_assertionsDisabled = ( android::icu::impl::coll::CollationFastLatin()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>()V
android::icu::impl::coll::CollationFastLatin::CollationFastLatin()
{
	
	// 140    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static compareUTF16([C[CILjava/lang/CharSequence;Ljava/lang/CharSequence;I)I
int android::icu::impl::coll::CollationFastLatin::compareUTF16(std::shared_ptr<char[]> table,std::shared_ptr<char[]> primaries,int options,std::shared_ptr<java::lang::CharSequence> left,std::shared_ptr<java::lang::CharSequence> right,int startIndex)
{
	
	int variableTop;
	int cVar0;
	int leftIndex;
	int rightIndex;
	int leftPair;
	int rightPair;
	int strengthIsPrimary;
	int withCaseBits;
	int leftQuaternary;
	int rightQuaternary;
	int cVar11;
	int c;
	char rightPair;
	auto pairAndInc;
	int leftTertiary;
	int rightTertiary;
	int cVar9;
	int leftCase;
	int rightCase;
	int cVar5;
	int cVar7;
	int leftSecondary;
	int rightSecondary;
	int cVar3;
	int leftPrimary;
	int rightPrimary;
	int cVar1;
	char leftPair;
	
	//    .param p0, "table"    # [C
	//    .param p1, "primaries"    # [C
	//    .param p2, "options"    # I
	//    .param p3, "left"    # Ljava/lang/CharSequence;
	//    .param p4, "right"    # Ljava/lang/CharSequence;
	//    .param p5, "startIndex"    # I
	variableTop = _shri(options,0x10);
	//    .local v24, "variableTop":I
	cVar0 = (options & 0xffff);
	leftIndex = startIndex;
	//    .local v6, "leftIndex":I
	rightIndex = startIndex;
	//    .local v16, "rightIndex":I
	leftPair = 0x0;
	//    .local v8, "leftPair":I
	rightPair = 0x0;
	//    .local v18, "rightPair":I
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .local v7, "leftIndex":I
label_goto_f:
	if ( leftPair )     
		goto label_cond_5b7;
	if ( leftIndex != left->length() )
		goto label_cond_c2;
	leftPair = 0x2;
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .local v17, "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
label_goto_1d:
	if ( rightPair )     
		goto label_cond_5b3;
	if ( rightIndex != right->length() )
		goto label_cond_14d;
	rightPair = 0x2;
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
label_cond_2d:
label_goto_2d:
	if ( leftPair != rightPair )
		goto label_cond_1e6;
	if ( leftPair != 0x2 )
		goto label_cond_1e1;
label_cond_37:
	if ( android::icu::impl::coll::CollationSettings::getStrength(cVar0) <  0x1 )
		goto label_cond_73;
	rightIndex = startIndex;
	leftIndex = startIndex;
	rightPair = 0x0;
	leftPair = 0x0;
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .restart local v7    # "leftIndex":I
label_goto_4b:
	if ( leftPair )     
		goto label_cond_5ae;
	if ( leftIndex != left->length() )
		goto label_cond_20a;
	leftPair = 0x2;
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
label_goto_59:
	if ( rightPair )     
		goto label_cond_5aa;
	if ( rightIndex != right->length() )
		goto label_cond_271;
	rightPair = 0x2;
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
label_goto_69:
	if ( leftPair != rightPair )
		goto label_cond_2e3;
	if ( leftPair != 0x2 )
		goto label_cond_2df;
label_cond_73:
	if ( !(( cVar0 & 0x400)) )  
		goto label_cond_b3;
	if ( android::icu::impl::coll::CollationSettings::getStrength(cVar0) )     
		goto label_cond_312;
	strengthIsPrimary = 0x1;
	//    .local v23, "strengthIsPrimary":Z
label_goto_83:
	rightIndex = startIndex;
	leftIndex = startIndex;
	rightPair = 0x0;
	leftPair = 0x0;
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .restart local v7    # "leftIndex":I
label_goto_8b:
	if ( leftPair )     
		goto label_cond_38c;
	if ( leftIndex != left->length() )
		goto label_cond_316;
	leftPair = 0x2;
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
label_goto_98:
	if ( rightPair )     
		goto label_cond_a6;
	if ( rightIndex != right->length() )
		goto label_cond_350;
	rightPair = 0x2;
label_cond_a6:
	if ( leftPair != rightPair )
		goto label_cond_39e;
	if ( leftPair != 0x2 )
		goto label_cond_397;
	rightIndex;
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v7    # "leftIndex":I
	//    .end local v23    # "strengthIsPrimary":Z
	//    .restart local v6    # "leftIndex":I
label_cond_b3:
label_goto_b3:
	if ( android::icu::impl::coll::CollationSettings::getStrength(cVar0) >  0x1 )
		goto label_cond_3d2;
	return 0x0;
	// 443    .line 314
	// 444    .end local v6    # "leftIndex":I
	// 445    .restart local v7    # "leftIndex":I
label_cond_c2:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
	c = left->charAt(leftIndex);
	//    .local v4, "c":I
	if ( c >  0x17f )
		goto label_cond_fc;
	leftPair = primaries[c];
	if ( !(leftPair) )  
		goto label_cond_d8;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_1d;
	// 477    .line 318
	// 478    .end local v17    # "rightIndex":I
	// 479    .restart local v16    # "rightIndex":I
label_cond_d8:
	if ( c >  0x39 )
		goto label_cond_eb;
	if ( c <  0x30 )
		goto label_cond_eb;
	if ( !(( cVar0 & 0x2)) )  
		goto label_cond_eb;
	return -0x2;
	// 502    .line 321
label_cond_eb:
	leftPair = table[c];
label_goto_ed:
	if ( leftPair <  0x1000 )
		goto label_cond_11c;
	leftPair = (leftPair & 0xfc00);
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_1d;
	// 526    .line 322
	// 527    .end local v17    # "rightIndex":I
	// 528    .restart local v16    # "rightIndex":I
label_cond_fc:
	if ( 0x2000 >  c )
		goto label_cond_115;
	if ( c >= 0x2040 )
		goto label_cond_115;
	leftPair = table[( ( c + -0x2000) + 0x180)];
	goto label_goto_ed;
	// 558    .line 325
label_cond_115:
	leftPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_ed;
	// 568    .line 330
label_cond_11c:
	if ( leftPair <= variableTop )
		goto label_cond_129;
	leftPair = (leftPair & 0xfff8);
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_1d;
	// 586    .line 334
	// 587    .end local v17    # "rightIndex":I
	// 588    .restart local v16    # "rightIndex":I
label_cond_129:
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, leftPair, left, leftIndex);
	//    .local v14, "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_13a;
	leftIndex = ( leftIndex + 0x1);
label_cond_13a:
	leftPair = (int)(pairAndInc);
	if ( leftPair != 0x1 )
		goto label_cond_144;
	return -0x2;
	// 627    .line 341
label_cond_144:
	leftPair = android::icu::impl::coll::CollationFastLatin::getPrimaries(variableTop, leftPair);
	//    .end local v4    # "c":I
	//    .end local v14    # "pairAndInc":J
label_goto_14a:
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .restart local v7    # "leftIndex":I
	goto label_goto_f;
	// 644    .line 350
	// 645    .end local v7    # "leftIndex":I
	// 646    .end local v16    # "rightIndex":I
	// 647    .restart local v6    # "leftIndex":I
	// 648    .restart local v17    # "rightIndex":I
label_cond_14d:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	c = right->charAt(rightIndex);
	//    .restart local v4    # "c":I
	if ( c >  0x17f )
		goto label_cond_185;
	rightPair = primaries[c];
	if ( rightPair )     
		goto label_cond_2d;
	if ( c >  0x39 )
		goto label_cond_174;
	if ( c <  0x30 )
		goto label_cond_174;
	if ( !(( cVar0 & 0x2)) )  
		goto label_cond_174;
	return -0x2;
	// 698    .line 357
label_cond_174:
	rightPair = table[c];
label_goto_176:
	if ( rightPair <  0x1000 )
		goto label_cond_1a5;
	rightPair = (rightPair & 0xfc00);
	goto label_goto_2d;
	// 720    .line 358
label_cond_185:
	if ( 0x2000 >  c )
		goto label_cond_19e;
	if ( c >= 0x2040 )
		goto label_cond_19e;
	rightPair = table[( ( c + -0x2000) + 0x180)];
	goto label_goto_176;
	// 750    .line 361
label_cond_19e:
	rightPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_176;
	// 760    .line 366
label_cond_1a5:
	if ( rightPair <= variableTop )
		goto label_cond_1b2;
	rightPair = (rightPair & 0xfff8);
	goto label_goto_2d;
	// 776    .line 370
label_cond_1b2:
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, rightPair, right, rightIndex);
	//    .restart local v14    # "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_1c7;
label_cond_1c7:
	rightPair = (int)(pairAndInc);
	if ( rightPair != 0x1 )
		goto label_cond_1d5;
	return -0x2;
	// 823    .line 377
label_cond_1d5:
	rightPair = android::icu::impl::coll::CollationFastLatin::getPrimaries(variableTop, rightPair);
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_1d;
	// 839    .line 383
	// 840    .end local v4    # "c":I
	// 841    .end local v14    # "pairAndInc":J
	// 842    .end local v17    # "rightIndex":I
	// 843    .restart local v16    # "rightIndex":I
label_cond_1e1:
	rightPair = 0x0;
	leftPair = 0x0;
	goto label_goto_14a;
	// 852    .line 386
label_cond_1e6:
	leftPrimary = (leftPair & 0xffff);
	//    .local v9, "leftPrimary":I
	rightPrimary = (rightPair & 0xffff);
	//    .local v19, "rightPrimary":I
	if ( leftPrimary == rightPrimary )
		goto label_cond_1fe;
	if ( leftPrimary >= rightPrimary )
		goto label_cond_1fb;
	cVar1 = -0x1;
label_goto_1fa:
	return cVar1;
label_cond_1fb:
	cVar1 = 0x1;
	goto label_goto_1fa;
	// 885    .line 392
label_cond_1fe:
	if ( leftPair == 0x2 )
		goto label_cond_37;
	leftPair = _ushri(leftPair,0x10);
	rightPair = _ushri(rightPair,0x10);
	goto label_goto_14a;
	// 901    .line 411
	// 902    .end local v6    # "leftIndex":I
	// 903    .end local v9    # "leftPrimary":I
	// 904    .end local v19    # "rightPrimary":I
	// 905    .restart local v7    # "leftIndex":I
label_cond_20a:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
	c = left->charAt(leftIndex);
	//    .restart local v4    # "c":I
	if ( c >  0x17f )
		goto label_cond_228;
	leftPair = table[c];
label_goto_21a:
	if ( leftPair <  0x1000 )
		goto label_cond_248;
	leftPair = android::icu::impl::coll::CollationFastLatin::getSecondariesFromOneShortCE(leftPair);
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_59;
	// 948    .line 414
	// 949    .end local v17    # "rightIndex":I
	// 950    .restart local v16    # "rightIndex":I
label_cond_228:
	if ( 0x2000 >  c )
		goto label_cond_241;
	if ( c >= 0x2040 )
		goto label_cond_241;
	leftPair = table[( ( c + -0x2000) + 0x180)];
	goto label_goto_21a;
	// 980    .line 417
label_cond_241:
	leftPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_21a;
	// 990    .line 422
label_cond_248:
	if ( leftPair <= variableTop )
		goto label_cond_252;
	leftPair = 0xc0;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_59;
	// 1006    .line 426
	// 1007    .end local v17    # "rightIndex":I
	// 1008    .restart local v16    # "rightIndex":I
label_cond_252:
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, leftPair, left, leftIndex);
	//    .restart local v14    # "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_263;
	leftIndex = ( leftIndex + 0x1);
label_cond_263:
	leftPair = android::icu::impl::coll::CollationFastLatin::getSecondaries(variableTop, (int)(pairAndInc));
	//    .end local v4    # "c":I
	//    .end local v14    # "pairAndInc":J
label_goto_26e:
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .restart local v7    # "leftIndex":I
	goto label_goto_4b;
	// 1055    .line 440
	// 1056    .end local v7    # "leftIndex":I
	// 1057    .end local v16    # "rightIndex":I
	// 1058    .restart local v6    # "leftIndex":I
	// 1059    .restart local v17    # "rightIndex":I
label_cond_271:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	c = right->charAt(rightIndex);
	//    .restart local v4    # "c":I
	if ( c >  0x17f )
		goto label_cond_291;
	rightPair = table[c];
label_goto_283:
	if ( rightPair <  0x1000 )
		goto label_cond_2b1;
	rightPair = android::icu::impl::coll::CollationFastLatin::getSecondariesFromOneShortCE(rightPair);
	goto label_goto_69;
	// 1101    .line 443
label_cond_291:
	if ( 0x2000 >  c )
		goto label_cond_2aa;
	if ( c >= 0x2040 )
		goto label_cond_2aa;
	rightPair = table[( ( c + -0x2000) + 0x180)];
	goto label_goto_283;
	// 1131    .line 446
label_cond_2aa:
	rightPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_283;
	// 1141    .line 451
label_cond_2b1:
	if ( rightPair <= variableTop )
		goto label_cond_2bb;
	rightPair = 0xc0;
	goto label_goto_69;
	// 1155    .line 455
label_cond_2bb:
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, rightPair, right, rightIndex);
	//    .restart local v14    # "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_2d0;
label_cond_2d0:
	rightPair = android::icu::impl::coll::CollationFastLatin::getSecondaries(variableTop, (int)(pairAndInc));
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_59;
	// 1203    .line 466
	// 1204    .end local v4    # "c":I
	// 1205    .end local v14    # "pairAndInc":J
	// 1206    .end local v17    # "rightIndex":I
	// 1207    .restart local v16    # "rightIndex":I
label_cond_2df:
	rightPair = 0x0;
	leftPair = 0x0;
	goto label_goto_26e;
	// 1216    .line 469
label_cond_2e3:
	leftSecondary = (leftPair & 0xffff);
	//    .local v11, "leftSecondary":I
	rightSecondary = (rightPair & 0xffff);
	//    .local v21, "rightSecondary":I
	if ( leftSecondary == rightSecondary )
		goto label_cond_306;
	if ( !(( cVar0 & 0x800)) )  
		goto label_cond_2fc;
	return -0x2;
	// 1248    .line 477
label_cond_2fc:
	if ( leftSecondary >= rightSecondary )
		goto label_cond_303;
	cVar3 = -0x1;
label_goto_302:
	return cVar3;
label_cond_303:
	cVar3 = 0x1;
	goto label_goto_302;
	// 1264    .line 479
label_cond_306:
	if ( leftPair == 0x2 )
		goto label_cond_73;
	leftPair = _ushri(leftPair,0x10);
	rightPair = _ushri(rightPair,0x10);
	goto label_goto_26e;
	// 1280    .line 486
	// 1281    .end local v11    # "leftSecondary":I
	// 1282    .end local v21    # "rightSecondary":I
label_cond_312:
	0x0;
	//    .restart local v23    # "strengthIsPrimary":Z
	goto label_goto_83;
	// 1289    .line 495
	// 1290    .end local v6    # "leftIndex":I
	// 1291    .restart local v7    # "leftIndex":I
label_cond_316:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
	c = left->charAt(leftIndex);
	//    .restart local v4    # "c":I
	if ( c >  0x17f )
		goto label_cond_349;
	leftPair = table[c];
label_goto_326:
	if ( leftPair >= 0xc00 )
		goto label_cond_33e;
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, leftPair, left, leftIndex);
	//    .restart local v14    # "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_33d;
	leftIndex = ( leftIndex + 0x1);
label_cond_33d:
	leftPair = (int)(pairAndInc);
	//    .end local v14    # "pairAndInc":J
label_cond_33e:
	leftPair = android::icu::impl::coll::CollationFastLatin::getCases(variableTop, strengthIsPrimary, leftPair);
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .restart local v7    # "leftIndex":I
	goto label_goto_8b;
	// 1365    .line 496
	// 1366    .end local v7    # "leftIndex":I
	// 1367    .restart local v6    # "leftIndex":I
label_cond_349:
	leftPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_326;
	// 1377    .line 513
	// 1378    .end local v4    # "c":I
	// 1379    .end local v6    # "leftIndex":I
	// 1380    .end local v16    # "rightIndex":I
	// 1381    .restart local v7    # "leftIndex":I
	// 1382    .restart local v17    # "rightIndex":I
label_cond_350:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	c = right->charAt(rightIndex);
	//    .restart local v4    # "c":I
	if ( c >  0x17f )
		goto label_cond_390;
	rightPair = table[c];
label_goto_362:
	if ( rightPair >= 0xc00 )
		goto label_cond_382;
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, rightPair, right, rightIndex);
	//    .restart local v14    # "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_37f;
label_cond_37f:
	rightPair = (int)(pairAndInc);
	//    .end local v14    # "pairAndInc":J
label_cond_382:
	rightPair = android::icu::impl::coll::CollationFastLatin::getCases(variableTop, strengthIsPrimary, rightPair);
	//    .end local v4    # "c":I
label_cond_38c:
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_98;
	// 1470    .line 514
	// 1471    .end local v17    # "rightIndex":I
	// 1472    .restart local v4    # "c":I
	// 1473    .restart local v16    # "rightIndex":I
label_cond_390:
	rightPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_362;
	// 1483    .line 528
	// 1484    .end local v4    # "c":I
	// 1485    .end local v16    # "rightIndex":I
	// 1486    .restart local v17    # "rightIndex":I
label_cond_397:
	rightPair = 0x0;
	leftPair = 0x0;
label_goto_39a:
	rightIndex = rightIndex;
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	goto label_goto_8b;
	// 1499    .line 531
	// 1500    .end local v16    # "rightIndex":I
	// 1501    .restart local v17    # "rightIndex":I
label_cond_39e:
	leftCase = (leftPair & 0xffff);
	//    .local v5, "leftCase":I
	rightCase = (rightPair & 0xffff);
	//    .local v13, "rightCase":I
	if ( leftCase == rightCase )
		goto label_cond_3c2;
	if ( ( cVar0 & 0x100) )     
		goto label_cond_3ba;
	if ( leftCase >= rightCase )
		goto label_cond_3b7;
	cVar5 = -0x1;
label_goto_3b6:
	return cVar5;
label_cond_3b7:
	cVar5 = 0x1;
	goto label_goto_3b6;
	// 1539    .line 537
label_cond_3ba:
	if ( leftCase >= rightCase )
		goto label_cond_3bf;
	cVar7 = 0x1;
label_goto_3be:
	return cVar7;
label_cond_3bf:
	cVar7 = -0x1;
	goto label_goto_3be;
	// 1553    .line 540
label_cond_3c2:
	if ( leftPair != 0x2 )
		goto label_cond_3cd;
	rightIndex;
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
	goto label_goto_b3;
	// 1571    .line 541
	// 1572    .end local v6    # "leftIndex":I
	// 1573    .end local v16    # "rightIndex":I
	// 1574    .restart local v7    # "leftIndex":I
	// 1575    .restart local v17    # "rightIndex":I
label_cond_3cd:
	leftPair = _ushri(leftPair,0x10);
	rightPair = _ushri(rightPair,0x10);
	goto label_goto_39a;
	// 1584    .line 548
	// 1585    .end local v5    # "leftCase":I
	// 1586    .end local v7    # "leftIndex":I
	// 1587    .end local v13    # "rightCase":I
	// 1588    .end local v17    # "rightIndex":I
	// 1589    .end local v23    # "strengthIsPrimary":Z
	// 1590    .restart local v6    # "leftIndex":I
	// 1591    .restart local v16    # "rightIndex":I
label_cond_3d2:
	withCaseBits = android::icu::impl::coll::CollationSettings::isTertiaryWithCaseBits(cVar0);
	//    .local v25, "withCaseBits":Z
	rightIndex = startIndex;
	leftIndex = startIndex;
	rightPair = 0x0;
	leftPair = 0x0;
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .restart local v7    # "leftIndex":I
label_goto_3de:
	if ( leftPair )     
		goto label_cond_487;
	if ( leftIndex != left->length() )
		goto label_cond_412;
	leftPair = 0x2;
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
label_goto_3eb:
	if ( rightPair )     
		goto label_cond_3f9;
	if ( rightIndex != right->length() )
		goto label_cond_44b;
	rightPair = 0x2;
label_cond_3f9:
	if ( leftPair != rightPair )
		goto label_cond_499;
	if ( leftPair != 0x2 )
		goto label_cond_492;
label_cond_403:
	if ( android::icu::impl::coll::CollationSettings::getStrength(cVar0) >  0x2 )
		goto label_cond_4d4;
	return 0x0;
	// 1681    .line 558
	// 1682    .end local v17    # "rightIndex":I
	// 1683    .restart local v16    # "rightIndex":I
label_cond_412:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
	c = left->charAt(leftIndex);
	//    .restart local v4    # "c":I
	if ( c >  0x17f )
		goto label_cond_444;
	leftPair = table[c];
label_goto_422:
	if ( leftPair >= 0xc00 )
		goto label_cond_43a;
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, leftPair, left, leftIndex);
	//    .restart local v14    # "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_439;
	leftIndex = ( leftIndex + 0x1);
label_cond_439:
	leftPair = (int)(pairAndInc);
	//    .end local v14    # "pairAndInc":J
label_cond_43a:
	leftPair = android::icu::impl::coll::CollationFastLatin::getTertiaries(variableTop, withCaseBits, leftPair);
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .restart local v7    # "leftIndex":I
	goto label_goto_3de;
	// 1757    .line 559
	// 1758    .end local v7    # "leftIndex":I
	// 1759    .restart local v6    # "leftIndex":I
label_cond_444:
	leftPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_422;
	// 1769    .line 576
	// 1770    .end local v4    # "c":I
	// 1771    .end local v6    # "leftIndex":I
	// 1772    .end local v16    # "rightIndex":I
	// 1773    .restart local v7    # "leftIndex":I
	// 1774    .restart local v17    # "rightIndex":I
label_cond_44b:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	c = right->charAt(rightIndex);
	//    .restart local v4    # "c":I
	if ( c >  0x17f )
		goto label_cond_48b;
	rightPair = table[c];
label_goto_45d:
	if ( rightPair >= 0xc00 )
		goto label_cond_47d;
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, rightPair, right, rightIndex);
	//    .restart local v14    # "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_47a;
label_cond_47a:
	rightPair = (int)(pairAndInc);
	//    .end local v14    # "pairAndInc":J
label_cond_47d:
	rightPair = android::icu::impl::coll::CollationFastLatin::getTertiaries(variableTop, withCaseBits, rightPair);
	//    .end local v4    # "c":I
label_cond_487:
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_3eb;
	// 1862    .line 577
	// 1863    .end local v17    # "rightIndex":I
	// 1864    .restart local v4    # "c":I
	// 1865    .restart local v16    # "rightIndex":I
label_cond_48b:
	rightPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_45d;
	// 1875    .line 591
	// 1876    .end local v4    # "c":I
	// 1877    .end local v16    # "rightIndex":I
	// 1878    .restart local v17    # "rightIndex":I
label_cond_492:
	rightPair = 0x0;
	leftPair = 0x0;
label_goto_495:
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	goto label_goto_3de;
	// 1891    .line 594
	// 1892    .end local v16    # "rightIndex":I
	// 1893    .restart local v17    # "rightIndex":I
label_cond_499:
	leftTertiary = (leftPair & 0xffff);
	//    .local v12, "leftTertiary":I
	rightTertiary = (rightPair & 0xffff);
	//    .local v22, "rightTertiary":I
	if ( leftTertiary == rightTertiary )
		goto label_cond_4c9;
	if ( !(android::icu::impl::coll::CollationSettings::sortsTertiaryUpperCaseFirst(cVar0)) )  
		goto label_cond_4bf;
	if ( leftTertiary <= 0x3 )
		goto label_cond_4b5;
label_cond_4b5:
	if ( rightTertiary <= 0x3 )
		goto label_cond_4bf;
label_cond_4bf:
	if ( leftTertiary >= rightTertiary )
		goto label_cond_4c6;
	cVar9 = -0x1;
label_goto_4c5:
	return cVar9;
label_cond_4c6:
	cVar9 = 0x1;
	goto label_goto_4c5;
	// 1957    .line 610
label_cond_4c9:
	if ( leftPair == 0x2 )
		goto label_cond_403;
	leftPair = _ushri(leftPair,0x10);
	rightPair = _ushri(rightPair,0x10);
	goto label_goto_495;
	// 1973    .line 616
	// 1974    .end local v12    # "leftTertiary":I
	// 1975    .end local v22    # "rightTertiary":I
label_cond_4d4:
	rightIndex = startIndex;
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	leftIndex = startIndex;
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
	rightPair = 0x0;
	leftPair = 0x0;
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .restart local v7    # "leftIndex":I
label_goto_4dc:
	if ( leftPair )     
		goto label_cond_575;
	if ( leftIndex != left->length() )
		goto label_cond_504;
	leftPair = 0x2;
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
label_goto_4e9:
	if ( rightPair )     
		goto label_cond_4f7;
	if ( rightIndex != right->length() )
		goto label_cond_53b;
	rightPair = 0x2;
label_cond_4f7:
	if ( leftPair != rightPair )
		goto label_cond_587;
	if ( leftPair != 0x2 )
		goto label_cond_580;
label_cond_501:
	return 0x0;
	// 2051    .line 624
	// 2052    .end local v17    # "rightIndex":I
	// 2053    .restart local v16    # "rightIndex":I
label_cond_504:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
	c = left->charAt(leftIndex);
	//    .restart local v4    # "c":I
	if ( c >  0x17f )
		goto label_cond_534;
	leftPair = table[c];
label_goto_514:
	if ( leftPair >= 0xc00 )
		goto label_cond_52c;
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, leftPair, left, leftIndex);
	//    .restart local v14    # "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_52b;
	leftIndex = ( leftIndex + 0x1);
label_cond_52b:
	leftPair = (int)(pairAndInc);
	//    .end local v14    # "pairAndInc":J
label_cond_52c:
	leftPair = android::icu::impl::coll::CollationFastLatin::getQuaternaries(variableTop, leftPair);
	leftIndex = leftIndex;
	//    .end local v6    # "leftIndex":I
	//    .restart local v7    # "leftIndex":I
	goto label_goto_4dc;
	// 2125    .line 625
	// 2126    .end local v7    # "leftIndex":I
	// 2127    .restart local v6    # "leftIndex":I
label_cond_534:
	leftPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_514;
	// 2137    .line 642
	// 2138    .end local v4    # "c":I
	// 2139    .end local v6    # "leftIndex":I
	// 2140    .end local v16    # "rightIndex":I
	// 2141    .restart local v7    # "leftIndex":I
	// 2142    .restart local v17    # "rightIndex":I
label_cond_53b:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	c = right->charAt(rightIndex);
	//    .restart local v4    # "c":I
	if ( c >  0x17f )
		goto label_cond_579;
	rightPair = table[c];
label_goto_54d:
	if ( rightPair >= 0xc00 )
		goto label_cond_56d;
	pairAndInc = android::icu::impl::coll::CollationFastLatin::nextPair(table, c, rightPair, right, rightIndex);
	//    .restart local v14    # "pairAndInc":J
	if ( (pairAndInc > 0x0) >= 0 )
		goto label_cond_56a;
label_cond_56a:
	rightPair = (int)(pairAndInc);
	//    .end local v14    # "pairAndInc":J
label_cond_56d:
	rightPair = android::icu::impl::coll::CollationFastLatin::getQuaternaries(variableTop, rightPair);
	//    .end local v4    # "c":I
label_cond_575:
	rightIndex = rightIndex;
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	goto label_goto_4e9;
	// 2228    .line 643
	// 2229    .end local v17    # "rightIndex":I
	// 2230    .restart local v4    # "c":I
	// 2231    .restart local v16    # "rightIndex":I
label_cond_579:
	rightPair = android::icu::impl::coll::CollationFastLatin::lookup(table, c);
	goto label_goto_54d;
	// 2241    .line 657
	// 2242    .end local v4    # "c":I
	// 2243    .end local v16    # "rightIndex":I
	// 2244    .restart local v17    # "rightIndex":I
label_cond_580:
	rightPair = 0x0;
	leftPair = 0x0;
label_goto_583:
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	goto label_goto_4dc;
	// 2257    .line 660
	// 2258    .end local v16    # "rightIndex":I
	// 2259    .restart local v17    # "rightIndex":I
label_cond_587:
	leftQuaternary = (leftPair & 0xffff);
	//    .local v10, "leftQuaternary":I
	rightQuaternary = (rightPair & 0xffff);
	//    .local v20, "rightQuaternary":I
	if ( leftQuaternary == rightQuaternary )
		goto label_cond_59f;
	if ( leftQuaternary >= rightQuaternary )
		goto label_cond_59c;
	cVar11 = -0x1;
label_goto_59b:
	return cVar11;
label_cond_59c:
	cVar11 = 0x1;
	goto label_goto_59b;
	// 2292    .line 665
label_cond_59f:
	if ( leftPair == 0x2 )
		goto label_cond_501;
	leftPair = _ushri(leftPair,0x10);
	rightPair = _ushri(rightPair,0x10);
	goto label_goto_583;
	// 2308    .end local v7    # "leftIndex":I
	// 2309    .end local v10    # "leftQuaternary":I
	// 2310    .end local v20    # "rightQuaternary":I
	// 2311    .end local v25    # "withCaseBits":Z
	// 2312    .restart local v6    # "leftIndex":I
label_cond_5aa:
	rightIndex;
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	goto label_goto_69;
	// 2320    .end local v6    # "leftIndex":I
	// 2321    .restart local v7    # "leftIndex":I
label_cond_5ae:
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
	goto label_goto_59;
label_cond_5b3:
	rightIndex;
	//    .end local v17    # "rightIndex":I
	//    .restart local v16    # "rightIndex":I
	goto label_goto_2d;
	// 2340    .end local v6    # "leftIndex":I
	// 2341    .restart local v7    # "leftIndex":I
label_cond_5b7:
	//    .end local v16    # "rightIndex":I
	//    .restart local v17    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v7    # "leftIndex":I
	//    .restart local v6    # "leftIndex":I
	goto label_goto_1d;

}
// .method private static getCases(IZI)I
int android::icu::impl::coll::CollationFastLatin::getCases(int variableTop,bool strengthIsPrimary,int cVar4)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar4;
	int ce;
	std::shared_ptr<java::lang::AssertionError> cVar10;
	
	//    .param p0, "variableTop"    # I
	//    .param p1, "strengthIsPrimary"    # Z
	//    .param p2, "pair"    # I
	cVar0 = 0xffff;
	cVar1 = 0x1000;
	cVar2 = 0xc00;
	if ( cVar4 >  cVar0 )
		goto label_cond_23;
	if ( cVar4 <  cVar1 )
		goto label_cond_1a;
	//    .local v0, "ce":I
	cVar4 = ( cVar4 & 0x18);
	if ( strengthIsPrimary )     
		goto label_cond_19;
	if ( ( cVar4 & 0x3e0) <  0x180 )
		goto label_cond_19;
	cVar4 = (cVar4 |  0x80000);
	//    .end local v0    # "ce":I
label_cond_19:
label_goto_19:
	return cVar4;
	// 2400    .line 802
label_cond_1a:
	if ( cVar4 <= variableTop )
		goto label_cond_1f;
	cVar4 = 0x8;
	goto label_goto_19;
	// 2409    .line 804
label_cond_1f:
	if ( cVar4 <  cVar2 )
		goto label_cond_19;
	cVar4 = 0x0;
	goto label_goto_19;
	// 2418    .line 810
label_cond_23:
	ce = (cVar4 & cVar0);
	//    .restart local v0    # "ce":I
	if ( ce <  cVar1 )
		goto label_cond_36;
	if ( !(strengthIsPrimary) )  
		goto label_cond_31;
	if ( (-0x4000000 &  cVar4) )     
		goto label_cond_31;
	cVar4 = ( cVar4 & 0x18);
	goto label_goto_19;
	// 2441    .line 815
label_cond_31:
	cVar4 = (cVar4 &  0x180018);
	goto label_goto_19;
	// 2449    .line 817
label_cond_36:
	if ( ce <= variableTop )
		goto label_cond_3c;
	cVar4 = 0x80008;
	goto label_goto_19;
	// 2458    .line 820
label_cond_3c:
	if ( android::icu::impl::coll::CollationFastLatin::_assertionsDisabled )     
		goto label_cond_48;
	if ( ce >= cVar2 )
		goto label_cond_48;
	cVar10 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar10;
	// 2472    .line 821
label_cond_48:
	cVar4 = 0x0;
	goto label_goto_19;

}
// .method static getCharIndex(C)I
int android::icu::impl::coll::CollationFastLatin::getCharIndex(char c)
{
	
	//    .param p0, "c"    # C
	if ( c >  0x17f )
		goto label_cond_5;
	return c;
	// 2492    .line 190
label_cond_5:
	if ( 0x2000 >  c )
		goto label_cond_10;
	if ( c >= 0x2040 )
		goto label_cond_10;
	return ( c + -0x1e80);
	// 2507    .line 196
label_cond_10:
	return -0x1;

}
// .method public static getOptions(Landroid/icu/impl/coll/CollationData;Landroid/icu/impl/coll/CollationSettings;[C)I
int android::icu::impl::coll::CollationFastLatin::getOptions(std::shared_ptr<android::icu::impl::coll::CollationData> data,std::shared_ptr<android::icu::impl::coll::CollationSettings> settings,std::shared_ptr<char[]> primaries)
{
	
	std::shared_ptr<char[]> header;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	int miniVarTop;
	auto prevStart;
	auto beforeDigitStart;
	auto digitStart;
	auto afterDigitStart;
	int group;
	auto start;
	auto latinStart;
	int c;
	char p;
	int p;
	int i;
	
	//    .param p0, "data"    # Landroid/icu/impl/coll/CollationData;
	//    .param p1, "settings"    # Landroid/icu/impl/coll/CollationSettings;
	//    .param p2, "primaries"    # [C
	header = data->fastLatinTableHeader;
	//    .local v13, "header":[C
	if ( header )     
		goto label_cond_9;
	return -0x1;
	// 2534    .line 210
label_cond_9:
	if ( android::icu::impl::coll::CollationFastLatin::_assertionsDisabled )     
		goto label_cond_21;
	if ( _shri(header[0x0],0x8) == 0x2 )
		goto label_cond_21;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2560    .line 211
label_cond_21:
	if ( primaries->size() == 0x180 )
		goto label_cond_3b;
	if ( android::icu::impl::coll::CollationFastLatin::_assertionsDisabled )     
		goto label_cond_38;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 2587    .line 213
label_cond_38:
	return -0x1;
	// 2593    .line 217
label_cond_3b:
	if ( ( settings->options & 0xc) )     
		goto label_cond_79;
	miniVarTop = 0xbff;
	//    .local v18, "miniVarTop":I
label_goto_47:
	//    .local v9, "digitsAreReordered":Z
	if ( !(settings->hasReordering()) )  
		goto label_cond_db;
	prevStart = 0x0;
	//    .local v20, "prevStart":J
	beforeDigitStart = 0x0;
	//    .local v6, "beforeDigitStart":J
	digitStart = 0x0;
	//    .local v10, "digitStart":J
	afterDigitStart = 0x0;
	//    .local v4, "afterDigitStart":J
	group = 0x1000;
	//    .local v12, "group":I
label_goto_58:
	if ( group >= 0x1008 )
		goto label_cond_b1;
	//    .local v22, "start":J
	start = settings->reorder(data->getFirstPrimaryForGroup(group));
	if ( group != 0x1004 )
		goto label_cond_8f;
	prevStart;
	start;
label_cond_76:
label_goto_76:
	group = ( group + 0x1);
	goto label_goto_58;
	// 2687    .line 222
	// 2688    .end local v4    # "afterDigitStart":J
	// 2689    .end local v6    # "beforeDigitStart":J
	// 2690    .end local v9    # "digitsAreReordered":Z
	// 2691    .end local v10    # "digitStart":J
	// 2692    .end local v12    # "group":I
	// 2693    .end local v18    # "miniVarTop":I
	// 2694    .end local v20    # "prevStart":J
	// 2695    .end local v22    # "start":J
label_cond_79:
	//    .local v14, "headerLength":I
	i = ( settings->getMaxVariable() + 0x1);
	//    .local v15, "i":I
	if ( i <  ( header[0x0] & 0xff) )
		goto label_cond_8c;
	return -0x1;
	// 2722    .line 227
label_cond_8c:
	//    .restart local v18    # "miniVarTop":I
	goto label_goto_47;
	// 2729    .line 244
	// 2730    .end local v14    # "headerLength":I
	// 2731    .end local v15    # "i":I
	// 2732    .restart local v4    # "afterDigitStart":J
	// 2733    .restart local v6    # "beforeDigitStart":J
	// 2734    .restart local v9    # "digitsAreReordered":Z
	// 2735    .restart local v10    # "digitStart":J
	// 2736    .restart local v12    # "group":I
	// 2737    .restart local v20    # "prevStart":J
	// 2738    .restart local v22    # "start":J
label_cond_8f:
	if ( !((start > 0x0)) )  
		goto label_cond_76;
	if ( (start > prevStart) >= 0 )
		goto label_cond_9c;
	return -0x1;
	// 2756    .line 250
label_cond_9c:
	if ( !((digitStart > 0x0)) )  
		goto label_cond_ae;
	if ( (afterDigitStart > 0x0) )     
		goto label_cond_ae;
	if ( (prevStart > beforeDigitStart) )     
		goto label_cond_ae;
	afterDigitStart = start;
label_cond_ae:
	prevStart = start;
	goto label_goto_76;
	// 2783    .line 256
	// 2784    .end local v22    # "start":J
label_cond_b1:
	//    .local v16, "latinStart":J
	latinStart = settings->reorder(data->getFirstPrimaryForGroup(0x19));
	if ( (latinStart > prevStart) >= 0 )
		goto label_cond_ca;
	return -0x1;
	// 2816    .line 261
label_cond_ca:
	if ( (afterDigitStart > 0x0) )     
		goto label_cond_d2;
	afterDigitStart = latinStart;
label_cond_d2:
	if ( (beforeDigitStart > digitStart) >= 0 )
		goto label_cond_da;
	if ( (digitStart > afterDigitStart) < 0 ) 
		goto label_cond_db;
label_cond_da:
	//    .end local v4    # "afterDigitStart":J
	//    .end local v6    # "beforeDigitStart":J
	//    .end local v10    # "digitStart":J
	//    .end local v12    # "group":I
	//    .end local v16    # "latinStart":J
	//    .end local v20    # "prevStart":J
label_cond_db:
	//    .local v24, "table":[C
	c = 0x0;
	//    .local v8, "c":I
label_goto_e2:
	if ( c >= 0x180 )
		goto label_cond_110;
	p = data->fastLatinTable[c];
	//    .local v19, "p":I
	if ( p <  0x1000 )
		goto label_cond_101;
	p = (p & 0xfc00);
label_goto_f7:
	primaries[c] = (char)(p);
	c = ( c + 0x1);
	goto label_goto_e2;
	// 2900    .line 274
label_cond_101:
	if ( p <= miniVarTop )
		goto label_cond_10d;
	p = (p & 0xfff8);
	goto label_goto_f7;
	// 2915    .line 277
label_cond_10d:
	p = 0x0;
	goto label_goto_f7;
	// 2921    .line 281
	// 2922    .end local v19    # "p":I
label_cond_110:
	if ( 0x0 )     
		goto label_cond_11c;
	if ( !(( settings->options & 0x2)) )  
		goto label_cond_12b;
label_cond_11c:
	c = 0x30;
label_goto_11e:
	if ( c >  0x39 )
		goto label_cond_12b;
	primaries[c] = 0x0;
	c = ( c + 0x1);
	goto label_goto_11e;
	// 2955    .line 287
label_cond_12b:
	return (( miniVarTop << 0x10) | settings->options);

}
// .method private static getPrimaries(II)I
int android::icu::impl::coll::CollationFastLatin::getPrimaries(int variableTop,int pair)
{
	
	int ce;
	
	//    .param p0, "variableTop"    # I
	//    .param p1, "pair"    # I
	ce = (pair & 0xffff);
	//    .local v0, "ce":I
	if ( ce <  0x1000 )
		goto label_cond_e;
	return (-0x3ff0400 &  pair);
	// 2993    .line 748
label_cond_e:
	if ( ce <= variableTop )
		goto label_cond_15;
	return (-0x70008 &  pair);
	// 3003    .line 749
label_cond_15:
	if ( ce <  0xc00 )
		goto label_cond_1b;
	return 0x0;
	// 3013    .line 750
label_cond_1b:
	return pair;

}
// .method private static getQuaternaries(II)I
int android::icu::impl::coll::CollationFastLatin::getQuaternaries(int variableTop,int cVar2)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int ce;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	
	//    .param p0, "variableTop"    # I
	//    .param p1, "pair"    # I
	cVar0 = 0xffff;
	cVar1 = 0xc00;
	if ( cVar2 >  cVar0 )
		goto label_cond_26;
	if ( cVar2 <  0x1000 )
		goto label_cond_19;
	if ( ( cVar2 & 0x3e0) <  0x180 )
		goto label_cond_15;
	cVar2 = -0x3ff0400;
label_cond_14:
label_goto_14:
	return cVar2;
	// 3051    .line 888
label_cond_15:
	cVar2 = 0xfc00;
	goto label_goto_14;
	// 3057    .line 890
label_cond_19:
	if ( cVar2 <= variableTop )
		goto label_cond_1f;
	cVar2 = 0xfc00;
	goto label_goto_14;
	// 3066    .line 892
label_cond_1f:
	if ( cVar2 <  cVar1 )
		goto label_cond_14;
	cVar2 = (cVar2 &  0xfff8);
	goto label_goto_14;
	// 3077    .line 898
label_cond_26:
	ce = (cVar2 & cVar0);
	//    .local v0, "ce":I
	if ( ce <= variableTop )
		goto label_cond_2e;
	cVar2 = -0x3ff0400;
	goto label_goto_14;
	// 3090    .line 902
label_cond_2e:
	if ( android::icu::impl::coll::CollationFastLatin::_assertionsDisabled )     
		goto label_cond_3a;
	if ( ce >= cVar1 )
		goto label_cond_3a;
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 3104    .line 903
label_cond_3a:
	cVar2 = (cVar2 &  -0x70008);
	goto label_goto_14;

}
// .method private static getSecondaries(II)I
int android::icu::impl::coll::CollationFastLatin::getSecondaries(int variableTop,int cVar3)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int ce;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	
	//    .param p0, "variableTop"    # I
	//    .param p1, "pair"    # I
	cVar0 = 0xffff;
	cVar1 = 0x1000;
	cVar2 = 0xc00;
	if ( cVar3 >  cVar0 )
		goto label_cond_19;
	if ( cVar3 <  cVar1 )
		goto label_cond_10;
	cVar3 = android::icu::impl::coll::CollationFastLatin::getSecondariesFromOneShortCE(cVar3);
label_cond_f:
label_goto_f:
	return cVar3;
	// 3141    .line 767
label_cond_10:
	if ( cVar3 <= variableTop )
		goto label_cond_15;
	cVar3 = 0xc0;
	goto label_goto_f;
	// 3150    .line 769
label_cond_15:
	if ( cVar3 <  cVar2 )
		goto label_cond_f;
	cVar3 = 0x0;
	goto label_goto_f;
	// 3159    .line 774
label_cond_19:
	ce = (cVar3 & cVar0);
	//    .local v0, "ce":I
	if ( ce <  cVar1 )
		goto label_cond_27;
	cVar3 = ((0x3e003e0 &  cVar3) + 0x200020);
	goto label_goto_f;
	// 3178    .line 777
label_cond_27:
	if ( ce <= variableTop )
		goto label_cond_2d;
	cVar3 = 0xc000c0;
	goto label_goto_f;
	// 3187    .line 780
label_cond_2d:
	if ( android::icu::impl::coll::CollationFastLatin::_assertionsDisabled )     
		goto label_cond_39;
	if ( ce >= cVar2 )
		goto label_cond_39;
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 3201    .line 781
label_cond_39:
	cVar3 = 0x0;
	goto label_goto_f;

}
// .method private static getSecondariesFromOneShortCE(I)I
int android::icu::impl::coll::CollationFastLatin::getSecondariesFromOneShortCE(int ce)
{
	
	int cVar0;
	
	//    .param p0, "ce"    # I
	cVar0 = ( ce & 0x3e0);
	if ( cVar0 >= 0x180 )
		goto label_cond_9;
	return ( cVar0 + 0x20);
	// 3226    .line 758
label_cond_9:
	return ( ( ( cVar0 + 0x20) << 0x10) | 0xc0);

}
// .method private static getTertiaries(IZI)I
int android::icu::impl::coll::CollationFastLatin::getTertiaries(int variableTop,bool withCaseBits,int cVar6)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int ce;
	int cVar6;
	int cVar12;
	std::shared_ptr<java::lang::AssertionError> cVar17;
	
	//    .param p0, "variableTop"    # I
	//    .param p1, "withCaseBits"    # Z
	//    .param p2, "pair"    # I
	cVar0 = 0x70007;
	cVar1 = 0xffff;
	cVar2 = 0x1000;
	cVar3 = 0xc00;
	cVar4 = 0x180;
	if ( cVar6 >  cVar1 )
		goto label_cond_3a;
	if ( cVar6 <  cVar2 )
		goto label_cond_2b;
	ce = cVar6;
	//    .local v0, "ce":I
	if ( !(withCaseBits) )  
		goto label_cond_1f;
	cVar6 = ( ( cVar6 & 0x1f) + 0x20);
	if ( ( ce & 0x3e0) <  cVar4 )
		goto label_cond_1e;
	cVar6 = (cVar6 |  0x280000);
	//    .end local v0    # "ce":I
label_cond_1e:
label_goto_1e:
	return cVar6;
	// 3288    .line 840
	// 3289    .restart local v0    # "ce":I
label_cond_1f:
	cVar6 = ( ( cVar6 & 0x7) + 0x20);
	if ( ( ce & 0x3e0) <  cVar4 )
		goto label_cond_1e;
	cVar6 = (cVar6 |  0x200000);
	goto label_goto_1e;
	// 3307    .line 845
	// 3308    .end local v0    # "ce":I
label_cond_2b:
	if ( cVar6 <= variableTop )
		goto label_cond_36;
	cVar6 = ( ( cVar6 & 0x7) + 0x20);
	if ( !(withCaseBits) )  
		goto label_cond_1e;
	cVar6 = ( cVar6 | 0x8);
	goto label_goto_1e;
	// 3325    .line 850
label_cond_36:
	if ( cVar6 <  cVar3 )
		goto label_cond_1e;
	cVar6 = 0x0;
	goto label_goto_1e;
	// 3334    .line 856
label_cond_3a:
	ce = (cVar6 & cVar1);
	//    .restart local v0    # "ce":I
	if ( ce <  cVar2 )
		goto label_cond_4b;
	if ( !(withCaseBits) )  
		goto label_cond_49;
	cVar12 = (cVar6 &  0x1f001f);
label_goto_44:
	cVar6 = (cVar12 +  0x200020);
	goto label_goto_1e;
	// 3358    .line 861
label_cond_49:
	cVar12 = (cVar6 &  cVar0);
	goto label_goto_44;
	// 3364    .line 864
label_cond_4b:
	if ( ce <= variableTop )
		goto label_cond_5b;
	cVar6 = ((cVar6 & cVar0) + 0x200020);
	if ( !(withCaseBits) )  
		goto label_cond_1e;
	cVar6 = (cVar6 |  0x80008);
	goto label_goto_1e;
	// 3385    .line 870
label_cond_5b:
	if ( android::icu::impl::coll::CollationFastLatin::_assertionsDisabled )     
		goto label_cond_67;
	if ( ce >= cVar3 )
		goto label_cond_67;
	cVar17 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar17;
	// 3399    .line 871
label_cond_67:
	cVar6 = 0x0;
	goto label_goto_1e;

}
// .method private static lookup([CI)I
int android::icu::impl::coll::CollationFastLatin::lookup(std::shared_ptr<char[]> table,int c)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p0, "table"    # [C
	//    .param p1, "c"    # I
	if ( android::icu::impl::coll::CollationFastLatin::_assertionsDisabled )     
		goto label_cond_e;
	if ( c >  0x17f )
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 3427    .line 674
label_cond_e:
	if ( 0x2000 >  c )
		goto label_cond_1d;
	if ( c >= 0x2040 )
		goto label_cond_1d;
	return table[( ( c + -0x2000) + 0x180)];
	// 3446    .line 676
label_cond_1d:
	if ( c != 0xfffe )
		goto label_cond_24;
	return 0x3;
	// 3457    .line 678
label_cond_24:
	if ( c != 0xffff )
		goto label_cond_2d;
	return 0xfca8;
	// 3468    .line 681
label_cond_2d:
	return 0x1;

}
// .method private static nextPair([CIILjava/lang/CharSequence;I)J
long long android::icu::impl::coll::CollationFastLatin::nextPair(std::shared_ptr<char[]> table,int c,int ce,std::shared_ptr<java::lang::CharSequence> s16,int sIndex)
{
	
	int index;
	int c2;
	int i;
	char head;
	int x;
	int length;
	char cVar0;
	long long result;
	
	//    .param p0, "table"    # [C
	//    .param p1, "c"    # I
	//    .param p2, "ce"    # I
	//    .param p3, "s16"    # Ljava/lang/CharSequence;
	//    .param p4, "sIndex"    # I
	if ( ce >= 0xc00 )
		goto label_cond_c;
	if ( ce >= 0x400 )
		goto label_cond_10;
label_cond_c:
	return (long long)(ce);
	// 3505    .line 692
label_cond_10:
	if ( ce <  0x800 )
		goto label_cond_29;
	index = ( ( ce & 0x3ff) + 0x1c0);
	//    .local v6, "index":I
	return (((long long)(table[( index + 0x1)]) << 0x10) |  (long long)(table[index]));
	// 3540    .line 698
	// 3541    .end local v6    # "index":I
label_cond_29:
	index = ( ( ce & 0x3ff) + 0x1c0);
	//    .restart local v6    # "index":I
	//    .local v5, "inc":Z
	if ( sIndex == s16->length() )
		goto label_cond_60;
	sIndex;
	//    .local v8, "nextIndex":I
	( sIndex + 0x1);
	c2 = s16->charAt(sIndex);
	//    .local v2, "c2":I
	if ( c2 <= 0x17f )
		goto label_cond_50;
	if ( 0x2000 >  c2 )
		goto label_cond_6a;
	if ( c2 >= 0x2040 )
		goto label_cond_6a;
	c2 = ( ( c2 + -0x2000) + 0x180);
label_cond_50:
label_goto_50:
	//    .local v4, "i":I
	//    .local v3, "head":I
label_cond_53:
	i = (i +  _shri(head,0x9));
	head = table[i];
	x = ( head & 0x1ff);
	//    .local v9, "x":I
	if ( x <  c2 )
		goto label_cond_53;
	if ( x != c2 )
		goto label_cond_60;
	index = i;
	//    .end local v2    # "c2":I
	//    .end local v3    # "head":I
	//    .end local v4    # "i":I
	//    .end local v8    # "nextIndex":I
	//    .end local v9    # "x":I
label_cond_60:
	length = _shri(table[index],0x9);
	//    .local v7, "length":I
	if ( length != 0x1 )
		goto label_cond_79;
	return 0x1;
	// 3651    .line 708
	// 3652    .end local v7    # "length":I
	// 3653    .restart local v2    # "c2":I
	// 3654    .restart local v8    # "nextIndex":I
label_cond_6a:
	if ( c2 == 0xfffe )
		goto label_cond_74;
	if ( c2 != 0xffff )
		goto label_cond_76;
label_cond_74:
	c2 = -0x1;
	goto label_goto_50;
	// 3671    .line 711
label_cond_76:
	return 0x1;
	// 3677    .line 734
	// 3678    .end local v2    # "c2":I
	// 3679    .end local v8    # "nextIndex":I
	// 3680    .restart local v7    # "length":I
label_cond_79:
	cVar0 = table[( index + 0x1)];
	if ( length != 0x2 )
		goto label_cond_87;
	result = (long long)(cVar0);
	//    .local v10, "result":J
label_goto_83:
	if ( !(0x0) )  
		goto label_cond_86;
	//    .end local v10    # "result":J
label_cond_86:
	return result;
	// 3707    .line 739
label_cond_87:
	//    .restart local v10    # "result":J
	goto label_goto_83;

}


