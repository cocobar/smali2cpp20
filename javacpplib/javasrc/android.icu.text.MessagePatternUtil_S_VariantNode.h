#ifndef __android_icu_text_MessagePatternUtil_S_VariantNode__
#define __android_icu_text_MessagePatternUtil_S_VariantNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$VariantNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePatternUtil_S_MessageNode.h"
#include "android.icu.text.MessagePatternUtil_S_Node.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePatternUtil_S_VariantNode : public android::icu::text::MessagePatternUtil_S_Node {
protected:
private:
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> msgNode;
	double numericValue;
	std::shared_ptr<java::lang::String> selector;
	MessagePatternUtil_S_VariantNode();
public:
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _set0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> _this,std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> _value);
	static double _set1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> _this,double _value);
	static std::shared_ptr<java::lang::String> _set2(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> _this,std::shared_ptr<java::lang::String> _value);
	MessagePatternUtil_S_VariantNode(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> _this0);
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> virtual getMessage();
	std::shared_ptr<java::lang::String> virtual getSelector();
	double virtual getSelectorValue();
	bool virtual isSelectorNumeric();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~MessagePatternUtil_S_VariantNode(){
	}

}; // class MessagePatternUtil_S_VariantNode
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePatternUtil_S_VariantNode__

