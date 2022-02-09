#ifndef __android_icu_text_UnicodeSet__
#define __android_icu_text_UnicodeSet__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeFilter.hh"
#include "android.icu.util.Freezable.h"
#include "java.lang.Comparable.h"
#include "java.lang.Iterable.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeSet : public android::icu::text::UnicodeFilter, public java::lang::Iterable<java::lang::String>, public java::lang::Comparable<android::icu::text::UnicodeSet>, public android::icu::util::Freezable<android::icu::text::UnicodeSet> {
public:
	UnicodeSet();
	virtual ~UnicodeSet();

}; // class UnicodeSet
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet__

