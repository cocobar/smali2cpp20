#ifndef __android_icu_text_UCharacterIterator__
#define __android_icu_text_UCharacterIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.text.UForwardCharacterIterator.hh"
#include "java.lang.Cloneable.hh"

namespace android::icu::text{
class UCharacterIterator : public java::lang::Cloneable, public android::icu::text::UForwardCharacterIterator {
public:
	UCharacterIterator();
	virtual ~UCharacterIterator();

}; // class UCharacterIterator
}; // namespace android::icu::text

#endif //__android_icu_text_UCharacterIterator__

