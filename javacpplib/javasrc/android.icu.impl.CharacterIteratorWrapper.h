#ifndef __android_icu_impl_CharacterIteratorWrapper__
#define __android_icu_impl_CharacterIteratorWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CharacterIteratorWrapper.smali
#include "java2ctype.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::impl{
class CharacterIteratorWrapper : public android::icu::text::UCharacterIterator {
protected:
private:
	std::shared_ptr<java::text::CharacterIterator> iterator;
public:
	CharacterIteratorWrapper(std::shared_ptr<java::text::CharacterIterator> iter);
	std::shared_ptr<java::lang::Object> virtual clone();
	int virtual current();
	std::shared_ptr<java::text::CharacterIterator> virtual getCharacterIterator();
	int virtual getIndex();
	int virtual getLength();
	int virtual getText(std::shared_ptr<char[]> fillIn,int offset);
	int virtual moveIndex(int delta);
	int virtual next();
	int virtual previous();
	void virtual setIndex(int index);
	void virtual setToLimit();
public:
	virtual ~CharacterIteratorWrapper(){
	}

}; // class CharacterIteratorWrapper
}; // namespace android::icu::impl

#endif //__android_icu_impl_CharacterIteratorWrapper__

