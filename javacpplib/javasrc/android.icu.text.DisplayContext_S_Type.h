#ifndef __android_icu_text_DisplayContext_S_Type__
#define __android_icu_text_DisplayContext_S_Type__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DisplayContext$Type.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DisplayContext_S_Type : public java::lang::Enum<android::icu::text::DisplayContext_S_Type> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::DisplayContext_S_Type>> _S_VALUES;
	DisplayContext_S_Type(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::DisplayContext_S_Type> CAPITALIZATION;
	static std::shared_ptr<android::icu::text::DisplayContext_S_Type> DIALECT_HANDLING;
	static std::shared_ptr<android::icu::text::DisplayContext_S_Type> DISPLAY_LENGTH;
	static std::shared_ptr<android::icu::text::DisplayContext_S_Type> SUBSTITUTE_HANDLING;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::DisplayContext_S_Type> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::DisplayContext_S_Type> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::DisplayContext_S_Type::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~DisplayContext_S_Type(){
	}

}; // class DisplayContext_S_Type
}; // namespace android::icu::text

#endif //__android_icu_text_DisplayContext_S_Type__

