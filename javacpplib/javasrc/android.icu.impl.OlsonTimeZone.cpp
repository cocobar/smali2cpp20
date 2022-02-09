// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\OlsonTimeZone.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.OlsonTimeZone.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.impl.ZoneMeta.h"
#include "android.icu.util.AnnualTimeZoneRule.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.DateTimeRule.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.SimpleTimeZone.h"
#include "android.icu.util.TimeArrayTimeZoneRule.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.PrintStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Byte.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Double.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Arrays.h"
#include "java.util.Date.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::OlsonTimeZone::_assertionsDisabled;
static android::icu::impl::OlsonTimeZone::DEBUG;
static android::icu::impl::OlsonTimeZone::MAX_OFFSET_SECONDS = 0x15180;
static android::icu::impl::OlsonTimeZone::SECONDS_PER_DAY = 0x15180;
static android::icu::impl::OlsonTimeZone::ZONEINFORES = std::make_shared<java::lang::String>("zoneinfo64");
static android::icu::impl::OlsonTimeZone::currentSerialVersion = 0x1;
static android::icu::impl::OlsonTimeZone::serialVersionUID = -0x572e1120b9848270L;
// .method static constructor <clinit>()V
void android::icu::impl::OlsonTimeZone::static_cinit()
{
	
	android::icu::impl::OlsonTimeZone::_assertionsDisabled = ( android::icu::impl::OlsonTimeZone()->desiredAssertionStatus() ^ 0x1);
	android::icu::impl::OlsonTimeZone::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("olson")));
	return;

}
// .method public constructor <init>(Landroid/icu/util/UResourceBundle;Landroid/icu/util/UResourceBundle;Ljava/lang/String;)V
android::icu::impl::OlsonTimeZone::OlsonTimeZone(std::shared_ptr<android::icu::util::UResourceBundle> top,std::shared_ptr<android::icu::util::UResourceBundle> res,std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<android::icu::util::SimpleTimeZone> cVar0;
	
	//    .param p1, "top"    # Landroid/icu/util/UResourceBundle;
	//    .param p2, "res"    # Landroid/icu/util/UResourceBundle;
	//    .param p3, "id"    # Ljava/lang/String;
	cVar0 = 0x0;
	android::icu::util::BasicTimeZone::(id);
	this->finalStartYear = 0x7fffffff;
	this->finalStartMillis = 0x7fefffffffffffffL;
	this->finalZone = cVar0;
	this->canonicalID = cVar0;
	this->serialVersionOnStream = 0x1;
	this->isFrozen = 0x0;
	this->construct(top, res);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::OlsonTimeZone::OlsonTimeZone(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<android::icu::util::SimpleTimeZone> cVar0;
	std::shared_ptr<android::icu::util::UResourceBundle> top;
	
	//    .param p1, "id"    # Ljava/lang/String;
	cVar0 = 0x0;
	android::icu::util::BasicTimeZone::(id);
	this->finalStartYear = 0x7fffffff;
	this->finalStartMillis = 0x7fefffffffffffffL;
	this->finalZone = cVar0;
	this->canonicalID = cVar0;
	this->serialVersionOnStream = 0x1;
	this->isFrozen = 0x0;
	top = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneinfo64")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	//    .local v1, "top":Landroid/icu/util/UResourceBundle;
	//    .local v0, "res":Landroid/icu/util/UResourceBundle;
	this->construct(top, android::icu::impl::ZoneMeta::openOlsonResource(top, id));
	if ( !(this->finalZone) )  
		goto label_cond_36;
	this->finalZone->setID(id);
label_cond_36:
	return;

}
// .method private construct(Landroid/icu/util/UResourceBundle;Landroid/icu/util/UResourceBundle;)V
void android::icu::impl::OlsonTimeZone::construct(std::shared_ptr<android::icu::util::UResourceBundle> top,std::shared_ptr<android::icu::util::UResourceBundle> res)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	int transPost32;
	int trans32;
	int transPre32;
	int idx;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	auto ruleData;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar6;
	std::shared_ptr<android::icu::util::SimpleTimeZone> cVar8;
	std::vector<std::any> tryCatchExcetionList;
	auto transPost32;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	auto transPre32;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "top"    # Landroid/icu/util/UResourceBundle;
	//    .param p2, "res"    # Landroid/icu/util/UResourceBundle;
	if ( !(top) )  
		goto label_cond_4;
	if ( res )     
		goto label_cond_a;
label_cond_4:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 226    .line 494
label_cond_a:
	if ( !(android::icu::impl::OlsonTimeZone::DEBUG) )  
		goto label_cond_32;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OlsonTimeZone(")))->append(res->getKey())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
label_cond_32:
	transPost32 = 0x0;
	//    .local v23, "transPost32":[I
	trans32 = 0x0;
	//    .local v22, "trans32":[I
	transPre32 = 0x0;
	//    .local v24, "transPre32":[I
	this->transitionCount = 0x0;
	try {
	//label_try_start_3d:
	//    .local v19, "r":Landroid/icu/util/UResourceBundle;
	transPre32 = res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("transPre32")))->getIntVector();
	//    .local v24, "transPre32":[I
	if ( !(( transPre32->size() % 0x2)) )  
		goto label_cond_d8;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Format")));
	// throw
	throw cVar2;
	// 316    :try_end_5a
	// 317    .catch Ljava/util/MissingResourceException; {:try_start_3d .. :try_end_5a} :catch_5a
	// 319    .line 511
	// 320    .end local v19    # "r":Landroid/icu/util/UResourceBundle;
	// 321    .end local v24    # "transPre32":[I
label_catch_5a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_5b:
	try {
	//label_try_start_5b:
	//    .restart local v19    # "r":Landroid/icu/util/UResourceBundle;
	//    .local v22, "trans32":[I
	this->transitionCount = (this->transitionCount +  res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("trans")))->getIntVector()->size());
	//label_try_end_74:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_275;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_5b .. :try_end_74} :catch_275
	//    .end local v19    # "r":Landroid/icu/util/UResourceBundle;
	//    .end local v22    # "trans32":[I
label_goto_74:
	try {
	//label_try_start_74:
	//    .restart local v19    # "r":Landroid/icu/util/UResourceBundle;
	transPost32 = res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("transPost32")))->getIntVector();
	//    .local v23, "transPost32":[I
	if ( !(( transPost32->size() % 0x2)) )  
		goto label_cond_e8;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Format")));
	// throw
	throw cVar3;
	// 397    :try_end_91
	// 398    .catch Ljava/util/MissingResourceException; {:try_start_74 .. :try_end_91} :catch_91
	// 400    .line 533
	// 401    .end local v19    # "r":Landroid/icu/util/UResourceBundle;
	// 402    .end local v23    # "transPost32":[I
label_catch_91:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_goto_92:
	if ( this->transitionCount <= 0 )
		goto label_cond_144;
	this->transitionTimes64 = std::make_shared<std::vector<long long[]>>(this->transitionCount);
	idx = 0x0;
	//    .local v18, "idx":I
	if ( !(transPre32) )  
		goto label_cond_f7;
	i = 0x0;
	//    .local v17, "i":I
label_goto_a8:
	if ( i >= ( transPre32->size() / 0x2) )
		goto label_cond_f7;
	this->transitionTimes64[idx] = ((((long long)(transPre32[( i * 0x2)]) &  0xffffffffL) << 0x20) |  ((long long)(transPre32[( ( i * 0x2) + 0x1)]) &  0xffffffffL));
	i = ( i + 0x1);
	idx = ( idx + 0x1);
	goto label_goto_a8;
	// 493    .line 510
	// 494    .end local v17    # "i":I
	// 495    .end local v18    # "idx":I
	// 496    .restart local v19    # "r":Landroid/icu/util/UResourceBundle;
	// 497    .local v22, "trans32":[I
	// 498    .local v23, "transPost32":[I
	// 499    .restart local v24    # "transPre32":[I
label_cond_d8:
	try {
	//label_try_start_d8:
	this->transitionCount = (this->transitionCount +  ( transPre32->size() / 0x2));
	//label_try_end_e6:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_d8 .. :try_end_e6} :catch_5a
	goto label_goto_5b;
	// 522    .line 532
	// 523    .end local v22    # "trans32":[I
	// 524    .end local v24    # "transPre32":[I
	// 525    .local v23, "transPost32":[I
label_cond_e8:
	try {
	//label_try_start_e8:
	this->transitionCount = (this->transitionCount +  ( transPost32->size() / 0x2));
	//label_try_end_f6:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_91;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_e8 .. :try_end_f6} :catch_91
	goto label_goto_92;
	// 548    .line 547
	// 549    .end local v19    # "r":Landroid/icu/util/UResourceBundle;
	// 550    .end local v23    # "transPost32":[I
	// 551    .restart local v18    # "idx":I
label_cond_f7:
	if ( !(trans32) )  
		goto label_cond_110;
	i = 0x0;
	//    .restart local v17    # "i":I
label_goto_fb:
	if ( i >= trans32->size() )
		goto label_cond_110;
	this->transitionTimes64[idx] = (long long)(trans32[i]);
	i = ( i + 0x1);
	idx = ( idx + 0x1);
	goto label_goto_fb;
	// 586    .line 552
	// 587    .end local v17    # "i":I
label_cond_110:
	if ( !(transPost32) )  
		goto label_cond_149;
	i = 0x0;
	//    .restart local v17    # "i":I
label_goto_114:
	if ( i >= ( transPost32->size() / 0x2) )
		goto label_cond_149;
	this->transitionTimes64[idx] = ((((long long)(transPost32[( i * 0x2)]) &  0xffffffffL) << 0x20) |  ((long long)(transPost32[( ( i * 0x2) + 0x1)]) &  0xffffffffL));
	i = ( i + 0x1);
	idx = ( idx + 0x1);
	goto label_goto_114;
	// 652    .line 560
	// 653    .end local v17    # "i":I
	// 654    .end local v18    # "idx":I
label_cond_144:
	this->transitionTimes64 = 0x0;
label_cond_149:
	//    .restart local v19    # "r":Landroid/icu/util/UResourceBundle;
	this->typeOffsets = res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("typeOffsets")))->getIntVector();
	if ( this->typeOffsets->size() <  0x2 )
		goto label_cond_16b;
	if ( this->typeOffsets->size() <= 0x7ffe )
		goto label_cond_174;
