#ifndef __android_icu_util_UniversalTimeScale_S_TimeScaleData__
#define __android_icu_util_UniversalTimeScale_S_TimeScaleData__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\UniversalTimeScale$TimeScaleData.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::util{
class UniversalTimeScale_S_TimeScaleData : public java::lang::Object {
protected:
private:
public:
	long long epochOffset;
	long long epochOffsetM1;
	long long epochOffsetP1;
	long long fromMax;
	long long fromMin;
	long long maxRound;
	long long minRound;
	long long toMax;
	long long toMin;
	long long units;
	long long unitsRound;
	UniversalTimeScale_S_TimeScaleData(long long theUnits,long long theEpochOffset,long long theToMin,long long theToMax,long long theFromMin,long long theFromMax);
public:
	virtual ~UniversalTimeScale_S_TimeScaleData(){
	}

}; // class UniversalTimeScale_S_TimeScaleData
}; // namespace android::icu::util

#endif //__android_icu_util_UniversalTimeScale_S_TimeScaleData__

