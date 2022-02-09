#ifndef __android_icu_impl_CharacterIteratorWrapper__
#define __android_icu_impl_CharacterIteratorWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CharacterIteratorWrapper.smali
#include "java2ctype.h"
#include "android.icu.text.UCharacterIterator.hh"

namespace android::icu::impl{
class CharacterIteratorWrapper : public android::icu::text::UCharacterIterator {
public:
	CharacterIteratorWrapper();
	virtual ~CharacterIteratorWrapper();

}; // class CharacterIteratorWrapper
}; // namespace android::icu::impl

#endif //__android_icu_impl_CharacterIteratorWrapper__

