#ifndef __android_icu_text_MessagePatternUtil_S_MessageContentsNode_S_Type__
#define __android_icu_text_MessagePatternUtil_S_MessageContentsNode_S_Type__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$MessageContentsNode$Type.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePatternUtil_S_MessageContentsNode_S_Type : public java::lang::Enum<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type>> _S_VALUES;
	MessagePatternUtil_S_MessageContentsNode_S_Type(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> ARG;
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> REPLACE_NUMBER;
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> TEXT;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MessagePatternUtil_S_MessageContentsNode_S_Type(){
	}

}; // class MessagePatternUtil_S_MessageContentsNode_S_Type
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePatternUtil_S_MessageContentsNode_S_Type__