label_cond_16b:
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Format")));
	// throw
	throw cVar4;
	// 713    .line 566
label_cond_174:
	if ( ( this->typeOffsets->size() % 0x2) )     
		goto label_cond_16b;
	this->typeCount = ( this->typeOffsets->size() / 0x2);
	if ( this->transitionCount <= 0 )
		goto label_cond_1bc;
	this->typeMapData = res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("typeMap")))->getBinary(0x0);
	if ( !(this->typeMapData) )  
		goto label_cond_1b3;
	if ( this->typeMapData->size() == this->transitionCount )
		goto label_cond_1c1;
label_cond_1b3:
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Format")));
	// throw
	throw cVar5;
	// 796    .line 579
label_cond_1bc:
	this->typeMapData = 0x0;
label_cond_1c1:
	this->finalZone = 0x0;
	this->finalStartYear = 0x7fffffff;
	this->finalStartMillis = 0x7fefffffffffffffL;
	//    .local v21, "ruleID":Ljava/lang/String;
	try {
	//label_try_start_1d8:
	//    .local v21, "ruleID":Ljava/lang/String;
	//    .local v3, "ruleRaw":I
	ruleData = android::icu::impl::OlsonTimeZone::loadRule(top, res->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("finalRule"))))->getIntVector();
	//    .local v20, "ruleData":[I
	if ( !(ruleData) )  
		goto label_cond_205;
	if ( ruleData->size() == 0xb )
		goto label_cond_21a;
label_cond_205:
	cVar6 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Format")));
	// throw
	throw cVar6;
	// 893    :try_end_20e
	// 894    .catch Ljava/util/MissingResourceException; {:try_start_1d8 .. :try_end_20e} :catch_20e
	// 896    .line 628
	// 897    .end local v3    # "ruleRaw":I
	// 898    .end local v20    # "ruleData":[I
	// 899    .end local v21    # "ruleID":Ljava/lang/String;
label_catch_20e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v16, "e":Ljava/util/MissingResourceException;
	if ( !(0x0) )  
		goto label_cond_274;
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Format")));
	// throw
	throw cVar7;
	// 916    .line 599
	// 917    .end local v16    # "e":Ljava/util/MissingResourceException;
	// 918    .restart local v3    # "ruleRaw":I
	// 919    .restart local v20    # "ruleData":[I
	// 920    .restart local v21    # "ruleID":Ljava/lang/String;
label_cond_21a:
	try {
	//label_try_start_21a:
	cVar8 = std::make_shared<android::icu::util::SimpleTimeZone>(( res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("finalRaw")))->getInt() * 0x3e8), std::make_shared<java::lang::String>(std::make_shared<char[]>("")), ruleData[0x0], ruleData[0x1], ruleData[0x2], ( ruleData[0x3] * 0x3e8), ruleData[0x4], ruleData[0x5], ruleData[0x6], ruleData[0x7], ( ruleData[0x8] * 0x3e8), ruleData[0x9], ( ruleData[0xa] * 0x3e8));
	this->finalZone = cVar8;
	this->finalStartYear = res->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("finalYear")))->getInt();
	this->finalStartMillis = (double)((android::icu::impl::Grego::fieldsToDay(this->finalStartYear, 0x0, 0x1) *  0x5265c00));
	//label_try_end_274:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20e;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_21a .. :try_end_274} :catch_20e
	//    .end local v3    # "ruleRaw":I
	//    .end local v20    # "ruleData":[I
	//    .end local v21    # "ruleID":Ljava/lang/String;
label_cond_274:
	return;
	// 1041    .line 520
	// 1042    .end local v19    # "r":Landroid/icu/util/UResourceBundle;
	// 1043    .local v23, "transPost32":[I
label_catch_275:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v16    # "e":Ljava/util/MissingResourceException;
	goto label_goto_74;

}
// .method private constructEmpty()V
void android::icu::impl::OlsonTimeZone::constructEmpty()
{
	
	std::shared_ptr<long long[]> cVar0;
	int cVar1;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	this->transitionCount = cVar1;
	this->transitionTimes64 = cVar0;
	this->typeMapData = cVar0;
	this->typeCount = 0x1;
	?;
	this->typeOffsets = ?;
	this->finalZone = cVar0;
	this->finalStartYear = 0x7fffffff;
	this->finalStartMillis = 0x7fefffffffffffffL;
	this->transitionRulesInitialized = cVar1;
	return;

}
// .method private dstOffsetAt(I)I
int android::icu::impl::OlsonTimeZone::dstOffsetAt(int transIdx)
{
	
	//    .param p1, "transIdx"    # I
	if ( transIdx < 0 ) 
		goto label_cond_13;
	//    .local v0, "typeIdx":I
label_goto_c:
	return this->typeOffsets[( typeIdx + 0x1)];
	// 1129    .line 770
	// 1130    .end local v0    # "typeIdx":I
label_cond_13:
	//    .restart local v0    # "typeIdx":I
	goto label_goto_c;

}
// .method private getHistoricalOffset(JZII[I)V
void android::icu::impl::OlsonTimeZone::getHistoricalOffset(long long date,bool local,int NonExistingTimeOpt,int DuplicatedTimeOpt,std::shared_ptr<int[]> offsets)
{
	
	auto sec;
	int transIdx;
	auto transition;
	int offsetBefore;
	int dstBefore;
	int offsetAfter;
	int dstAfter;
	int cVar0;
	int cVar1;
	long long transition;
	
	//    .param p1, "date"    # J
	//    .param p3, "local"    # Z
	//    .param p4, "NonExistingTimeOpt"    # I
	//    .param p5, "DuplicatedTimeOpt"    # I
	//    .param p6, "offsets"    # [I
	if ( !(this->transitionCount) )  
		goto label_cond_f5;
	sec = android::icu::impl::Grego::floorDivide(date, 0x3e8);
	//    .local v8, "sec":J
	if ( local )     
		goto label_cond_2e;
	if ( (sec > this->transitionTimes64[0x0]) >= 0 )
		goto label_cond_2e;
	offsets[0x0] = ( this->initialRawOffset() * 0x3e8);
	offsets[0x1] = ( this->initialDstOffset() * 0x3e8);
	//    .end local v8    # "sec":J
label_goto_2d:
	return;
	// 1206    .line 692
	// 1207    .restart local v8    # "sec":J
label_cond_2e:
	transIdx = ( this->transitionCount + -0x1);
	//    .local v10, "transIdx":I
label_goto_34:
	if ( transIdx < 0 ) 
		goto label_cond_88;
	transition = this->transitionTimes64[transIdx];
	//    .local v12, "transition":J
	if ( !(local) )  
		goto label_cond_84;
	if ( (sec > (transition - 0x15180)) < 0 ) 
		goto label_cond_84;
	offsetBefore = this->zoneOffsetAt(( transIdx + -0x1));
	//    .local v6, "offsetBefore":I
	if ( !(this->dstOffsetAt(( transIdx + -0x1))) )  
		goto label_cond_9f;
	dstBefore = 0x1;
	//    .local v3, "dstBefore":Z
label_goto_5a:
	offsetAfter = this->zoneOffsetAt(transIdx);
	//    .local v5, "offsetAfter":I
	if ( !(this->dstOffsetAt(transIdx)) )  
		goto label_cond_a1;
	dstAfter = 0x1;
	//    .local v2, "dstAfter":Z
label_goto_69:
	if ( !(dstBefore) )  
		goto label_cond_a3;
	cVar0 = ( dstAfter ^ 0x1);
label_goto_6d:
	if ( dstBefore )     
		goto label_cond_a5;
	cVar1 = dstAfter;
label_goto_70:
	if ( (offsetAfter - offsetBefore) < 0 ) 
		goto label_cond_c4;
	if ( ( NonExistingTimeOpt & 0x3) != 0x1 )
		goto label_cond_7b;
	if ( cVar0 )     
		goto label_cond_82;
label_cond_7b:
	if ( ( NonExistingTimeOpt & 0x3) != 0x3 )
		goto label_cond_a7;
	if ( !(cVar1) )  
		goto label_cond_a7;
label_cond_82:
	transition = (transition +  (long long)(offsetBefore));
	//    .end local v2    # "dstAfter":Z
	//    .end local v3    # "dstBefore":Z
	//    .end local v5    # "offsetAfter":I
	//    .end local v6    # "offsetBefore":I
label_cond_84:
label_goto_84:
	if ( (sec > transition) < 0 ) 
		goto label_cond_f1;
	//    .end local v12    # "transition":J
label_cond_88:
	offsets[0x0] = ( this->rawOffsetAt(transIdx) * 0x3e8);
	offsets[0x1] = ( this->dstOffsetAt(transIdx) * 0x3e8);
	goto label_goto_2d;
	// 1368    .line 696
	// 1369    .restart local v6    # "offsetBefore":I
	// 1370    .restart local v12    # "transition":J
label_cond_9f:
	dstBefore = 0x0;
	//    .restart local v3    # "dstBefore":Z
	goto label_goto_5a;
	// 1377    .line 699
	// 1378    .restart local v5    # "offsetAfter":I
label_cond_a1:
	0x0;
	//    .restart local v2    # "dstAfter":Z
	goto label_goto_69;
	// 1385    .line 701
label_cond_a3:
	0x0;
	//    .local v4, "dstToStd":Z
	goto label_goto_6d;
	// 1392    .line 702
	// 1393    .end local v4    # "dstToStd":Z
label_cond_a5:
	0x0;
	//    .local v7, "stdToDst":Z
	goto label_goto_70;
	// 1400    .line 709
	// 1401    .end local v7    # "stdToDst":Z
label_cond_a7:
	if ( ( NonExistingTimeOpt & 0x3) != 0x1 )
		goto label_cond_ae;
	if ( cVar1 )     
		goto label_cond_b5;
label_cond_ae:
	if ( ( NonExistingTimeOpt & 0x3) != 0x3 )
		goto label_cond_b8;
	if ( !(cVar0) )  
		goto label_cond_b8;
label_cond_b5:
	transition = (transition +  (long long)(offsetAfter));
	goto label_goto_84;
	// 1430    .line 712
label_cond_b8:
	if ( ( NonExistingTimeOpt & 0xc) != 0xc )
		goto label_cond_c1;
	transition = (transition +  (long long)(offsetBefore));
	goto label_goto_84;
	// 1445    .line 717
label_cond_c1:
	transition = (transition +  (long long)(offsetAfter));
	goto label_goto_84;
	// 1453    .line 721
label_cond_c4:
	if ( ( DuplicatedTimeOpt & 0x3) != 0x1 )
		goto label_cond_cb;
	if ( cVar0 )     
		goto label_cond_d2;
label_cond_cb:
	if ( ( DuplicatedTimeOpt & 0x3) != 0x3 )
		goto label_cond_d5;
	if ( !(cVar1) )  
		goto label_cond_d5;
label_cond_d2:
	transition = (transition +  (long long)(offsetAfter));
	goto label_goto_84;
	// 1482    .line 724
label_cond_d5:
	if ( ( DuplicatedTimeOpt & 0x3) != 0x1 )
		goto label_cond_dc;
	if ( cVar1 )     
		goto label_cond_e3;
label_cond_dc:
	if ( ( DuplicatedTimeOpt & 0x3) != 0x3 )
		goto label_cond_e6;
	if ( !(cVar0) )  
		goto label_cond_e6;
label_cond_e3:
	transition = (transition +  (long long)(offsetBefore));
	goto label_goto_84;
	// 1511    .line 727
label_cond_e6:
	if ( ( DuplicatedTimeOpt & 0xc) != 0x4 )
		goto label_cond_ee;
	transition = (transition +  (long long)(offsetBefore));
	goto label_goto_84;
	// 1526    .line 732
label_cond_ee:
	transition = (transition +  (long long)(offsetAfter));
	goto label_goto_84;
	// 1534    .line 692
	// 1535    .end local v2    # "dstAfter":Z
	// 1536    .end local v3    # "dstBefore":Z
	// 1537    .end local v5    # "offsetAfter":I
	// 1538    .end local v6    # "offsetBefore":I
label_cond_f1:
	transIdx = ( transIdx + -0x1);
	goto label_goto_34;
	// 1544    .line 746
	// 1545    .end local v8    # "sec":J
	// 1546    .end local v10    # "transIdx":I
	// 1547    .end local v12    # "transition":J
label_cond_f5:
	offsets[0x0] = ( this->initialRawOffset() * 0x3e8);
	offsets[0x1] = ( this->initialDstOffset() * 0x3e8);
	goto label_goto_2d;

}
// .method private getInt(B)I
int android::icu::impl::OlsonTimeZone::getInt(unsigned char val)
{
	
	//    .param p1, "val"    # B
	return ( val & 0xff);

}
// .method private declared-synchronized initTransitionRules()V
void android::icu::impl::OlsonTimeZone::initTransitionRules()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	auto stdName;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	auto dstName;
	int dst;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	int transitionIdx;
	auto startTime;
	std::shared_ptr<android::icu::util::SimpleTimeZone> cVar4;
	std::shared_ptr<android::icu::util::TimeZoneTransition> tzt;
	int prevRule;
	auto prevRule;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar5;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> firstFinalRule;
	std::shared<std::vector<long long[]>> cVar11;
	auto times;
	int typeIdx;
	int nTimes;
	long long tt;
	std::shared<std::vector<long long[]>> startTimes;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> cVar7;
	std::shared_ptr<java::lang::String> cVar8;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar10;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_1f5;
	}
	//    .catchall {:try_start_1 .. :try_end_5} :catchall_1f5
	if ( !(this->transitionRulesInitialized) )  
		goto label_cond_9;
	this->monitor_exit();
	return;
	// 1605    .line 1116
