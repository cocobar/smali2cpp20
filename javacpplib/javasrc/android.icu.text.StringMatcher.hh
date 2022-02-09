#ifndef __android_icu_text_StringMatcher__
#define __android_icu_text_StringMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeMatcher.hh"
#include "android.icu.text.UnicodeReplacer.hh"

namespace android::icu::text{
class StringMatcher : public android::icu::text::UnicodeMatcher, public android::icu::text::UnicodeReplacer {
public:
	StringMatcher();
	virtual ~StringMatcher();

}; // class StringMatcher
}; // namespace android::icu::text

#endif //__android_icu_text_StringMatcher__

