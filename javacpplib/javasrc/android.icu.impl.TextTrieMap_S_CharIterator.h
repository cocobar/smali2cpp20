#ifndef __android_icu_impl_TextTrieMap_S_CharIterator__
#define __android_icu_impl_TextTrieMap_S_CharIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TextTrieMap$CharIterator.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.util.Iterator.h"

namespace android::icu::impl{
class TextTrieMap_S_CharIterator : public java::util::Iterator<java::lang::Character> {
protected:
private:
	bool _ignoreCase;
	int _nextIdx;
	std::shared_ptr<java::lang::Character> _remainingChar;
	int _startIdx;
	std::shared_ptr<java::lang::CharSequence> _text;
public:
	TextTrieMap_S_CharIterator(std::shared_ptr<java::lang::CharSequence> text,int offset,bool ignoreCase);
	bool virtual hasNext();
	std::shared_ptr<java::lang::Character> virtual next();
	int virtual nextIndex();
	int virtual processedLength();
	void virtual remove();
public:
	virtual ~TextTrieMap_S_CharIterator(){
	}

}; // class TextTrieMap_S_CharIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_TextTrieMap_S_CharIterator__