label_cond_9:
	try {
	//label_try_start_a:
	this->initialRule = 0x0;
	this->firstTZTransition = 0x0;
	this->firstFinalTZTransition = 0x0;
	this->historicRules = 0x0;
	this->firstTZTransitionIdx = 0x0;
	this->finalZoneWithStartYear = 0x0;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	stdName = cVar0->append(this->getID())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(STD)")))->toString();
	//    .local v19, "stdName":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	dstName = cVar1->append(this->getID())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(DST)")))->toString();
	//    .local v15, "dstName":Ljava/lang/String;
	//    .local v6, "raw":I
	dst = ( this->initialDstOffset() * 0x3e8);
	//    .local v7, "dst":I
	if ( dst )     
		goto label_cond_115;
	cVar3 = stdName;
label_goto_69:
	cVar2 = std::make_shared<android::icu::util::InitialTimeZoneRule>(cVar3, ( this->initialRawOffset() * 0x3e8), dst);
	this->initialRule = cVar2;
	if ( this->transitionCount <= 0 )
		goto label_cond_96;
	transitionIdx = 0x0;
	//    .local v23, "transitionIdx":I
label_goto_78:
	if ( transitionIdx >= this->transitionCount )
		goto label_cond_8e;
	if ( !(this->getInt(this->typeMapData[transitionIdx])) )  
		goto label_cond_118;
label_cond_8e:
	if ( transitionIdx != this->transitionCount )
		goto label_cond_126;
	//    .end local v23    # "transitionIdx":I
label_cond_96:
label_goto_96:
	if ( !(this->finalZone) )  
		goto label_cond_10e;
	startTime = (long long)(this->finalStartMillis);
	//    .local v20, "startTime":J
	if ( !(this->finalZone->useDaylightTime()) )  
		goto label_cond_1f8;
	cVar4 = this->finalZone->clone();
	cVar4->checkCast("android::icu::util::SimpleTimeZone");
	this->finalZoneWithStartYear = cVar4;
	this->finalZoneWithStartYear->setStartYear(this->finalStartYear);
	tzt = this->finalZoneWithStartYear->getNextTransition(startTime, 0x0);
	//    .local v27, "tzt":Landroid/icu/util/TimeZoneTransition;
	//    .local v9, "firstFinalRule":Landroid/icu/util/TimeZoneRule;
	//    .end local v27    # "tzt":Landroid/icu/util/TimeZoneTransition;
label_goto_d9:
	prevRule = 0x0;
	//    .local v18, "prevRule":Landroid/icu/util/TimeZoneRule;
	if ( this->transitionCount <= 0 )
		goto label_cond_f9;
	prevRule = this->historicRules[this->getInt(this->typeMapData[( this->transitionCount + -0x1)])];
	//    .end local v18    # "prevRule":Landroid/icu/util/TimeZoneRule;
label_cond_f9:
	if ( prevRule )     
		goto label_cond_101;
label_cond_101:
	cVar5 = std::make_shared<android::icu::util::TimeZoneTransition>(startTime, prevRule, firstFinalRule);
	this->firstFinalTZTransition = cVar5;
	//    .end local v9    # "firstFinalRule":Landroid/icu/util/TimeZoneRule;
	//    .end local v20    # "startTime":J
label_cond_10e:
	this->transitionRulesInitialized = 0x1;
	//label_try_end_113:
	}
	catch (...){
		goto label_catchall_1f5;
	}
	//    .catchall {:try_start_a .. :try_end_113} :catchall_1f5
	this->monitor_exit();
	return;
label_cond_115:
	cVar3 = dstName;
	goto label_goto_69;
	// 1941    .line 1143
	// 1942    .restart local v23    # "transitionIdx":I
