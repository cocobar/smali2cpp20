#ifndef __android_icu_text_DictionaryBreakEngine_S_PossibleWord__
#define __android_icu_text_DictionaryBreakEngine_S_PossibleWord__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryBreakEngine$PossibleWord.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class DictionaryBreakEngine_S_PossibleWord : public java::lang::Object {
protected:
private:
	static int POSSIBLE_WORD_LIST_MAX;
	std::shared_ptr<int[]> count;
	int current;
	std::shared_ptr<int[]> lengths;
	int mark;
	int offset;
	int prefix;
public:
	DictionaryBreakEngine_S_PossibleWord();
	int virtual acceptMarked(std::shared_ptr<java::text::CharacterIterator> fIter);
	bool virtual backUp(std::shared_ptr<java::text::CharacterIterator> fIter);
	int virtual candidates(std::shared_ptr<java::text::CharacterIterator> fIter,std::shared_ptr<android::icu::text::DictionaryMatcher> dict,int rangeEnd);
	int virtual longestPrefix();
	void virtual markCurrent();
public:
	virtual ~DictionaryBreakEngine_S_PossibleWord(){
	}

}; // class DictionaryBreakEngine_S_PossibleWord
}; // namespace android::icu::text

#endif //__android_icu_text_DictionaryBreakEngine_S_PossibleWord__

