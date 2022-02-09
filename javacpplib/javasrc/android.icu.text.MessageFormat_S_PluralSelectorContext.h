#ifndef __android_icu_text_MessageFormat_S_PluralSelectorContext__
#define __android_icu_text_MessageFormat_S_PluralSelectorContext__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$PluralSelectorContext.smali
#include "java2ctype.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.Format.h"

namespace android::icu::text{
class MessageFormat_S_PluralSelectorContext : public java::lang::Object {
protected:
private:
	MessageFormat_S_PluralSelectorContext(int start,std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Number> num,double off);
public:
	std::shared_ptr<java::lang::String> argName;
	bool forReplaceNumber;
	std::shared_ptr<java::text::Format> formatter;
	std::shared_ptr<java::lang::Number> number;
	int numberArgIndex;
	std::shared_ptr<java::lang::String> numberString;
	double offset;
	int startIndex;
	MessageFormat_S_PluralSelectorContext(int start,std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Number> num,double off,std::shared_ptr<android::icu::text::MessageFormat_S_PluralSelectorContext> _this4);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~MessageFormat_S_PluralSelectorContext(){
	}

}; // class MessageFormat_S_PluralSelectorContext
}; // namespace android::icu::text

#endif //__android_icu_text_MessageFormat_S_PluralSelectorContext__

