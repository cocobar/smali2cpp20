// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$PatternWithSkeletonFlag.smali
#include "java2ctype.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternWithSkeletonFlag.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>(Ljava/lang/String;Z)V
android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag::DateTimePatternGenerator_S_PatternWithSkeletonFlag(std::shared_ptr<java::lang::String> pat,bool skelSpecified)
{
	
	//    .param p1, "pat"    # Ljava/lang/String;
	//    .param p2, "skelSpecified"    # Z
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pattern = pat;
	this->skeletonWasSpecified = skelSpecified;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->pattern)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")))->append(this->skeletonWasSpecified)->toString();

}


