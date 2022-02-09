#ifndef __android_icu_text_TransliterationRule__
#define __android_icu_text_TransliterationRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliterationRule.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.StringMatcher.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeReplacer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TransliterationRule : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::StringMatcher> anteContext;
	int anteContextLength;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> data;
	std::shared_ptr<android::icu::text::StringMatcher> key;
	int keyLength;
	std::shared_ptr<android::icu::text::UnicodeReplacer> output;
	std::shared_ptr<java::lang::String> pattern;
	std::shared_ptr<android::icu::text::StringMatcher> postContext;
public:
	static int ANCHOR_END;
	static int ANCHOR_START;
	unsigned char flags;
	std::shared_ptr<std::vector<android::icu::text::UnicodeMatcher>> segments;
	TransliterationRule(std::shared_ptr<java::lang::String> input,int anteContextPos,int postContextPos,std::shared_ptr<java::lang::String> output,int cVar0,int cursorOffset,std::shared_ptr<std::vector<android::icu::text::UnicodeMatcher>> segs,bool anchorStart,bool anchorEnd,std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> theData);
	static int posAfter(std::shared_ptr<android::icu::text::Replaceable> str,int pos);
	static int posBefore(std::shared_ptr<android::icu::text::Replaceable> str,int pos);
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> filter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet,std::shared_ptr<android::icu::text::UnicodeSet> revisiting);
	int virtual getAnteContextLength();
	int virtual getIndexValue();
	bool virtual masks(std::shared_ptr<android::icu::text::TransliterationRule> r2);
	int virtual matchAndReplace(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool incremental);
	bool virtual matchesIndexValue(int v);
	std::shared_ptr<java::lang::String> virtual toRule(bool escapeUnprintable);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~TransliterationRule(){
	}

}; // class TransliterationRule
}; // namespace android::icu::text

#endif //__android_icu_text_TransliterationRule__

