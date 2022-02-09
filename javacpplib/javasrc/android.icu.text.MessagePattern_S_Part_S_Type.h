#ifndef __android_icu_text_MessagePattern_S_Part_S_Type__
#define __android_icu_text_MessagePattern_S_Part_S_Type__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern$Part$Type.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MessagePattern_S_Part_S_Type : public java::lang::Enum<android::icu::text::MessagePattern_S_Part_S_Type> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::MessagePattern_S_Part_S_Type>> _S_VALUES;
	MessagePattern_S_Part_S_Type(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> ARG_DOUBLE;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> ARG_INT;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> ARG_LIMIT;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> ARG_NAME;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> ARG_NUMBER;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> ARG_SELECTOR;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> ARG_START;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> ARG_STYLE;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> ARG_TYPE;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> INSERT_CHAR;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> MSG_LIMIT;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> MSG_START;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> REPLACE_NUMBER;
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> SKIP_SYNTAX;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> values();
	bool virtual hasNumericValue();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MessagePattern_S_Part_S_Type::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MessagePattern_S_Part_S_Type(){
	}

}; // class MessagePattern_S_Part_S_Type
}; // namespace android::icu::text

#endif //__android_icu_text_MessagePattern_S_Part_S_Type__

