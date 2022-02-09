#ifndef __android_icu_impl_UCharacterIteratorWrapper__
#define __android_icu_impl_UCharacterIteratorWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterIteratorWrapper.smali
#include "java2ctype.h"
#include "android.icu.text.UCharacterIterator.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::impl{
class UCharacterIteratorWrapper : public java::text::CharacterIterator {
protected:
private:
	std::shared_ptr<android::icu::text::UCharacterIterator> iterator;
public:
	UCharacterIteratorWrapper(std::shared_ptr<android::icu::text::UCharacterIterator> iter);
	std::shared_ptr<java::lang::Object> virtual clone();
	char virtual current();
	char virtual first();
	int virtual getBeginIndex();
	int virtual getEndIndex();
	int virtual getIndex();
	char virtual last();
	char virtual next();
	char virtual previous();
	char virtual setIndex(int position);
public:
	virtual ~UCharacterIteratorWrapper(){
	}

}; // class UCharacterIteratorWrapper
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterIteratorWrapper__

