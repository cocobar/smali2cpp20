#ifndef __android_icu_text_MessagePattern_S_ArgType__
#define __android_icu_text_MessagePattern_S_ArgType__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern$ArgType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePattern_S_ArgType : public java::lang::Enum<android::icu::text::MessagePattern_S_ArgType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::MessagePattern_S_ArgType>> _S_VALUES;
	MessagePattern_S_ArgType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> CHOICE;
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> NONE;
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> PLURAL;
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> SELECT;
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> SELECTORDINAL;
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> SIMPLE;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> values();
	bool virtual hasPluralStyle();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MessagePattern_S_ArgType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MessagePattern_S_ArgType(){
	}

}; // class MessagePattern_S_ArgType
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePattern_S_ArgType__

