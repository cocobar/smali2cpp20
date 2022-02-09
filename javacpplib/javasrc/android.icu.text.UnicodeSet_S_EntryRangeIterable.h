#ifndef __android_icu_text_UnicodeSet_S_EntryRangeIterable__
#define __android_icu_text_UnicodeSet_S_EntryRangeIterable__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$EntryRangeIterable.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_EntryRange.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Iterable.h"
#include "java.util.Iterator.h"

namespace android::icu::text{
class UnicodeSet_S_EntryRangeIterable : public java::lang::Iterable<android::icu::text::UnicodeSet_S_EntryRange> {
protected:
private:
	UnicodeSet_S_EntryRangeIterable(std::shared_ptr<android::icu::text::UnicodeSet> this_S_0);
public:
	std::shared_ptr<android::icu::text::UnicodeSet> this_S_0;
	UnicodeSet_S_EntryRangeIterable(std::shared_ptr<android::icu::text::UnicodeSet> this_S_0,std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRangeIterable> _this1);
	std::shared_ptr<java::util::Iterator<android::icu::text::UnicodeSet_S_EntryRange>> virtual iterator();
public:
	virtual ~UnicodeSet_S_EntryRangeIterable(){
	}

}; // class UnicodeSet_S_EntryRangeIterable
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_EntryRangeIterable__

