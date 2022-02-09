// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$PatternWithMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.DateTimePatternGenerator_S_DateTimeMatcher.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternWithMatcher.h"
#include "java.lang.String.h"

// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;)V
android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher::DateTimePatternGenerator_S_PatternWithMatcher(std::shared_ptr<java::lang::String> pat,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> matcher)
{
	
	//    .param p1, "pat"    # Ljava/lang/String;
	//    .param p2, "matcher"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pattern = pat;
	this->matcherWithSkeleton = matcher;
	return;

}


