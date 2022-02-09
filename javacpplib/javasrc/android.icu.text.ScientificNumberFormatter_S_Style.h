#ifndef __android_icu_text_ScientificNumberFormatter_S_Style__
#define __android_icu_text_ScientificNumberFormatter_S_Style__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ScientificNumberFormatter$Style.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.AttributedCharacterIterator.h"

namespace android::icu::text{
class ScientificNumberFormatter_S_Style : public java::lang::Object {
protected:
private:
	ScientificNumberFormatter_S_Style();
public:
	ScientificNumberFormatter_S_Style(std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> _this0);
	static void append(std::shared_ptr<java::text::AttributedCharacterIterator> iterator,int start,int limit,std::shared_ptr<java::lang::StringBuilder> result);
	std::shared_ptr<java::lang::String> format(std::shared_ptr<java::text::AttributedCharacterIterator> var0,std::shared_ptr<java::lang::String> var1) = 0;
public:
	virtual ~ScientificNumberFormatter_S_Style(){
	}

}; // class ScientificNumberFormatter_S_Style
}; // namespace android::icu::text

#endif //__android_icu_text_ScientificNumberFormatter_S_Style__