label_cond_118:
	try {
	//label_try_start_118:
	this->firstTZTransitionIdx = ( this->firstTZTransitionIdx + 0x1);
	transitionIdx = ( transitionIdx + 0x1);
	goto label_goto_78;
	// 1960    .line 1149
label_cond_126:
	times = std::make_shared<std::vector<long long[]>>(this->transitionCount);
	//    .local v22, "times":[J
	typeIdx = 0x0;
	//    .local v26, "typeIdx":I
label_goto_130:
	if ( typeIdx >= this->typeCount )
		goto label_cond_1c3;
	//    .local v16, "nTimes":I
	transitionIdx = this->firstTZTransitionIdx;
	nTimes = 0x0;
	//    .end local v16    # "nTimes":I
	//    .local v17, "nTimes":I
label_goto_142:
	if ( transitionIdx >= this->transitionCount )
		goto label_cond_178;
	if ( typeIdx != this->getInt(this->typeMapData[transitionIdx]) )
		goto label_cond_21f;
	tt = (this->transitionTimes64[transitionIdx] * 0x3e8);
	//    .local v24, "tt":J
	if ( ((double)(tt) > this->finalStartMillis) >= 0 )
		goto label_cond_21f;
	//    .end local v17    # "nTimes":I
	//    .restart local v16    # "nTimes":I
	times[nTimes] = tt;
	//    .end local v24    # "tt":J
label_goto_173:
	transitionIdx = ( transitionIdx + 0x1);
	nTimes = nTimes;
	//    .end local v16    # "nTimes":I
	//    .restart local v17    # "nTimes":I
	goto label_goto_142;
	// 2068    .line 1162
label_cond_178:
	if ( nTimes <= 0 )
		goto label_cond_1bd;
	startTimes = std::make_shared<std::vector<long long[]>>(nTimes);
	//    .local v8, "startTimes":[J
	java::lang::System::arraycopy(times, 0x0, startTimes, 0x0, nTimes);
	dst = ( this->typeOffsets[( ( typeIdx * 0x2) + 0x1)] * 0x3e8);
	if ( this->historicRules )     
		goto label_cond_1ad;
	this->historicRules = std::make_shared<std::vector<std::vector<android::icu::util::TimeArrayTimeZoneRule>>>(this->typeCount);
label_cond_1ad:
	if ( dst )     
		goto label_cond_1c1;
	cVar8 = stdName;
label_goto_1b7:
	cVar7 = std::make_shared<android::icu::util::TimeArrayTimeZoneRule>(cVar8, ( this->typeOffsets[( typeIdx * 0x2)] * 0x3e8), dst, startTimes, 0x2);
	this->historicRules[typeIdx] = cVar7;
	//    .end local v8    # "startTimes":[J
label_cond_1bd:
	typeIdx = ( typeIdx + 0x1);
	goto label_goto_130;
	// 2159    .restart local v8    # "startTimes":[J
label_cond_1c1:
	cVar8 = dstName;
	goto label_goto_1b7;
	// 2166    .line 1177
	// 2167    .end local v8    # "startTimes":[J
	// 2168    .end local v17    # "nTimes":I
label_cond_1c3:
	typeIdx = this->getInt(this->typeMapData[this->firstTZTransitionIdx]);
	cVar10 = std::make_shared<android::icu::util::TimeZoneTransition>((this->transitionTimes64[this->firstTZTransitionIdx] *  0x3e8), this->initialRule, this->historicRules[typeIdx]);
	this->firstTZTransition = cVar10;
	//label_try_end_1f3:
	}
	catch (...){
		goto label_catchall_1f5;
	}
	//    .catchall {:try_start_118 .. :try_end_1f3} :catchall_1f5
	goto label_goto_96;
	// 2225    .end local v6    # "raw":I
	// 2226    .end local v7    # "dst":I
	// 2227    .end local v15    # "dstName":Ljava/lang/String;
	// 2228    .end local v19    # "stdName":Ljava/lang/String;
	// 2229    .end local v22    # "times":[J
	// 2230    .end local v23    # "transitionIdx":I
	// 2231    .end local v26    # "typeIdx":I
label_catchall_1f5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 2239    .line 1204
	// 2240    .restart local v6    # "raw":I
	// 2241    .restart local v7    # "dst":I
	// 2242    .restart local v15    # "dstName":Ljava/lang/String;
	// 2243    .restart local v19    # "stdName":Ljava/lang/String;
	// 2244    .restart local v20    # "startTime":J
label_cond_1f8:
	try {
	//label_try_start_1f8:
	this->finalZoneWithStartYear = this->finalZone;
	cVar11 = std::make_shared<std::vector<long long[]>>(0x1);
	cVar11[0x0] = startTime;
	firstFinalRule = std::make_shared<android::icu::util::TimeArrayTimeZoneRule>(this->finalZone->getID(), this->finalZone->getRawOffset(), 0x0, cVar11, 0x2);
	//label_try_end_21d:
	}
	catch (...){
		goto label_catchall_1f5;
	}
	//    .catchall {:try_start_1f8 .. :try_end_21d} :catchall_1f5
	//    .restart local v9    # "firstFinalRule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_d9;
	// 2295    .end local v9    # "firstFinalRule":Landroid/icu/util/TimeZoneRule;
	// 2296    .end local v20    # "startTime":J
	// 2297    .restart local v17    # "nTimes":I
	// 2298    .restart local v22    # "times":[J
	// 2299    .restart local v23    # "transitionIdx":I
	// 2300    .restart local v26    # "typeIdx":I
