#ifndef __android_icu_text_TransliteratorParser_S_ParseData__
#define __android_icu_text_TransliteratorParser_S_ParseData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser$ParseData.smali
#include "java2ctype.h"
#include "android.icu.text.SymbolTable.h"
#include "android.icu.text.TransliteratorParser.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "java.lang.String.h"
#include "java.text.ParsePosition.h"

namespace android::icu::text{
class TransliteratorParser_S_ParseData : public android::icu::text::SymbolTable {
protected:
private:
	TransliteratorParser_S_ParseData(std::shared_ptr<android::icu::text::TransliteratorParser> this_S_0);
public:
	std::shared_ptr<android::icu::text::TransliteratorParser> this_S_0;
	TransliteratorParser_S_ParseData(std::shared_ptr<android::icu::text::TransliteratorParser> this_S_0,std::shared_ptr<android::icu::text::TransliteratorParser_S_ParseData> _this1);
	bool virtual isMatcher(int ch);
	bool virtual isReplacer(int ch);
	char virtual lookup(std::shared_ptr<java::lang::String> name);
	std::shared_ptr<android::icu::text::UnicodeMatcher> virtual lookupMatcher(int ch);
	std::shared_ptr<java::lang::String> virtual parseReference(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,int limit);
public:
	virtual ~TransliteratorParser_S_ParseData(){
	}

}; // class TransliteratorParser_S_ParseData
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorParser_S_ParseData__

