#ifndef __android_icu_text_MessagePatternUtil_S_MessageContentsNode__
#define __android_icu_text_MessagePatternUtil_S_MessageContentsNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$MessageContentsNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode_S_Type.h"
#include "android.icu.text.MessagePatternUtil_S_Node.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePatternUtil_S_MessageContentsNode : public android::icu::text::MessagePatternUtil_S_Node {
protected:
private:
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> type;
	MessagePatternUtil_S_MessageContentsNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> type);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> createReplaceNumberNode();
public:
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> _wrap0();
	MessagePatternUtil_S_MessageContentsNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> type,std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> _this1);
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> virtual getType();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~MessagePatternUtil_S_MessageContentsNode(){
	}

}; // class MessagePatternUtil_S_MessageContentsNode
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePatternUtil_S_MessageContentsNode__

