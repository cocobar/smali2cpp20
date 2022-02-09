#ifndef __android_icu_text_CjkBreakEngine__
#define __android_icu_text_CjkBreakEngine__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CjkBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.DictionaryBreakEngine.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class CjkBreakEngine : public android::icu::text::DictionaryBreakEngine {
protected:
private:
	static std::shared_ptr<android::icu::text::UnicodeSet> fHanWordSet;
	static std::shared_ptr<android::icu::text::UnicodeSet> fHangulWordSet;
	static std::shared_ptr<android::icu::text::UnicodeSet> fHiraganaWordSet;
	static std::shared_ptr<android::icu::text::UnicodeSet> fKatakanaWordSet;
	static int kMaxKatakanaGroupLength;
	static int kMaxKatakanaLength;
	static int kint32max;
	static int maxSnlp;
	std::shared_ptr<android::icu::text::DictionaryMatcher> fDictionary;
	static int getKatakanaCost(int wordlength);
	static bool isKatakana(int value);
public:
	static void static_cinit();
	CjkBreakEngine(bool korean);
	int virtual divideUpDictionaryRange(std::shared_ptr<java::text::CharacterIterator> inText,int startPos,int endPos,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> foundBreaks);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CjkBreakEngine::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CjkBreakEngine(){
	}

}; // class CjkBreakEngine
}; // namespace android::icu::text

#endif //__android_icu_text_CjkBreakEngine__

