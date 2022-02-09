#ifndef __android_icu_text_MessagePatternUtil_S_ComplexArgStyleNode__
#define __android_icu_text_MessagePatternUtil_S_ComplexArgStyleNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$ComplexArgStyleNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePatternUtil_S_Node.h"
#include "android.icu.text.MessagePatternUtil_S_VariantNode.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::text{
class MessagePatternUtil_S_ComplexArgStyleNode : public android::icu::text::MessagePatternUtil_S_Node {
protected:
private:
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType;
	bool explicitOffset;
	std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_VariantNode>> list;
	double offset;
	MessagePatternUtil_S_ComplexArgStyleNode(std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType);
	void virtual addVariant(std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> variant);
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> virtual freeze();
public:
	static bool _set0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this,bool _value);
	static double _set1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this,double _value);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _wrap0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this);
	static void _wrap1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this,std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> variant);
	MessagePatternUtil_S_ComplexArgStyleNode(std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType,std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _this1);
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> virtual getArgType();
	double virtual getOffset();
	std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_VariantNode>> virtual getVariants();
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_VariantNode> virtual getVariantsByType(std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_VariantNode>> numericVariants,std::shared_ptr<java::util::List<android::icu::text::MessagePatternUtil_S_VariantNode>> keywordVariants);
	bool virtual hasExplicitOffset();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~MessagePatternUtil_S_ComplexArgStyleNode(){
	}

}; // class MessagePatternUtil_S_ComplexArgStyleNode
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePatternUtil_S_ComplexArgStyleNode__

