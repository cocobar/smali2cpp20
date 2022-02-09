#ifndef __android_icu_text_MessagePatternUtil_S_TextNode__
#define __android_icu_text_MessagePatternUtil_S_TextNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$TextNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePatternUtil_S_TextNode : public android::icu::text::MessagePatternUtil_S_MessageContentsNode {
protected:
private:
	std::shared_ptr<java::lang::String> text;
	MessagePatternUtil_S_TextNode(std::shared_ptr<java::lang::String> text);
public:
	static std::shared_ptr<java::lang::String> _get0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_TextNode> _this);
	static std::shared_ptr<java::lang::String> _set0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_TextNode> _this,std::shared_ptr<java::lang::String> _value);
	MessagePatternUtil_S_TextNode(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::text::MessagePatternUtil_S_TextNode> _this1);
	std::shared_ptr<java::lang::String> virtual getText();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~MessagePatternUtil_S_TextNode(){
	}

}; // class MessagePatternUtil_S_TextNode
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePatternUtil_S_TextNode__

