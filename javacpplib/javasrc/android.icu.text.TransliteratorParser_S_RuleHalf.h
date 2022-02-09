#ifndef __android_icu_text_TransliteratorParser_S_RuleHalf__
#define __android_icu_text_TransliteratorParser_S_RuleHalf__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser$RuleHalf.smali
#include "java2ctype.h"
#include "android.icu.text.TransliteratorParser.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::text{
class TransliteratorParser_S_RuleHalf : public java::lang::Object {
protected:
private:
	int cursorOffsetPos;
	int nextSegmentNumber;
	TransliteratorParser_S_RuleHalf();
	int virtual parseSection(std::shared_ptr<java::lang::String> rule,int pos,int limit,std::shared_ptr<android::icu::text::TransliteratorParser> parser,std::shared_ptr<java::lang::StringBuffer> buf,std::shared_ptr<android::icu::text::UnicodeSet> illegal,bool isSegment);
public:
	bool anchorEnd;
	bool anchorStart;
	int ante;
	int cursor;
	int cursorOffset;
	int post;
	std::shared_ptr<java::lang::String> text;
	TransliteratorParser_S_RuleHalf(std::shared_ptr<android::icu::text::TransliteratorParser_S_RuleHalf> _this0);
	bool virtual isValidInput(std::shared_ptr<android::icu::text::TransliteratorParser> parser);
	bool virtual isValidOutput(std::shared_ptr<android::icu::text::TransliteratorParser> parser);
	int virtual parse(std::shared_ptr<java::lang::String> rule,int pos,int limit,std::shared_ptr<android::icu::text::TransliteratorParser> parser);
	void virtual removeContext();
public:
	virtual ~TransliteratorParser_S_RuleHalf(){
	}

}; // class TransliteratorParser_S_RuleHalf
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorParser_S_RuleHalf__

