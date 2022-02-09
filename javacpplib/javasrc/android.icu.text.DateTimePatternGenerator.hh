#ifndef __android_icu_text_DateTimePatternGenerator__
#define __android_icu_text_DateTimePatternGenerator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator.smali
#include "java2ctype.h"
#include "android.icu.util.Freezable.h"
#include "java.lang.Cloneable.h"

namespace android::icu::text{
class DateTimePatternGenerator : public android::icu::util::Freezable<android::icu::text::DateTimePatternGenerator>, public java::lang::Cloneable {
public:
	DateTimePatternGenerator();
	virtual ~DateTimePatternGenerator();

}; // class DateTimePatternGenerator
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator__

