#ifndef __android_icu_text_SearchIterator__
#define __android_icu_text_SearchIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SearchIterator.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.SearchIterator_S_ElementComparisonType.h"
#include "android.icu.text.SearchIterator_S_Search.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class SearchIterator : public java::lang::Object {
protected:
	std::shared_ptr<android::icu::text::BreakIterator> breakIterator;
	int matchLength;
	std::shared_ptr<java::text::CharacterIterator> targetText;
	SearchIterator(std::shared_ptr<java::text::CharacterIterator> target,std::shared_ptr<android::icu::text::BreakIterator> breaker);
	int handleNext(int var0) = 0;
	int handlePrevious(int var0) = 0;
	void virtual setMatchLength(int length);
	void virtual setMatchNotFound();
private:
public:
	static int DONE;
	std::shared_ptr<android::icu::text::SearchIterator_S_Search> search_;
	int virtual first();
	int virtual following(int position);
	std::shared_ptr<android::icu::text::BreakIterator> virtual getBreakIterator();
	std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> virtual getElementComparisonType();
	int getIndex() = 0;
	int virtual getMatchLength();
	int virtual getMatchStart();
	std::shared_ptr<java::lang::String> virtual getMatchedText();
	std::shared_ptr<java::text::CharacterIterator> virtual getTarget();
	bool virtual isOverlapping();
	int virtual last();
	int virtual next();
	int virtual preceding(int position);
	int virtual previous();
	void virtual reset();
	void virtual setBreakIterator(std::shared_ptr<android::icu::text::BreakIterator> breakiter);
	void virtual setElementComparisonType(std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> type);
	void virtual setIndex(int position);
	void virtual setOverlapping(bool allowOverlap);
	void virtual setTarget(std::shared_ptr<java::text::CharacterIterator> text);
public:
	virtual ~SearchIterator(){
	}

}; // class SearchIterator
}; // namespace android::icu::text

#endif //__android_icu_text_SearchIterator__

