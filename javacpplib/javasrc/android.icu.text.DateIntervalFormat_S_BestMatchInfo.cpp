// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalFormat$BestMatchInfo.smali
#include "java2ctype.h"
#include "android.icu.text.DateIntervalFormat_S_BestMatchInfo.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;I)V
android::icu::text::DateIntervalFormat_S_BestMatchInfo::DateIntervalFormat_S_BestMatchInfo(std::shared_ptr<java::lang::String> bestSkeleton,int difference)
{
	
	//    .param p1, "bestSkeleton"    # Ljava/lang/String;
	//    .param p2, "difference"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->bestMatchSkeleton = bestSkeleton;
	this->bestMatchDistanceInfo = difference;
	return;

}


