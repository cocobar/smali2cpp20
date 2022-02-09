#ifndef __android_icu_lang_UScriptRun_S_ParenStackEntry__
#define __android_icu_lang_UScriptRun_S_ParenStackEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\lang\UScriptRun$ParenStackEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::lang{
class UScriptRun_S_ParenStackEntry : public java::lang::Object {
protected:
private:
public:
	int pairIndex;
	int scriptCode;
	UScriptRun_S_ParenStackEntry(int thePairIndex,int theScriptCode);
public:
	virtual ~UScriptRun_S_ParenStackEntry(){
	}

}; // class UScriptRun_S_ParenStackEntry
}; // namespace android::icu::lang

#endif //__android_icu_lang_UScriptRun_S_ParenStackEntry__

