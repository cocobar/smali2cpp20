#ifndef __android_icu_text_SpoofChecker_S_CheckResult__
#define __android_icu_text_SpoofChecker_S_CheckResult__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$CheckResult.smali
#include "java2ctype.h"
#include "android.icu.text.SpoofChecker_S_RestrictionLevel.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class SpoofChecker_S_CheckResult : public java::lang::Object {
protected:
private:
public:
	int checks;
	std::shared_ptr<android::icu::text::UnicodeSet> numerics;
	int position;
	std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> restrictionLevel;
	SpoofChecker_S_CheckResult();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~SpoofChecker_S_CheckResult(){
	}

}; // class SpoofChecker_S_CheckResult
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_CheckResult__

