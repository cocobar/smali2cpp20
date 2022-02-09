#ifndef __android_icu_text_TransliteratorParser_S_RuleArray__
#define __android_icu_text_TransliteratorParser_S_RuleArray__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser$RuleArray.smali
#include "java2ctype.h"
#include "android.icu.text.TransliteratorParser_S_RuleBody.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TransliteratorParser_S_RuleArray : public android::icu::text::TransliteratorParser_S_RuleBody {
protected:
private:
public:
	std::shared_ptr<std::vector<java::lang::String>> array;
	int i;
	TransliteratorParser_S_RuleArray(std::shared_ptr<std::vector<java::lang::String>> array);
	std::shared_ptr<java::lang::String> virtual handleNextLine();
	void virtual reset();
public:
	virtual ~TransliteratorParser_S_RuleArray(){
	}

}; // class TransliteratorParser_S_RuleArray
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorParser_S_RuleArray__

