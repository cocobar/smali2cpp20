#ifndef __android_icu_text_SearchIterator_S_Search__
#define __android_icu_text_SearchIterator_S_Search__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SearchIterator$Search.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.SearchIterator_S_ElementComparisonType.h"
#include "android.icu.text.SearchIterator.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class SearchIterator_S_Search : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> elementComparisonType_;
	std::shared_ptr<android::icu::text::BreakIterator> internalBreakIter_;
	bool isCanonicalMatch_;
	bool isForwardSearching_;
	bool isOverlap_;
	int matchedIndex_;
	bool reset_;
	std::shared_ptr<android::icu::text::SearchIterator> this_S_0;
	SearchIterator_S_Search(std::shared_ptr<android::icu::text::SearchIterator> this_S_0);
	int virtual beginIndex();
	std::shared_ptr<android::icu::text::BreakIterator> virtual breakIter();
	int virtual endIndex();
	int virtual matchedLength();
	void virtual setBreakIter(std::shared_ptr<android::icu::text::BreakIterator> breakIter);
	void virtual setMatchedLength(int matchedLength);
	void virtual setTarget(std::shared_ptr<java::text::CharacterIterator> text);
	std::shared_ptr<java::text::CharacterIterator> virtual text();
public:
	virtual ~SearchIterator_S_Search(){
	}

}; // class SearchIterator_S_Search
}; // namespace android::icu::text

#endif //__android_icu_text_SearchIterator_S_Search__

