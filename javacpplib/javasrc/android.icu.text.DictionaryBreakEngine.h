#ifndef __android_icu_text_DictionaryBreakEngine__
#define __android_icu_text_DictionaryBreakEngine__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DictionaryBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.LanguageBreakEngine.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Integer.h"
#include "java.text.CharacterIterator.h"
#include "java.util.BitSet.h"

namespace android::icu::text{
class DictionaryBreakEngine : public android::icu::text::LanguageBreakEngine {
protected:
private:
	std::shared_ptr<java::util::BitSet> fTypes;
public:
	std::shared_ptr<android::icu::text::UnicodeSet> fSet;
	DictionaryBreakEngine(std::shared_ptr<std::vector<java::lang::Integer>> breakTypes);
	int divideUpDictionaryRange(std::shared_ptr<java::text::CharacterIterator> var0,int var1,int var2,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> var3) = 0;
	int virtual findBreaks(std::shared_ptr<java::text::CharacterIterator> text,int startPos,int endPos,bool reverse,int breakType,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> foundBreaks);
	bool virtual handles(int c,int breakType);
	void virtual setCharacters(std::shared_ptr<android::icu::text::UnicodeSet> set);
public:
	virtual ~DictionaryBreakEngine(){
	}

}; // class DictionaryBreakEngine
}; // namespace android::icu::text

#endif //__android_icu_text_DictionaryBreakEngine__

