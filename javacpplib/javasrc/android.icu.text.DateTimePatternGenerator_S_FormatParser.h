#ifndef __android_icu_text_DateTimePatternGenerator_S_FormatParser__
#define __android_icu_text_DateTimePatternGenerator_S_FormatParser__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$FormatParser.smali
#include "java2ctype.h"
#include "android.icu.impl.PatternTokenizer.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.util.List.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_FormatParser : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::text::UnicodeSet> QUOTING_CHARS;
	static std::shared_ptr<android::icu::text::UnicodeSet> SYNTAX_CHARS;
	std::shared_ptr<java::util::List<java::lang::Object>> items;
	std::shared_ptr<android::icu::impl::PatternTokenizer> tokenizer;
	void virtual addVariable(std::shared_ptr<java::lang::StringBuffer> variable,bool strict);
public:
	static std::shared_ptr<java::util::List> _get0(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> _this);
	static void static_cinit();
	DateTimePatternGenerator_S_FormatParser();
	std::shared_ptr<java::util::List<java::lang::Object>> virtual getItems();
	bool virtual hasDateAndTimeFields();
	std::shared_ptr<java::lang::Object> virtual quoteLiteral(std::shared_ptr<java::lang::String> string);
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> virtual set(std::shared_ptr<java::lang::String> string);
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> virtual set(std::shared_ptr<java::lang::String> string,bool strict);
	std::shared_ptr<java::lang::String> virtual toString();
	std::shared_ptr<java::lang::String> virtual toString(int start,int limit);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateTimePatternGenerator_S_FormatParser::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateTimePatternGenerator_S_FormatParser(){
	}

}; // class DateTimePatternGenerator_S_FormatParser
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_FormatParser__

