#ifndef __android_icu_impl_UCharacterIteratorWrapper__
#define __android_icu_impl_UCharacterIteratorWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterIteratorWrapper.smali
#include "java2ctype.h"
#include "java.text.CharacterIterator.hh"

namespace android::icu::impl{
class UCharacterIteratorWrapper : public java::text::CharacterIterator {
public:
	UCharacterIteratorWrapper();
	virtual ~UCharacterIteratorWrapper();

}; // class UCharacterIteratorWrapper
}; // namespace android::icu::impl

#endif //__android_icu_impl_UCharacterIteratorWrapper__

