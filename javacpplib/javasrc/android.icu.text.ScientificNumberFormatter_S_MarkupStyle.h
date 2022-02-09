#ifndef __android_icu_text_ScientificNumberFormatter_S_MarkupStyle__
#define __android_icu_text_ScientificNumberFormatter_S_MarkupStyle__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ScientificNumberFormatter$MarkupStyle.smali
#include "java2ctype.h"
#include "android.icu.text.ScientificNumberFormatter_S_Style.h"
#include "java.lang.String.h"
#include "java.text.AttributedCharacterIterator.h"

namespace android::icu::text{
class ScientificNumberFormatter_S_MarkupStyle : public android::icu::text::ScientificNumberFormatter_S_Style {
protected:
private:
	std::shared_ptr<java::lang::String> beginMarkup;
	std::shared_ptr<java::lang::String> endMarkup;
public:
	ScientificNumberFormatter_S_MarkupStyle(std::shared_ptr<java::lang::String> beginMarkup,std::shared_ptr<java::lang::String> endMarkup);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::text::AttributedCharacterIterator> iterator,std::shared_ptr<java::lang::String> preExponent);
public:
	virtual ~ScientificNumberFormatter_S_MarkupStyle(){
	}

}; // class ScientificNumberFormatter_S_MarkupStyle
}; // namespace android::icu::text

#endif //__android_icu_text_ScientificNumberFormatter_S_MarkupStyle__

