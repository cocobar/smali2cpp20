#ifndef __android_icu_text_MessagePatternUtil_S_ArgNode__
#define __android_icu_text_MessagePatternUtil_S_ArgNode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$ArgNode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePatternUtil_S_ComplexArgStyleNode.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePatternUtil_S_ArgNode : public android::icu::text::MessagePatternUtil_S_MessageContentsNode {
protected:
private:
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> complexStyle;
	std::shared_ptr<java::lang::String> name;
	int number;
	std::shared_ptr<java::lang::String> style;
	std::shared_ptr<java::lang::String> typeName;
	MessagePatternUtil_S_ArgNode();
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> createArgNode();
public:
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> _set0(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> _value);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _set1(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> _value);
	static std::shared_ptr<java::lang::String> _set2(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<java::lang::String> _value);
	static int _set3(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,int _value);
	static std::shared_ptr<java::lang::String> _set4(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<java::lang::String> _value);
	static std::shared_ptr<java::lang::String> _set5(std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _this,std::shared_ptr<java::lang::String> _value);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> _wrap0();
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> virtual getArgType();
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> virtual getComplexStyle();
	std::shared_ptr<java::lang::String> virtual getName();
	int virtual getNumber();
	std::shared_ptr<java::lang::String> virtual getSimpleStyle();
	std::shared_ptr<java::lang::String> virtual getTypeName();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~MessagePatternUtil_S_ArgNode(){
	}

}; // class MessagePatternUtil_S_ArgNode
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePatternUtil_S_ArgNode__