label_cond_21f:
	//    .end local v17    # "nTimes":I
	//    .restart local v16    # "nTimes":I
	goto label_goto_173;

}
// .method private initialDstOffset()I
int android::icu::impl::OlsonTimeZone::initialDstOffset()
{
	
	return this->typeOffsets[0x1];

}
// .method private initialRawOffset()I
int android::icu::impl::OlsonTimeZone::initialRawOffset()
{
	
	return this->typeOffsets[0x0];

}
// .method private static loadRule(Landroid/icu/util/UResourceBundle;Ljava/lang/String;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::impl::OlsonTimeZone::loadRule(std::shared_ptr<android::icu::util::UResourceBundle> top,std::shared_ptr<java::lang::String> ruleid)
{
	
	//    .param p0, "top"    # Landroid/icu/util/UResourceBundle;
	//    .param p1, "ruleid"    # Ljava/lang/String;
	//    .local v0, "r":Landroid/icu/util/UResourceBundle;
	return top->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rules")))->get(ruleid);

}
// .method private rawOffsetAt(I)I
int android::icu::impl::OlsonTimeZone::rawOffsetAt(int transIdx)
{
	
	//    .param p1, "transIdx"    # I
	if ( transIdx < 0 ) 
		goto label_cond_11;
	//    .local v0, "typeIdx":I
label_goto_c:
	return this->typeOffsets[typeIdx];
	// 2387    .line 765
	// 2388    .end local v0    # "typeIdx":I
label_cond_11:
	//    .restart local v0    # "typeIdx":I
	goto label_goto_c;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::impl::OlsonTimeZone::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	int initialized;
	std::shared_ptr<java::lang::String> tzid;
	std::shared_ptr<android::icu::util::UResourceBundle> top;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2400        value = {
	// 2401            Ljava/io/IOException;,
	// 2402            Ljava/lang/ClassNotFoundException;
	// 2403        }
	// 2404    .end annotation
	stream->defaultReadObject();
	if ( this->serialVersionOnStream >= 0x1 )
		goto label_cond_31;
	initialized = 0x0;
	//    .local v1, "initialized":Z
	tzid = this->getID();
	//    .local v4, "tzid":Ljava/lang/String;
	if ( !(tzid) )  
		goto label_cond_2c;
	try {
	//label_try_start_f:
	top = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneinfo64")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	//    .local v3, "top":Landroid/icu/util/UResourceBundle;
	//    .local v2, "res":Landroid/icu/util/UResourceBundle;
	this->construct(top, android::icu::impl::ZoneMeta::openOlsonResource(top, tzid));
	if ( !(this->finalZone) )  
		goto label_cond_2b;
	this->finalZone->setID(tzid);
	//label_try_end_2b:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_2b} :catch_35
label_cond_2b:
	initialized = 0x1;
	//    .end local v2    # "res":Landroid/icu/util/UResourceBundle;
	//    .end local v3    # "top":Landroid/icu/util/UResourceBundle;
label_cond_2c:
label_goto_2c:
	if ( initialized )     
		goto label_cond_31;
	this->constructEmpty();
	//    .end local v1    # "initialized":Z
	//    .end local v4    # "tzid":Ljava/lang/String;
label_cond_31:
	this->transitionRulesInitialized = 0x0;
	return;
	// 2491    .line 1253
	// 2492    .restart local v1    # "initialized":Z
	// 2493    .restart local v4    # "tzid":Ljava/lang/String;
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ignored":Ljava/lang/Exception;
	goto label_goto_2c;

}
// .method private zoneOffsetAt(I)I
int android::icu::impl::OlsonTimeZone::zoneOffsetAt(int transIdx)
{
	
	int typeIdx;
	
	//    .param p1, "transIdx"    # I
	if ( transIdx < 0 ) 
		goto label_cond_18;
	typeIdx = ( this->getInt(this->typeMapData[transIdx]) * 0x2);
	//    .local v0, "typeIdx":I
label_goto_c:
	return (this->typeOffsets[typeIdx] +  this->typeOffsets[( typeIdx + 0x1)]);
	// 2536    .line 760
	// 2537    .end local v0    # "typeIdx":I
label_cond_18:
	typeIdx = 0x0;
	//    .restart local v0    # "typeIdx":I
	goto label_goto_c;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::OlsonTimeZone::clone()
{
	
	if ( !(this->isFrozen()) )  
		goto label_cond_7;
	return this;
	// 2561    .line 264
label_cond_7:
	return this->cloneAsThawed();

}
// .method public cloneAsThawed()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::impl::OlsonTimeZone::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::impl::OlsonTimeZone> tz;
	std::shared_ptr<android::icu::util::SimpleTimeZone> cVar0;
	
	tz = this->cloneAsThawed();
	tz->checkCast("android::icu::impl::OlsonTimeZone");
	//    .local v0, "tz":Landroid/icu/impl/OlsonTimeZone;
	if ( !(this->finalZone) )  
		goto label_cond_1d;
	this->finalZone->setID(this->getID());
	cVar0 = this->finalZone->clone();
	cVar0->checkCast("android::icu::util::SimpleTimeZone");
	tz->finalZone = cVar0;
label_cond_1d:
	tz->isFrozen = 0x0;
	return tz;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::OlsonTimeZone::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::impl::OlsonTimeZone> z;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->equals(obj) )     
		goto label_cond_9;
	return cVar1;
label_cond_9:
	z = obj;
	z->checkCast("android::icu::impl::OlsonTimeZone");
	//    .local v0, "z":Landroid/icu/impl/OlsonTimeZone;
	if ( android::icu::impl::Utility::arrayEquals(this->typeMapData, z->typeMapData) )     
		goto label_cond_24;
	if ( this->finalStartYear != z->finalStartYear )
		goto label_cond_62;
	if ( this->finalZone )     
		goto label_cond_25;
	if ( z->finalZone )     
		goto label_cond_25;
label_cond_24:
label_goto_24:
	return cVar0;
	// 2674    .line 909
label_cond_25:
	if ( !(this->finalZone) )  
		goto label_cond_60;
	if ( !(z->finalZone) )  
		goto label_cond_60;
	if ( !(this->finalZone->equals(z->finalZone)) )  
		goto label_cond_60;
	if ( this->transitionCount != z->transitionCount )
		goto label_cond_60;
	if ( this->typeCount != z->typeCount )
		goto label_cond_60;
	if ( !(android::icu::impl::Utility::arrayEquals(this->transitionTimes64, z->transitionTimes64)) )  
		goto label_cond_60;
	if ( !(android::icu::impl::Utility::arrayEquals(this->typeOffsets, z->typeOffsets)) )  
		goto label_cond_60;
	cVar0 = android::icu::impl::Utility::arrayEquals(this->typeMapData, z->typeMapData);
	goto label_goto_24;
label_cond_60:
	cVar0 = cVar1;
	goto label_goto_24;
label_cond_62:
	cVar0 = cVar1;
	goto label_goto_24;

}
// .method public freeze()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::impl::OlsonTimeZone::freeze()
{
	
	this->isFrozen = 0x1;
	return this;

}
// .method public getCanonicalID()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::OlsonTimeZone::getCanonicalID()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( this->canonicalID )     
		goto label_cond_2f;
	this->monitor_enter();
	try {
	//label_try_start_5:
	if ( this->canonicalID )     
		goto label_cond_2e;
	this->canonicalID = android::icu::impl::OlsonTimeZone::getCanonicalID(this->getID());
	if ( android::icu::impl::OlsonTimeZone::_assertionsDisabled )     
		goto label_cond_24;
	if ( this->canonicalID )     
		goto label_cond_24;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 2814    :try_end_21
	// 2815    .catchall {:try_start_5 .. :try_end_21} :catchall_21
	// 2817    .line 444
label_catchall_21:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 2825    .line 449
label_cond_24:
	try {
	//label_try_start_24:
	if ( this->canonicalID )     
		goto label_cond_2e;
	this->canonicalID = this->getID();
	//label_try_end_2e:
	}
	catch (...){
		goto label_catchall_21;
	}
	//    .catchall {:try_start_24 .. :try_end_2e} :catchall_21
label_cond_2e:
	this->monitor_exit();
label_cond_2f:
	return this->canonicalID;

}
// .method public getDSTSavings()I
int android::icu::impl::OlsonTimeZone::getDSTSavings()
{
	
	if ( !(this->finalZone) )  
		goto label_cond_b;
	return this->finalZone->getDSTSavings();
	// 2869    .line 381
label_cond_b:
	return this->getDSTSavings();

}
// .method public getNextTransition(JZ)Landroid/icu/util/TimeZoneTransition;
std::shared_ptr<android::icu::util::TimeZoneTransition> android::icu::impl::OlsonTimeZone::getNextTransition(long long base,bool inclusive)
{
	
	int ttidx;
	long long t;
	std::shared_ptr<android::icu::util::TimeZoneRule> to;
	std::shared_ptr<android::icu::util::TimeZoneRule> from;
	long long startTime;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar0;
	
	//    .param p1, "base"    # J
	//    .param p3, "inclusive"    # Z
	this->initTransitionRules();
	if ( !(this->finalZone) )  
		goto label_cond_41;
	if ( !(inclusive) )  
		goto label_cond_1c;
	if ( (base > this->firstFinalTZTransition->getTime()) )     
		goto label_cond_1c;
	return this->firstFinalTZTransition;
	// 2916    .line 958
label_cond_1c:
	if ( (base > this->firstFinalTZTransition->getTime()) < 0 ) 
		goto label_cond_41;
	if ( !(this->finalZone->useDaylightTime()) )  
		goto label_cond_3f;
	return this->finalZoneWithStartYear->getNextTransition(base, inclusive);
	// 2956    .line 964
label_cond_3f:
	return 0x0;
	// 2962    .line 968
label_cond_41:
	if ( !(this->historicRules) )  
		goto label_cond_e4;
	ttidx = ( this->transitionCount + -0x1);
	//    .local v10, "ttidx":I
label_goto_4d:
	if ( ttidx <  this->firstTZTransitionIdx )
		goto label_cond_67;
	t = (this->transitionTimes64[ttidx] * 0x3e8);
	//    .local v8, "t":J
	if ( (base > t) > 0 ) 
		goto label_cond_67;
	if ( inclusive )     
		goto label_cond_74;
	if ( (base > t) )     
		goto label_cond_74;
	//    .end local v8    # "t":J
label_cond_67:
	if ( ttidx != ( this->transitionCount + -0x1) )
		goto label_cond_77;
	return this->firstFinalTZTransition;
	// 3027    .line 971
	// 3028    .restart local v8    # "t":J
label_cond_74:
	ttidx = ( ttidx + -0x1);
	goto label_goto_4d;
	// 3034    .line 979
	// 3035    .end local v8    # "t":J
label_cond_77:
	if ( ttidx >= this->firstTZTransitionIdx )
		goto label_cond_82;
	return this->firstTZTransition;
	// 3050    .line 983
label_cond_82:
	to = this->historicRules[this->getInt(this->typeMapData[( ttidx + 0x1)])];
	//    .local v5, "to":Landroid/icu/util/TimeZoneRule;
	from = this->historicRules[this->getInt(this->typeMapData[ttidx])];
	//    .local v4, "from":Landroid/icu/util/TimeZoneRule;
	startTime = (this->transitionTimes64[( ttidx + 0x1)] * 0x3e8);
	//    .local v6, "startTime":J
	if ( !(from->getName()->equals(to->getName())) )  
		goto label_cond_de;
	if ( from->getRawOffset() != to->getRawOffset() )
		goto label_cond_de;
	if ( from->getDSTSavings() != to->getDSTSavings() )
		goto label_cond_de;
	return this->getNextTransition(startTime, 0x0);
	// 3154    .line 993
label_cond_de:
	cVar0 = std::make_shared<android::icu::util::TimeZoneTransition>(startTime, from, to);
	return cVar0;
	// 3162    .line 996
	// 3163    .end local v4    # "from":Landroid/icu/util/TimeZoneRule;
	// 3164    .end local v5    # "to":Landroid/icu/util/TimeZoneRule;
	// 3165    .end local v6    # "startTime":J
	// 3166    .end local v10    # "ttidx":I
label_cond_e4:
	return 0x0;

}
// .method public getOffset(IIIIII)I
int android::icu::impl::OlsonTimeZone::getOffset(int era,int year,int month,int day,int dayOfWeek,int milliseconds)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "day"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "milliseconds"    # I
	if ( month < 0 ) 
		goto label_cond_6;
	if ( month <= 0xb )
		goto label_cond_20;
label_cond_6:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Month is not in the legal range: ")))->append(month)->toString());
	// throw
	throw cVar0;
	// 3216    .line 132
label_cond_20:
	return this->getOffset(era, year, month, day, dayOfWeek, milliseconds, android::icu::impl::Grego::monthLength(year, month));

}
// .method public getOffset(IIIIIII)I
int android::icu::impl::OlsonTimeZone::getOffset(int era,int cVar1,int month,int dom,int dow,int millis,int monthLength)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int cVar1;
	std::shared<std::vector<int[]>> offsets;
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "dom"    # I
	//    .param p5, "dow"    # I
	//    .param p6, "millis"    # I
	//    .param p7, "monthLength"    # I
	if ( era == 0x1 )
		goto label_cond_b;
	if ( !(era) )  
		goto label_cond_b;
label_cond_5:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 3269    .line 142
label_cond_b:
	if ( month < 0 ) 
		goto label_cond_5;
	if ( month >  0xb )
		goto label_cond_5;
	if ( dom <  0x1 )
		goto label_cond_5;
	if ( dom >  monthLength )
		goto label_cond_5;
	if ( dow <  0x1 )
		goto label_cond_5;
	if ( dow >  0x7 )
		goto label_cond_5;
	if ( millis < 0 ) 
		goto label_cond_5;
	if ( millis >= 0x5265c00 )
		goto label_cond_5;
	if ( monthLength <  0x1c )
		goto label_cond_5;
	if ( monthLength >  0x1f )
		goto label_cond_5;
	if ( era )     
		goto label_cond_2e;
	cVar1 = (0 - cVar1);
label_cond_2e:
	if ( !(this->finalZone) )  
		goto label_cond_43;
	if ( cVar1 <  this->finalStartYear )
		goto label_cond_43;
	return this->finalZone->getOffset(era, cVar1, month, dom, dow, millis);
	// 3351    .line 164
