#ifndef __android_icu_text_DateTimePatternGenerator_S_PatternWithSkeletonFlag__
#define __android_icu_text_DateTimePatternGenerator_S_PatternWithSkeletonFlag__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$PatternWithSkeletonFlag.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_PatternWithSkeletonFlag : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> pattern;
	bool skeletonWasSpecified;
	DateTimePatternGenerator_S_PatternWithSkeletonFlag(std::shared_ptr<java::lang::String> pat,bool skelSpecified);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DateTimePatternGenerator_S_PatternWithSkeletonFlag(){
	}

}; // class DateTimePatternGenerator_S_PatternWithSkeletonFlag
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_PatternWithSkeletonFlag__

