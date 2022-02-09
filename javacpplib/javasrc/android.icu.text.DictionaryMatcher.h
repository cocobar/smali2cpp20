#ifndef __android_icu_text_DictionaryMatcher__
#define __android_icu_text_DictionaryMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryMatcher.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class DictionaryMatcher : public java::lang::Object {
protected:
private:
public:
	DictionaryMatcher();
	int getType() = 0;
	int virtual matches(std::shared_ptr<java::text::CharacterIterator> text,int maxLength,std::shared_ptr<int[]> lengths,std::shared_ptr<int[]> count,int limit);
	int matches(std::shared_ptr<java::text::CharacterIterator> var0,int var1,std::shared_ptr<int[]> var2,std::shared_ptr<int[]> var3,int var4,std::shared_ptr<int[]> var5) = 0;
public:
	virtual ~DictionaryMatcher(){
	}

}; // class DictionaryMatcher
}; // namespace android::icu::text

#endif //__android_icu_text_DictionaryMatcher__

