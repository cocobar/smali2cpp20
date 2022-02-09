#ifndef __android_icu_text_StringMatcher__
#define __android_icu_text_StringMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringMatcher.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class StringMatcher : public android::icu::text::UnicodeMatcher, public android::icu::text::UnicodeReplacer {
protected:
private:
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data;
	int matchLimit;
	int matchStart;
	std::shared_ptr<java::lang::String> pattern;
	int segmentNumber;
public:
	StringMatcher(std::shared_ptr<java::lang::String> theString,int start,int limit,int segmentNum,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData);
	StringMatcher(std::shared_ptr<java::lang::String> theString,int segmentNum,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData);
	void virtual addMatchSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo);
	void virtual addReplacementSetTo(std::shared_ptr<android::icu::text::UnicodeSet> toUnionTo);
	int virtual matches(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<int[]> offset,int limit,bool incremental);
	bool virtual matchesIndexValue(int v);
	int virtual replace(std::shared_ptr<android::icu::text::Replaceable> text,int start,int limit,std::shared_ptr<int[]> cursor);
	void virtual resetMatch();
	std::shared_ptr<java::lang::String> virtual toPattern(bool escapeUnprintable);
	std::shared_ptr<java::lang::String> virtual toReplacerPattern(bool escapeUnprintable);
public:
	virtual ~StringMatcher(){
	}

}; // class StringMatcher
}; // namespace android::icu::text

#endif //__android_icu_text_StringMatcher__

