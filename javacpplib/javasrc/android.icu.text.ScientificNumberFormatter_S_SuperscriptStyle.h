#ifndef __android_icu_text_ScientificNumberFormatter_S_SuperscriptStyle__
#define __android_icu_text_ScientificNumberFormatter_S_SuperscriptStyle__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ScientificNumberFormatter$SuperscriptStyle.smali
#include "java2ctype.h"
#include "android.icu.text.ScientificNumberFormatter_S_Style.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.AttributedCharacterIterator.h"

namespace android::icu::text{
class ScientificNumberFormatter_S_SuperscriptStyle : public android::icu::text::ScientificNumberFormatter_S_Style {
protected:
private:
	static std::shared_ptr<char[]> SUPERSCRIPT_DIGITS;
	static char SUPERSCRIPT_MINUS_SIGN;
	static char SUPERSCRIPT_PLUS_SIGN;
	ScientificNumberFormatter_S_SuperscriptStyle();
	static int char32AtAndAdvance(std::shared_ptr<java::text::AttributedCharacterIterator> iterator);
	static void copyAsSuperscript(std::shared_ptr<java::text::AttributedCharacterIterator> iterator,int start,int limit,std::shared_ptr<java::lang::StringBuilder> result);
public:
	static void static_cinit();
	ScientificNumberFormatter_S_SuperscriptStyle(std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle> _this0);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::text::AttributedCharacterIterator> iterator,std::shared_ptr<java::lang::String> preExponent);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::ScientificNumberFormatter_S_SuperscriptStyle::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ScientificNumberFormatter_S_SuperscriptStyle(){
	}

}; // class ScientificNumberFormatter_S_SuperscriptStyle
}; // namespace android::icu::text

#endif //__android_icu_text_ScientificNumberFormatter_S_SuperscriptStyle__

