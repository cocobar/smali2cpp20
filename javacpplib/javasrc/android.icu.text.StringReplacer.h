#ifndef __android_icu_text_StringReplacer__
#define __android_icu_text_StringReplacer__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringReplacer.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class StringReplacer : public android::icu::text::UnicodeReplacer {
protected:
private:
	int cursorPos;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data;
	bool hasCursor;
	bool isComplex;
	std::shared_ptr<java::lang::String> output;
public:
	StringReplacer(std::shared_ptr<java::lang::String> theOutput,int theCursorPos,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData);
	StringReplacer(std::shared_ptr<java::lang::String> theOutput,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData);
	void virtual addReplacementSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo);
	int virtual replace(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit,std::shared_ptr<int[]> cursor);
	std::shared_ptr<java::lang::String> virtual toReplacerPattern(bool escapeUnprintable);
public:
	virtual ~StringReplacer(){
	}

}; // class StringReplacer
}; // namespace android::icu::text

#endif //__android_icu_text_StringReplacer__

