#ifndef __android_icu_text_LanguageBreakEngine__
#define __android_icu_text_LanguageBreakEngine__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\LanguageBreakEngine.smali
#include "java2ctype.h"
#include "android.icu.text.DictionaryBreakEngine_S_DequeI.h"
#include "java.lang.Object.h"
#include "java.text.CharacterIterator.h"

namespace android::icu::text{
class LanguageBreakEngine : public java::lang::Object {
protected:
private:
public:
	int findBreaks(std::shared_ptr<java::text::CharacterIterator> var0,int var1,int var2,bool var3,int var4,std::shared_ptr<android::icu::text::DictionaryBreakEngine_S_DequeI> var5) = 0;
	bool handles(int var0,int var1) = 0;
	LanguageBreakEngine(){ };
	virtual ~LanguageBreakEngine(){ };

}; // class LanguageBreakEngine
}; // namespace android::icu::text

#endif //__android_icu_text_LanguageBreakEngine__

