#ifndef __android_icu_text_CharsDictionaryMatcher__
#define __android_icu_text_CharsDictionaryMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CharsDictionaryMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "java.lang.CharSequence.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class CharsDictionaryMatcher : public android::icu::text::DictionaryMatcher {
protected:
private:
	std::shared_ptr<java::lang::CharSequence> characters;
public:
	CharsDictionaryMatcher(std::shared_ptr<java::lang::CharSequence> chars);
	int virtual getType();
	int virtual matches(std::shared_ptr<java::text::CharacterIterator> text_,int maxLength,std::shared_ptr<int[]> lengths,std::shared_ptr<int[]> count_,int limit,std::shared_ptr<int[]> values);
public:
	virtual ~CharsDictionaryMatcher(){
	}

}; // class CharsDictionaryMatcher
}; // namespace android::icu::text

#endif //__android_icu_text_CharsDictionaryMatcher__

