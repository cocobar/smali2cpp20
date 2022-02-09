#ifndef __android_icu_impl_SimpleFilteredSentenceBreakIterator__
#define __android_icu_impl_SimpleFilteredSentenceBreakIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\SimpleFilteredSentenceBreakIterator.smali
#include "java2ctype.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.UCharacterIterator.h"
#include "android.icu.util.CharsTrie.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::impl{
class SimpleFilteredSentenceBreakIterator : public android::icu::text::BreakIterator {
protected:
private:
	std::shared_ptr<android::icu::util::CharsTrie> backwardsTrie;
	std::shared_ptr<android::icu::text::BreakIterator> delegate;
	std::shared_ptr<android::icu::util::CharsTrie> forwardsPartialTrie;
	std::shared_ptr<android::icu::text::UCharacterIterator> text;
	bool virtual breakExceptionAt(int n);
	int virtual internalNext(int n);
	int virtual internalPrev(int n);
	void virtual resetState();
public:
	SimpleFilteredSentenceBreakIterator(std::shared_ptr<android::icu::text::BreakIterator> adoptBreakIterator,std::shared_ptr<android::icu::util::CharsTrie> forwardsPartialTrie,std::shared_ptr<android::icu::util::CharsTrie> backwardsTrie);
	std::shared_ptr<java::lang::Object> virtual clone();
	int virtual current();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual first();
	int virtual following(int offset);
	std::shared_ptr<java::text::CharacterIterator> virtual getText();
	int virtual hashCode();
	bool virtual isBoundary(int offset);
	int virtual last();
	int virtual next();
	int virtual next(int n);
	int virtual preceding(int offset);
	int virtual previous();
	void virtual setText(std::shared_ptr<java::text::CharacterIterator> newText);
public:
	virtual ~SimpleFilteredSentenceBreakIterator(){
	}

}; // class SimpleFilteredSentenceBreakIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_SimpleFilteredSentenceBreakIterator__

