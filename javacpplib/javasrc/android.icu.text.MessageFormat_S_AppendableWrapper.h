#ifndef __android_icu_text_MessageFormat_S_AppendableWrapper__
#define __android_icu_text_MessageFormat_S_AppendableWrapper__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$AppendableWrapper.smali
#include "java2ctype.h"
#include "android.icu.text.MessageFormat_S_AttributeAndPosition.h"
#include "java.lang.Appendable.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.CharacterIterator.h"
#include "java.text.Format.h"
#include "java.util.List.h"

namespace android::icu::text{
class MessageFormat_S_AppendableWrapper : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::Appendable> app;
	std::shared_ptr<java::util::List<android::icu::text::MessageFormat_S_AttributeAndPosition>> attributes;
	int length;
public:
	static std::shared_ptr<java::util::List> _get0(std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> _this);
	static int _get1(std::shared_ptr<android::icu::text::MessageFormat_S_AppendableWrapper> _this);
	MessageFormat_S_AppendableWrapper(std::shared_ptr<java::lang::StringBuffer> sb);
	MessageFormat_S_AppendableWrapper(std::shared_ptr<java::lang::StringBuilder> sb);
	static int append(std::shared_ptr<java::lang::Appendable> result,std::shared_ptr<java::text::CharacterIterator> iterator);
	void virtual append(std::shared_ptr<java::lang::CharSequence> s);
	void virtual append(std::shared_ptr<java::lang::CharSequence> s,int start,int limit);
	void virtual append(std::shared_ptr<java::text::CharacterIterator> iterator);
	void virtual formatAndAppend(std::shared_ptr<java::text::Format> formatter,std::shared_ptr<java::lang::Object> arg);
	void virtual formatAndAppend(std::shared_ptr<java::text::Format> formatter,std::shared_ptr<java::lang::Object> arg,std::shared_ptr<java::lang::String> argString);
	void virtual useAttributes();
public:
	virtual ~MessageFormat_S_AppendableWrapper(){
	}

}; // class MessageFormat_S_AppendableWrapper
}; // namespace android::icu::text

#endif //__android_icu_text_MessageFormat_S_AppendableWrapper__

