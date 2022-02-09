#ifndef __android_icu_text_MessagePattern_S_ApostropheMode__
#define __android_icu_text_MessagePattern_S_ApostropheMode__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern$ApostropheMode.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePattern_S_ApostropheMode : public java::lang::Enum<android::icu::text::MessagePattern_S_ApostropheMode> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::MessagePattern_S_ApostropheMode>> _S_VALUES;
	MessagePattern_S_ApostropheMode(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> DOUBLE_OPTIONAL;
	static std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> DOUBLE_REQUIRED;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MessagePattern_S_ApostropheMode::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MessagePattern_S_ApostropheMode(){
	}

}; // class MessagePattern_S_ApostropheMode
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePattern_S_ApostropheMode__

