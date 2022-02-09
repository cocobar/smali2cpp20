#ifndef __android_icu_text_TransliteratorParser_S_RuleBody__
#define __android_icu_text_TransliteratorParser_S_RuleBody__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser$RuleBody.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TransliteratorParser_S_RuleBody : public java::lang::Object {
protected:
private:
	TransliteratorParser_S_RuleBody();
public:
	TransliteratorParser_S_RuleBody(std::shared_ptr<android::icu::text::TransliteratorParser_S_RuleBody> _this0);
	std::shared_ptr<java::lang::String> handleNextLine() = 0;
	std::shared_ptr<java::lang::String> virtual nextLine();
	void reset() = 0;
public:
	virtual ~TransliteratorParser_S_RuleBody(){
	}

}; // class TransliteratorParser_S_RuleBody
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorParser_S_RuleBody__

