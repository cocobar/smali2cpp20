#ifndef __android_icu_text_UnhandledBreakEngine__
#define __android_icu_text_UnhandledBreakEngine__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnhandledBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "android.icu.text.LanguageBreakEngine.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class UnhandledBreakEngine : public android::icu::text::LanguageBreakEngine {
protected:
private:
	std::shared_ptr<std::vector<android::icu::text::UnicodeSet>> fHandled;
public:
	UnhandledBreakEngine();
	int virtual findBreaks(std::shared_ptr<java::text::CharacterIterator> text,int startPos,int endPos,bool reverse,int breakType,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> foundBreaks);
	void virtual handleChar(int c,int breakType);
	bool virtual handles(int c,int breakType);
public:
	virtual ~UnhandledBreakEngine(){
	}

}; // class UnhandledBreakEngine
}; // namespace android::icu::text

#endif //__android_icu_text_UnhandledBreakEngine__

