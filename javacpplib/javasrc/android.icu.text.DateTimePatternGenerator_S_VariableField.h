#ifndef __android_icu_text_DateTimePatternGenerator_S_VariableField__
#define __android_icu_text_DateTimePatternGenerator_S_VariableField__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$VariableField.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateTimePatternGenerator_S_VariableField : public java::lang::Object {
protected:
private:
	int canonicalIndex;
	std::shared_ptr<java::lang::String> string;
	int virtual getCanonicalIndex();
public:
	static int _wrap0(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> _this);
	DateTimePatternGenerator_S_VariableField(std::shared_ptr<java::lang::String> string);
	DateTimePatternGenerator_S_VariableField(std::shared_ptr<java::lang::String> string,bool strict);
	static std::shared_ptr<java::lang::String> getCanonicalCode(int type);
	int virtual getType();
	bool virtual isNumeric();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DateTimePatternGenerator_S_VariableField(){
	}

}; // class DateTimePatternGenerator_S_VariableField
}; // namespace android::icu::text

#endif //__android_icu_text_DateTimePatternGenerator_S_VariableField__

