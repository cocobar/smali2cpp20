#ifndef __android_icu_impl_CharacterIteration__
#define __android_icu_impl_CharacterIteration__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CharacterIteration.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::impl{
class CharacterIteration : public java::lang::Object {
protected:
private:
	CharacterIteration();
public:
	static int DONE32;
	static int current32(std::shared_ptr<java::text::CharacterIterator> ci);
	static int next32(std::shared_ptr<java::text::CharacterIterator> ci);
	static int nextTrail32(std::shared_ptr<java::text::CharacterIterator> ci,int lead);
	static int previous32(std::shared_ptr<java::text::CharacterIterator> ci);
public:
	virtual ~CharacterIteration(){
	}

}; // class CharacterIteration
}; // namespace android::icu::impl

#endif //__android_icu_impl_CharacterIteration__

