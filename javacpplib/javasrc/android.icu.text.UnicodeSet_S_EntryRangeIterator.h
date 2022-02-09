#ifndef __android_icu_text_UnicodeSet_S_EntryRangeIterator__
#define __android_icu_text_UnicodeSet_S_EntryRangeIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$EntryRangeIterator.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_EntryRange.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.util.Iterator.h"

namespace android::icu::text{
class UnicodeSet_S_EntryRangeIterator : public java::util::Iterator<android::icu::text::UnicodeSet_S_EntryRange> {
protected:
private:
	UnicodeSet_S_EntryRangeIterator(std::shared_ptr<android::icu::text::UnicodeSet> this_S_0);
public:
	int pos;
	std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRange> result;
	std::shared_ptr<android::icu::text::UnicodeSet> this_S_0;
	UnicodeSet_S_EntryRangeIterator(std::shared_ptr<android::icu::text::UnicodeSet> this_S_0,std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRangeIterator> _this1);
	bool virtual hasNext();
	std::shared_ptr<android::icu::text::UnicodeSet_S_EntryRange> virtual next();
	void virtual remove();
public:
	virtual ~UnicodeSet_S_EntryRangeIterator(){
	}

}; // class UnicodeSet_S_EntryRangeIterator
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_EntryRangeIterator__

