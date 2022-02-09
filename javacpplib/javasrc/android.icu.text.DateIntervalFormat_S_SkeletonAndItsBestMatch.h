#ifndef __android_icu_text_DateIntervalFormat_S_SkeletonAndItsBestMatch__
#define __android_icu_text_DateIntervalFormat_S_SkeletonAndItsBestMatch__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalFormat$SkeletonAndItsBestMatch.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateIntervalFormat_S_SkeletonAndItsBestMatch : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> bestMatchSkeleton;
	std::shared_ptr<java::lang::String> skeleton;
	DateIntervalFormat_S_SkeletonAndItsBestMatch(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> bestMatch);
public:
	virtual ~DateIntervalFormat_S_SkeletonAndItsBestMatch(){
	}

}; // class DateIntervalFormat_S_SkeletonAndItsBestMatch
}; // namespace android::icu::text

#endif //__android_icu_text_DateIntervalFormat_S_SkeletonAndItsBestMatch__

