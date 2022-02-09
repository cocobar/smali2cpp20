#ifndef __android_icu_text_KhmerBreakEngine__
#define __android_icu_text_KhmerBreakEngine__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\KhmerBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.DictionaryBreakEngine.h"
#include "android.icu.text.DictionaryMatcher.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class KhmerBreakEngine : public android::icu::text::DictionaryBreakEngine {
protected:
private:
	static unsigned char KHMER_LOOKAHEAD;
	static unsigned char KHMER_MIN_WORD;
	static unsigned char KHMER_MIN_WORD_SPAN;
	static unsigned char KHMER_PREFIX_COMBINE_THRESHOLD;
	static unsigned char KHMER_ROOT_COMBINE_THRESHOLD;
	static std::shared_ptr<android::icu::text::UnicodeSet> fBeginWordSet;
	static std::shared_ptr<android::icu::text::UnicodeSet> fEndWordSet;
	static std::shared_ptr<android::icu::text::UnicodeSet> fKhmerWordSet;
	static std::shared_ptr<android::icu::text::UnicodeSet> fMarkSet;
	std::shared_ptr<android::icu::text::DictionaryMatcher> fDictionary;
public:
	static void static_cinit();
	KhmerBreakEngine();
	int virtual divideUpDictionaryRange(std::shared_ptr<java::text::CharacterIterator> fIter,int rangeStart,int rangeEnd,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> foundBreaks);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	bool virtual handles(int c,int breakType);
	int virtual hashCode();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::KhmerBreakEngine::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~KhmerBreakEngine(){
	}

}; // class KhmerBreakEngine
}; // namespace android::icu::text

#endif //__android_icu_text_KhmerBreakEngine__