label_cond_43:
	//    .local v2, "time":J
	offsets = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v7, "offsets":[I
	this->getHistoricalOffset(((android::icu::impl::Grego::fieldsToDay(cVar1, month, dom) *  0x5265c00) + (long long)(millis)), 0x1, 0x3, 0x1, offsets);
	return (offsets[0x0] +  offsets[0x1]);

}
// .method public getOffset(JZ[I)V
void android::icu::impl::OlsonTimeZone::getOffset(long long date,bool local,std::shared_ptr<int[]> offsets)
{
	
	//    .param p1, "date"    # J
	//    .param p3, "local"    # Z
	//    .param p4, "offsets"    # [I
	if ( !(this->finalZone) )  
		goto label_cond_11;
	if ( ((double)(date) < this->finalStartMillis) < 0 ) 
		goto label_cond_11;
	this->finalZone->getOffset(date, local, offsets);
label_goto_10:
	return;
	// 3426    .line 276
label_cond_11:
	this->getHistoricalOffset(date, local, 0x4, 0xc, offsets);
	goto label_goto_10;

}
// .method public getOffsetFromLocal(JII[I)V
void android::icu::impl::OlsonTimeZone::getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets)
{
	
	//    .param p1, "date"    # J
	//    .param p3, "nonExistingTimeOpt"    # I
	//    .param p4, "duplicatedTimeOpt"    # I
	//    .param p5, "offsets"    # [I
	if ( !(this->finalZone) )  
		goto label_cond_15;
	if ( ((double)(date) < this->finalStartMillis) < 0 ) 
		goto label_cond_15;
	this->finalZone->getOffsetFromLocal(date, nonExistingTimeOpt, duplicatedTimeOpt, offsets);
label_goto_14:
	return;
	// 3484    .line 289
label_cond_15:
	this->getHistoricalOffset(date, 0x1, nonExistingTimeOpt, duplicatedTimeOpt, offsets);
	goto label_goto_14;

}
// .method public getPreviousTransition(JZ)Landroid/icu/util/TimeZoneTransition;
std::shared_ptr<android::icu::util::TimeZoneTransition> android::icu::impl::OlsonTimeZone::getPreviousTransition(long long base,bool inclusive)
{
	
	int ttidx;
	long long t;
	std::shared_ptr<android::icu::util::TimeZoneRule> to;
	std::shared_ptr<android::icu::util::TimeZoneRule> from;
	long long startTime;
	std::shared_ptr<android::icu::util::TimeZoneTransition> cVar0;
	
	//    .param p1, "base"    # J
	//    .param p3, "inclusive"    # Z
	this->initTransitionRules();
	if ( !(this->finalZone) )  
		goto label_cond_44;
	if ( !(inclusive) )  
		goto label_cond_1c;
	if ( (base > this->firstFinalTZTransition->getTime()) )     
		goto label_cond_1c;
	return this->firstFinalTZTransition;
	// 3541    .line 1009
label_cond_1c:
	if ( (base > this->firstFinalTZTransition->getTime()) <= 0 )
		goto label_cond_44;
	if ( !(this->finalZone->useDaylightTime()) )  
		goto label_cond_3f;
	return this->finalZoneWithStartYear->getPreviousTransition(base, inclusive);
	// 3581    .line 1014
label_cond_3f:
	return this->firstFinalTZTransition;
	// 3589    .line 1019
label_cond_44:
	if ( !(this->historicRules) )  
		goto label_cond_e0;
	ttidx = ( this->transitionCount + -0x1);
	//    .local v10, "ttidx":I
label_goto_50:
	if ( ttidx <  this->firstTZTransitionIdx )
		goto label_cond_6a;
	t = (this->transitionTimes64[ttidx] * 0x3e8);
	//    .local v8, "t":J
	if ( (base > t) > 0 ) 
		goto label_cond_6a;
	if ( !(inclusive) )  
		goto label_cond_72;
	if ( (base > t) )     
		goto label_cond_72;
	//    .end local v8    # "t":J
label_cond_6a:
	if ( ttidx >= this->firstTZTransitionIdx )
		goto label_cond_75;
	return 0x0;
	// 3650    .line 1022
	// 3651    .restart local v8    # "t":J
label_cond_72:
	ttidx = ( ttidx + -0x1);
	goto label_goto_50;
	// 3657    .line 1031
	// 3658    .end local v8    # "t":J
label_cond_75:
	if ( ttidx != this->firstTZTransitionIdx )
		goto label_cond_80;
	return this->firstTZTransition;
	// 3673    .line 1035
label_cond_80:
	to = this->historicRules[this->getInt(this->typeMapData[ttidx])];
	//    .local v5, "to":Landroid/icu/util/TimeZoneRule;
	from = this->historicRules[this->getInt(this->typeMapData[( ttidx + -0x1)])];
	//    .local v4, "from":Landroid/icu/util/TimeZoneRule;
	startTime = (this->transitionTimes64[ttidx] * 0x3e8);
	//    .local v6, "startTime":J
	if ( !(from->getName()->equals(to->getName())) )  
		goto label_cond_da;
	if ( from->getRawOffset() != to->getRawOffset() )
		goto label_cond_da;
	if ( from->getDSTSavings() != to->getDSTSavings() )
		goto label_cond_da;
	return this->getPreviousTransition(startTime, 0x0);
	// 3775    .line 1045
label_cond_da:
	cVar0 = std::make_shared<android::icu::util::TimeZoneTransition>(startTime, from, to);
	return cVar0;
	// 3783    .line 1048
	// 3784    .end local v4    # "from":Landroid/icu/util/TimeZoneRule;
	// 3785    .end local v5    # "to":Landroid/icu/util/TimeZoneRule;
	// 3786    .end local v6    # "startTime":J
	// 3787    .end local v10    # "ttidx":I
label_cond_e0:
	return 0x0;

}
// .method public getRawOffset()I
int android::icu::impl::OlsonTimeZone::getRawOffset()
{
	
	bool cVar0;
	std::shared<std::vector<int[]>> ret;
	
	cVar0 = 0x0;
	ret = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v0, "ret":[I
	this->getOffset(java::lang::System::currentTimeMillis({const[class].FS-Param}), cVar0, ret);
	return ret[cVar0];

}
// .method public getTimeZoneRules()[Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::impl::OlsonTimeZone::getTimeZoneRules()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int size;
	int i;
	std::shared<std::vector<std::vector<android::icu::util::TimeZoneRule>>> rules;
	int idx;
	auto stzr;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared<std::vector<long long[]>> cVar5;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	this->initTransitionRules();
	size = 0x1;
	//    .local v10, "size":I
	if ( !(this->historicRules) )  
		goto label_cond_1c;
	i = 0x0;
	//    .local v6, "i":I
label_goto_c:
	if ( i >= this->historicRules->size() )
		goto label_cond_1c;
	if ( !(this->historicRules[i]) )  
		goto label_cond_19;
	size = ( size + 0x1);
label_cond_19:
	i = ( i + 0x1);
	goto label_goto_c;
	// 3868    .line 1067
	// 3869    .end local v6    # "i":I
label_cond_1c:
	if ( !(this->finalZone) )  
		goto label_cond_2a;
	if ( !(this->finalZone->useDaylightTime()) )  
		goto label_cond_4e;
	size = ( size + 0x2);
label_cond_2a:
label_goto_2a:
	rules = std::make_shared<std::vector<std::vector<android::icu::util::TimeZoneRule>>>(size);
	//    .local v9, "rules":[Landroid/icu/util/TimeZoneRule;
	0x0;
	//    .local v7, "idx":I
	idx = 0x1;
	rules[cVar2] = this->initialRule;
	if ( !(this->historicRules) )  
		goto label_cond_51;
	i = 0x0;
	//    .restart local v6    # "i":I
label_goto_37:
	if ( i >= this->historicRules->size() )
		goto label_cond_51;
	if ( !(this->historicRules[i]) )  
		goto label_cond_4b;
	//    .end local v7    # "idx":I
	//    .local v8, "idx":I
	rules[idx] = this->historicRules[i];
	idx = ( idx + 0x1);
	//    .end local v8    # "idx":I
	//    .restart local v7    # "idx":I
label_cond_4b:
	i = ( i + 0x1);
	goto label_goto_37;
	// 3948    .line 1071
	// 3949    .end local v6    # "i":I
	// 3950    .end local v7    # "idx":I
	// 3951    .end local v9    # "rules":[Landroid/icu/util/TimeZoneRule;
label_cond_4e:
	size = ( size + 0x1);
	goto label_goto_2a;
	// 3957    .line 1087
	// 3958    .restart local v7    # "idx":I
	// 3959    .restart local v9    # "rules":[Landroid/icu/util/TimeZoneRule;
label_cond_51:
	if ( !(this->finalZone) )  
		goto label_cond_6f;
	if ( !(this->finalZone->useDaylightTime()) )  
		goto label_cond_70;
	stzr = this->finalZoneWithStartYear->getTimeZoneRules();
	//    .local v11, "stzr":[Landroid/icu/util/TimeZoneRule;
	idx = ( idx + 0x1);
	//    .end local v7    # "idx":I
	//    .restart local v8    # "idx":I
	rules[idx] = stzr[cVar1];
	( idx + 0x1);
	//    .end local v8    # "idx":I
	//    .restart local v7    # "idx":I
	rules[idx] = stzr[cVar0];
	//    .end local v11    # "stzr":[Landroid/icu/util/TimeZoneRule;
label_cond_6f:
label_goto_6f:
	return rules;
	// 4006    .line 1095
label_cond_70:
	//    .end local v7    # "idx":I
	//    .restart local v8    # "idx":I
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<std::vector<long long[]>>(cVar1);
	cVar5[cVar2] = (long long)(this->finalStartMillis);
	cVar3 = std::make_shared<android::icu::util::TimeArrayTimeZoneRule>(cVar4->append(this->getID())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(STD)")))->toString(), this->finalZone->getRawOffset(), cVar2, cVar5, cVar0);
	rules[idx] = cVar3;
	( idx + 0x1);
	//    .end local v8    # "idx":I
	//    .restart local v7    # "idx":I
	goto label_goto_6f;

}
// .method public hasSameRules(Landroid/icu/util/TimeZone;)Z
bool android::icu::impl::OlsonTimeZone::hasSameRules(std::shared_ptr<android::icu::util::TimeZone> other)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::impl::OlsonTimeZone> o;
	
	//    .param p1, "other"    # Landroid/icu/util/TimeZone;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 4078    .line 404
label_cond_5:
	if ( this->hasSameRules(other) )     
		goto label_cond_c;
	return cVar1;
	// 4089    .line 408
label_cond_c:
	if ( other->instanceOf("android::icu::impl::OlsonTimeZone") )     
		goto label_cond_11;
	return cVar1;
label_cond_11:
	o = other;
	o->checkCast("android::icu::impl::OlsonTimeZone");
	//    .local v0, "o":Landroid/icu/impl/OlsonTimeZone;
	if ( this->finalZone )     
		goto label_cond_1d;
	if ( !(o->finalZone) )  
		goto label_cond_34;
	return cVar1;
	// 4118    .line 420
label_cond_1d:
	if ( !(o->finalZone) )  
		goto label_cond_27;
	if ( this->finalStartYear == o->finalStartYear )
		goto label_cond_28;
label_cond_27:
	return cVar1;
	// 4135    .line 422
label_cond_28:
	if ( ( this->finalZone->hasSameRules(o->finalZone) ^ 0x1) )     
		goto label_cond_27;
label_cond_34:
	if ( this->transitionCount != o->transitionCount )
		goto label_cond_4c;
	if ( ( java::util::Arrays::equals(this->transitionTimes64, o->transitionTimes64) ^ 0x1) )     
		goto label_cond_4c;
	if ( this->typeCount == o->typeCount )
		goto label_cond_4d;
label_cond_4c:
	return cVar1;
	// 4183    .line 432
label_cond_4d:
	if ( ( java::util::Arrays::equals(this->typeMapData, o->typeMapData) ^ 0x1) )     
		goto label_cond_4c;
	if ( ( java::util::Arrays::equals(this->typeOffsets, o->typeOffsets) ^ 0x1) )     
		goto label_cond_4c;
	return cVar0;

}
// .method public hashCode()I
int android::icu::impl::OlsonTimeZone::hashCode()
{
	
	int cVar0;
	int ret;
	int i;
	
	if ( this->finalZone )     
		goto label_cond_4a;
	cVar0 = 0x0;
label_goto_24:
	ret = (int)(((((long long)(cVar0) +  (java::lang::Double::doubleToLongBits(this->finalStartMillis) +  (long long)(_ushri(this->typeCount,0x8)))) +  (long long)(this->hashCode())) ^  (long long)(((this->finalStartYear ^  (_ushri(this->finalStartYear,0x4) +  this->transitionCount)) ^  (_ushri(this->transitionCount,0x6) +  this->typeCount)))));
	//    .local v1, "ret":I
	if ( !(this->transitionTimes64) )  
		goto label_cond_51;
	i = 0x0;
	//    .local v0, "i":I
label_goto_33:
	if ( i >= this->transitionTimes64->size() )
		goto label_cond_51;
	ret = (int)(((long long)(ret) +  (this->transitionTimes64[i] ^  _ushrll(this->transitionTimes64[i],0x8))));
	i = ( i + 0x1);
	goto label_goto_33;
	// 4339    .line 926
	// 4340    .end local v0    # "i":I
	// 4341    .end local v1    # "ret":I
label_cond_4a:
	cVar0 = this->finalZone->hashCode();
	goto label_goto_24;
	// 4351    .line 933
	// 4352    .restart local v1    # "ret":I
label_cond_51:
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_52:
	if ( i >= this->typeOffsets->size() )
		goto label_cond_66;
	ret = (ret +  (this->typeOffsets[i] ^  _ushri(this->typeOffsets[i],0x8)));
	i = ( i + 0x1);
	goto label_goto_52;
	// 4384    .line 936
label_cond_66:
	if ( !(this->typeMapData) )  
		goto label_cond_7a;
	i = 0x0;
label_goto_6b:
	if ( i >= this->typeMapData->size() )
		goto label_cond_7a;
	ret = (ret +  ( this->typeMapData[i] & 0xff));
	i = ( i + 0x1);
	goto label_goto_6b;
	// 4414    .line 941
label_cond_7a:
	return ret;

}
// .method public inDaylightTime(Ljava/util/Date;)Z
bool android::icu::impl::OlsonTimeZone::inDaylightTime(std::shared_ptr<java::util::Date> date)
{
	
	bool cVar0;
	bool cVar1;
	std::shared<std::vector<int[]>> temp;
	
	//    .param p1, "date"    # Ljava/util/Date;
	cVar0 = 0x1;
	cVar1 = 0x0;
	temp = std::make_shared<std::vector<int[]>>(0x2);
	//    .local v0, "temp":[I
	this->getOffset(date->getTime(), cVar1, temp);
	if ( !(temp[cVar0]) )  
		goto label_cond_11;
label_goto_10:
	return cVar0;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_10;

}
// .method public isFrozen()Z
bool android::icu::impl::OlsonTimeZone::isFrozen()
{
	
	return this->isFrozen;

}
// .method public observesDaylightTime()Z
bool android::icu::impl::OlsonTimeZone::observesDaylightTime()
{
	
	bool cVar0;
	bool cVar1;
	long long current;
	int trsIdx;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	current = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v0, "current":J
	if ( !(this->finalZone) )  
		goto label_cond_1b;
	if ( !(this->finalZone->useDaylightTime()) )  
		goto label_cond_13;
	return cVar0;
	// 4496    .line 349
label_cond_13:
	if ( ((double)(current) < this->finalStartMillis) < 0 ) 
		goto label_cond_1b;
	return cVar1;
	// 4509    .line 355
label_cond_1b:
	//    .local v2, "currentSec":J
	trsIdx = ( this->transitionCount + -0x1);
	//    .local v4, "trsIdx":I
	if ( !(this->dstOffsetAt(trsIdx)) )  
		goto label_cond_2e;
	return cVar0;
	// 4534    .line 367
label_cond_2c:
	trsIdx = ( trsIdx + -0x1);
label_cond_2e:
	if ( trsIdx < 0 ) 
		goto label_cond_38;
	if ( (this->transitionTimes64[trsIdx] > android::icu::impl::Grego::floorDivide(current, 0x3e8)) > 0 ) 
		goto label_cond_39;
label_cond_38:
	return cVar1;
	// 4555    .line 364
label_cond_39:
	if ( !(this->dstOffsetAt(( trsIdx + -0x1))) )  
		goto label_cond_2c;
	return cVar0;

}
// .method public setID(Ljava/lang/String;)V
void android::icu::impl::OlsonTimeZone::setID(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	
	//    .param p1, "id"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen OlsonTimeZone instance.")));
	// throw
	throw cVar0;
	// 4590    .line 659
label_cond_f:
	if ( this->canonicalID )     
		goto label_cond_35;
	this->canonicalID = android::icu::impl::OlsonTimeZone::getCanonicalID(this->getID());
	if ( android::icu::impl::OlsonTimeZone::_assertionsDisabled )     
		goto label_cond_2b;
	if ( this->canonicalID )     
		goto label_cond_2b;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 4622    .line 662
label_cond_2b:
	if ( this->canonicalID )     
		goto label_cond_35;
	this->canonicalID = this->getID();
label_cond_35:
	if ( !(this->finalZone) )  
		goto label_cond_3e;
	this->finalZone->setID(id);
label_cond_3e:
	this->setID(id);
	this->transitionRulesInitialized = 0x0;
	return;

}
// .method public setRawOffset(I)V
void android::icu::impl::OlsonTimeZone::setRawOffset(int offsetMillis)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	long long current;
	std::shared_ptr<android::icu::util::SimpleTimeZone> stz;
	int bDst;
	auto currentRules;
	std::shared_ptr<android::icu::util::TimeZoneTransition> tzt;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> r1;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> r2;
	int offset1;
	int offset2;
	std::shared_ptr<android::icu::util::DateTimeRule> start;
	std::shared_ptr<android::icu::util::DateTimeRule> end;
	auto fields;
	
	//    .param p1, "offsetMillis"    # I
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen OlsonTimeZone instance.")));
	// throw
	throw cVar0;
	// 4680    .line 180
