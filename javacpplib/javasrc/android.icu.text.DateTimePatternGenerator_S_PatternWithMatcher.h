#ifndef __android_icu_text_DateTimePatternGenerator_S_PatternWithMatcher__
#define __android_icu_text_DateTimePatternGenerator_S_PatternWithMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$PatternWithMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.DateTimePatternGenerator_S_DateTimeMatcher.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_PatternWithMatcher : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> matcherWithSkeleton;
	std::shared_ptr<java::lang::String> pattern;
	DateTimePatternGenerator_S_PatternWithMatcher(std::shared_ptr<java::lang::String> pat,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> matcher);
public:
	virtual ~DateTimePatternGenerator_S_PatternWithMatcher(){
	}

}; // class DateTimePatternGenerator_S_PatternWithMatcher
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_PatternWithMatcher__

