#ifndef __android_icu_text_UForwardCharacterIterator__
#define __android_icu_text_UForwardCharacterIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UForwardCharacterIterator.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class UForwardCharacterIterator : public java::lang::Object {
protected:
private:
public:
	static int DONE;
	int next() = 0;
	int nextCodePoint() = 0;
	UForwardCharacterIterator(){ };
	virtual ~UForwardCharacterIterator(){ };

}; // class UForwardCharacterIterator
}; // namespace android::icu::text

#endif //__android_icu_text_UForwardCharacterIterator__

