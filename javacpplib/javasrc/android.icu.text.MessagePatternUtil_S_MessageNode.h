#ifndef __android_icu_text_MessagePatternUtil_S_MessageNode__
#define __android_icu_text_MessagePatternUtil_S_MessageNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$MessageNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode.h"
#include "android.icu.text.MessagePatternUtil_S_Node.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::text{
class MessagePatternUtil_S_MessageNode : public android::icu::text::MessagePatternUtil_S_Node {
protected:
private:
	std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_MessageContentsNode>> list;
	MessagePatternUtil_S_MessageNode();
	void virtual addContentsNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> node);
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> virtual freeze();
public:
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _wrap0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _this);
	static void _wrap1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _this,std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode> node);
	MessagePatternUtil_S_MessageNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _this0);
	std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_MessageContentsNode>> virtual getContents();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~MessagePatternUtil_S_MessageNode(){
	}

}; // class MessagePatternUtil_S_MessageNode
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePatternUtil_S_MessageNode__

