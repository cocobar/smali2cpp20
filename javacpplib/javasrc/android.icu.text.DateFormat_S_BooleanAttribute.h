#ifndef __android_icu_text_DateFormat_S_BooleanAttribute__
#define __android_icu_text_DateFormat_S_BooleanAttribute__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormat$BooleanAttribute.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateFormat_S_BooleanAttribute : public java::lang::Enum<android::icu::text::DateFormat_S_BooleanAttribute> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::DateFormat_S_BooleanAttribute>> _S_VALUES;
	DateFormat_S_BooleanAttribute(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> PARSE_ALLOW_NUMERIC;
	static std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> PARSE_ALLOW_WHITESPACE;
	static std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> PARSE_MULTIPLE_PATTERNS_FOR_MATCH;
	static std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> PARSE_PARTIAL_LITERAL_MATCH;
	static std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> PARSE_PARTIAL_MATCH;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DateFormat_S_BooleanAttribute::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DateFormat_S_BooleanAttribute(){
	}

}; // class DateFormat_S_BooleanAttribute
}; // namespace android::icu::text

#endif //__android_icu_text_DateFormat_S_BooleanAttribute__

