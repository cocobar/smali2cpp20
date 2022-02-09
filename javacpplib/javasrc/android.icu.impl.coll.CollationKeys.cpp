// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationKeys.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.CollationKeys_S_LevelCallback.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyByteSink.h"
#include "android.icu.impl.coll.CollationKeys_S_SortKeyLevel.h"
#include "android.icu.impl.coll.CollationKeys.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "java.lang.AssertionError.h"

static android::icu::impl::coll::CollationKeys::_assertionsDisabled;
static android::icu::impl::coll::CollationKeys::CASE_LOWER_FIRST_COMMON_HIGH = 0xd;
static android::icu::impl::coll::CollationKeys::CASE_LOWER_FIRST_COMMON_LOW = 0x1;
static android::icu::impl::coll::CollationKeys::CASE_LOWER_FIRST_COMMON_MAX_COUNT = 0x7;
static android::icu::impl::coll::CollationKeys::CASE_LOWER_FIRST_COMMON_MIDDLE = 0x7;
static android::icu::impl::coll::CollationKeys::CASE_UPPER_FIRST_COMMON_HIGH = 0xf;
static android::icu::impl::coll::CollationKeys::CASE_UPPER_FIRST_COMMON_LOW = 0x3;
static android::icu::impl::coll::CollationKeys::CASE_UPPER_FIRST_COMMON_MAX_COUNT = 0xd;
static android::icu::impl::coll::CollationKeys::QUAT_COMMON_HIGH = 0xfc;
static android::icu::impl::coll::CollationKeys::QUAT_COMMON_LOW = 0x1c;
static android::icu::impl::coll::CollationKeys::QUAT_COMMON_MAX_COUNT = 0x71;
static android::icu::impl::coll::CollationKeys::QUAT_COMMON_MIDDLE = 0x8c;
static android::icu::impl::coll::CollationKeys::QUAT_SHIFTED_LIMIT_BYTE = 0x1b;
static android::icu::impl::coll::CollationKeys::SEC_COMMON_HIGH = 0x45;
static android::icu::impl::coll::CollationKeys::SEC_COMMON_LOW = 0x5;
static android::icu::impl::coll::CollationKeys::SEC_COMMON_MAX_COUNT = 0x21;
static android::icu::impl::coll::CollationKeys::SEC_COMMON_MIDDLE = 0x25;
static android::icu::impl::coll::CollationKeys::SIMPLE_LEVEL_FALLBACK;
static android::icu::impl::coll::CollationKeys::TER_LOWER_FIRST_COMMON_HIGH = 0x45;
static android::icu::impl::coll::CollationKeys::TER_LOWER_FIRST_COMMON_LOW = 0x5;
static android::icu::impl::coll::CollationKeys::TER_LOWER_FIRST_COMMON_MAX_COUNT = 0x21;
static android::icu::impl::coll::CollationKeys::TER_LOWER_FIRST_COMMON_MIDDLE = 0x25;
static android::icu::impl::coll::CollationKeys::TER_ONLY_COMMON_HIGH = 0xc5;
static android::icu::impl::coll::CollationKeys::TER_ONLY_COMMON_LOW = 0x5;
static android::icu::impl::coll::CollationKeys::TER_ONLY_COMMON_MAX_COUNT = 0x61;
static android::icu::impl::coll::CollationKeys::TER_ONLY_COMMON_MIDDLE = 0x65;
static android::icu::impl::coll::CollationKeys::TER_UPPER_FIRST_COMMON_HIGH = 0xc5;
static android::icu::impl::coll::CollationKeys::TER_UPPER_FIRST_COMMON_LOW = 0x85;
static android::icu::impl::coll::CollationKeys::TER_UPPER_FIRST_COMMON_MAX_COUNT = 0x21;
static android::icu::impl::coll::CollationKeys::TER_UPPER_FIRST_COMMON_MIDDLE = 0xa5;
static android::icu::impl::coll::CollationKeys::levelMasks;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationKeys::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::coll::CollationKeys_S_LevelCallback> cVar0;
	std::shared<std::vector<int[]>> cVar1;
	
	android::icu::impl::coll::CollationKeys::_assertionsDisabled = ( android::icu::impl::coll::CollationKeys()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<android::icu::impl::coll::CollationKeys_S_LevelCallback>();
	android::icu::impl::coll::CollationKeys::SIMPLE_LEVEL_FALLBACK = cVar0;
	cVar1 = std::make_shared<std::vector<int[]>>(0x10);
	?;
	android::icu::impl::coll::CollationKeys::levelMasks = cVar1;
	return;
	// 114    .line 318
	// 115    nop
	// 117    :array_1c
	// 118    .array-data 4
	// 119        0x2
	// 120        0x6
	// 121        0x16
	// 122        0x36
	// 123        0x0
	// 124        0x0
	// 125        0x0
	// 126        0x0
	// 127        0x0
	// 128        0x0
	// 129        0x0
	// 130        0x0
	// 131        0x0
	// 132        0x0
	// 133        0x0
	// 134        0x36
	// 135    .end array-data

}
// .method private constructor <init>()V
android::icu::impl::coll::CollationKeys::CollationKeys()
{
	
	// 143    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static getSortKeyLevel(II)Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyLevel> android::icu::impl::coll::CollationKeys::getSortKeyLevel(int levels,int level)
{
	
	std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyLevel> cVar0;
	
	//    .param p0, "levels"    # I
	//    .param p1, "level"    # I
	if ( !((levels & level)) )  
		goto label_cond_a;
	cVar0 = std::make_shared<android::icu::impl::coll::CollationKeys_S_SortKeyLevel>();
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public static writeSortKeyUpToQuaternary(Landroid/icu/impl/coll/CollationIterator;[ZLandroid/icu/impl/coll/CollationSettings;Landroid/icu/impl/coll/CollationKeys$SortKeyByteSink;ILandroid/icu/impl/coll/CollationKeys$LevelCallback;Z)V
void android::icu::impl::coll::CollationKeys::writeSortKeyUpToQuaternary(std::shared_ptr<android::icu::impl::coll::CollationIterator> iter,std::shared_ptr<bool[]> compressibleBytes,std::shared_ptr<android::icu::impl::coll::CollationSettings> settings,std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyByteSink> sink,int minLevel,std::shared_ptr<android::icu::impl::coll::CollationKeys_S_LevelCallback> callback,bool preflight)
{
	
	int options;
	int levels;
	auto variableTop;
	int tertiaryMask;
	auto p234;
	std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyLevel> cases;
	std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyLevel> secondaries;
	auto tertiaries;
	std::shared_ptr<android::icu::impl::coll::CollationKeys_S_SortKeyLevel> quaternaries;
	auto prevReorderedPrimary;
	int commonCases;
	int commonSecondaries;
	int commonTertiaries;
	int commonQuaternaries;
	int prevSecondary;
	auto ce;
	long long p;
	auto p;
	bool isCompressible;
	int p1;
	int p2;
	int cVar0;
	int lower32;
	int s;
	int t;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	int q;
	int b;
	int i;
	int c;
	std::shared_ptr<java::lang::AssertionError> cVar8;
	std::shared_ptr<java::lang::AssertionError> cVar7;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	int remainder;
	auto secs;
	int last;
	int secSegmentStart;
	unsigned char b;
	int cVar4;
	
	//    .param p0, "iter"    # Landroid/icu/impl/coll/CollationIterator;
	//    .param p1, "compressibleBytes"    # [Z
	//    .param p2, "settings"    # Landroid/icu/impl/coll/CollationSettings;
	//    .param p3, "sink"    # Landroid/icu/impl/coll/CollationKeys$SortKeyByteSink;
	//    .param p4, "minLevel"    # I
	//    .param p5, "callback"    # Landroid/icu/impl/coll/CollationKeys$LevelCallback;
	//    .param p6, "preflight"    # Z
	options = settings->options;
	//    .local v22, "options":I
	levels = android::icu::impl::coll::CollationKeys::levelMasks[android::icu::impl::coll::CollationSettings::getStrength(options)];
	//    .local v20, "levels":I
	if ( !(( options & 0x400)) )  
		goto label_cond_18;
label_cond_18:
	levels = (levels & (~( (0x1 << minLevel) + -0x1)));
	if ( levels )     
		goto label_cond_28;
	return;
	// 236    .line 351
label_cond_28:
	if ( ( options & 0xc) )     
		goto label_cond_98;
	variableTop = 0x0;
	//    .local v42, "variableTop":J
label_goto_2e:
	tertiaryMask = android::icu::impl::coll::CollationSettings::getTertiaryMask(options);
	//    .local v41, "tertiaryMask":I
	p234 = std::make_shared<std::vector<unsigned char[]>>(0x3);
	//    .local v27, "p234":[B
	cases = android::icu::impl::coll::CollationKeys::getSortKeyLevel(levels, 0x8);
	//    .local v8, "cases":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	secondaries = android::icu::impl::coll::CollationKeys::getSortKeyLevel(levels, 0x4);
	//    .local v37, "secondaries":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	tertiaries = android::icu::impl::coll::CollationKeys::getSortKeyLevel(levels, 0x10);
	//    .local v40, "tertiaries":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	quaternaries = android::icu::impl::coll::CollationKeys::getSortKeyLevel(levels, 0x20);
	//    .local v32, "quaternaries":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	prevReorderedPrimary = 0x0;
	//    .local v28, "prevReorderedPrimary":J
	commonCases = 0x0;
	//    .local v9, "commonCases":I
	commonSecondaries = 0x0;
	//    .local v13, "commonSecondaries":I
	commonTertiaries = 0x0;
	//    .local v14, "commonTertiaries":I
	commonQuaternaries = 0x0;
	//    .local v12, "commonQuaternaries":I
	prevSecondary = 0x0;
	//    .local v30, "prevSecondary":I
	//    .local v35, "secSegmentStart":I
label_cond_6c:
	iter->clearCEsIfNoneRemaining();
	ce = iter->nextCE();
	//    .local v10, "ce":J
	p = _ushrll(ce,0x20);
	//    .local v24, "p":J
	if ( (p > variableTop) >= 0 )
		goto label_cond_f7;
	if ( (p > 0x2000000) <= 0 )
		goto label_cond_f7;
	if ( !(commonQuaternaries) )  
		goto label_cond_ad;
	commonQuaternaries = ( commonQuaternaries + -0x1);
label_goto_86:
	if ( commonQuaternaries <  0x71 )
		goto label_cond_a3;
	quaternaries->appendByte(0x8c);
	commonQuaternaries = ( commonQuaternaries + -0x71);
	goto label_goto_86;
	// 394    .line 355
	// 395    .end local v8    # "cases":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	// 396    .end local v9    # "commonCases":I
	// 397    .end local v10    # "ce":J
	// 398    .end local v12    # "commonQuaternaries":I
	// 399    .end local v13    # "commonSecondaries":I
	// 400    .end local v14    # "commonTertiaries":I
	// 401    .end local v24    # "p":J
	// 402    .end local v27    # "p234":[B
	// 403    .end local v28    # "prevReorderedPrimary":J
	// 404    .end local v30    # "prevSecondary":I
	// 405    .end local v32    # "quaternaries":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	// 406    .end local v35    # "secSegmentStart":I
	// 407    .end local v37    # "secondaries":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	// 408    .end local v40    # "tertiaries":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	// 409    .end local v41    # "tertiaryMask":I
	// 410    .end local v42    # "variableTop":J
label_cond_98:
	//    .restart local v42    # "variableTop":J
	goto label_goto_2e;
	// 425    .line 390
	// 426    .restart local v8    # "cases":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	// 427    .restart local v9    # "commonCases":I
	// 428    .restart local v10    # "ce":J
	// 429    .restart local v12    # "commonQuaternaries":I
	// 430    .restart local v13    # "commonSecondaries":I
	// 431    .restart local v14    # "commonTertiaries":I
	// 432    .restart local v24    # "p":J
	// 433    .restart local v27    # "p234":[B
	// 434    .restart local v28    # "prevReorderedPrimary":J
	// 435    .restart local v30    # "prevSecondary":I
	// 436    .restart local v32    # "quaternaries":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	// 437    .restart local v35    # "secSegmentStart":I
	// 438    .restart local v37    # "secondaries":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	// 439    .restart local v40    # "tertiaries":Landroid/icu/impl/coll/CollationKeys$SortKeyLevel;
	// 440    .restart local v41    # "tertiaryMask":I
label_cond_a3:
	quaternaries->appendByte(( commonQuaternaries + 0x1c));
	commonQuaternaries = 0x0;
label_cond_ad:
	if ( !(( levels & 0x20)) )  
		goto label_cond_de;
	if ( !(settings->hasReordering()) )  
		goto label_cond_bf;
	p = settings->reorder(p);
label_cond_bf:
	if ( _ushri((int)(p),0x18) <  0x1b )
		goto label_cond_d7;
	quaternaries->appendByte(0x1b);
label_cond_d7:
	quaternaries->appendWeight32(p);
label_cond_de:
	ce = iter->nextCE();
	p = _ushrll(ce,0x20);
	if ( !((p > 0x0)) )  
		goto label_cond_de;
	if ( (p > variableTop) >= 0 )
		goto label_cond_f7;
	if ( (p > 0x2000000) > 0 ) 
		goto label_cond_ad;
label_cond_f7:
	if ( (p > 0x1) <= 0 )
		goto label_cond_1bb;
	if ( !(( levels & 0x2)) )  
		goto label_cond_1bb;
	isCompressible = compressibleBytes[_ushri((int)(p),0x18)];
	//    .local v16, "isCompressible":Z
	if ( !(settings->hasReordering()) )  
		goto label_cond_118;
	p = settings->reorder(p);
label_cond_118:
	p1 = _ushri((int)(p),0x18);
	//    .local v23, "p1":I
	if ( !(isCompressible) )  
		goto label_cond_12e;
	if ( p1 == _ushri((int)(prevReorderedPrimary),0x18) )
		goto label_cond_154;
label_cond_12e:
	if ( !((prevReorderedPrimary > 0x0)) )  
		goto label_cond_149;
	if ( (p > prevReorderedPrimary) >= 0 )
		goto label_cond_1a2;
	if ( p1 <= 0x2 )
		goto label_cond_149;
	sink->Append(0x3);
label_cond_149:
label_goto_149:
	sink->Append(p1);
	if ( !(isCompressible) )  
		goto label_cond_1ac;
	prevReorderedPrimary = p;
label_cond_154:
label_goto_154:
	p2 = (unsigned char)((int)(_ushrll(p,0x10)));
	//    .local v26, "p2":B
	if ( !(p2) )  
		goto label_cond_199;
	p234[0x0] = p2;
	p234[0x1] = (unsigned char)((int)(_ushrll(p,0x8)));
	p234[0x2] = (unsigned char)((int)(p));
	if ( p234[0x1] )     
		goto label_cond_1af;
	cVar0 = 0x1;
label_goto_190:
	sink->Append(p234, cVar0);
label_cond_199:
	if ( preflight )     
		goto label_cond_1bb;
	if ( !(sink->Overflowed()) )  
		goto label_cond_1bb;
	return;
	// 750    .line 431
	// 751    .end local v26    # "p2":B
label_cond_1a2:
	sink->Append(0xff);
	goto label_goto_149;
	// 763    .line 438
label_cond_1ac:
	prevReorderedPrimary = 0x0;
	goto label_goto_154;
	// 769    .line 446
	// 770    .restart local v26    # "p2":B
label_cond_1af:
	if ( p234[0x2] )     
		goto label_cond_1b8;
	cVar0 = 0x2;
	goto label_goto_190;
label_cond_1b8:
	cVar0 = 0x3;
	goto label_goto_190;
	// 787    .line 460
	// 788    .end local v16    # "isCompressible":Z
	// 789    .end local v23    # "p1":I
	// 790    .end local v26    # "p2":B
label_cond_1bb:
	lower32 = (int)(ce);
	//    .local v21, "lower32":I
	if ( !(lower32) )  
		goto label_cond_6c;
	if ( !(( levels & 0x4)) )  
		goto label_cond_1c8;
	s = _ushri(lower32,0x10);
	//    .local v34, "s":I
	if ( s )     
		goto label_cond_1f6;
	//    .end local v34    # "s":I
label_cond_1c8:
label_goto_1c8:
	if ( !(( levels & 0x8)) )  
		goto label_cond_1d8;
	if ( android::icu::impl::coll::CollationSettings::getStrength(options) )     
		goto label_cond_2c8;
	if ( (p > 0x0) )     
		goto label_cond_2cc;
label_cond_1d8:
label_goto_1d8:
	if ( !(( levels & 0x10)) )  
		goto label_cond_37b;
	t = (lower32 & tertiaryMask);
	//    .local v39, "t":I
	if ( android::icu::impl::coll::CollationKeys::_assertionsDisabled )     
		goto label_cond_371;
	if ( (0xc000 & lower32) != 0xc000 )
		goto label_cond_371;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 867    .line 469
	// 868    .end local v39    # "t":I
	// 869    .restart local v34    # "s":I
label_cond_1f6:
	if ( s != 0x500 )
		goto label_cond_210;
	if ( !(( options & 0x800)) )  
		goto label_cond_20d;
	if ( !((p > 0x2000000)) )  
		goto label_cond_210;
label_cond_20d:
	commonSecondaries = ( commonSecondaries + 0x1);
	goto label_goto_1c8;
	// 902    .line 475
label_cond_210:
	if ( ( options & 0x800) )     
		goto label_cond_249;
	if ( !(commonSecondaries) )  
		goto label_cond_23e;
	commonSecondaries = ( commonSecondaries + -0x1);
label_goto_21c:
	if ( commonSecondaries <  0x21 )
		goto label_cond_22e;
	secondaries->appendByte(0x25);
	commonSecondaries = ( commonSecondaries + -0x21);
	goto label_goto_21c;
	// 940    .line 483
label_cond_22e:
	if ( s >= 0x500 )
		goto label_cond_246;
	b = ( commonSecondaries + 0x5);
	//    .local v5, "b":I
label_goto_238:
	secondaries->appendByte(b);
	commonSecondaries = 0x0;
	//    .end local v5    # "b":I
label_cond_23e:
	secondaries->appendWeight16(s);
	goto label_goto_1c8;
	// 974    .line 486
label_cond_246:
	b = ( commonSecondaries - 0x45);
	//    .restart local v5    # "b":I
	goto label_goto_238;
	// 981    .line 493
	// 982    .end local v5    # "b":I
label_cond_249:
	if ( !(commonSecondaries) )  
		goto label_cond_271;
	commonSecondaries = ( commonSecondaries + -0x1);
	remainder = ( commonSecondaries % 0x21);
	//    .local v33, "remainder":I
	if ( prevSecondary >= 0x500 )
		goto label_cond_26e;
	b = ( remainder + 0x5);
	//    .restart local v5    # "b":I
label_goto_259:
	secondaries->appendByte(b);
	commonSecondaries = (commonSecondaries - remainder);
label_goto_260:
	if ( commonSecondaries <= 0 )
		goto label_cond_271;
	secondaries->appendByte(0x25);
	commonSecondaries = ( commonSecondaries + -0x21);
	goto label_goto_260;
	// 1033    .line 501
	// 1034    .end local v5    # "b":I
label_cond_26e:
	b = ( remainder - 0x45);
	//    .restart local v5    # "b":I
	goto label_goto_259;
	// 1041    .line 512
	// 1042    .end local v5    # "b":I
	// 1043    .end local v33    # "remainder":I
label_cond_271:
	if ( (0x0 > p) >= 0 )
		goto label_cond_2bd;
	if ( (p > 0x2000000) > 0 ) 
		goto label_cond_2bd;
	secs = secondaries->data();
	//    .local v38, "secs":[B
	//    .local v17, "last":I
	last = ( secondaries->length() + -0x1);
	//    .end local v17    # "last":I
	//    .local v18, "last":I
	secSegmentStart = secSegmentStart;
	//    .end local v35    # "secSegmentStart":I
	//    .local v36, "secSegmentStart":I
label_goto_28c:
	if ( secSegmentStart >= last )
		goto label_cond_2a3;
	b = secs[secSegmentStart];
	//    .local v4, "b":B
	//    .end local v36    # "secSegmentStart":I
	//    .restart local v35    # "secSegmentStart":I
	secs[secSegmentStart] = secs[last];
	//    .end local v18    # "last":I
	//    .restart local v17    # "last":I
	secs[last] = b;
	last = ( last + -0x1);
	//    .end local v17    # "last":I
	//    .restart local v18    # "last":I
	secSegmentStart = ( secSegmentStart + 0x1);
	//    .end local v35    # "secSegmentStart":I
	//    .restart local v36    # "secSegmentStart":I
	goto label_goto_28c;
	// 1117    .line 522
	// 1118    .end local v4    # "b":B
label_cond_2a3:
	if ( (p > 0x1) )     
		goto label_cond_2ba;
	cVar4 = 0x1;
label_goto_2ab:
	secondaries->appendByte(cVar4);
	prevSecondary = 0x0;
	//    .end local v36    # "secSegmentStart":I
	//    .restart local v35    # "secSegmentStart":I
	goto label_goto_1c8;
	// 1149    .line 523
	// 1150    .end local v35    # "secSegmentStart":I
	// 1151    .restart local v36    # "secSegmentStart":I
label_cond_2ba:
	cVar4 = 0x2;
	goto label_goto_2ab;
	// 1157    .line 527
	// 1158    .end local v18    # "last":I
	// 1159    .end local v36    # "secSegmentStart":I
	// 1160    .end local v38    # "secs":[B
	// 1161    .restart local v35    # "secSegmentStart":I
label_cond_2bd:
	secondaries->appendReverseWeight16(s);
	prevSecondary = s;
	goto label_goto_1c8;
	// 1174    .line 535
	// 1175    .end local v34    # "s":I
label_cond_2c8:
	if ( !(_ushri(lower32,0x10)) )  
		goto label_cond_1d8;
label_cond_2cc:
	c = ( _ushri(lower32,0x8) & 0xff);
	//    .local v7, "c":I
	if ( android::icu::impl::coll::CollationKeys::_assertionsDisabled )     
		goto label_cond_2e8;
	if ( ( c & 0xc0) != 0xc0 )
		goto label_cond_2e8;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 1213    .line 542
label_cond_2e8:
	if ( ( c & 0xc0) )     
		goto label_cond_2f8;
	if ( c <= 0x1 )
		goto label_cond_2f8;
	commonCases = ( commonCases + 0x1);
	goto label_goto_1d8;
	// 1233    .line 545
label_cond_2f8:
	if ( ( options & 0x100) )     
		goto label_cond_346;
	if ( !(commonCases) )  
		goto label_cond_332;
	if ( c >  0x1 )
		goto label_cond_310;
	if ( !(( cases->isEmpty() ^ 0x1)) )  
		goto label_cond_332;
label_cond_310:
	commonCases = ( commonCases + -0x1);
label_goto_312:
	if ( commonCases <  0x7 )
		goto label_cond_322;
	cases->appendByte(0x70);
	commonCases = ( commonCases + -0x7);
	goto label_goto_312;
	// 1286    .line 559
label_cond_322:
	if ( c >  0x1 )
		goto label_cond_343;
	b = ( commonCases + 0x1);
	//    .restart local v5    # "b":I
label_goto_32a:
	cases->appendByte(( b << 0x4));
	commonCases = 0x0;
	//    .end local v5    # "b":I
label_cond_332:
	if ( c <= 0x1 )
		goto label_cond_33e;
	c = ( ( _ushri(c,0x6) + 0xd) << 0x4);
label_cond_33e:
label_goto_33e:
	cases->appendByte(c);
	goto label_goto_1d8;
	// 1332    .line 562
label_cond_343:
	b = ( commonCases - 0xd);
	//    .restart local v5    # "b":I
	goto label_goto_32a;
	// 1339    .line 575
	// 1340    .end local v5    # "b":I
label_cond_346:
	if ( !(commonCases) )  
		goto label_cond_364;
	commonCases = ( commonCases + -0x1);
label_goto_34a:
	if ( commonCases <  0xd )
		goto label_cond_35a;
	cases->appendByte(0x30);
	commonCases = ( commonCases + -0xd);
	goto label_goto_34a;
	// 1367    .line 581
label_cond_35a:
	cases->appendByte(( ( commonCases + 0x3) << 0x4));
	commonCases = 0x0;
label_cond_364:
	if ( c <= 0x1 )
		goto label_cond_33e;
	c = ( ( _ushri(c,0x6) - 0x3) << 0x4);
	goto label_goto_33e;
	// 1397    .line 598
	// 1398    .end local v7    # "c":I
	// 1399    .restart local v39    # "t":I
label_cond_371:
	if ( t != 0x500 )
		goto label_cond_3b1;
	commonTertiaries = ( commonTertiaries + 0x1);
	//    .end local v39    # "t":I
label_cond_37b:
label_goto_37b:
	if ( !(( levels & 0x20)) )  
		goto label_cond_396;
	q = (lower32 & 0xffff);
	//    .local v31, "q":I
	if ( ( q & 0xc0) )     
		goto label_cond_4b5;
	if ( q <= 0x100 )
		goto label_cond_4b5;
	commonQuaternaries = ( commonQuaternaries + 0x1);
	//    .end local v31    # "q":I
label_cond_396:
label_goto_396:
	if ( _ushri(lower32,0x18) != 0x1 )
		goto label_cond_6c;
	if ( !(( levels & 0x4)) )  
		goto label_cond_529;
	if ( callback->needToWrite(0x2) )     
		goto label_cond_519;
	return;
	// 1481    .line 600
	// 1482    .restart local v39    # "t":I
label_cond_3b1:
	if ( (0x8000 & tertiaryMask) )     
		goto label_cond_3f6;
	if ( !(commonTertiaries) )  
		goto label_cond_3de;
	commonTertiaries = ( commonTertiaries + -0x1);
label_goto_3bc:
	if ( commonTertiaries <  0x61 )
		goto label_cond_3ce;
	tertiaries->appendByte(0x65);
	commonTertiaries = ( commonTertiaries + -0x61);
	goto label_goto_3bc;
	// 1518    .line 610
label_cond_3ce:
	if ( t >= 0x500 )
		goto label_cond_3f3;
	b = ( commonTertiaries + 0x5);
	//    .restart local v5    # "b":I
label_goto_3d8:
	tertiaries->appendByte(b);
	commonTertiaries = 0x0;
	//    .end local v5    # "b":I
label_cond_3de:
	if ( t <= 0x500 )
		goto label_cond_3eb;
	t = (t + 0xc000);
label_cond_3eb:
	tertiaries->appendWeight16(t);
	goto label_goto_37b;
	// 1567    .line 613
label_cond_3f3:
	b = ( commonTertiaries - 0xc5);
	//    .restart local v5    # "b":I
	goto label_goto_3d8;
	// 1574    .line 622
	// 1575    .end local v5    # "b":I
label_cond_3f6:
	if ( ( options & 0x100) )     
		goto label_cond_43e;
	if ( !(commonTertiaries) )  
		goto label_cond_424;
	commonTertiaries = ( commonTertiaries + -0x1);
label_goto_402:
	if ( commonTertiaries <  0x21 )
		goto label_cond_414;
	tertiaries->appendByte(0x25);
	commonTertiaries = ( commonTertiaries + -0x21);
	goto label_goto_402;
	// 1613    .line 632
label_cond_414:
	if ( t >= 0x500 )
		goto label_cond_43b;
	b = ( commonTertiaries + 0x5);
	//    .restart local v5    # "b":I
label_goto_41e:
	tertiaries->appendByte(b);
	commonTertiaries = 0x0;
	//    .end local v5    # "b":I
label_cond_424:
	if ( t <= 0x500 )
		goto label_cond_432;
	t = ( t + 0x4000);
label_cond_432:
	tertiaries->appendWeight16(t);
	goto label_goto_37b;
	// 1664    .line 635
label_cond_43b:
	b = ( commonTertiaries - 0x45);
	//    .restart local v5    # "b":I
	goto label_goto_41e;
	// 1671    .line 658
	// 1672    .end local v5    # "b":I
label_cond_43e:
	if ( t >  0x100 )
		goto label_cond_45c;
label_cond_446:
label_goto_446:
	if ( !(commonTertiaries) )  
		goto label_cond_4a9;
	commonTertiaries = ( commonTertiaries + -0x1);
label_goto_44a:
	if ( commonTertiaries <  0x21 )
		goto label_cond_498;
	tertiaries->appendByte(0xa5);
	commonTertiaries = ( commonTertiaries + -0x21);
	goto label_goto_44a;
	// 1712    .line 660
label_cond_45c:
	if ( !(_ushri(lower32,0x10)) )  
		goto label_cond_475;
	t = (t ^ 0xc000);
	if ( t >= 0xc500 )
		goto label_cond_446;
	t = ( t + -0x4000);
	goto label_goto_446;
	// 1741    .line 668
label_cond_475:
	if ( android::icu::impl::coll::CollationKeys::_assertionsDisabled )     
		goto label_cond_491;
	if ( 0x8600 >  t )
		goto label_cond_48b;
	if ( t <= 0xbfff )
		goto label_cond_491;
label_cond_48b:
	cVar7 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar7;
	// 1770    .line 669
label_cond_491:
	t = ( t + 0x4000);
	goto label_goto_446;
	// 1780    .line 678
label_cond_498:
	if ( t >= 0x8500 )
		goto label_cond_4b2;
	b = ( commonTertiaries + 0x85);
	//    .restart local v5    # "b":I
label_goto_4a3:
	tertiaries->appendByte(b);
	commonTertiaries = 0x0;
	//    .end local v5    # "b":I
label_cond_4a9:
	tertiaries->appendWeight16(t);
	goto label_goto_37b;
	// 1814    .line 681
label_cond_4b2:
	b = ( commonTertiaries - 0xc5);
	//    .restart local v5    # "b":I
	goto label_goto_4a3;
	// 1821    .line 694
	// 1822    .end local v5    # "b":I
	// 1823    .end local v39    # "t":I
	// 1824    .restart local v31    # "q":I
label_cond_4b5:
	if ( q != 0x100 )
		goto label_cond_4d2;
	if ( ( options & 0xc) )     
		goto label_cond_4d2;
	if ( !(quaternaries->isEmpty()) )  
		goto label_cond_4d2;
	quaternaries->appendByte(0x1);
	goto label_goto_396;
	// 1858    .line 708
label_cond_4d2:
	if ( q != 0x100 )
		goto label_cond_4f2;
	q = 0x1;
label_goto_4dc:
	if ( !(commonQuaternaries) )  
		goto label_cond_50d;
	commonQuaternaries = ( commonQuaternaries + -0x1);
label_goto_4e0:
	if ( commonQuaternaries <  0x71 )
		goto label_cond_4fd;
	quaternaries->appendByte(0x8c);
	commonQuaternaries = ( commonQuaternaries + -0x71);
	goto label_goto_4e0;
	// 1900    .line 711
label_cond_4f2:
	q = ( ( _ushri(q,0x6) & 0x3) + 0xfc);
	goto label_goto_4dc;
	// 1914    .line 720
label_cond_4fd:
	if ( q >= 0x1c )
		goto label_cond_516;
	b = ( commonQuaternaries + 0x1c);
	//    .restart local v5    # "b":I
label_goto_507:
	quaternaries->appendByte(b);
	commonQuaternaries = 0x0;
	//    .end local v5    # "b":I
label_cond_50d:
	quaternaries->appendByte(q);
	goto label_goto_396;
	// 1948    .line 723
label_cond_516:
	b = ( commonQuaternaries - 0xfc);
	//    .restart local v5    # "b":I
	goto label_goto_507;
	// 1955    .line 744
	// 1956    .end local v5    # "b":I
	// 1957    .end local v31    # "q":I
label_cond_519:
	sink->Append(0x1);
	secondaries->appendTo(sink);
label_cond_529:
	if ( !(( levels & 0x8)) )  
		goto label_cond_57f;
	if ( callback->needToWrite(0x3) )     
		goto label_cond_53a;
	return;
	// 1996    .line 753
label_cond_53a:
	sink->Append(0x1);
	//    .local v19, "length":I
	b = 0x0;
	//    .local v4, "b":B
	i = 0x0;
	//    .end local v4    # "b":B
	//    .local v15, "i":I
label_goto_54b:
	if ( i >= ( cases->length() + -0x1) )
		goto label_cond_578;
	c = cases->getAt(i);
	//    .local v6, "c":B
	if ( android::icu::impl::coll::CollationKeys::_assertionsDisabled )     
		goto label_cond_563;
	if ( ( c & 0xf) )     
		goto label_cond_55d;
	if ( c )     
		goto label_cond_563;
label_cond_55d:
	cVar8 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar8;
	// 2052    .line 760
label_cond_563:
	if ( b )     
		goto label_cond_569;
	b = c;
label_goto_566:
	i = ( i + 0x1);
	goto label_goto_54b;
	// 2065    .line 763
label_cond_569:
	sink->Append((( _shri(c,0x4) & 0xf) | b));
	b = 0x0;
	//    .restart local v4    # "b":B
	goto label_goto_566;
	// 2085    .line 767
	// 2086    .end local v4    # "b":B
	// 2087    .end local v6    # "c":B
label_cond_578:
	if ( !(b) )  
		goto label_cond_57f;
	sink->Append(b);
	//    .end local v15    # "i":I
	//    .end local v19    # "length":I
label_cond_57f:
	if ( !(( levels & 0x10)) )  
		goto label_cond_5a0;
	if ( callback->needToWrite(0x4) )     
		goto label_cond_590;
	return;
	// 2120    .line 777
label_cond_590:
	sink->Append(0x1);
	tertiaries->appendTo(sink);
label_cond_5a0:
	if ( !(( levels & 0x20)) )  
		goto label_cond_5c1;
	if ( callback->needToWrite(0x5) )     
		goto label_cond_5b1;
	return;
	// 2159    .line 786
label_cond_5b1:
	sink->Append(0x1);
	quaternaries->appendTo(sink);
label_cond_5c1:
	return;

}


