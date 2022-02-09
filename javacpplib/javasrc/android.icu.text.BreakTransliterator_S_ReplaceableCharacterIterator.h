#ifndef __android_icu_text_BreakTransliterator_S_ReplaceableCharacterIterator__
#define __android_icu_text_BreakTransliterator_S_ReplaceableCharacterIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BreakTransliterator$ReplaceableCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class BreakTransliterator_S_ReplaceableCharacterIterator : public java::text::CharacterIterator {
protected:
private:
	int begin;
	int end;
	int pos;
	std::shared_ptr<android::icu::text::Replaceable> text;
public:
	BreakTransliterator_S_ReplaceableCharacterIterator(std::shared_ptr<android::icu::text::Replaceable> text,int begin,int end,int pos);
	std::shared_ptr<java::lang::Object> virtual clone();
	char virtual current();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	char virtual first();
	int virtual getBeginIndex();
	int virtual getEndIndex();
	int virtual getIndex();
	int virtual hashCode();
	char virtual last();
	char virtual next();
	char virtual previous();
	char virtual setIndex(int p);
	void virtual setText(std::shared_ptr<android::icu::text::Replaceable> text);
public:
	virtual ~BreakTransliterator_S_ReplaceableCharacterIterator(){
	}

}; // class BreakTransliterator_S_ReplaceableCharacterIterator
}; // namespace android::icu::text

#endif //__android_icu_text_BreakTransliterator_S_ReplaceableCharacterIterator__

