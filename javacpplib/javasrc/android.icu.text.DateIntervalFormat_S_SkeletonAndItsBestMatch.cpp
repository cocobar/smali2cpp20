// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalFormat$SkeletonAndItsBestMatch.smali
#include "java2ctype.h"
#include "android.icu.text.DateIntervalFormat_S_SkeletonAndItsBestMatch.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::text::DateIntervalFormat_S_SkeletonAndItsBestMatch::DateIntervalFormat_S_SkeletonAndItsBestMatch(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> bestMatch)
{
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "bestMatch"    # Ljava/lang/String;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->skeleton = skeleton;
	this->bestMatchSkeleton = bestMatch;
	return;

}


