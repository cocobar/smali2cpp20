#ifndef __android_icu_text_UnicodeSet_S_EntryRangeIterator__
#define __android_icu_text_UnicodeSet_S_EntryRangeIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$EntryRangeIterator.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_EntryRange.h"
#include "java.util.Iterator.h"

namespace android::icu::text{
class UnicodeSet_S_EntryRangeIterator : public java::util::Iterator<android::icu::text::UnicodeSet_S_EntryRange> {
public:
	UnicodeSet_S_EntryRangeIterator();
	virtual ~UnicodeSet_S_EntryRangeIterator();

}; // class UnicodeSet_S_EntryRangeIterator
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_EntryRangeIterator__

