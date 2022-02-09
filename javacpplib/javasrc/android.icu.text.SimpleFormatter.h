#ifndef __android_icu_text_SimpleFormatter__
#define __android_icu_text_SimpleFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SimpleFormatter.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class SimpleFormatter : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> compiledPattern;
	SimpleFormatter(std::shared_ptr<java::lang::String> compiledPattern);
public:
	static std::shared_ptr<android::icu::text::SimpleFormatter> compile(std::shared_ptr<java::lang::CharSequence> pattern);
	static std::shared_ptr<android::icu::text::SimpleFormatter> compileMinMaxArguments(std::shared_ptr<java::lang::CharSequence> pattern,int min,int max);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<std::vector<java::lang::CharSequence>> values);
	std::shared_ptr<java::lang::StringBuilder> virtual formatAndAppend(std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<int[]> offsets,std::shared_ptr<std::vector<java::lang::CharSequence>> values);
	std::shared_ptr<java::lang::StringBuilder> virtual formatAndReplace(std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<int[]> offsets,std::shared_ptr<std::vector<java::lang::CharSequence>> values);
	int virtual getArgumentLimit();
	std::shared_ptr<java::lang::String> virtual getTextWithNoArguments();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~SimpleFormatter(){
	}

}; // class SimpleFormatter
}; // namespace android::icu::text

#endif //__android_icu_text_SimpleFormatter__

