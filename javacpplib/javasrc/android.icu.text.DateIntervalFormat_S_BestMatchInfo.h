#ifndef __android_icu_text_DateIntervalFormat_S_BestMatchInfo__
#define __android_icu_text_DateIntervalFormat_S_BestMatchInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalFormat$BestMatchInfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateIntervalFormat_S_BestMatchInfo : public java::lang::Object {
protected:
private:
public:
	int bestMatchDistanceInfo;
	std::shared_ptr<java::lang::String> bestMatchSkeleton;
	DateIntervalFormat_S_BestMatchInfo(std::shared_ptr<java::lang::String> bestSkeleton,int difference);
public:
	virtual ~DateIntervalFormat_S_BestMatchInfo(){
	}

}; // class DateIntervalFormat_S_BestMatchInfo
}; // namespace android::icu::text

#endif //__android_icu_text_DateIntervalFormat_S_BestMatchInfo__

