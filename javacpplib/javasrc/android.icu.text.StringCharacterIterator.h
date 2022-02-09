#ifndef __android_icu_text_StringCharacterIterator__
#define __android_icu_text_StringCharacterIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringCharacterIterator.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class StringCharacterIterator : public java::text::CharacterIterator {
protected:
private:
	int begin;
	int end;
	int pos;
	std::shared_ptr<java::lang::String> text;
public:
	StringCharacterIterator(std::shared_ptr<java::lang::String> text);
	StringCharacterIterator(std::shared_ptr<java::lang::String> text,int pos);
	StringCharacterIterator(std::shared_ptr<java::lang::String> text,int begin,int end,int pos);
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
	void virtual setText(std::shared_ptr<java::lang::String> text);
public:
	virtual ~StringCharacterIterator(){
	}

}; // class StringCharacterIterator
}; // namespace android::icu::text

#endif //__android_icu_text_StringCharacterIterator__

