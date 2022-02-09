#ifndef __android_icu_text_DateTimePatternGenerator_S_PatternInfo__
#define __android_icu_text_DateTimePatternGenerator_S_PatternInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$PatternInfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_PatternInfo : public java::lang::Object {
protected:
private:
public:
	static int BASE_CONFLICT;
	static int CONFLICT;
	static int OK;
	std::shared_ptr<java::lang::String> conflictingPattern;
	int status;
	DateTimePatternGenerator_S_PatternInfo();
public:
	virtual ~DateTimePatternGenerator_S_PatternInfo(){
	}

}; // class DateTimePatternGenerator_S_PatternInfo
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_PatternInfo__

