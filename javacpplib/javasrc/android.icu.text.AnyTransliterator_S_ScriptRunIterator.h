#ifndef __android_icu_text_AnyTransliterator_S_ScriptRunIterator__
#define __android_icu_text_AnyTransliterator_S_ScriptRunIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AnyTransliterator$ScriptRunIterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class AnyTransliterator_S_ScriptRunIterator : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::Replaceable> text;
	int textLimit;
	int textStart;
public:
	int limit;
	int scriptCode;
	int start;
	AnyTransliterator_S_ScriptRunIterator(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit);
	void virtual adjustLimit(int delta);
	bool virtual next();
public:
	virtual ~AnyTransliterator_S_ScriptRunIterator(){
	}

}; // class AnyTransliterator_S_ScriptRunIterator
}; // namespace android::icu::text

#endif //__android_icu_text_AnyTransliterator_S_ScriptRunIterator__

