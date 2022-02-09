// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationCompare.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationCompare.h"
#include "android.icu.impl.coll.CollationIterator.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "java.lang.AssertionError.h"

static android::icu::impl::coll::CollationCompare::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::coll::CollationCompare::static_cinit()
{
	
	android::icu::impl::coll::CollationCompare::_assertionsDisabled = ( android::icu::impl::coll::CollationCompare()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>()V
android::icu::impl::coll::CollationCompare::CollationCompare()
{
	
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static compareUpToQuaternary(Landroid/icu/impl/coll/CollationIterator;Landroid/icu/impl/coll/CollationIterator;Landroid/icu/impl/coll/CollationSettings;)I
int android::icu::impl::coll::CollationCompare::compareUpToQuaternary(std::shared_ptr<android::icu::impl::coll::CollationIterator> left,std::shared_ptr<android::icu::impl::coll::CollationIterator> right,std::shared_ptr<android::icu::impl::coll::CollationSettings> settings)
{
	
	int options;
	auto variableTop;
	auto ce;
	long long leftPrimary;
	long long rightPrimary;
	int cVar0;
	int leftIndex;
	int rightIndex;
	int leftSecondary;
	int rightSecondary;
	int cVar2;
	int leftCase;
	int rightCase;
	int cVar7;
	int cVar9;
	int tertiaryMask;
	int anyQuaternaries;
	int leftLower32;
	std::shared_ptr<java::lang::AssertionError> cVar11;
	int leftTertiary;
	int rightLower32;
	std::shared_ptr<java::lang::AssertionError> cVar12;
	int rightTertiary;
	int cVar13;
	long long leftQuaternary;
	long long rightQuaternary;
	auto leftQuaternary;
	auto rightQuaternary;
	int cVar15;
	int leftStart;
	int rightStart;
	int leftLimit;
	long long p;
	int rightLimit;
	int cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar6;
	
	//    .param p0, "left"    # Landroid/icu/impl/coll/CollationIterator;
	//    .param p1, "right"    # Landroid/icu/impl/coll/CollationIterator;
	//    .param p2, "settings"    # Landroid/icu/impl/coll/CollationSettings;
	options = settings->options;
	//    .local v20, "options":I
	if ( ( options & 0xc) )     
		goto label_cond_47;
	variableTop = 0x0;
	//    .local v38, "variableTop":J
label_goto_c:
	0x0;
	//    .local v5, "anyVariable":Z
label_cond_d:
	ce = left->nextCE();
	//    .local v6, "ce":J
	leftPrimary = _ushrll(ce,0x20);
	//    .local v14, "leftPrimary":J
	if ( (leftPrimary > variableTop) >= 0 )
		goto label_cond_5d;
	if ( (leftPrimary > 0x2000000) <= 0 )
		goto label_cond_5d;
	0x1;
label_cond_21:
	left->setCurrentCE((-0x100000000L & ce));
label_goto_2f:
	ce = left->nextCE();
	leftPrimary = _ushrll(ce,0x20);
	if ( (leftPrimary > 0x0) )     
		goto label_cond_52;
	left->setCurrentCE(0x0);
	goto label_goto_2f;
	// 136    .line 31
	// 137    .end local v5    # "anyVariable":Z
	// 138    .end local v6    # "ce":J
	// 139    .end local v14    # "leftPrimary":J
	// 140    .end local v38    # "variableTop":J
label_cond_47:
	//    .restart local v38    # "variableTop":J
	goto label_goto_c;
	// 155    .line 58
	// 156    .restart local v5    # "anyVariable":Z
	// 157    .restart local v6    # "ce":J
	// 158    .restart local v14    # "leftPrimary":J
label_cond_52:
	if ( (leftPrimary > variableTop) >= 0 )
		goto label_cond_5d;
	if ( (leftPrimary > 0x2000000) > 0 ) 
		goto label_cond_21;
label_cond_5d:
	if ( !((leftPrimary > 0x0)) )  
		goto label_cond_d;
label_cond_63:
	ce = right->nextCE();
	rightPrimary = _ushrll(ce,0x20);
	//    .local v28, "rightPrimary":J
	if ( (rightPrimary > variableTop) >= 0 )
		goto label_cond_a8;
	if ( (rightPrimary > 0x2000000) <= 0 )
		goto label_cond_a8;
label_cond_77:
	right->setCurrentCE((-0x100000000L & ce));
label_goto_85:
	ce = right->nextCE();
	rightPrimary = _ushrll(ce,0x20);
	if ( (rightPrimary > 0x0) )     
		goto label_cond_9d;
	right->setCurrentCE(0x0);
	goto label_goto_85;
	// 245    .line 82
label_cond_9d:
	if ( (rightPrimary > variableTop) >= 0 )
		goto label_cond_a8;
	if ( (rightPrimary > 0x2000000) > 0 ) 
		goto label_cond_77;
label_cond_a8:
	if ( !((rightPrimary > 0x0)) )  
		goto label_cond_63;
	if ( !((leftPrimary > rightPrimary)) )  
		goto label_cond_d0;
	if ( !(settings->hasReordering()) )  
		goto label_cond_c6;
label_cond_c6:
	if ( (leftPrimary > rightPrimary) >= 0 )
		goto label_cond_cd;
	cVar0 = -0x1;
label_goto_cc:
	return cVar0;
label_cond_cd:
	cVar0 = 0x1;
	goto label_goto_cc;
	// 309    .line 94
label_cond_d0:
	if ( (leftPrimary > 0x1) )     
		goto label_cond_d;
	if ( android::icu::impl::coll::CollationSettings::getStrength(options) <  0x1 )
		goto label_cond_12a;
	if ( ( options & 0x800) )     
		goto label_cond_156;
	leftIndex = 0x0;
	//    .local v9, "leftIndex":I
	rightIndex = 0x0;
	//    .local v24, "rightIndex":I
label_goto_ed:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v9    # "leftIndex":I
	//    .local v10, "leftIndex":I
	leftSecondary = _ushri((int)(left->getCE(leftIndex)),0x10);
	//    .local v13, "leftSecondary":I
	if ( leftSecondary )     
		goto label_cond_100;
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	goto label_goto_ed;
	// 377    .line 114
	// 378    .end local v9    # "leftIndex":I
	// 379    .restart local v10    # "leftIndex":I
label_cond_100:
label_goto_100:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v24    # "rightIndex":I
	//    .local v25, "rightIndex":I
	rightSecondary = _ushri((int)(right->getCE(rightIndex)),0x10);
	//    .local v32, "rightSecondary":I
	if ( rightSecondary )     
		goto label_cond_116;
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
	goto label_goto_100;
	// 412    .line 117
	// 413    .end local v24    # "rightIndex":I
	// 414    .restart local v25    # "rightIndex":I
label_cond_116:
	if ( leftSecondary == rightSecondary )
		goto label_cond_124;
	if ( leftSecondary >= rightSecondary )
		goto label_cond_121;
	cVar2 = -0x1;
label_goto_120:
	return cVar2;
label_cond_121:
	cVar2 = 0x1;
	goto label_goto_120;
	// 435    .line 120
label_cond_124:
	if ( leftSecondary != 0x100 )
		goto label_cond_152;
	//    .end local v10    # "leftIndex":I
	//    .end local v13    # "leftSecondary":I
	//    .end local v25    # "rightIndex":I
	//    .end local v32    # "rightSecondary":I
label_cond_12a:
	if ( !(( options & 0x400)) )  
		goto label_cond_290;
	//    .local v35, "strength":I
	leftIndex = 0x0;
	//    .restart local v9    # "leftIndex":I
	rightIndex = 0x0;
	//    .restart local v24    # "rightIndex":I
label_cond_139:
	if ( android::icu::impl::coll::CollationSettings::getStrength(options) )     
		goto label_cond_23f;
label_goto_13b:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v9    # "leftIndex":I
	//    .restart local v10    # "leftIndex":I
	ce = left->getCE(leftIndex);
	leftCase = (int)(ce);
	//    .local v8, "leftCase":I
	if ( !((_ushrll(ce,0x20) > 0x0)) )  
		goto label_cond_150;
	if ( leftCase )     
		goto label_cond_202;
label_cond_150:
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	goto label_goto_13b;
	// 511    .end local v8    # "leftCase":I
	// 512    .end local v9    # "leftIndex":I
	// 513    .end local v24    # "rightIndex":I
	// 514    .end local v35    # "strength":I
	// 515    .restart local v10    # "leftIndex":I
	// 516    .restart local v13    # "leftSecondary":I
	// 517    .restart local v25    # "rightIndex":I
	// 518    .restart local v32    # "rightSecondary":I
label_cond_152:
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	goto label_goto_ed;
	// 530    .line 127
	// 531    .end local v9    # "leftIndex":I
	// 532    .end local v13    # "leftSecondary":I
	// 533    .end local v24    # "rightIndex":I
	// 534    .end local v32    # "rightSecondary":I
label_cond_156:
	leftStart = 0x0;
	//    .local v18, "leftStart":I
	rightStart = 0x0;
	//    .local v33, "rightStart":I
label_goto_15a:
	leftLimit = leftStart;
	//    .local v11, "leftLimit":I
label_goto_15c:
	p = _ushrll(left->getCE(leftLimit),0x20);
	//    .local v22, "p":J
	if ( (p > 0x2000000) > 0 ) 
		goto label_cond_173;
	if ( (p > 0x0) )     
		goto label_cond_176;
label_cond_173:
	leftLimit = ( leftLimit + 0x1);
	goto label_goto_15c;
	// 580    .line 137
label_cond_176:
	rightLimit = rightStart;
	//    .local v26, "rightLimit":I
label_goto_178:
	p = _ushrll(right->getCE(rightLimit),0x20);
	if ( (p > 0x2000000) > 0 ) 
		goto label_cond_191;
	if ( (p > 0x0) )     
		goto label_cond_194;
label_cond_191:
	rightLimit = ( rightLimit + 0x1);
	goto label_goto_178;
	// 618    .line 144
label_cond_194:
	leftIndex = leftLimit;
	//    .restart local v9    # "leftIndex":I
	rightIndex = rightLimit;
	//    .restart local v24    # "rightIndex":I
label_cond_197:
	leftSecondary = 0x0;
	//    .restart local v13    # "leftSecondary":I
label_goto_198:
	if ( leftSecondary )     
		goto label_cond_1ae;
	if ( leftIndex <= leftStart )
		goto label_cond_1ae;
	leftIndex = ( leftIndex + -0x1);
	leftSecondary = _ushri((int)(left->getCE(leftIndex)),0x10);
	goto label_goto_198;
	// 659    .line 152
label_cond_1ae:
	rightSecondary = 0x0;
	//    .restart local v32    # "rightSecondary":I
label_goto_1b0:
	if ( rightSecondary )     
		goto label_cond_1ca;
	if ( rightIndex <= rightStart )
		goto label_cond_1ca;
	rightIndex = ( rightIndex + -0x1);
	rightSecondary = _ushri((int)(right->getCE(rightIndex)),0x10);
	goto label_goto_1b0;
	// 695    .line 157
label_cond_1ca:
	if ( leftSecondary == rightSecondary )
		goto label_cond_1d8;
	if ( leftSecondary >= rightSecondary )
		goto label_cond_1d5;
	cVar4 = -0x1;
label_goto_1d4:
	return cVar4;
label_cond_1d5:
	cVar4 = 0x1;
	goto label_goto_1d4;
	// 716    .line 160
label_cond_1d8:
	if ( leftSecondary )     
		goto label_cond_197;
	if ( android::icu::impl::coll::CollationCompare::_assertionsDisabled )     
		goto label_cond_1f6;
	if ( !((left->getCE(leftLimit) > right->getCE(rightLimit))) )  
		goto label_cond_1f6;
	cVar6 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar6;
	// 749    .line 169
label_cond_1f6:
	if ( !((p > 0x1)) )  
		goto label_cond_12a;
	leftStart = ( leftLimit + 0x1);
	rightStart = ( rightLimit + 0x1);
	goto label_goto_15a;
	// 765    .line 196
	// 766    .end local v9    # "leftIndex":I
	// 767    .end local v11    # "leftLimit":I
	// 768    .end local v13    # "leftSecondary":I
	// 769    .end local v18    # "leftStart":I
	// 770    .end local v22    # "p":J
	// 771    .end local v26    # "rightLimit":I
	// 772    .end local v32    # "rightSecondary":I
	// 773    .end local v33    # "rightStart":I
	// 774    .restart local v8    # "leftCase":I
	// 775    .restart local v10    # "leftIndex":I
	// 776    .restart local v35    # "strength":I
label_cond_202:
	//    .local v12, "leftLower32":I
	leftCase = (leftCase & 0xc000);
label_goto_208:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v24    # "rightIndex":I
	//    .restart local v25    # "rightIndex":I
	ce = right->getCE(rightIndex);
	rightCase = (int)(ce);
	//    .local v21, "rightCase":I
	if ( !((_ushrll(ce,0x20) > 0x0)) )  
		goto label_cond_221;
	if ( rightCase )     
		goto label_cond_224;
label_cond_221:
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
	goto label_goto_208;
	// 826    .line 203
	// 827    .end local v24    # "rightIndex":I
	// 828    .restart local v25    # "rightIndex":I
label_cond_224:
	rightCase = (rightCase & 0xc000);
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
label_goto_22c:
	if ( leftCase == rightCase )
		goto label_cond_286;
	if ( ( options & 0x100) )     
		goto label_cond_27c;
	if ( leftCase >= rightCase )
		goto label_cond_279;
	cVar7 = -0x1;
label_goto_23e:
	return cVar7;
	// 867    .line 220
	// 868    .end local v8    # "leftCase":I
	// 869    .end local v12    # "leftLower32":I
	// 870    .end local v21    # "rightCase":I
label_cond_23f:
label_goto_23f:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v9    # "leftIndex":I
	//    .restart local v10    # "leftIndex":I
	leftCase = (int)(left->getCE(leftIndex));
	//    .restart local v8    # "leftCase":I
	if ( (-0x10000 & leftCase) )     
		goto label_cond_252;
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	goto label_goto_23f;
	// 901    .line 222
	// 902    .end local v9    # "leftIndex":I
	// 903    .restart local v10    # "leftIndex":I
label_cond_252:
	//    .restart local v12    # "leftLower32":I
	leftCase = (leftCase & 0xc000);
label_goto_258:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v24    # "rightIndex":I
	//    .restart local v25    # "rightIndex":I
	rightCase = (int)(right->getCE(rightIndex));
	//    .restart local v21    # "rightCase":I
	if ( (-0x10000 & rightCase) )     
		goto label_cond_270;
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
	goto label_goto_258;
	// 947    .line 228
	// 948    .end local v24    # "rightIndex":I
	// 949    .restart local v25    # "rightIndex":I
label_cond_270:
	rightCase = (rightCase & 0xc000);
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	goto label_goto_22c;
	// 965    .line 236
label_cond_279:
	cVar7 = 0x1;
	goto label_goto_23e;
	// 971    .line 238
label_cond_27c:
	if ( leftCase >= rightCase )
		goto label_cond_283;
	cVar9 = 0x1;
label_goto_282:
	return cVar9;
label_cond_283:
	cVar9 = -0x1;
	goto label_goto_282;
	// 987    .line 241
label_cond_286:
	if ( _ushri(leftLower32,0x10) != 0x100 )
		goto label_cond_139;
	//    .end local v8    # "leftCase":I
	//    .end local v9    # "leftIndex":I
	//    .end local v12    # "leftLower32":I
	//    .end local v21    # "rightCase":I
	//    .end local v24    # "rightIndex":I
	//    .end local v35    # "strength":I
label_cond_290:
	if ( android::icu::impl::coll::CollationSettings::getStrength(options) >  0x1 )
		goto label_cond_29f;
	return 0x0;
	// 1024    .line 250
label_cond_29f:
	tertiaryMask = android::icu::impl::coll::CollationSettings::getTertiaryMask(options);
	//    .local v36, "tertiaryMask":I
	leftIndex = 0x0;
	//    .restart local v9    # "leftIndex":I
	rightIndex = 0x0;
	//    .restart local v24    # "rightIndex":I
	anyQuaternaries = 0x0;
	//    .local v4, "anyQuaternaries":I
label_goto_2a7:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v9    # "leftIndex":I
	//    .restart local v10    # "leftIndex":I
	leftLower32 = (int)(left->getCE(leftIndex));
	//    .restart local v12    # "leftLower32":I
	anyQuaternaries = (anyQuaternaries |  leftLower32);
	if ( android::icu::impl::coll::CollationCompare::_assertionsDisabled )     
		goto label_cond_2ca;
	if ( ( leftLower32 & 0x3f3f) )     
		goto label_cond_2ca;
	if ( !((0xc0c0 & leftLower32)) )  
		goto label_cond_2ca;
	cVar11 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar11;
	// 1086    .line 261
label_cond_2ca:
	leftTertiary = (leftLower32 & tertiaryMask);
	//    .local v19, "leftTertiary":I
	if ( leftTertiary )     
		goto label_cond_2d6;
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	goto label_goto_2a7;
	// 1100    .line 269
	// 1101    .end local v9    # "leftIndex":I
	// 1102    .end local v24    # "rightIndex":I
	// 1103    .restart local v10    # "leftIndex":I
	// 1104    .restart local v25    # "rightIndex":I
	// 1105    .local v27, "rightLower32":I
label_cond_2d0:
	rightTertiary = (rightLower32 & tertiaryMask);
	//    .local v34, "rightTertiary":I
	if ( rightTertiary )     
		goto label_cond_300;
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .end local v27    # "rightLower32":I
	//    .end local v34    # "rightTertiary":I
	//    .restart local v24    # "rightIndex":I
label_cond_2d6:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v24    # "rightIndex":I
	//    .restart local v25    # "rightIndex":I
	rightLower32 = (int)(right->getCE(rightIndex));
	//    .restart local v27    # "rightLower32":I
	anyQuaternaries = (anyQuaternaries | rightLower32);
	if ( android::icu::impl::coll::CollationCompare::_assertionsDisabled )     
		goto label_cond_2d0;
	if ( ( rightLower32 & 0x3f3f) )     
		goto label_cond_2d0;
	if ( !((0xc0c0 & rightLower32)) )  
		goto label_cond_2d0;
	cVar12 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar12;
	// 1168    .line 272
	// 1169    .restart local v34    # "rightTertiary":I
label_cond_300:
	if ( leftTertiary == rightTertiary )
		goto label_cond_34c;
	if ( !(android::icu::impl::coll::CollationSettings::sortsTertiaryUpperCaseFirst(options)) )  
		goto label_cond_332;
	if ( leftTertiary <= 0x100 )
		goto label_cond_31f;
	if ( !((-0x10000 & leftLower32)) )  
		goto label_cond_33b;
	leftTertiary = (leftTertiary ^ 0xc000);
label_cond_31f:
label_goto_31f:
	if ( rightTertiary <= 0x100 )
		goto label_cond_332;
	if ( !((-0x10000 & rightLower32)) )  
		goto label_cond_342;
	rightTertiary = (rightTertiary ^ 0xc000);
label_cond_332:
label_goto_332:
	if ( leftTertiary >= rightTertiary )
		goto label_cond_349;
	cVar13 = -0x1;
label_goto_33a:
	return cVar13;
	// 1242    .line 283
label_cond_33b:
	leftTertiary = ( leftTertiary + 0x4000);
	goto label_goto_31f;
	// 1252    .line 290
label_cond_342:
	rightTertiary = ( rightTertiary + 0x4000);
	goto label_goto_332;
	// 1262    .line 294
label_cond_349:
	cVar13 = 0x1;
	goto label_goto_33a;
	// 1268    .line 296
label_cond_34c:
	if ( leftTertiary != 0x100 )
		goto label_cond_363;
	if ( android::icu::impl::coll::CollationSettings::getStrength(options) >  0x2 )
		goto label_cond_368;
	return 0x0;
label_cond_363:
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	goto label_goto_2a7;
	// 1307    .line 304
	// 1308    .end local v9    # "leftIndex":I
	// 1309    .end local v24    # "rightIndex":I
	// 1310    .restart local v10    # "leftIndex":I
	// 1311    .restart local v25    # "rightIndex":I
label_cond_368:
	if ( 0x1 )     
		goto label_cond_373;
	if ( ( anyQuaternaries & 0xc0) )     
		goto label_cond_373;
	return 0x0;
	// 1326    .line 310
label_cond_373:
	leftIndex = 0x0;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	rightIndex = 0x0;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
label_goto_376:
	leftIndex = ( leftIndex + 0x1);
	//    .end local v9    # "leftIndex":I
	//    .restart local v10    # "leftIndex":I
	ce = left->getCE(leftIndex);
	leftQuaternary = (ce & 0xffff);
	//    .local v16, "leftQuaternary":J
	if ( (leftQuaternary > 0x100) > 0 ) 
		goto label_cond_395;
	leftQuaternary = _ushrll(ce,0x20);
label_goto_38d:
	if ( (leftQuaternary > 0x0) )     
		goto label_cond_39d;
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	goto label_goto_376;
	// 1381    .line 323
	// 1382    .end local v9    # "leftIndex":I
	// 1383    .restart local v10    # "leftIndex":I
label_cond_395:
	leftQuaternary = (leftQuaternary | 0xffffff3fL);
	goto label_goto_38d;
	// 1391    .line 329
label_cond_39d:
label_goto_39d:
	rightIndex = ( rightIndex + 0x1);
	//    .end local v24    # "rightIndex":I
	//    .restart local v25    # "rightIndex":I
	ce = right->getCE(rightIndex);
	rightQuaternary = (ce & 0xffff);
	//    .local v30, "rightQuaternary":J
	if ( (rightQuaternary > 0x100) > 0 ) 
		goto label_cond_3bf;
	rightQuaternary = _ushrll(ce,0x20);
label_goto_3b6:
	if ( (rightQuaternary > 0x0) )     
		goto label_cond_3c7;
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
	goto label_goto_39d;
	// 1438    .line 337
	// 1439    .end local v24    # "rightIndex":I
	// 1440    .restart local v25    # "rightIndex":I
label_cond_3bf:
	rightQuaternary = (rightQuaternary | 0xffffff3fL);
	goto label_goto_3b6;
	// 1448    .line 341
label_cond_3c7:
	if ( !((leftQuaternary > rightQuaternary)) )  
		goto label_cond_3eb;
	if ( !(settings->hasReordering()) )  
		goto label_cond_3e1;
	leftQuaternary = settings->reorder(leftQuaternary);
	rightQuaternary = settings->reorder(rightQuaternary);
label_cond_3e1:
	if ( (leftQuaternary > rightQuaternary) >= 0 )
		goto label_cond_3e8;
	cVar15 = -0x1;
label_goto_3e7:
	return cVar15;
label_cond_3e8:
	cVar15 = 0x1;
	goto label_goto_3e7;
	// 1495    .line 349
label_cond_3eb:
	if ( (leftQuaternary > 0x1) )     
		goto label_cond_3f4;
	return 0x0;
label_cond_3f4:
	rightIndex = rightIndex;
	//    .end local v25    # "rightIndex":I
	//    .restart local v24    # "rightIndex":I
	leftIndex = leftIndex;
	//    .end local v10    # "leftIndex":I
	//    .restart local v9    # "leftIndex":I
	goto label_goto_376;

}


