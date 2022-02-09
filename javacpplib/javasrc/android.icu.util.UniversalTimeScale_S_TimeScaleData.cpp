// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\UniversalTimeScale$TimeScaleData.smali
#include "java2ctype.h"
#include "android.icu.util.UniversalTimeScale_S_TimeScaleData.h"

// .method constructor <init>(JJJJJJ)V
android::icu::util::UniversalTimeScale_S_TimeScaleData::UniversalTimeScale_S_TimeScaleData(long long theUnits,long long theEpochOffset,long long theToMin,long long theToMax,long long theFromMin,long long theFromMax)
{
	
	long long cVar0;
	
	//    .param p1, "theUnits"    # J
	//    .param p3, "theEpochOffset"    # J
	//    .param p5, "theToMin"    # J
	//    .param p7, "theToMax"    # J
	//    .param p9, "theFromMin"    # J
	//    .param p11, "theFromMax"    # J
	// 053    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->units = theUnits;
	this->unitsRound = (theUnits / 0x2);
	this->minRound = (this->unitsRound +  -0x8000000000000000L);
	this->maxRound = (0x7fffffffffffffffL - this->unitsRound);
	this->epochOffset = (theEpochOffset / theUnits);
	if ( (theUnits > 0x1) )     
		goto label_cond_3a;
	cVar0 = this->epochOffset;
	this->epochOffsetM1 = cVar0;
	this->epochOffsetP1 = cVar0;
label_goto_2d:
	this->toMin = theToMin;
	this->toMax = theToMax;
	this->fromMin = theFromMin;
	this->fromMax = theFromMax;
	return;
	// 122    .line 278
label_cond_3a:
	this->epochOffsetP1 = (this->epochOffset +  0x1);
	this->epochOffsetM1 = (this->epochOffset -  0x1);
	goto label_goto_2d;

}