label_cond_f:
	if ( this->getRawOffset() != offsetMillis )
		goto label_cond_1a;
	return;
	// 4695    .line 183
label_cond_1a:
	current = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v8, "current":J
	if ( ((double)(current) > this->finalStartMillis) >= 0 )
		goto label_cond_174;
	var21 = stz(offsetMillis, this->getID());
	//    .local v18, "stz":Landroid/icu/util/SimpleTimeZone;
	bDst = this->useDaylightTime();
	//    .local v6, "bDst":Z
	if ( !(bDst) )  
		goto label_cond_fd;
	currentRules = this->getSimpleTimeZoneRulesNear(current);
	//    .local v7, "currentRules":[Landroid/icu/util/TimeZoneRule;
	if ( currentRules->size() == 0x3 )
		goto label_cond_6d;
	tzt = this->getPreviousTransition(current, 0x0);
	//    .local v19, "tzt":Landroid/icu/util/TimeZoneTransition;
	if ( !(tzt) )  
		goto label_cond_6d;
	currentRules = this->getSimpleTimeZoneRulesNear((tzt->getTime() - 0x1));
	//    .end local v19    # "tzt":Landroid/icu/util/TimeZoneTransition;
label_cond_6d:
	if ( currentRules->size() != 0x3 )
		goto label_cond_150;
	if ( !(currentRules[0x1]->instanceOf("android::icu::util::AnnualTimeZoneRule")) )  
		goto label_cond_150;
	if ( !(currentRules[0x2]->instanceOf("android::icu::util::AnnualTimeZoneRule")) )  
		goto label_cond_150;
	r1 = currentRules[0x1];
	r1->checkCast("android::icu::util::AnnualTimeZoneRule");
	//    .local v14, "r1":Landroid/icu/util/AnnualTimeZoneRule;
	r2 = currentRules[0x2];
	r2->checkCast("android::icu::util::AnnualTimeZoneRule");
	//    .local v15, "r2":Landroid/icu/util/AnnualTimeZoneRule;
	offset1 = (r1->getRawOffset() + r1->getDSTSavings());
	//    .local v12, "offset1":I
	offset2 = (r2->getRawOffset() + r2->getDSTSavings());
	//    .local v13, "offset2":I
	if ( offset1 <= offset2 )
		goto label_cond_144;
	start = r1->getRule();
	//    .local v17, "start":Landroid/icu/util/DateTimeRule;
	end = r2->getRule();
	//    .local v10, "end":Landroid/icu/util/DateTimeRule;
	//    .local v16, "sav":I
