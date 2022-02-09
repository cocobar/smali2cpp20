#ifndef __android_icu_text_BytesDictionaryMatcher__
#define __android_icu_text_BytesDictionaryMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BytesDictionaryMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class BytesDictionaryMatcher : public android::icu::text::DictionaryMatcher {
protected:
private:
	std::shared_ptr<unsigned char[]> characters;
	int transform;
	int virtual transform(int c);
public:
	BytesDictionaryMatcher(std::shared_ptr<unsigned char[]> chars,int transform);
	int virtual getType();
	int virtual matches(std::shared_ptr<java::text::CharacterIterator> text_,int maxLength,std::shared_ptr<int[]> lengths,std::shared_ptr<int[]> count_,int limit,std::shared_ptr<int[]> values);
public:
	virtual ~BytesDictionaryMatcher(){
	}

}; // class BytesDictionaryMatcher
}; // namespace android::icu::text

#endif //__android_icu_text_BytesDictionaryMatcher__

