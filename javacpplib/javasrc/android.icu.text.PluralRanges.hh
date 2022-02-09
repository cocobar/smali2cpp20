#ifndef __android_icu_text_PluralRanges__
#define __android_icu_text_PluralRanges__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralRanges.smali
#include "java2ctype.h"
#include "android.icu.util.Freezable.h"
#include "java.lang.Comparable.h"

namespace android::icu::text{
class PluralRanges : public android::icu::util::Freezable<android::icu::text::PluralRanges>, public java::lang::Comparable<android::icu::text::PluralRanges> {
public:
	PluralRanges();
	virtual ~PluralRanges();

}; // class PluralRanges
}; // namespace android::icu::text

#endif //__android_icu_text_PluralRanges__

