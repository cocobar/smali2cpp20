#ifndef __android_icu_text_MessagePatternUtil__
#define __android_icu_text_MessagePatternUtil__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "android.icu.text.MessagePattern.h"
#include "android.icu.text.MessagePatternUtil_S_ArgNode.h"
#include "android.icu.text.MessagePatternUtil_S_ComplexArgStyleNode.h"
#include "android.icu.text.MessagePatternUtil_S_MessageNode.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePatternUtil : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_text_MessagePattern_S_ArgTypeSwitchesValues;
	static int _getandroid_icu_text_MessagePattern_S_ArgTypeSwitchesValues();
	MessagePatternUtil();
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_ArgNode> buildArgNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> buildChoiceStyleNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> buildMessageNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> buildPluralStyleNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit,std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> argType);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_ComplexArgStyleNode> buildSelectStyleNode(std::shared_ptr<android::icu::text::MessagePattern> pattern,int start,int limit);
public:
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> buildMessageNode(std::shared_ptr<android::icu::text::MessagePattern> pattern);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageNode> buildMessageNode(std::shared_ptr<java::lang::String> patternString);
public:
	virtual ~MessagePatternUtil(){
	}

}; // class MessagePatternUtil
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePatternUtil__