label_goto_bc:
	stz->setStartRule(start->getRuleMonth(), start->getRuleWeekInMonth(), start->getRuleDayOfWeek(), start->getRuleMillisInDay());
	stz->setEndRule(end->getRuleMonth(), end->getRuleWeekInMonth(), end->getRuleDayOfWeek(), end->getRuleMillisInDay());
	stz->setDSTSavings(sav);
	//    .end local v7    # "currentRules":[Landroid/icu/util/TimeZoneRule;
	//    .end local v10    # "end":Landroid/icu/util/DateTimeRule;
	//    .end local v12    # "offset1":I
	//    .end local v13    # "offset2":I
	//    .end local v14    # "r1":Landroid/icu/util/AnnualTimeZoneRule;
	//    .end local v15    # "r2":Landroid/icu/util/AnnualTimeZoneRule;
	//    .end local v16    # "sav":I
	//    .end local v17    # "start":Landroid/icu/util/DateTimeRule;
label_cond_fd:
label_goto_fd:
	fields = android::icu::impl::Grego::timeToFields(current, 0x0);
	//    .local v11, "fields":[I
	this->finalStartYear = fields[0x0];
	this->finalStartMillis = (double)(android::icu::impl::Grego::fieldsToDay(fields[0x0], 0x0, 0x1));
	if ( !(bDst) )  
		goto label_cond_135;
	stz->setStartYear(this->finalStartYear);
label_cond_135:
	this->finalZone = stz;
	//    .end local v6    # "bDst":Z
	//    .end local v11    # "fields":[I
	//    .end local v18    # "stz":Landroid/icu/util/SimpleTimeZone;
label_goto_13b:
	this->transitionRulesInitialized = 0x0;
	return;
	// 5063    .line 216
	// 5064    .restart local v6    # "bDst":Z
	// 5065    .restart local v7    # "currentRules":[Landroid/icu/util/TimeZoneRule;
	// 5066    .restart local v12    # "offset1":I
	// 5067    .restart local v13    # "offset2":I
	// 5068    .restart local v14    # "r1":Landroid/icu/util/AnnualTimeZoneRule;
	// 5069    .restart local v15    # "r2":Landroid/icu/util/AnnualTimeZoneRule;
	// 5070    .restart local v18    # "stz":Landroid/icu/util/SimpleTimeZone;
label_cond_144:
	start = r2->getRule();
	//    .restart local v17    # "start":Landroid/icu/util/DateTimeRule;
	end = r1->getRule();
	//    .restart local v10    # "end":Landroid/icu/util/DateTimeRule;
	//    .restart local v16    # "sav":I
	goto label_goto_bc;
	// 5089    .line 234
	// 5090    .end local v10    # "end":Landroid/icu/util/DateTimeRule;
	// 5091    .end local v12    # "offset1":I
	// 5092    .end local v13    # "offset2":I
	// 5093    .end local v14    # "r1":Landroid/icu/util/AnnualTimeZoneRule;
	// 5094    .end local v15    # "r2":Landroid/icu/util/AnnualTimeZoneRule;
	// 5095    .end local v16    # "sav":I
	// 5096    .end local v17    # "start":Landroid/icu/util/DateTimeRule;
label_cond_150:
	stz->setStartRule(0x0, 0x1, 0x0);
	stz->setEndRule(0xb, 0x1f, 0x5265bff);
	goto label_goto_fd;
	// 5133    .line 253
	// 5134    .end local v6    # "bDst":Z
	// 5135    .end local v7    # "currentRules":[Landroid/icu/util/TimeZoneRule;
	// 5136    .end local v18    # "stz":Landroid/icu/util/SimpleTimeZone;
label_cond_174:
	this->finalZone->setRawOffset(offsetMillis);
	goto label_goto_13b;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::OlsonTimeZone::toString()
{
	
	char cVar0;
	char cVar1;
	char cVar2;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int i;
	
	cVar0 = 0x5d;
	cVar1 = 0x2c;
	cVar2 = 0x5b;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(this->toString());
	buf->append(cVar2);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("transitionCount=")))->append(this->transitionCount);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",typeCount=")))->append(this->typeCount);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",transitionTimes=")));
	if ( !(this->transitionTimes64) )  
		goto label_cond_7c;
	buf->append(cVar2);
	i = 0x0;
	//    .local v1, "i":I
label_goto_3b:
	if ( i >= this->transitionTimes64->size() )
		goto label_cond_53;
	if ( i <= 0 )
		goto label_cond_45;
	buf->append(cVar1);
label_cond_45:
	buf->append(java::lang::Long::toString(this->transitionTimes64[i]));
	i = ( i + 0x1);
	goto label_goto_3b;
	// 5248    .line 799
label_cond_53:
	buf->append(cVar0);
	//    .end local v1    # "i":I
label_goto_56:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",typeOffsets=")));
	if ( !(this->typeOffsets) )  
		goto label_cond_ac;
	buf->append(cVar2);
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_64:
	if ( i >= this->typeOffsets->size() )
		goto label_cond_83;
	if ( i <= 0 )
		goto label_cond_6e;
	buf->append(cVar1);
label_cond_6e:
	buf->append(java::lang::Integer::toString(this->typeOffsets[i]));
	i = ( i + 0x1);
	goto label_goto_64;
	// 5301    .line 801
	// 5302    .end local v1    # "i":I
label_cond_7c:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
	goto label_goto_56;
	// 5310    .line 812
	// 5311    .restart local v1    # "i":I
label_cond_83:
	buf->append(cVar0);
	//    .end local v1    # "i":I
label_goto_86:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",typeMapData=")));
	if ( !(this->typeMapData) )  
		goto label_cond_b3;
	buf->append(cVar2);
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_94:
	if ( i >= this->typeMapData->size() )
		goto label_cond_b9;
	if ( i <= 0 )
		goto label_cond_9e;
	buf->append(cVar1);
label_cond_9e:
	buf->append(java::lang::Byte::toString(this->typeMapData[i]));
	i = ( i + 0x1);
	goto label_goto_94;
	// 5364    .line 814
	// 5365    .end local v1    # "i":I
label_cond_ac:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
	goto label_goto_86;
	// 5373    .line 826
label_cond_b3:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
label_cond_b9:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",finalStartYear=")))->append(this->finalStartYear);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",finalStartMillis=")))->append(this->finalStartMillis);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",finalZone=")))->append(this->finalZone);
	buf->append(cVar0);
	return buf->toString();

}
// .method public useDaylightTime()Z
bool android::icu::impl::OlsonTimeZone::useDaylightTime()
{
	
	long long current;
	bool cVar0;
	auto fields;
	long long start;
	int i;
	
	current = java::lang::System::currentTimeMillis({const[class].FS-Param});
	//    .local v0, "current":J
	if ( !(this->finalZone) )  
		goto label_cond_1c;
	if ( ((double)(current) < this->finalStartMillis) < 0 ) 
		goto label_cond_1c;
	if ( !(this->finalZone) )  
		goto label_cond_1a;
	cVar0 = this->finalZone->useDaylightTime();
label_goto_19:
	return cVar0;
label_cond_1a:
	cVar0 = 0x0;
	goto label_goto_19;
	// 5466    .line 319
label_cond_1c:
	fields = android::icu::impl::Grego::timeToFields(current, 0x0);
	//    .local v2, "fields":[I
	start = (android::icu::impl::Grego::fieldsToDay(fields[0x0], 0x0, 0x1) * 0x15180);
	//    .local v6, "start":J
	//    .local v4, "limit":J
	i = 0x0;
	//    .local v3, "i":I
label_goto_40:
	if ( i >= this->transitionCount )
		goto label_cond_4c;
	if ( (this->transitionTimes64[i] > (android::icu::impl::Grego::fieldsToDay(( fields[0x0] + 0x1), 0x0, 0x1) * 0x15180)) < 0 ) 
		goto label_cond_4e;
label_cond_4c:
	return 0x0;
	// 5537    .line 331
label_cond_4e:
	if ( (this->transitionTimes64[i] > start) < 0 ) 
		goto label_cond_5e;
	if ( !(this->dstOffsetAt(i)) )  
		goto label_cond_5e;
label_cond_5c:
	return 0x1;
	// 5559    .line 332
label_cond_5e:
	if ( (this->transitionTimes64[i] > start) <= 0 )
		goto label_cond_70;
	if ( i <= 0 )
		goto label_cond_70;
	if ( this->dstOffsetAt(( i + -0x1)) )     
		goto label_cond_5c;
label_cond_70:
	i = ( i + 0x1);
	goto label_goto_40;

}


