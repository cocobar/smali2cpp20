#ifndef __android_icu_text_MessageFormat_S_AttributeAndPosition__
#define __android_icu_text_MessageFormat_S_AttributeAndPosition__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessageFormat$AttributeAndPosition.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.text.AttributedCharacterIterator_S_Attribute.h"

namespace android::icu::text{
class MessageFormat_S_AttributeAndPosition : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> key;
	int limit;
	int start;
	std::shared_ptr<java::lang::Object> value;
public:
	static std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> _get0(std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> _this);
	static int _get1(std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> _this);
	static int _get2(std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> _this);
	static std::shared_ptr<java::lang::Object> _get3(std::shared_ptr<android::icu::text::MessageFormat_S_AttributeAndPosition> _this);
	MessageFormat_S_AttributeAndPosition(std::shared_ptr<java::lang::Object> fieldValue,int startIndex,int limitIndex);
	MessageFormat_S_AttributeAndPosition(std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> field,std::shared_ptr<java::lang::Object> fieldValue,int startIndex,int limitIndex);
	void virtual init(std::shared_ptr<java::text::AttributedCharacterIterator_S_Attribute> field,std::shared_ptr<java::lang::Object> fieldValue,int startIndex,int limitIndex);
public:
	virtual ~MessageFormat_S_AttributeAndPosition(){
	}

}; // class MessageFormat_S_AttributeAndPosition
}; // namespace android::icu::text

#endif //__android_icu_text_MessageFormat_S_AttributeAndPosition__

